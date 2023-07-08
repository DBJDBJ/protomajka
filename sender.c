#include <stdio.h>
#include "message.pb-c.h"

int main() {
  // Create an instance of the message
  Message msg = MESSAGE__INIT;

  // Set the fields of the message
  msg.field_1 = "value 1";
  msg.field_2 = "value 2";

  // Serialize the message to a binary Protobuf format
  size_t serialized_size = message__get_packed_size(&msg);
  uint8_t serialized_msg[serialized_size];
  message__pack(&msg, serialized_msg);

  // Send the serialized message over the network
  send_message(serialized_msg, serialized_size);

  return 0;
}
