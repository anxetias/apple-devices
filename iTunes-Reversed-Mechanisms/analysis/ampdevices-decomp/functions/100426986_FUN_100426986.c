// name: FUN_100426986
// address: 100426986

void FUN_100426986(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
LAB_100426a1a:
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "updateRestoreActionDelegateImp != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar4 = (long *)___dynamic_cast(*param_2,&PTR_DAT_100857ed8,&PTR_DAT_100857ef0,0);
    if (plVar4 == (long *)0x0) goto LAB_100426a1a;
    iVar2 = (**(code **)(*plVar4 + 0x50))(plVar4);
    iVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x50))();
    if ((iVar2 != iVar3) && ((int)plVar4[0x260] - 3U < 6)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_10041c020(plVar4,0);
        return;
      }
      goto LAB_100426aa2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100426aa2:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

