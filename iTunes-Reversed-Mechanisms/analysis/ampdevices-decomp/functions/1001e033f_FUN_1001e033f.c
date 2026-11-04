// name: FUN_1001e033f
// address: 1001e033f

void FUN_1001e033f(ushort *param_1,undefined2 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bad87(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (ushort *)0x0) {
      uVar2 = *param_1;
      if (uVar2 == 0) {
        return;
      }
      uVar5 = (uint)uVar2;
      if (0xff < uVar2) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006bac9b(uVar3);
        }
        FUN_1001782e9(0,0);
        uVar2 = *param_1;
      }
      param_2[uVar2] = 0;
      lVar4 = 0;
      do {
        param_2[lVar4] = param_1[lVar4 + 1];
        lVar4 = lVar4 + 1;
      } while (uVar5 != (uint)lVar4);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bad11(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

