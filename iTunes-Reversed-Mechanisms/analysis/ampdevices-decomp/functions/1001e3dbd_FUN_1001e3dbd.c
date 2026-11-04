// name: FUN_1001e3dbd
// address: 1001e3dbd

void FUN_1001e3dbd(ushort *param_1,undefined2 *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (ushort *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bd48a(uVar2);
    }
  }
  else {
    if (param_2 != (undefined2 *)0x0) {
      if (*param_1 < param_3) {
        param_3 = (uint)*param_1;
      }
      *param_2 = (short)param_3;
      FUN_1001c631b(param_1 + 1,param_2 + 1,param_3 * 2);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bd414(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

