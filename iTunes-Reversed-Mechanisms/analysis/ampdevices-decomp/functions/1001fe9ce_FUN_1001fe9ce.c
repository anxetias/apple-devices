// name: FUN_1001fe9ce
// address: 1001fe9ce

int FUN_1001fe9ce(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined **local_78;
  code *local_70;
  void *local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  pvVar5 = (void *)FUN_1001c629e(0x30,&DAT_100711c6e);
  if (pvVar5 == (void *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
    goto LAB_1001febc0;
  }
  *(undefined8 *)((long)pvVar5 + 0x10) = 0;
  *(undefined8 *)((long)pvVar5 + 0x18) = 0;
  FUN_1004e17a4(param_1);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  if (*(long *)(param_3 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_3 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar4 = FUN_1001fdd4d(pvVar5,param_1,param_2,&local_88);
  plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      local_78 = &PTR_FUN_10083d720;
      local_70 = FUN_1001fecba;
      local_68 = pvVar5;
      local_58 = &local_78;
      iVar4 = FUN_1001b1a89(&local_78,"BackupMobileDeviceFiber",0,0);
      if (local_58 == &local_78) {
        lVar6 = 0x20;
LAB_1001feb6c:
        (**(code **)((long)*local_58 + lVar6))();
      }
      else {
        lVar6 = 0x28;
        if (local_58 != (undefined ***)0x0) goto LAB_1001feb6c;
      }
      if ((iVar4 != -0x80) && (iVar4 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
          goto LAB_1001fec61;
        }
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_1001fec61:
        local_3c = 0x400;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_1001febc0;
    }
  }
  FUN_100205d70((long)pvVar5 + 0x10);
  operator_delete(pvVar5);
  FUN_1004e1e68(param_1);
LAB_1001febc0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

