// name: FUN_1001b0376
// address: 1001b0376

void FUN_1001b0376(long param_1)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_1c;
  
  FUN_1001e8f15(param_1 + 0x98);
  iVar3 = FUN_1001b29c4(param_1);
  if (iVar3 == 0) {
    uVar4 = _objc_autoreleasePoolPush();
    local_1c = *(undefined4 *)(param_1 + 0x18);
    plVar1 = *(long **)(param_1 + 0x80);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_1c);
    _objc_autoreleasePoolPop(uVar4);
    FUN_1001e9de0(&DAT_1008c5200);
    FUN_1001b0458(param_1,3);
    uVar4 = FUN_1001b0510();
    FUN_1001b0609(uVar4);
    FUN_1001b2a3e(uVar4);
    FUN_1001e9eb9(&DAT_1008c5200);
  }
  else {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069f6d6(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  return;
}

