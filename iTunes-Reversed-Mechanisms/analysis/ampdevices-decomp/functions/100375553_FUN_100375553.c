// name: FUN_100375553
// address: 100375553

undefined8 FUN_100375553(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  int local_4a;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined6 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036f8fa(*(undefined4 *)(param_1 + 0x20));
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7c589d;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffdd;
    goto LAB_1003757ce;
  }
  lVar4 = FUN_10036d2f1(lVar3,0);
  *(long *)(param_1 + 0x438) = lVar4;
  if (lVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7c63e4;
      uStack_46 = 1;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x17ffbfe9;
LAB_1003756c6:
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_10036e72b(param_1 + 8);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x822;
        local_4a = 0x7a0ee9;
        uStack_46 = 1;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x17ffbffd;
      goto LAB_1003756c6;
    }
    uVar5 = _AFCOperationCreateReadDirectory(DAT_1008c4d90,lVar4,0);
    iVar2 = FUN_10036ed41(*(undefined8 *)(param_1 + 0x438),uVar5);
    if (iVar2 == -0x80) {
LAB_1003756ec:
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x4000302;
        uStack_50 = 0x842;
        uStack_4e = (undefined2)lVar4;
        local_4c = (undefined2)((ulong)lVar4 >> 0x10);
        local_4a = (int)((ulong)lVar4 >> 0x20);
        uStack_46 = 0x800;
        uStack_44 = (undefined2)*(undefined8 *)(param_1 + 0x438);
        uStack_42 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x10);
        local_54 = iVar2;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AFC ReadDirectory failed (0x%08X) for \"%{public}@\" with connection %p"
                            ,&local_58,0x1c);
      }
    }
    else {
      if (iVar2 != 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          local_4c = 0x400;
          local_4a = iVar2;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1003756ec;
      }
      uVar6 = _AFCOperationGetResultObject(uVar5);
      uVar6 = FUN_1001705fc(uVar6);
      *(undefined8 *)(param_1 + 0x440) = uVar6;
      lVar7 = FUN_1001705e9(uVar6);
      lVar8 = _CFArrayGetTypeID();
      if (lVar7 == lVar8) {
        *(undefined8 *)(param_1 + 0x448) = 0;
        iVar2 = 0;
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          local_4c = 0x822;
          local_4a = 0x7c640a;
          uStack_46 = 1;
          uStack_44 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x17ffbfe9;
      }
    }
  }
  FUN_10017060f(uVar5);
  FUN_10017060f(lVar4);
  if (iVar2 != 0) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x440));
    *(undefined8 *)(param_1 + 0x440) = 0;
  }
  FUN_10036d4d2(lVar3);
  uVar5 = FUN_10036db97(iVar2);
LAB_1003757ce:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

