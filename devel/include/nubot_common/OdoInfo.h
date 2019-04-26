// Generated by gencpp from file nubot_common/OdoInfo.msg
// DO NOT EDIT!


#ifndef NUBOT_COMMON_MESSAGE_ODOINFO_H
#define NUBOT_COMMON_MESSAGE_ODOINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nubot_common
{
template <class ContainerAllocator>
struct OdoInfo_
{
  typedef OdoInfo_<ContainerAllocator> Type;

  OdoInfo_()
    : header()
    , Vx(0.0)
    , Vy(0.0)
    , w(0.0)
    , RobotStuck(false)
    , PowerState(false)  {
    }
  OdoInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , Vx(0.0)
    , Vy(0.0)
    , w(0.0)
    , RobotStuck(false)
    , PowerState(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _Vx_type;
  _Vx_type Vx;

   typedef float _Vy_type;
  _Vy_type Vy;

   typedef float _w_type;
  _w_type w;

   typedef uint8_t _RobotStuck_type;
  _RobotStuck_type RobotStuck;

   typedef uint8_t _PowerState_type;
  _PowerState_type PowerState;





  typedef boost::shared_ptr< ::nubot_common::OdoInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nubot_common::OdoInfo_<ContainerAllocator> const> ConstPtr;

}; // struct OdoInfo_

typedef ::nubot_common::OdoInfo_<std::allocator<void> > OdoInfo;

typedef boost::shared_ptr< ::nubot_common::OdoInfo > OdoInfoPtr;
typedef boost::shared_ptr< ::nubot_common::OdoInfo const> OdoInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nubot_common::OdoInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nubot_common::OdoInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nubot_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nubot_common': ['/home/jensen/coach_ws/src/nubot/nubot_common/msgs'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::OdoInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::OdoInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::OdoInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::OdoInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::OdoInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::OdoInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nubot_common::OdoInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b4f534aa8c080899ef112a410cc2c113";
  }

  static const char* value(const ::nubot_common::OdoInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb4f534aa8c080899ULL;
  static const uint64_t static_value2 = 0xef112a410cc2c113ULL;
};

template<class ContainerAllocator>
struct DataType< ::nubot_common::OdoInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nubot_common/OdoInfo";
  }

  static const char* value(const ::nubot_common::OdoInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nubot_common::OdoInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header  header\n\
float32 Vx\n\
float32 Vy\n\
float32 w\n\
bool    RobotStuck\n\
bool    PowerState\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::nubot_common::OdoInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nubot_common::OdoInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.Vx);
      stream.next(m.Vy);
      stream.next(m.w);
      stream.next(m.RobotStuck);
      stream.next(m.PowerState);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OdoInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nubot_common::OdoInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nubot_common::OdoInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "Vx: ";
    Printer<float>::stream(s, indent + "  ", v.Vx);
    s << indent << "Vy: ";
    Printer<float>::stream(s, indent + "  ", v.Vy);
    s << indent << "w: ";
    Printer<float>::stream(s, indent + "  ", v.w);
    s << indent << "RobotStuck: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.RobotStuck);
    s << indent << "PowerState: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.PowerState);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUBOT_COMMON_MESSAGE_ODOINFO_H
