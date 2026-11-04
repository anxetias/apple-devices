// name: FUN_1004eb10a
// address: 1004eb10a

undefined8 FUN_1004eb10a(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1005060ad();
  if (cVar1 == '\0') {
    return 0x2c;
  }
  if (((param_2 & 4) == 0) && (*(char *)(param_1 + 0x37f) != '\0')) {
    if ((param_2 >> 0x14 & 1) == 0) {
      if ((param_2 & 0xfe082321) == 0) {
        if ((param_2 & 0xc42) == 0) {
          if ((param_2 & 0xc00008) != 0) {
            if (*(char *)(param_1 + 0x39c) == '\0') {
              return 0x3c;
            }
            if (*(char *)(param_1 + 0x6b03) == '\0') {
              return 0x3c;
            }
          }
        }
        else if ((*(char *)(param_1 + 0x6b00) == '\0') && (*(char *)(param_1 + 0x6b01) == '\0')) {
          return 0x3a;
        }
      }
    }
    else if ((*(int *)(param_1 + 0x66b0) != 0x69506164) && (*(char *)(param_1 + 0x6b02) == '\0')) {
      return 0x3b;
    }
  }
  cVar1 = FUN_1004ec077(param_1,param_2);
  uVar2 = 0x3d;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  if ((((cVar1 != '\0' && (char)((param_2 & 4) >> 2) == '\0') &&
       (uVar2 = 0x3e, (param_2 >> 0x15 & 1) == 0)) && (uVar2 = 0x3b, (param_2 >> 0x14 & 1) == 0)) &&
     ((uVar2 = 0x3a, (param_2 & 0xc42) == 0 && (uVar2 = 0x3c, (param_2 & 0xc00008) == 0)))) {
    uVar2 = 0x2d;
  }
  return uVar2;
}

