// name: FUN_10036dfdc
// address: 10036dfdc

int FUN_10036dfdc(undefined8 param_1,char *param_2,short *param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  short *psVar12;
  bool bVar13;
  bool bVar14;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 uStack_260;
  undefined2 local_25c;
  undefined2 local_25a;
  undefined2 uStack_258;
  undefined6 uStack_256;
  ulong local_250;
  ulong local_248;
  short local_238 [2];
  int local_234;
  undefined2 uStack_230;
  undefined2 uStack_22e;
  undefined2 uStack_22c;
  undefined4 uStack_22a;
  undefined2 uStack_226;
  undefined2 uStack_224;
  undefined6 uStack_222;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_10036d859();
  if (lVar5 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_238[0] = 0x202;
      local_238[1] = 0x822;
      local_234 = 0x7a0a90;
      uStack_230 = 1;
      uStack_22e = 0;
      uStack_22c = 0x822;
      uStack_22a = 0x7c589d;
      uStack_226 = 1;
      uStack_224 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x23;
    goto LAB_10036e5d8;
  }
  lVar6 = FUN_10036d2f1(lVar5,0);
  if (lVar6 == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_238[0] = 0x202;
      local_238[1] = 0x822;
      local_234 = 0x7a0a90;
      uStack_230 = 1;
      uStack_22e = 0;
      uStack_22c = 0x822;
      uStack_22a = 0x7c5917;
      uStack_226 = 1;
      uStack_224 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_238,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x17ffbfe9;
LAB_10036e1a3:
    uVar8 = 0;
    lVar7 = 0;
    iVar4 = 0;
  }
  else {
    lVar7 = FUN_10036e72b(param_1);
    if (lVar7 == 0) {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        local_238[0] = 0x202;
        local_238[1] = 0x822;
        local_234 = 0x7a0a90;
        uStack_230 = 1;
        uStack_22e = 0;
        uStack_22c = 0x822;
        uStack_22a = 0x7a0ee9;
        uStack_226 = 1;
        uStack_224 = 0;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_238,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x17ffbffd;
      goto LAB_10036e1a3;
    }
    uVar8 = _AFCOperationCreateGetFileInfo(DAT_1008c4d90,lVar7,0);
    iVar3 = FUN_10036ed41(lVar6,uVar8);
    if (iVar3 == 0) {
      uVar9 = _AFCOperationGetResultObject(uVar8);
      lVar10 = FUN_1001705e9(uVar9);
      lVar11 = _CFDictionaryGetTypeID();
      if (lVar10 == lVar11) {
        bVar13 = param_3 == (short *)0x0;
        bVar14 = param_2 != (char *)0x0;
        psVar12 = param_3;
        if (bVar14 && bVar13) {
          psVar12 = local_238;
        }
        if ((psVar12 == (short *)0x0) || (iVar4 = FUN_1003714b1(param_1,psVar12), iVar4 == 0)) {
          iVar4 = 0;
          if (param_2 != (char *)0x0) {
            FUN_1001c62d9(&local_268,0x28);
            FUN_1001714c2(uVar9,FUN_10037a3d5,&local_268);
            FUN_1001c62d9(param_2,0x50);
            *param_2 = (char)local_268;
            param_2[2] = local_268._1_1_;
            uVar1 = CONCAT62(uStack_256,uStack_258);
            if (uVar1 != 0) {
              iVar3 = -1;
              if (uVar1 < 0x1eb309b095bb0000) {
                iVar3 = (int)(uVar1 / 1000000000) + 0x7c25b080;
              }
              *(int *)(param_2 + 4) = iVar3;
            }
            if (local_250 != 0) {
              iVar3 = -1;
              if (local_250 < 0x1eb309b095bb0000) {
                iVar3 = (int)(local_250 / 1000000000) + 0x7c25b080;
              }
              *(int *)(param_2 + 8) = iVar3;
            }
            if (local_248 != 0) {
              iVar3 = -1;
              if (local_248 < 0x1eb309b095bb0000) {
                iVar3 = (int)(local_248 / 1000000000) + 0x7c25b080;
              }
              *(int *)(param_2 + 0x10) = iVar3;
            }
            if ((char)local_268 == '\0') {
              *(ulong *)(param_2 + 0x20) = CONCAT26(local_25a,CONCAT24(local_25c,uStack_260));
              if (*psVar12 != 0) {
                if (bVar14 && bVar13) {
                  param_3 = local_238;
                }
                lVar10 = 0x38;
                goto LAB_10036e578;
              }
            }
            else {
              cVar2 = FUN_100373904(lVar5 + 0x10,param_1,0);
              if (cVar2 != '\0') {
                param_2[1] = '\x01';
              }
              if (*psVar12 != 0) {
                if (bVar14 && bVar13) {
                  param_3 = local_238;
                }
                lVar10 = 0x28;
LAB_10036e578:
                if (param_3[1] == 0x2e) {
                  param_2[lVar10 + 1] = param_2[lVar10 + 1] | 0x40;
                }
              }
            }
            FUN_10017d7a3(param_1,param_2);
          }
          iVar3 = 0;
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          iVar3 = 0;
          if (cVar2 != '\0') {
            local_268 = 0x8220202;
            local_264 = 0x7a0a90;
            uStack_260 = 1;
            local_25c = 0x400;
            local_25a = (undefined2)iVar4;
            uStack_258 = (undefined2)((uint)iVar4 >> 0x10);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_268,0x12);
          }
        }
      }
      else {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_238[0] = 0x202;
          local_238[1] = 0x822;
          local_234 = 0x7a0a90;
          uStack_230 = 1;
          uStack_22e = 0;
          uStack_22c = 0x822;
          uStack_22a = 0x7c6855;
          uStack_226 = 1;
          uStack_224 = 0;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",local_238,0x16);
        }
        iVar4 = 0;
        FUN_1001782e9(0,0);
        iVar3 = -0x17ffbfe9;
      }
    }
    else if ((iVar3 == -0x17ffbff8) && (*(long *)(lVar5 + 0x6b0) == 0)) {
      iVar3 = -0x17ffbff8;
      iVar4 = 0;
    }
    else {
      cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      iVar4 = 0;
      if (cVar2 != '\0') {
        local_238[0] = 0x302;
        local_238[1] = 0x400;
        uStack_230 = 0x842;
        uStack_22e = (undefined2)lVar7;
        uStack_22c = (undefined2)((ulong)lVar7 >> 0x10);
        uStack_22a = (undefined4)((ulong)lVar7 >> 0x20);
        uStack_226 = 0x800;
        uStack_224 = (undefined2)lVar6;
        uStack_222 = (undefined6)((ulong)lVar6 >> 0x10);
        local_234 = iVar3;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AFC GetFileInfo failed (0x%08X) for \"%{public}@\" with connection %p",
                            local_238,0x1c);
      }
    }
  }
  FUN_10017060f(uVar8);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar6);
  FUN_10036d4d2(lVar5);
  if (iVar4 == 0) {
    iVar4 = FUN_10036db97(iVar3);
  }
LAB_10036e5d8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

