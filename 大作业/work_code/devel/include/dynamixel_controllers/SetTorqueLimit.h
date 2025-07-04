// Generated by gencpp from file dynamixel_controllers/SetTorqueLimit.msg
// DO NOT EDIT!


#ifndef DYNAMIXEL_CONTROLLERS_MESSAGE_SETTORQUELIMIT_H
#define DYNAMIXEL_CONTROLLERS_MESSAGE_SETTORQUELIMIT_H

#include <ros/service_traits.h>


#include <dynamixel_controllers/SetTorqueLimitRequest.h>
#include <dynamixel_controllers/SetTorqueLimitResponse.h>


namespace dynamixel_controllers
{

struct SetTorqueLimit
{

typedef SetTorqueLimitRequest Request;
typedef SetTorqueLimitResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetTorqueLimit
} // namespace dynamixel_controllers


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dynamixel_controllers::SetTorqueLimit > {
  static const char* value()
  {
    return "7ac67170532bb79d95db2a425915bbd6";
  }

  static const char* value(const ::dynamixel_controllers::SetTorqueLimit&) { return value(); }
};

template<>
struct DataType< ::dynamixel_controllers::SetTorqueLimit > {
  static const char* value()
  {
    return "dynamixel_controllers/SetTorqueLimit";
  }

  static const char* value(const ::dynamixel_controllers::SetTorqueLimit&) { return value(); }
};


// service_traits::MD5Sum< ::dynamixel_controllers::SetTorqueLimitRequest> should match
// service_traits::MD5Sum< ::dynamixel_controllers::SetTorqueLimit >
template<>
struct MD5Sum< ::dynamixel_controllers::SetTorqueLimitRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_controllers::SetTorqueLimit >::value();
  }
  static const char* value(const ::dynamixel_controllers::SetTorqueLimitRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_controllers::SetTorqueLimitRequest> should match
// service_traits::DataType< ::dynamixel_controllers::SetTorqueLimit >
template<>
struct DataType< ::dynamixel_controllers::SetTorqueLimitRequest>
{
  static const char* value()
  {
    return DataType< ::dynamixel_controllers::SetTorqueLimit >::value();
  }
  static const char* value(const ::dynamixel_controllers::SetTorqueLimitRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dynamixel_controllers::SetTorqueLimitResponse> should match
// service_traits::MD5Sum< ::dynamixel_controllers::SetTorqueLimit >
template<>
struct MD5Sum< ::dynamixel_controllers::SetTorqueLimitResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dynamixel_controllers::SetTorqueLimit >::value();
  }
  static const char* value(const ::dynamixel_controllers::SetTorqueLimitResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dynamixel_controllers::SetTorqueLimitResponse> should match
// service_traits::DataType< ::dynamixel_controllers::SetTorqueLimit >
template<>
struct DataType< ::dynamixel_controllers::SetTorqueLimitResponse>
{
  static const char* value()
  {
    return DataType< ::dynamixel_controllers::SetTorqueLimit >::value();
  }
  static const char* value(const ::dynamixel_controllers::SetTorqueLimitResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DYNAMIXEL_CONTROLLERS_MESSAGE_SETTORQUELIMIT_H
