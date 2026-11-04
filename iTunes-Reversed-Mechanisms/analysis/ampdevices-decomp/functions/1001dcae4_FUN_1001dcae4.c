// name: FUN_1001dcae4
// address: 1001dcae4

void FUN_1001dcae4(long param_1,long param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_1001e9de0(param_3);
  lVar1 = *(long *)(*(long *)(param_3 + 0x48) + 0x10);
  lVar4 = _CFRunLoopGetCurrent();
  if (lVar1 != lVar4) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006b7eaf(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)(param_3 + 0x90) != param_1) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006b7f25(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  if (param_2 != 0x10) {
    if (param_2 != 8) goto LAB_1001dcb88;
    uVar3 = FUN_10019b6f4(param_1,param_3 + 0x90);
    *(undefined4 *)(param_3 + 0x150) = uVar3;
  }
  FUN_1001db798(param_3);
LAB_1001dcb88:
  FUN_1001db821(param_3);
  FUN_1001e9eb9(param_3);
  return;
}

