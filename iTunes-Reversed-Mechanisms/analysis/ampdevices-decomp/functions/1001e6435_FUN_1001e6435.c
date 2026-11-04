// name: FUN_1001e6435
// address: 1001e6435

undefined1 FUN_1001e6435(ushort *param_1,ushort *param_2,undefined4 param_3)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bfa2e(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006bfaa4(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  uVar1 = *param_2;
  if (*param_1 < uVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1001e339d(param_1 + (long)(int)((uint)*param_1 - (uint)uVar1) + 1,(uint)uVar1,
                          param_2 + 1,uVar1,param_3);
  }
  return uVar3;
}

