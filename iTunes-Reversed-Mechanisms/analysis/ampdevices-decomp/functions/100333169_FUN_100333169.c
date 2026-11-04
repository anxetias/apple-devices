// name: FUN_100333169
// address: 100333169

ulong FUN_100333169(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x14cda) == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x6abf) == '\0') {
      uVar1 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x33b) == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = (ulong)(*(char *)(param_1 + 0x14d6c) != '\0') << 5;
      }
      if ((*(char *)(param_1 + 0x34e) != '\0') && (*(char *)(param_1 + 0x151d4) != '\0')) {
        uVar1 = uVar1 + 0x40;
      }
      if ((*(char *)(param_1 + 0x34f) != '\0') && (*(char *)(param_1 + 0x151d6) != '\0')) {
        uVar1 = uVar1 + 0x80;
      }
      if ((*(char *)(param_1 + 0x365) != '\0') && (*(char *)(param_1 + 0x14dec) != '\0')) {
        uVar1 = uVar1 + 0x800;
      }
      if ((*(char *)(param_1 + 0x39c) != '\0') && (*(char *)(param_1 + 0x14dee) != '\0')) {
        uVar1 = uVar1 + 0x1000;
      }
    }
    if ((*(char *)(param_1 + 0x6ac2) != '\0') && (*(char *)(param_1 + 0x14d2a) != '\0')) {
      uVar1 = uVar1 | 0x100;
    }
  }
  if (((*(char *)(param_1 + 0x33c) != '\0') && (*(char *)(param_1 + 0x14d04) != '\0')) &&
     (*(char *)(param_1 + 0x6ac1) != '\0')) {
    uVar1 = uVar1 + 0x2000;
  }
  return uVar1;
}

