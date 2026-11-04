// name: FUN_1001e115f
// address: 1001e115f

undefined4 FUN_1001e115f(long param_1,undefined2 *param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uStack_28;
  
  uStack_28 = (ulong)in_EAX;
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb90d(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      uVar2 = FUN_1001e5ca8(param_1,param_2 + 1,0xff,(long)&uStack_28 + 4);
      if (0xffff < uStack_28._4_4_) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006bb821(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      *param_2 = (short)uStack_28._4_4_;
      return uVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb897(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

