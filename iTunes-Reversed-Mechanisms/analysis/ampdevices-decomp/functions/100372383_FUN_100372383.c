// name: FUN_100372383
// address: 100372383

undefined4
FUN_100372383(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 local_5c;
  int local_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined2 local_50;
  long local_4e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10017cbd0();
  if ((cVar2 == '\0') || (*param_1 != 0x41464350)) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = 0x7a0a90;
      uStack_60 = 1;
      uStack_5e = 0;
      local_5c = 0x822;
      local_5a = 0x7c6137;
      uStack_56 = 1;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
    goto LAB_10037251d;
  }
  iVar3 = FUN_100371d56(param_1,param_2,0,0);
  if (iVar3 == 0) {
    uVar4 = 0xffffffd0;
LAB_10037258d:
    bVar1 = false;
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    local_6c = 0;
  }
  else {
    lVar5 = FUN_10036f8fa(param_1[6]);
    if (lVar5 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        local_64 = 0x7a0a90;
        uStack_60 = 1;
        uStack_5e = 0;
        local_5c = 0x822;
        local_5a = 0x7c589d;
        uStack_56 = 1;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffffdd;
      goto LAB_10037258d;
    }
    local_6c = FUN_1003779dc(param_1,param_2,param_5);
    if (local_6c == -0x80) {
      bVar1 = true;
      lVar8 = 0;
      uVar4 = 0;
      lVar7 = 0;
      lVar6 = 0;
    }
    else {
      if (local_6c == 0) {
        lVar6 = FUN_10036d2f1(lVar5,0);
        if (lVar6 == 0) {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_68 = 0x8220202;
            local_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5e = 0;
            local_5c = 0x822;
            local_5a = 0x7c5917;
            uStack_56 = 1;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
          local_6c = -0x17ffbfe9;
          goto LAB_10037266d;
        }
        lVar7 = FUN_10036e72b(param_5);
        if (lVar7 == 0) {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_68 = 0x8220202;
            local_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5e = 0;
            local_5c = 0x822;
            local_5a = 0x7a0ee9;
            uStack_56 = 1;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          lVar8 = 0;
          FUN_1001782e9(0,0);
          local_6c = -0x17ffbffd;
          lVar7 = 0;
        }
        else {
          lVar8 = _AFCOperationCreateOpenFile(DAT_1008c4d90,lVar7,3,0);
          if (lVar8 == 0) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              local_5c = 0x822;
              local_5a = 0x7c153d;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            lVar8 = 0;
            FUN_1001782e9(0,0);
            local_6c = -0x17ffbffd;
          }
          else {
            local_6c = FUN_10036ed41(lVar6,lVar8);
            if (local_6c == -0x80) {
LAB_100372777:
              cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
              if (cVar2 != '\0') {
                local_68 = 0x4000402;
                uStack_60 = 0x842;
                uStack_5e = (undefined2)lVar7;
                local_5c = (undefined2)((ulong)lVar7 >> 0x10);
                local_5a = (int)((ulong)lVar7 >> 0x20);
                uStack_56 = 0x400;
                uStack_54 = 3;
                uStack_52 = 0;
                local_50 = 0x800;
                local_64 = local_6c;
                local_4e = lVar6;
                __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                    "AFC OpenFile failed (0x%08X) for \"%{public}@\" for mode %d with connection %p"
                                    ,&local_68,0x22);
              }
            }
            else if (local_6c == 0) {
              uVar9 = _AFCOperationGetResultObject(lVar8);
              uVar9 = FUN_1001705fc(uVar9);
              lVar10 = FUN_1001705e9(uVar9);
              lVar11 = _AFCFileDescriptorGetTypeID();
              if (lVar10 == lVar11) {
                FUN_10017060f(lVar8);
                lVar8 = _AFCFileDescriptorCreateCloseOperation(uVar9,0);
                FUN_10036ed41(lVar6,lVar8);
                FUN_10017060f(uVar9);
                local_6c = 0;
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                if (cVar2 != '\0') {
                  local_68 = 0x8220202;
                  local_64 = 0x7a0a90;
                  uStack_60 = 1;
                  uStack_5e = 0;
                  local_5c = 0x822;
                  local_5a = 0x7c6157;
                  uStack_56 = 1;
                  uStack_54 = 0;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                local_6c = -0x17ffbfe9;
              }
            }
            else {
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_68 = 0x8220202;
                local_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                local_5c = 0x400;
                local_5a = local_6c;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,0x12)
                ;
              }
              if (local_6c != -0x17ffbff8) goto LAB_100372777;
              local_6c = -0x17ffbff8;
            }
          }
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_68 = 0x8220202;
          local_64 = 0x7a0a90;
          uStack_60 = 1;
          uStack_5e = 0;
          local_5c = 0x400;
          local_5a = local_6c;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,0x12);
        }
LAB_10037266d:
        lVar8 = 0;
        lVar7 = 0;
        lVar6 = 0;
      }
      bVar1 = true;
      uVar4 = 0;
    }
  }
  FUN_10017060f(lVar8);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  if (lVar5 != 0) {
    FUN_10036d4d2(lVar5);
  }
  if (bVar1) {
    uVar4 = FUN_10036db97(local_6c);
  }
LAB_10037251d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

