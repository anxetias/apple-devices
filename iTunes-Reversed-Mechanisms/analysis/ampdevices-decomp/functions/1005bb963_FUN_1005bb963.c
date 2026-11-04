// name: FUN_1005bb963
// address: 1005bb963

undefined8 FUN_1005bb963(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee068();
  if (cVar1 == '\0') {
    lVar3 = FUN_1005bac96(param_1,param_2);
LAB_1005bb9da:
    if (lVar3 != 0) {
      uVar4 = FUN_1001726ca(DAT_1008c4d90,lVar3);
      FUN_10017060f(lVar3);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        return uVar4;
      }
      goto LAB_1005bbb0e;
    }
  }
  else {
    local_438 = CONCAT31(local_438._1_3_,param_2);
    iVar2 = FUN_1005ba4e2(param_1,0x14);
    if ((iVar2 == -0x80) || (iVar2 == 0)) {
      if (iVar2 == 0) {
        lVar3 = 0;
        goto LAB_1005bb9da;
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_438 = 0x8220202;
    local_434 = "Assertion failure";
    local_42c = 0x822;
    local_42a = "checkpointDict != __null";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return 0;
  }
LAB_1005bbb0e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

