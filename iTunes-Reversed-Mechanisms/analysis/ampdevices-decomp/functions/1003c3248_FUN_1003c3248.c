// name: FUN_1003c3248
// address: 1003c3248

int FUN_1003c3248(long param_1,undefined4 param_2,byte *param_3,byte *param_4,byte *param_5,
                 undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uStack_4e0;
  byte *local_4d0;
  byte *local_4c8;
  int local_4bc;
  undefined1 local_4b8 [1120];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4bc = 0;
  uStack_4e0 = (long *)0x0;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x8d38;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar6 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_1003c32ff;
  }
  local_4bc = 0;
  if (param_3 == (byte *)0x0) {
    local_4c8 = (byte *)FUN_1003ae1f8();
    if (local_4c8 != (byte *)0x0) {
      param_3 = local_4c8;
      if (param_4 == (byte *)0x0) goto LAB_1003c335f;
      goto LAB_1003c3340;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xf071;
      uStack_48 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1003c35bf:
    local_4bc = -0x6c;
  }
  else {
    FUN_1003af743(param_3);
    if (param_4 == (byte *)0x0) {
      local_4c8 = (byte *)FUN_1003ae1f8();
      if (local_4c8 == (byte *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xf071;
          uStack_48 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1003c35bf;
      }
LAB_1003c335f:
      param_4 = local_4c8 + 0x1660;
    }
    else {
      local_4c8 = (byte *)0x0;
LAB_1003c3340:
      FUN_1003af7fe(param_4);
    }
    if (param_5 == (byte *)0x0) {
      if (local_4c8 == (byte *)0x0) {
        local_4c8 = (byte *)FUN_1003ae1f8();
        if (local_4c8 == (byte *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4c = 0x822;
            uStack_4a = 0xf071;
            uStack_48 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003c35bf;
        }
      }
      local_4d0 = local_4c8 + 0x4ca8;
    }
    else {
      FUN_1003af8bd();
      local_4d0 = param_5;
    }
    FUN_100241e02(&local_58,param_1,0x80,0,0,&local_4bc);
    plVar2 = (long *)CONCAT44(uStack_54,local_58);
    uStack_4e0 = (long *)CONCAT44(CONCAT22(uStack_4a,uStack_4c),uStack_50);
    if (plVar2 == (long *)0x0) {
      if (local_4bc == 0) {
        local_4bc = 1000;
      }
    }
    else if ((*(byte *)(lVar1 + 0xc4) & 0x80) == 0) {
LAB_1003c33f1:
      FUN_1002b3b9a(param_1,local_4b8);
      uVar4 = FUN_10047fc8b(lVar1);
      local_4bc = (**(code **)(*plVar2 + 0x88))
                            (plVar2,param_2,uVar4,param_3,param_4,local_4d0,param_6);
      if (local_4bc == 0) {
        if (*(char *)(param_1 + 0x44) != '\x01') {
          param_3[0x1014] = 0;
          param_3[0x1015] = 0;
          param_3[0x1016] = 0;
          param_3[0x1017] = 0;
          param_3[0x1028] = 0;
          param_3[0x1029] = 0;
          param_3[0x102a] = 0;
          param_3[0x102b] = 0;
        }
        cVar3 = FUN_1002b630e(param_1);
        if (cVar3 != '\0') {
          *param_3 = *param_3 & 0xdf;
        }
        FUN_100312763(param_1,param_3,param_4,local_4d0,0x400,0,0,0);
      }
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
      if (cVar3 != '\t') {
        cVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (cVar3 != '\x14') goto LAB_1003c33f1;
      }
    }
    if (local_4c8 != (byte *)0x0) {
      FUN_1003ae783(local_4c8 + 0x4ca8);
      FUN_1001c64c1(local_4c8);
    }
  }
  iVar6 = local_4bc;
  if (uStack_4e0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_4e0 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*uStack_4e0 + 0x10))(uStack_4e0);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1003c32ff:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

