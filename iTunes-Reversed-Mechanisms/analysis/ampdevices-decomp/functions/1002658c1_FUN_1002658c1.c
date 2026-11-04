// name: FUN_1002658c1
// address: 1002658c1

void FUN_1002658c1(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_448;
  int local_444;
  undefined2 uStack_440;
  undefined2 uStack_43e;
  undefined2 uStack_43c;
  char *local_43a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_43a = "ITIPodRefIsValid(iPod)";
LAB_100265aea:
      uStack_43c = 0x822;
      uStack_43e = 0;
      uStack_440 = 1;
      local_444 = 0x7a0a90;
      local_448 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
LAB_100265a98:
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x3f) == '\0') {
    FUN_1002653c7(param_1);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x000100265a7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_100265b29;
    }
  }
  else {
    puVar3 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar3 == (undefined8 *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_43a = "params != nullptr";
        goto LAB_100265aea;
      }
      goto LAB_100265a98;
    }
    uVar4 = FUN_10026394e(param_1);
    *puVar3 = uVar4;
    puVar3[1] = UNRECOVERED_JUMPTABLE;
    puVar3[2] = param_3;
    puVar3[3] = param_4;
    lVar5 = FUN_10055ae0c(param_1);
    if (lVar5 != 0) {
      local_448 = CONCAT31(local_448._1_3_,*(char *)(param_1 + 0x41) == '\0');
      iVar2 = FUN_1005b9808(lVar5,0x14,&local_448,FUN_100265b2e,puVar3);
      if (iVar2 == 0) goto LAB_100265aa1;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_448 = 0x4000200;
        uStack_440 = 0x400;
        uStack_43e = (undefined2)iVar2;
        uStack_43c = (undefined2)((uint)iVar2 >> 0x10);
        local_444 = iVar2;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "MobileDeviceCopyCheckpointDictionaryAsync failed (%d / 0x%08X)",&local_448,
                      0xe);
      }
    }
    FUN_100264ec8(*puVar3);
    operator_delete(puVar3);
  }
LAB_100265aa1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
LAB_100265b29:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

