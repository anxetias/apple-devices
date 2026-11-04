// name: FUN_1001e3c85
// address: 1001e3c85

void FUN_1001e3c85(ushort *param_1,undefined2 *param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bd39e(uVar4);
    }
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      if (0xff < *param_1) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006bd23c(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      uVar3 = param_3;
      if (0xff < param_3) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006bd2b2(uVar4);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xff;
      }
      uVar1 = *param_1;
      if (uVar1 <= uVar3) {
        uVar3 = (uint)uVar1;
      }
      *param_2 = (short)uVar3;
      if (uVar3 == 0) {
        return;
      }
      if (uVar1 < param_3) {
        param_3 = (uint)uVar1;
      }
      if (0xfe < param_3) {
        param_3 = 0xff;
      }
      lVar5 = 0;
      do {
        param_2[lVar5 + 1] = param_1[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (param_3 != (uint)lVar5);
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bd328(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

