// name: FUN_100378a7c
// address: 100378a7c

int FUN_100378a7c(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  int local_4a;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_2,0x28);
  lVar3 = FUN_10036d2f1(param_1,0);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7c5917;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar4 = 0;
LAB_100378cb2:
    FUN_1001782e9(0,0);
    iVar2 = -0x17ffbfe9;
  }
  else {
    uVar4 = _AFCOperationCreateGetDeviceInfo(DAT_1008c4d90,0);
    iVar2 = FUN_10036ed41(lVar3,uVar4);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        uVar5 = _AFCOperationGetResultObject(uVar4);
        lVar6 = FUN_1001705e9(uVar5);
        lVar7 = _CFDictionaryGetTypeID();
        if (lVar6 == lVar7) {
          FUN_1001714c2(uVar5,FUN_100378ec9,param_2);
          if ((int)param_2[2] == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              local_4c = 0x822;
              local_4a = 0x7c64de;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            *(undefined4 *)(param_2 + 2) = 0x1000;
          }
          uVar9 = *param_2;
          if (uVar9 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              local_4c = 0x822;
              local_4a = 0x7c64fd;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            uVar9 = 0x100000000;
            FUN_1001782e9(0,0);
            *param_2 = 0x100000000;
          }
          uVar8 = param_2[1];
          if (uVar8 == 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              local_4c = 0x822;
              local_4a = 0x7c651d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar8 = 0x80000000;
            param_2[1] = 0x80000000;
            uVar9 = *param_2;
          }
          iVar2 = 0;
          param_2[3] = uVar9 / (uint)param_2[2];
          param_2[4] = uVar8 / (uint)param_2[2];
          goto LAB_100378cc1;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4e = 0;
          local_4c = 0x822;
          local_4a = 0x7c64a9;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        goto LAB_100378cb2;
      }
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x4000200;
      uStack_50 = 0x800;
      uStack_4e = (undefined2)lVar3;
      local_4c = (undefined2)((ulong)lVar3 >> 0x10);
      local_4a = (int)((ulong)lVar3 >> 0x20);
      local_54 = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AFC GetDeviceInfo failed (0x%08X) with connection %p",&local_58,0x12);
    }
  }
LAB_100378cc1:
  FUN_10017060f(uVar4);
  FUN_10017060f(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

