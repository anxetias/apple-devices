// name: FUN_100202e6f
// address: 100202e6f

int FUN_100202e6f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined **local_88;
  code *local_80;
  void *local_78;
  undefined ***local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  pvVar5 = (void *)FUN_1001c629e(0x698,&DAT_100711c6e);
  if (pvVar5 == (void *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
    goto LAB_100202fc4;
  }
  *(undefined8 *)((long)pvVar5 + 0x678) = 0;
  *(undefined8 *)((long)pvVar5 + 0x680) = 0;
  local_98 = param_1;
  local_8c = param_4;
  FUN_1004e17a4(param_1);
  local_a8 = *param_5;
  uStack_a4 = param_5[1];
  uStack_a0 = param_5[2];
  uStack_9c = param_5[3];
  if (*(long *)(param_5 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_5 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  iVar4 = FUN_1002005d3(pvVar5,local_98,param_2,param_3,local_8c,&local_a8);
  plVar1 = (long *)CONCAT44(uStack_9c,uStack_a0);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar8 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar7 = local_98;
  if (iVar4 == 0) {
    local_88 = &PTR_FUN_10083d880;
    local_80 = FUN_1002031a6;
    local_78 = pvVar5;
    local_68 = &local_88;
    iVar4 = FUN_1001b1a89(&local_88,"RestoreMobileDeviceFiber",0,0);
    if (local_68 == &local_88) {
      lVar8 = 0x20;
LAB_10020303f:
      (**(code **)((long)*local_68 + lVar8))();
    }
    else {
      lVar8 = 0x28;
      if (local_68 != (undefined ***)0x0) goto LAB_10020303f;
    }
    if (iVar4 != -0x80) {
      if (iVar4 == 0) goto LAB_100202fc4;
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        goto LAB_100202fc4;
      }
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  FUN_100205d70((long)pvVar5 + 0x678);
  operator_delete(pvVar5);
  FUN_1004e1e68(uVar7);
LAB_100202fc4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

