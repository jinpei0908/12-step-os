#include "defines.h"
#include "lib.h"
#include "serial.h"

int main(void) {
  serial_init(SERIAL_DEFAULT_DEVICE);

  puts("Hello World!\n");

  while (1)
    ;

  return 0;
}
