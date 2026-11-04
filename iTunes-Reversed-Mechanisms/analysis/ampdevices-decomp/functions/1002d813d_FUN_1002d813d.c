// name: FUN_1002d813d
// address: 1002d813d

char FUN_1002d813d(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  uint param_6,short param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = '\x14';
  if ((param_6 & 0xff000000) < 0x7000001) {
    uVar3 = param_6 >> 0x10 & 0xff;
    if ((param_4 == 0 && param_2 == 0) && uVar3 == 0) {
      cVar1 = '\0';
    }
    else if ((((param_2 == 0) || (*(char *)(param_1 + 0x335) != '\0')) ||
             (*(char *)(param_1 + 0x336) != '\0')) || (*(char *)(param_1 + 0x337) != '\0')) {
      if (((uVar3 <= *(ushort *)(param_1 + 0x3b8)) &&
          (cVar1 = '\x15', *(ushort *)(param_1 + 0x3b6) <= uVar3)) && (cVar1 = '\0', param_2 != 1))
      {
        if (param_7 < 0) {
          if (*(char *)(param_1 + 0x379) == '\0') {
            return '\x0e';
          }
        }
        else {
          iVar2 = FUN_1002d7a42(param_1,param_2,param_3);
          if (iVar2 + 0xa665U < 3) {
            return '5';
          }
          if (iVar2 != 0) {
            iVar2 = FUN_1002d7c95(param_1,param_2);
            return (iVar2 == 0) + '\x12';
          }
        }
        cVar1 = FUN_1002d8000(param_1,param_2,param_3,param_6,param_8);
        cVar1 = (cVar1 == '\0') * '\t';
      }
    }
    else {
      cVar1 = '\x16';
    }
  }
  return cVar1;
}

