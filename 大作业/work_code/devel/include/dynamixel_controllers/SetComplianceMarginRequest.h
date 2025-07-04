// Generated by gencpp from file dynamixel_controllers/SetComplianceMarginRequest.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCEMARGINREQUEST_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCEMARGINREQUEST_H


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
struct SetComplianceMarginRequest_
{
  typedef SetComplianceMarginRequest_<ContainerAllocator> Type;

  SetComplianceMarginRequest_()
    : margin(0)  {
    }
  SetComplianceMarginRequest_(const ContainerAllocator& _alloc)
    : margin(0)  {
  (void)_alloc;
    }



   typedef uint8_t _margin_type;
  _margin_type margin;





  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetComplianceMarginRequest_

typedef ::dynamixel_controllers::SetComplianceMarginRequest_<std::allocator<void> > SetComplianceMarginRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceMarginRequest > SetComplianceMarginRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceMarginRequest const> SetComplianceMarginRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator1> & lhs, const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator2> & rhs)
{
  return lhs.margin == rhs.margin;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator1> & lhs, const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "daacbf1c0642fe923f2dfb9217a97b81";
  }

  static const char* value(const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdaacbf1c0642fe92ULL;
  static const uint64_t static_value2 = 0x3f2dfb9217a97b81ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_controllers/SetComplianceMarginRequest";
  }

  static const char* value(const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Range is 0 to 255, larger value = more error\n"
"\n"
"uint8 margin\n"
;
  }

  static const char* value(const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.margin);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetComplianceMarginRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_controllers::SetComplianceMarginRequest_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "margin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.margin);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCEMARGINREQUEST_H
