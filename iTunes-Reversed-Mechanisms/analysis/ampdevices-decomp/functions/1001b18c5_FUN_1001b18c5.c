// name: FUN_1001b18c5
// address: 1001b18c5

void FUN_1001b18c5(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_10069ff9a(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,1);
  }
  else {
    if (DAT_1008c5320 != 0) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a0010(uVar4);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
    }
    iVar2 = FUN_1001b19b0();
    iVar3 = FUN_1001b1a0f();
    if (iVar2 == iVar3) {
      if (*(long **)(param_1 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    }
    else {
      FUN_1001c128c(&DAT_1008c5300,param_1);
      DAT_1008c5330 = iVar2;
      FUN_1001b0be5();
    }
  }
  return;
}

