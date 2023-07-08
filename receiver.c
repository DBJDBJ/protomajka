#include <stdio.h>
#include "message.pb-c.h"

enum { MAX_MESSAGE_SIZE  = 0xfff };

int main() {
  // Receive the serialized message over the network
  size_t serialized_size;
  uint8_t serialized_msg[MAX_MESSAGE_SIZE];
  receive_message(serialized_msg, &serialized_size);

  // Deserialize the message from the binary Protobuf format
  Message *msg = message__unpack(NULL, serialized_size, serialized_msg);

  // Access the fields of the message
  char *field_1 = msg->field_1;
  char *field_2 = msg->field_2;

  // Free the message
  message__free_unpacked(msg, NULL);

  return 0;
}
