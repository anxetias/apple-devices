// name: FUN_10057719e
// address: 10057719e

bool FUN_10057719e(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  bool bVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar5 = (long *)param_1[1];
  if (plVar5 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x822;
      local_2a = "mSourceDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar6 = false;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1[0x1d] < 1) {
      lVar3 = (**(code **)(*param_1 + 0xb0))(param_1);
      param_1[0x1d] = lVar3;
      if (lVar3 < 1) {
        bVar6 = false;
        goto LAB_100577232;
      }
      plVar5 = (long *)param_1[1];
    }
    bVar6 = false;
    iVar2 = (**(code **)(*plVar5 + 0x68))(plVar5,0,&local_38);
    if (iVar2 == 0) {
      bVar6 = param_1[0x1d] <= CONCAT44(uStack_34,local_38);
    }
  }
LAB_100577232:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

