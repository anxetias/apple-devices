// name: FUN_1001b9349
// address: 1001b9349

uint FUN_1001b9349(ushort *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1 == (ushort *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a1d8a(uVar3);
    }
  }
  else {
    if (param_1 < param_2) {
      uVar1 = *param_1;
      *param_3 = 1;
      if ((uVar1 & 0xfc00) != 0xd800) {
        return (uint)uVar1;
      }
      if (param_1 + 1 < param_2) {
        uVar4 = (uint)param_1[1];
        if ((uVar4 & 0xfc00) == 0xdc00) {
          *param_3 = 2;
          return (uint)uVar1 * 0x400 + uVar4 + 0xfca02400;
        }
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a1d14(uVar3);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a1c9e(uVar3);
        }
      }
      FUN_1001782e9(0,0);
      return 0xfffd;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a1c28(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  *param_3 = 0;
  return 0xfffd;
}

