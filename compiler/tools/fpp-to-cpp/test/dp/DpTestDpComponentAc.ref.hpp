// ======================================================================
// \title  DpTestDpComponentAc.hpp
// \author Generated by fpp-to-cpp
// \brief  hpp file for Data product base class for DpTest component
// ======================================================================

#ifndef FppTest_DpTestDpComponentAc_HPP
#define FppTest_DpTestDpComponentAc_HPP

#include "DpTestComponentAc.hpp"
#include "DpTest_DataSerializableAc.hpp"
#include "FpConfig.hpp"
#include "Fw/Com/ComPacket.hpp"
#include "Fw/Dp/DpContainer.hpp"
#include "Fw/Dp/DpRequestPortAc.hpp"
#include "Fw/Dp/DpResponsePortAc.hpp"
#include "Fw/Dp/DpSendPortAc.hpp"
#include "Fw/Time/TimePortAc.hpp"
#include "Svc/Sched/SchedPortAc.hpp"

namespace FppTest {

  //! \class DpTestDpComponentBase
  //! \brief Auto-generated data product base class for DpTest component
  //!
  //! A component for testing  data product code gen
  class DpTestDpComponentBase :
    public DpTestComponentBase
  {

    PROTECTED:

      // ----------------------------------------------------------------------
      // Types
      // ----------------------------------------------------------------------

      //! The container ids
      struct ContainerId {
        enum T : FwDpIdType {
          Container1 = 300,
          Container2 = 400,
        };
      };

      //! The container default priorities
      struct ContainerPriority {
        enum T : FwDpPriorityType {
          Container1 = 10,
          Container2 = 20,
        };
      };

      //! The record ids
      struct RecordId {
        enum T : FwDpIdType {
          U32Record = 100,
          DataRecord = 200,
        };
      };

      //! A data product container
      class DpContainer :
        public Fw::DpContainer
      {

        public:

          //! Constructor
          DpContainer(
              FwDpIdType id, //!< The container id
              const Fw::Buffer& buffer, //!< The packet buffer
              FwDpIdType baseId //!< The component base id
          );

        public:

          //! Serialize a DataRecord into the packet buffer
          //! \return The serialize status
          Fw::SerializeStatus serializeRecord_DataRecord(
              const FppTest::DpTest_Data& elt //!< The element
          );

          //! Serialize a U32Record into the packet buffer
          //! \return The serialize status
          Fw::SerializeStatus serializeRecord_U32Record(
              U32 elt //!< The element
          );

        PRIVATE:

          //! The component base id
          FwDpIdType baseId;

      };

    PROTECTED:

      // ----------------------------------------------------------------------
      // Construction and destruction
      // ----------------------------------------------------------------------

      //! Construct DpTestDpComponentBase object
      DpTestDpComponentBase(
          const char* compName = "" //!< The component name
      );

      //! Destroy DpTestDpComponentBase object
      virtual ~DpTestDpComponentBase();

    PROTECTED:

      // ----------------------------------------------------------------------
      // Pure virtual functions to implement
      // ----------------------------------------------------------------------

      //! Receive a container of type Container1
      virtual void Dp_Recv_Container1_handler(
          DpContainer& container, //!< The container
          Fw::Success::T status //!< The container status
      ) = 0;

      //! Receive a container of type Container2
      virtual void Dp_Recv_Container2_handler(
          DpContainer& container, //!< The container
          Fw::Success::T status //!< The container status
      ) = 0;

    PROTECTED:

      // ----------------------------------------------------------------------
      // Functions for managing data products
      // ----------------------------------------------------------------------

      //! Request a data product container
      void Dp_Request(
          ContainerId::T containerId, //!< The container id
          FwSizeType size //!< The buffer size
      );

      //! Send a data product
      void Dp_Send(
          DpContainer& container, //!< The data product container
          Fw::Time timeTag = Fw::ZERO_TIME //!< The time tag
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Private data product handling functions
      // ----------------------------------------------------------------------

      //! Handler implementation for productRecvIn
      void productRecvIn_handler(
          const NATIVE_INT_TYPE portNum, //!< The port number
          FwDpIdType id, //!< The container id
          const Fw::Buffer& buffer, //!< The buffer
          const Fw::Success& status //!< The buffer status
      ) override;

  };

}

#endif
