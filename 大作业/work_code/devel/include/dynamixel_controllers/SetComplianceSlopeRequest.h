// Generated by gencpp from file dynamixel_controllers/SetComplianceSlopeRequest.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCESLOPEREQUEST_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCESLOPEREQUEST_H


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
struct SetComplianceSlopeRequest_
{
  typedef SetComplianceSlopeRequest_<ContainerAllocator> Type;

  SetComplianceSlopeRequest_()
    : slope(0)  {
    }
  SetComplianceSlopeRequest_(const ContainerAllocator& _alloc)
    : slope(0)  {
  (void)_alloc;
    }



   typedef uint8_t _slope_type;
  _slope_type slope;





  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetComplianceSlopeRequest_

typedef ::dynamixel_controllers::SetComplianceSlopeRequest_<std::allocator<void> > SetComplianceSlopeRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest > SetComplianceSlopeRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::SetComplianceSlopeRequest const> SetComplianceSlopeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator1> & lhs, const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.slope == rhs.slope;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator1> & lhs, const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b655cbe1b74daf357824dcc427c1004";
  }

  static const char* value(const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b655cbe1b74daf3ULL;
  static const uint64_t static_value2 = 0x57824dcc427c1004ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_controllers/SetComplianceSlopeRequest";
  }

  static const char* value(const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# See Dynamixel documentation for details\n"
"\n"
"uint8 slope\n"
;
  }

  static const char* value(const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.slope);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetComplianceSlopeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_controllers::SetComplianceSlopeRequest_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "slope: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.slope);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_SETCOMPLIANCESLOPEREQUEST_H
