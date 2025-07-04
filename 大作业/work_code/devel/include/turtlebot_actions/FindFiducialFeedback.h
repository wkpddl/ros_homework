// Generated by gencpp from file turtlebot_actions/FindFiducialFeedback.msg
// DO NOT EDIT!


#ifndef TURTLEBOT_ACTIONS_MESSAGE_FINDFIDUCIALFEEDBACK_H
#define TURTLEBOT_ACTIONS_MESSAGE_FINDFIDUCIALFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlebot_actions
{
template <class ContainerAllocator>
struct FindFiducialFeedback_
{
  typedef FindFiducialFeedback_<ContainerAllocator> Type;

  FindFiducialFeedback_()
    {
    }
  FindFiducialFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct FindFiducialFeedback_

typedef ::turtlebot_actions::FindFiducialFeedback_<std::allocator<void> > FindFiducialFeedback;

typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialFeedback > FindFiducialFeedbackPtr;
typedef boost::shared_ptr< ::turtlebot_actions::FindFiducialFeedback const> FindFiducialFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace turtlebot_actions

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot_actions/FindFiducialFeedback";
  }

  static const char* value(const ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"#feedback\n"
"\n"
"\n"
;
  }

  static const char* value(const ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FindFiducialFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::turtlebot_actions::FindFiducialFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT_ACTIONS_MESSAGE_FINDFIDUCIALFEEDBACK_H
