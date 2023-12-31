#include <stdio.h>
#include "common.h"
#include "vm.h"


VM vm; 

void initVM() {
}

void freeVM() {
    static InterpretResult run() {
#define READ_BYTE() (*vm.ip++)
  case OP_CONSTANT: {
        Value constant = READ_CONSTANT();
        printValue(constant);
        printf("\n");
        break;
      }

  for (;;) {
    uint8_t instruction;
    switch (instruction = READ_BYTE()) {
      case OP_RETURN: {
        return INTERPRET_OK;
      }
    }
  }

#undef READ_BYTE
}
}