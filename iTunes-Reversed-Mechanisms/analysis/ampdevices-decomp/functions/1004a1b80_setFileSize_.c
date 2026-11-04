// name: setFileSize:
// address: 1004a1b80

/* Function Stack Size: 0x18 bytes */

void AMPPHMediaObject::setFileSize_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x60) = param_3;
  return;
}

