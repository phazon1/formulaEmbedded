// Generated by gencpp from file fsae_electric_vehicle/suspension.msg
// DO NOT EDIT!


#ifndef FSAE_ELECTRIC_VEHICLE_MESSAGE_SUSPENSION_H
#define FSAE_ELECTRIC_VEHICLE_MESSAGE_SUSPENSION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace fsae_electric_vehicle
{
template <class ContainerAllocator>
struct suspension_
{
  typedef suspension_<ContainerAllocator> Type;

  suspension_()
    : front_right(0.0)
    , front_left(0.0)
    , back_left(0.0)
    , back_right(0.0)
    , time()  {
    }
  suspension_(const ContainerAllocator& _alloc)
    : front_right(0.0)
    , front_left(0.0)
    , back_left(0.0)
    , back_right(0.0)
    , time(_alloc)  {
  (void)_alloc;
    }



   typedef float _front_right_type;
  _front_right_type front_right;

   typedef float _front_left_type;
  _front_left_type front_left;

   typedef float _back_left_type;
  _back_left_type back_left;

   typedef float _back_right_type;
  _back_right_type back_right;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _time_type;
  _time_type time;





  typedef boost::shared_ptr< ::fsae_electric_vehicle::suspension_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::fsae_electric_vehicle::suspension_<ContainerAllocator> const> ConstPtr;

}; // struct suspension_

typedef ::fsae_electric_vehicle::suspension_<std::allocator<void> > suspension;

typedef boost::shared_ptr< ::fsae_electric_vehicle::suspension > suspensionPtr;
typedef boost::shared_ptr< ::fsae_electric_vehicle::suspension const> suspensionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::fsae_electric_vehicle::suspension_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace fsae_electric_vehicle

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'fsae_electric_vehicle': ['/home/nvidia/Desktop/jetsonTx2/catkin_ws/src/fsae_electric_vehicle/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::fsae_electric_vehicle::suspension_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::fsae_electric_vehicle::suspension_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::fsae_electric_vehicle::suspension_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fcfc7f00aed5c6f9b38d528c27bedb97";
  }

  static const char* value(const ::fsae_electric_vehicle::suspension_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfcfc7f00aed5c6f9ULL;
  static const uint64_t static_value2 = 0xb38d528c27bedb97ULL;
};

template<class ContainerAllocator>
struct DataType< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fsae_electric_vehicle/suspension";
  }

  static const char* value(const ::fsae_electric_vehicle::suspension_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 front_right\n\
float32 front_left\n\
float32 back_left\n\
float32 back_right\n\
string time\n\
";
  }

  static const char* value(const ::fsae_electric_vehicle::suspension_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.front_right);
      stream.next(m.front_left);
      stream.next(m.back_left);
      stream.next(m.back_right);
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct suspension_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::fsae_electric_vehicle::suspension_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::fsae_electric_vehicle::suspension_<ContainerAllocator>& v)
  {
    s << indent << "front_right: ";
    Printer<float>::stream(s, indent + "  ", v.front_right);
    s << indent << "front_left: ";
    Printer<float>::stream(s, indent + "  ", v.front_left);
    s << indent << "back_left: ";
    Printer<float>::stream(s, indent + "  ", v.back_left);
    s << indent << "back_right: ";
    Printer<float>::stream(s, indent + "  ", v.back_right);
    s << indent << "time: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FSAE_ELECTRIC_VEHICLE_MESSAGE_SUSPENSION_H
