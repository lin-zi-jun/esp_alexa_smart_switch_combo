/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: cloud.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "cloud.pb-c.h"
void   cloud__cmd_get_set_details__init
                     (Cloud__CmdGetSetDetails         *message)
{
  static const Cloud__CmdGetSetDetails init_value = CLOUD__CMD_GET_SET_DETAILS__INIT;
  *message = init_value;
}
size_t cloud__cmd_get_set_details__get_packed_size
                     (const Cloud__CmdGetSetDetails *message)
{
  assert(message->base.descriptor == &cloud__cmd_get_set_details__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cloud__cmd_get_set_details__pack
                     (const Cloud__CmdGetSetDetails *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cloud__cmd_get_set_details__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cloud__cmd_get_set_details__pack_to_buffer
                     (const Cloud__CmdGetSetDetails *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cloud__cmd_get_set_details__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Cloud__CmdGetSetDetails *
       cloud__cmd_get_set_details__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Cloud__CmdGetSetDetails *)
     protobuf_c_message_unpack (&cloud__cmd_get_set_details__descriptor,
                                allocator, len, data);
}
void   cloud__cmd_get_set_details__free_unpacked
                     (Cloud__CmdGetSetDetails *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &cloud__cmd_get_set_details__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cloud__resp_get_set_details__init
                     (Cloud__RespGetSetDetails         *message)
{
  static const Cloud__RespGetSetDetails init_value = CLOUD__RESP_GET_SET_DETAILS__INIT;
  *message = init_value;
}
size_t cloud__resp_get_set_details__get_packed_size
                     (const Cloud__RespGetSetDetails *message)
{
  assert(message->base.descriptor == &cloud__resp_get_set_details__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cloud__resp_get_set_details__pack
                     (const Cloud__RespGetSetDetails *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cloud__resp_get_set_details__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cloud__resp_get_set_details__pack_to_buffer
                     (const Cloud__RespGetSetDetails *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cloud__resp_get_set_details__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Cloud__RespGetSetDetails *
       cloud__resp_get_set_details__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Cloud__RespGetSetDetails *)
     protobuf_c_message_unpack (&cloud__resp_get_set_details__descriptor,
                                allocator, len, data);
}
void   cloud__resp_get_set_details__free_unpacked
                     (Cloud__RespGetSetDetails *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &cloud__resp_get_set_details__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   cloud__cloud_config_payload__init
                     (Cloud__CloudConfigPayload         *message)
{
  static const Cloud__CloudConfigPayload init_value = CLOUD__CLOUD_CONFIG_PAYLOAD__INIT;
  *message = init_value;
}
size_t cloud__cloud_config_payload__get_packed_size
                     (const Cloud__CloudConfigPayload *message)
{
  assert(message->base.descriptor == &cloud__cloud_config_payload__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t cloud__cloud_config_payload__pack
                     (const Cloud__CloudConfigPayload *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &cloud__cloud_config_payload__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t cloud__cloud_config_payload__pack_to_buffer
                     (const Cloud__CloudConfigPayload *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &cloud__cloud_config_payload__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Cloud__CloudConfigPayload *
       cloud__cloud_config_payload__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Cloud__CloudConfigPayload *)
     protobuf_c_message_unpack (&cloud__cloud_config_payload__descriptor,
                                allocator, len, data);
}
void   cloud__cloud_config_payload__free_unpacked
                     (Cloud__CloudConfigPayload *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &cloud__cloud_config_payload__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor cloud__cmd_get_set_details__field_descriptors[2] =
{
  {
    "UserID",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Cloud__CmdGetSetDetails, userid),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "SecretKey",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Cloud__CmdGetSetDetails, secretkey),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cloud__cmd_get_set_details__field_indices_by_name[] = {
  1,   /* field[1] = SecretKey */
  0,   /* field[0] = UserID */
};
static const ProtobufCIntRange cloud__cmd_get_set_details__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cloud__cmd_get_set_details__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cloud.CmdGetSetDetails",
  "CmdGetSetDetails",
  "Cloud__CmdGetSetDetails",
  "cloud",
  sizeof(Cloud__CmdGetSetDetails),
  2,
  cloud__cmd_get_set_details__field_descriptors,
  cloud__cmd_get_set_details__field_indices_by_name,
  1,  cloud__cmd_get_set_details__number_ranges,
  (ProtobufCMessageInit) cloud__cmd_get_set_details__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cloud__resp_get_set_details__field_descriptors[2] =
{
  {
    "Status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Cloud__RespGetSetDetails, status),
    &cloud__cloud_config_status__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DeviceSecret",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Cloud__RespGetSetDetails, devicesecret),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cloud__resp_get_set_details__field_indices_by_name[] = {
  1,   /* field[1] = DeviceSecret */
  0,   /* field[0] = Status */
};
static const ProtobufCIntRange cloud__resp_get_set_details__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor cloud__resp_get_set_details__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cloud.RespGetSetDetails",
  "RespGetSetDetails",
  "Cloud__RespGetSetDetails",
  "cloud",
  sizeof(Cloud__RespGetSetDetails),
  2,
  cloud__resp_get_set_details__field_descriptors,
  cloud__resp_get_set_details__field_indices_by_name,
  1,  cloud__resp_get_set_details__number_ranges,
  (ProtobufCMessageInit) cloud__resp_get_set_details__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor cloud__cloud_config_payload__field_descriptors[3] =
{
  {
    "msg",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_ENUM,
    0,   /* quantifier_offset */
    offsetof(Cloud__CloudConfigPayload, msg),
    &cloud__cloud_config_msg_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cmd_get_set_details",
    10,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Cloud__CloudConfigPayload, payload_case),
    offsetof(Cloud__CloudConfigPayload, cmd_get_set_details),
    &cloud__cmd_get_set_details__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "resp_get_set_details",
    11,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(Cloud__CloudConfigPayload, payload_case),
    offsetof(Cloud__CloudConfigPayload, resp_get_set_details),
    &cloud__resp_get_set_details__descriptor,
    NULL,
    0 | PROTOBUF_C_FIELD_FLAG_ONEOF,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned cloud__cloud_config_payload__field_indices_by_name[] = {
  1,   /* field[1] = cmd_get_set_details */
  0,   /* field[0] = msg */
  2,   /* field[2] = resp_get_set_details */
};
static const ProtobufCIntRange cloud__cloud_config_payload__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 10, 1 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor cloud__cloud_config_payload__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "cloud.CloudConfigPayload",
  "CloudConfigPayload",
  "Cloud__CloudConfigPayload",
  "cloud",
  sizeof(Cloud__CloudConfigPayload),
  3,
  cloud__cloud_config_payload__field_descriptors,
  cloud__cloud_config_payload__field_indices_by_name,
  2,  cloud__cloud_config_payload__number_ranges,
  (ProtobufCMessageInit) cloud__cloud_config_payload__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue cloud__cloud_config_status__enum_values_by_number[3] =
{
  { "Success", "CLOUD__CLOUD_CONFIG_STATUS__Success", 0 },
  { "InvalidParam", "CLOUD__CLOUD_CONFIG_STATUS__InvalidParam", 1 },
  { "InvalidState", "CLOUD__CLOUD_CONFIG_STATUS__InvalidState", 2 },
};
static const ProtobufCIntRange cloud__cloud_config_status__value_ranges[] = {
{0, 0},{0, 3}
};
static const ProtobufCEnumValueIndex cloud__cloud_config_status__enum_values_by_name[3] =
{
  { "InvalidParam", 1 },
  { "InvalidState", 2 },
  { "Success", 0 },
};
const ProtobufCEnumDescriptor cloud__cloud_config_status__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "cloud.CloudConfigStatus",
  "CloudConfigStatus",
  "Cloud__CloudConfigStatus",
  "cloud",
  3,
  cloud__cloud_config_status__enum_values_by_number,
  3,
  cloud__cloud_config_status__enum_values_by_name,
  1,
  cloud__cloud_config_status__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue cloud__cloud_config_msg_type__enum_values_by_number[2] =
{
  { "TypeCmdGetSetDetails", "CLOUD__CLOUD_CONFIG_MSG_TYPE__TypeCmdGetSetDetails", 0 },
  { "TypeRespGetSetDetails", "CLOUD__CLOUD_CONFIG_MSG_TYPE__TypeRespGetSetDetails", 1 },
};
static const ProtobufCIntRange cloud__cloud_config_msg_type__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex cloud__cloud_config_msg_type__enum_values_by_name[2] =
{
  { "TypeCmdGetSetDetails", 0 },
  { "TypeRespGetSetDetails", 1 },
};
const ProtobufCEnumDescriptor cloud__cloud_config_msg_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "cloud.CloudConfigMsgType",
  "CloudConfigMsgType",
  "Cloud__CloudConfigMsgType",
  "cloud",
  2,
  cloud__cloud_config_msg_type__enum_values_by_number,
  2,
  cloud__cloud_config_msg_type__enum_values_by_name,
  1,
  cloud__cloud_config_msg_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
