// name: FUN_10037331f
// address: 10037331f

int FUN_10037331f(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int local_89c;
  undefined4 local_898;
  int local_894;
  undefined2 uStack_890;
  undefined2 uStack_88e;
  undefined2 uStack_88c;
  int iStack_88a;
  undefined2 uStack_886;
  undefined2 uStack_884;
  undefined6 uStack_882;
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036d859();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x23;
    goto LAB_10037352f;
  }
  iVar2 = FUN_1003739c5(param_1,local_878);
  if (iVar2 == 0) {
    local_89c = FUN_1003779dc(local_878,param_2,&local_458);
    if (local_89c != -0x80) {
      if (local_89c == 0) {
        lVar5 = FUN_10036d2f1(lVar3,0);
        if (lVar5 != 0) {
          lVar6 = FUN_10036e72b(param_1);
          if (lVar6 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_898 = 0x8220202;
              local_894 = 0x7a0a90;
              uStack_890 = 1;
              uStack_88e = 0;
              uStack_88c = 0x822;
              iStack_88a = 0x7c61bb;
              uStack_886 = 1;
              uStack_884 = 0;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_898,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            lVar6 = 0;
          }
          else {
            lVar7 = FUN_10036e72b(&local_458);
            if (lVar7 != 0) {
              uVar4 = _AFCOperationCreateRenamePath(DAT_1008c4d90,lVar6,lVar7,0);
              local_89c = FUN_10036ed41(lVar5,uVar4);
              if (local_89c != -0x80) {
                if (local_89c == 0) {
                  local_89c = 0;
                  if (param_4 != (void *)0x0) {
                    _memcpy(param_4,&local_458,0x420);
                  }
                  goto LAB_1003734f2;
                }
                uVar8 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar8,0x10);
                if (cVar1 != '\0') {
                  local_898 = 0x8220202;
                  local_894 = 0x7a0a90;
                  uStack_890 = 1;
                  uStack_88e = 0;
                  uStack_88c = 0x400;
                  iStack_88a = local_89c;
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_898,
                                      0x12);
                }
              }
              cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
              if (cVar1 != '\0') {
                local_898 = 0x4000302;
                uStack_890 = 0x842;
                uStack_88e = (undefined2)lVar6;
                uStack_88c = (undefined2)((ulong)lVar6 >> 0x10);
                iStack_88a = (int)((ulong)lVar6 >> 0x20);
                uStack_886 = 0x800;
                uStack_884 = (undefined2)lVar5;
                uStack_882 = (undefined6)((ulong)lVar5 >> 0x10);
                local_894 = local_89c;
                __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                                    "AFC RenamePath failed (0x%08X) for \"%{public}@\" with connection %p"
                                    ,&local_898,0x1c);
              }
              goto LAB_1003734f2;
            }
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_898 = 0x8220202;
              local_894 = 0x7a0a90;
              uStack_890 = 1;
              uStack_88e = 0;
              uStack_88c = 0x822;
              iStack_88a = 0x7c61d1;
              uStack_886 = 1;
              uStack_884 = 0;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_898,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          local_89c = -0x17ffbffd;
          uVar4 = 0;
          lVar7 = 0;
          goto LAB_1003734f2;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_898 = 0x8220202;
          local_894 = 0x7a0a90;
          uStack_890 = 1;
          uStack_88e = 0;
          uStack_88c = 0x822;
          iStack_88a = 0x7c5917;
          uStack_886 = 1;
          uStack_884 = 0;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_898,0x16);
        }
        FUN_1001782e9(0,0);
        local_89c = -0x17ffbfe9;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_898 = 0x8220202;
          local_894 = 0x7a0a90;
          uStack_890 = 1;
          uStack_88e = 0;
          uStack_88c = 0x400;
          iStack_88a = local_89c;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_898,0x12);
        }
      }
    }
    uVar4 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x400;
      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
    }
    uVar4 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    local_89c = 0;
  }
LAB_1003734f2:
  FUN_10017060f(uVar4);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar5);
  FUN_10036d4d2(lVar3);
  if (iVar2 == 0) {
    iVar2 = FUN_10036db97(local_89c);
  }
LAB_10037352f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

