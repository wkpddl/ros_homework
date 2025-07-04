// Generated by gencpp from file dynamixel_controllers/SetTorqueLimitResponse.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_SETTORQUELIMITRESPONSE_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_SETTORQUELIMITRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dynamixel_controllers
{
template <class ContainerAllocator>
struct SetTorqueLimitResponse_
{
  typedef SetTorqueLimitResponse_<ContainerAllocator> Type;

  SetTorqueLimitResponse_()
    {
    }
  SetTorqueLimitResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetTorqueLimitResponse_

typedef ::dynamixel_controllers::SetTorqueLimitResponse_<std::allocator<void> > SetTorqueLimitResponse;

typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse > SetTorqueLimitResponsePtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetTorqueLimitResponse const> SetTorqueLimitResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_controllers/SetTorqueLimitResponse";
  }

  static const char* value(const ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
;
  }

  static const char* value(const ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetTorqueLimitResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::dynamixel_controllers::SetTorqueLimitResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_SETTORQUELIMITRESPONSE_H
