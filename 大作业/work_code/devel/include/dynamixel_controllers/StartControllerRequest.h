// Generated by gencpp from file dynamixel_controllers/StartControllerRequest.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_STARTCONTROLLERREQUEST_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_STARTCONTROLLERREQUEST_H


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
struct StartControllerRequest_
{
  typedef StartControllerRequest_<ContainerAllocator> Type;

  StartControllerRequest_()
    : port_name()
    , package_path()
    , module_name()
    , class_name()
    , controller_name()
    , dependencies()  {
    }
  StartControllerRequest_(const ContainerAllocator& _alloc)
    : port_name(_alloc)
    , package_path(_alloc)
    , module_name(_alloc)
    , class_name(_alloc)
    , controller_name(_alloc)
    , dependencies(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _port_name_type;
  _port_name_type port_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _package_path_type;
  _package_path_type package_path;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _module_name_type;
  _module_name_type module_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _class_name_type;
  _class_name_type class_name;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _controller_name_type;
  _controller_name_type controller_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> _dependencies_type;
  _dependencies_type dependencies;





  typedef boost::shared_ptr< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> const> ConstPtr;

}; // struct StartControllerRequest_

typedef ::dynamixel_controllers::StartControllerRequest_<std::allocator<void> > StartControllerRequest;

typedef boost::shared_ptr< ::dynamixel_controllers::StartControllerRequest > StartControllerRequestPtr;
typedef boost::shared_ptr< ::dynamixel_controllers::StartControllerRequest const> StartControllerRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator1> & lhs, const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator2> & rhs)
{
  return lhs.port_name == rhs.port_name &&
    lhs.package_path == rhs.package_path &&
    lhs.module_name == rhs.module_name &&
    lhs.class_name == rhs.class_name &&
    lhs.controller_name == rhs.controller_name &&
    lhs.dependencies == rhs.dependencies;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator1> & lhs, const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dynamixel_controllers

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7785d708c83a180befd2fe3450dd9d41";
  }

  static const char* value(const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7785d708c83a180bULL;
  static const uint64_t static_value2 = 0xefd2fe3450dd9d41ULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamixel_controllers/StartControllerRequest";
  }

  static const char* value(const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string port_name            # serial port that this controller is connected to\n"
"string package_path         # path to ROS package containing controller module\n"
"string module_name          # name of the controller module within that package\n"
"string class_name           # controller class name within that module\n"
"string controller_name      # path to controller config parameters on param server\n"
"string[] dependencies       # optional, list names of all controllers this controller depends on\n"
;
  }

  static const char* value(const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.port_name);
      stream.next(m.package_path);
      stream.next(m.module_name);
      stream.next(m.class_name);
      stream.next(m.controller_name);
      stream.next(m.dependencies);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartControllerRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamixel_controllers::StartControllerRequest_<ContainerAllocator>& v)
  {
    if (false || !indent.empty())
      s << std::endl;
    s << indent << "port_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.port_name);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "package_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.package_path);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "module_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.module_name);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "class_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.class_name);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "controller_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.controller_name);
    if (true || !indent.empty())
      s << std::endl;
    s << indent << "dependencies: ";
    if (v.dependencies.empty() || true)
      s << "[";
    for (size_t i = 0; i < v.dependencies.size(); ++i)
    {
      if (true && i > 0)
        s << ", ";
      else if (!true)
        s << std::endl << indent << "  -";
      Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, true ? std::string() : indent + "    ", v.dependencies[i]);
    }
    if (v.dependencies.empty() || true)
      s << "]";
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_STARTCONTROLLERREQUEST_H
