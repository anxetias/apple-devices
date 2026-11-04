// name: FUN_1001bff4c
// address: 1001bff4c

undefined4
FUN_1001bff4c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_10089fb80 == 0) {
    uVar4 = FUN_1001cc310(0,param_1,param_2,param_4,param_3);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006a4205(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    local_38 = (long *)0x0;
    uVar2 = FUN_1001be5d0();
    if (local_38 == local_58) {
      lVar3 = 0x20;
    }
    else {
      lVar3 = 0x28;
      if (local_38 == (long *)0x0) goto LAB_1001bfff3;
    }
    (**(code **)(*local_38 + lVar3))();
  }
LAB_1001bfff3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

