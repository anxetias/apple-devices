// name: FUN_1001b08b2
// address: 1001b08b2

void FUN_1001b08b2(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (*param_1 == 0) {
    if (DAT_1008c5258 != param_1) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069fa86(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar4 = (ulong)*(uint *)(param_1 + 0xb);
    iVar2 = *(int *)(&DAT_1008c5278 + uVar4 * 5);
    *(int *)(&DAT_1008c5278 + uVar4 * 5) = iVar2 + -1;
    if (iVar2 < 1) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069f99a(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001782e9(0,0);
    }
    piVar1 = (int *)((long)&DAT_1008c5278 + uVar4 * 0x28 + 4);
    *piVar1 = *piVar1 - (int)param_1[4];
    if (*piVar1 < 0) {
      uVar5 = FUN_1001cc310();
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069fa10(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001782e9(0,0);
    }
    FUN_1001b0756(&DAT_1008c5260 + uVar4 * 0x28,param_1);
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}

