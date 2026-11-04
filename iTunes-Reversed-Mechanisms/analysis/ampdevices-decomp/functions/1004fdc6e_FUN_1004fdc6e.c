// name: FUN_1004fdc6e
// address: 1004fdc6e

int FUN_1004fdc6e(undefined8 param_1,long param_2,undefined8 param_3,char param_4,char param_5,
                 undefined4 *param_6,int *param_7)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar8 = &local_74;
  if (param_7 != (int *)0x0) {
    piVar8 = param_7;
  }
  *piVar8 = 0;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "backupDict != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
  }
  else {
    local_70 = param_3;
    lVar6 = FUN_1004de449();
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "handlerData != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = 0x45f;
    }
    else {
      cVar4 = (param_4 != '\0') + '\x02';
      if (param_5 == '\0') {
        cVar4 = param_4 != '\0';
      }
      local_68 = *param_6;
      uStack_64 = param_6[1];
      uStack_60 = param_6[2];
      uStack_5c = param_6[3];
      if (*(long *)(param_6 + 2) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(param_6 + 2) + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      iVar5 = FUN_10020040f(lVar6,param_2,local_70,cVar4,&local_68,piVar8);
      plVar1 = (long *)CONCAT44(uStack_5c,uStack_60);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      if ((iVar5 == 0) && (iVar5 = 0, *piVar8 == 0)) {
        FUN_1004e3b42(lVar6);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

