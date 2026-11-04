// name: FUN_100426554
// address: 100426554

void FUN_100426554(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  undefined2 local_32;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
LAB_1004266f1:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "updateRestoreActionDelegateImp != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar5 = (long *)___dynamic_cast(*param_2,&PTR_DAT_100857ed8,&PTR_DAT_100857ef0,0);
    if (plVar5 == (long *)0x0) goto LAB_1004266f1;
    iVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
    iVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x50))();
    if ((iVar3 != iVar4) && (uVar1 = *(uint *)(plVar5 + 0x260), uVar1 < 9)) {
      if ((0xd8U >> (uVar1 & 0x1f) & 1) == 0) {
        if ((0x120U >> (uVar1 & 0x1f) & 1) != 0) {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
            FUN_10041c020(plVar5,0);
            return;
          }
          goto LAB_100426818;
        }
      }
      else {
        if (uVar1 - 3 < 2) {
          if (plVar5[0x268] == 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure (expected to be true)";
              local_3c = 0x822;
              local_3a = "updateRestoreActionDelegateImp->mSoftwareUpdateQueueRetryOneShotTimer";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            cVar2 = FUN_1001782e9(0,0);
            if (cVar2 == '\0') goto LAB_100426623;
          }
          FUN_1002188e4(plVar5 + 0x268);
        }
LAB_100426623:
        _memcpy(plVar5 + 0x11,(void *)(*(long *)(param_1 + 8) + 0x88),0x420);
        *(uint *)(plVar5 + 0x260) = 10 - (uint)((int)plVar5[0x260] == 6 || (int)plVar5[0x260] == 3);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          pcVar7 = (char *)FUN_1001b83ae(plVar5 + 0xc);
          local_30 = FUN_1004194cc((int)plVar5[0x260]);
          local_48 = 0x8200302;
          local_3c = 0x820;
          local_3a = "setting";
          local_32 = 0x820;
          local_44 = pcVar7;
          __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_48,0x20);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100426818:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

