// name: FUN_1001e59e6
// address: 1001e59e6

undefined8 FUN_1001e59e6(long param_1,ulong param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bed40(uVar2);
    }
  }
  else if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006becca(uVar2);
    }
  }
  else {
    if (param_4 != 0) {
      uVar3 = param_4 - 1U;
      if (param_2 <= param_4 - 1U) {
        uVar3 = param_2;
      }
      FUN_1001c631b(param_1,param_3,uVar3);
      *(undefined1 *)(param_3 + uVar3) = 0;
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bec54(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

