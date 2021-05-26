package fpp.compiler.codegen

import fpp.compiler.analysis._
import fpp.compiler.ast._
import fpp.compiler.util._

/** Writes out C++ for topology component includes */
case class TopComponentIncludes(
  s: CppWriterState,
  aNode: Ast.Annotated[AstNode[Ast.DefTopology]]
) {

  def getLines: List[Line] = {
    val node = aNode._2
    val t = s.a.topologyMap(Symbol.Topology(aNode))
    t.instanceMap.keys.toList.map(getHeaderLine)
  }

  private def getHeaderLine(ci: ComponentInstance): Line =
    CppWriter.headerLine(getIncludePath(ci))

  private def getIncludePath(ci: ComponentInstance): String =
    ci.file match {
      case Some(file) => file
      case None =>
        val c = ci.component
        val node = c.aNode._2
        val loc = Locations.get(node.id)
        val fullPath = loc.getNeighborPath(s"${node.data.name}.hpp")
        s.removeLongestPathPrefix(fullPath).toString
    }

}