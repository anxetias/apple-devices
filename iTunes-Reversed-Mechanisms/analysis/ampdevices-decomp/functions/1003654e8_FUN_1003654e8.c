// name: FUN_1003654e8
// address: 1003654e8

int FUN_1003654e8(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004d6258();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    iVar2 = -0x32;
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      uStack_34 = 0x7a0a90;
      uStack_30 = 1;
      local_2c = 0x400;
      local_2a = (char *)CONCAT44(local_2a._4_4_,0xffffffce);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  else {
    plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
    if (*plVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        uStack_34 = 0x7a0a90;
        uStack_30 = 1;
        local_2c = 0x822;
        local_2a = "eventDict.IsValid()";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2,1);
      if (iVar2 == 0) {
        FUN_1001a8c1c(local_40,&PTR_cf_xp_amp_itd_main_100855888);
        FUN_100365770(&local_38);
        if (CONCAT44(uStack_34,local_38) != 0) {
          FUN_1001a7b90(local_48,&PTR_cf_topic_100855890);
          FUN_1001a921a(&local_38,local_48,local_40);
          FUN_1001ab240(local_48);
        }
        FUN_1001a8fac(&local_38);
        iVar2 = (**(code **)(*param_1 + 0x30))(param_1,local_40);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            (**(code **)(*param_1 + 0x48))(param_1);
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_38 = 0x8220202;
              uStack_34 = 0x7a0a90;
              uStack_30 = 1;
              local_2c = 0x400;
              local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
            }
          }
        }
        FUN_1001ab006(local_40);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

