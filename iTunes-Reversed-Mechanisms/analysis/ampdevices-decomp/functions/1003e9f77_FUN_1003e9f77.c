// name: FUN_1003e9f77
// address: 1003e9f77

int FUN_1003e9f77(long param_1,int param_2,undefined4 param_3)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CC_LONG *pCVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_230;
  ulong local_228;
  undefined4 local_220;
  undefined4 local_21c;
  ulong local_218;
  ulong local_210;
  long local_208;
  void *local_200;
  undefined4 local_1f8;
  char *local_1f4;
  undefined2 local_1ec;
  int local_1ea;
  uchar local_1d8 [32];
  undefined1 local_1b8 [12];
  undefined2 local_1ac;
  int local_1aa;
  CC_LONG local_158;
  char *local_154;
  undefined2 local_14c;
  char *local_14a;
  undefined1 local_140 [26];
  undefined1 local_126 [38];
  undefined1 local_100 [26];
  undefined1 local_e6 [57];
  undefined1 local_ad [85];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_218 = 0;
  uVar7 = 0x39;
  lVar9 = param_1 + 0x1000db;
  if (param_2 == 2) {
    uVar7 = 0x2e;
    lVar9 = param_1 + 0x1000a2;
  }
  uVar10 = 0xe4;
  if (param_2 == 2) {
    uVar10 = 0xa0;
  }
  local_220 = uVar7;
  local_21c = param_3;
  local_208 = param_1;
  iVar3 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_230);
  if (iVar3 == -0x80) goto LAB_1003ea128;
  if (iVar3 != 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_158 = 0x8220202;
      local_154 = "Assertion failure";
      local_14c = 0x400;
      local_14a = (char *)CONCAT44(local_14a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_158,0x12);
    }
    goto LAB_1003ea128;
  }
  iVar3 = FUN_100160c3f(*(undefined8 *)(local_208 + 0x100000),&local_218);
  if (iVar3 == -0x80) {
LAB_1003ea0ff:
    pvVar5 = (void *)0x0;
  }
  else {
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        pCVar8 = &local_158;
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x400;
        local_14a = (char *)CONCAT44(local_14a._4_4_,iVar3);
        goto LAB_1003ea45c;
      }
      goto LAB_1003ea0ff;
    }
    if (local_218 < uVar10) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_158 = 0x8220202;
        local_154 = "Assertion failure";
        local_14c = 0x822;
        local_14a = "fileSize >= fileHeaderSize";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_158,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x27;
      pvVar5 = (void *)0x0;
      goto LAB_1003ea101;
    }
    FUN_1001c62d9(&local_158,0xf4);
    iVar3 = FUN_100160772(*(undefined8 *)(local_208 + 0x100000),0);
    if (iVar3 == -0x80) goto LAB_1003ea0ff;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        pCVar8 = (CC_LONG *)local_1b8;
        local_1b8._0_4_ = 0x8220202;
        local_1b8._4_8_ = "Assertion failure";
        local_1ac = 0x400;
        local_1aa = iVar3;
LAB_1003ea45c:
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",pCVar8,0x12);
      }
      goto LAB_1003ea0ff;
    }
    local_210 = uVar10;
    iVar3 = FUN_100160380(*(undefined8 *)(local_208 + 0x100000),&local_210,&local_158);
    if (iVar3 == -0x80) goto LAB_1003ea0ff;
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        pCVar8 = (CC_LONG *)local_1b8;
        local_1b8._0_4_ = 0x8220202;
        local_1b8._4_8_ = "Assertion failure";
        local_1ac = 0x400;
        local_1aa = iVar3;
        goto LAB_1003ea45c;
      }
      goto LAB_1003ea0ff;
    }
    FUN_1001c62d9(local_140,8);
    FUN_1001c62d9(local_126,0x14);
    FUN_1001c62d9(local_100,0x14);
    FUN_1001c62d9(local_e6,0x2e);
    FUN_1001c62d9(local_ad,0x39);
    iVar3 = _CC_SHA1_Init((CC_SHA1_CTX *)local_1b8);
    if ((iVar3 == 1) &&
       (iVar3 = _CC_SHA1_Update((CC_SHA1_CTX *)local_1b8,&local_158,(CC_LONG)uVar10), iVar3 == 1)) {
      pvVar5 = (void *)FUN_1001c63e1(0x3e800);
      local_200 = pvVar5;
      if (pvVar5 == (void *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "readBuffer != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x6c;
        pvVar5 = (void *)0x0;
      }
      else {
        uVar1 = local_218 - uVar10;
        uVar10 = local_228;
        while (local_228 = uVar1, local_228 != 0) {
          local_210 = 0x3e800;
          if (local_228 < 0x3e800) {
            local_210 = local_228;
          }
          iVar3 = FUN_100160380(*(undefined8 *)(local_208 + 0x100000),&local_210,pvVar5);
          if (iVar3 != 0) {
            pvVar5 = local_200;
            if (iVar3 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              pvVar5 = local_200;
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            goto LAB_1003ea101;
          }
          iVar3 = _CC_SHA1_Update((CC_SHA1_CTX *)local_1b8,pvVar5,(CC_LONG)local_210);
          if (iVar3 != 1) goto LAB_1003ea57c;
          uVar10 = local_228;
          uVar1 = local_228 - local_210;
        }
        local_228 = uVar10;
        iVar3 = _CC_SHA1_Final(local_1d8,(CC_SHA1_CTX *)local_1b8);
        if (iVar3 == 1) {
          iVar3 = FUN_1003f9677(local_208,&local_58);
          pvVar5 = local_200;
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              uVar6 = 0x18;
              if (param_2 != 2) {
                uVar6 = local_58;
              }
              if ((char)local_21c == '\0') {
                iVar3 = FUN_10008be20(param_2,0,&local_58 + (param_2 != 2),uVar6,local_1d8,0x14,
                                      lVar9,&local_220);
                pvVar5 = local_200;
                if ((iVar3 != -0x80) && (iVar3 != 0)) {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  goto joined_r0x0001003ea689;
                }
              }
              else {
                iVar3 = FUN_1000bca30(param_2,0,&local_58 + (param_2 != 2),uVar6,local_1d8,0x14,
                                      lVar9,uVar7);
                pvVar5 = local_200;
                if ((iVar3 != -0x80) && (iVar3 != 0)) {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  goto joined_r0x0001003ea689;
                }
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
joined_r0x0001003ea689:
              pvVar5 = local_200;
              if (cVar2 != '\0') {
                local_1ec = 0x400;
                local_1f4 = "Assertion failure";
                local_1f8 = 0x8220202;
                local_1ea = iVar3;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_1f8,0x12
                                   );
                pvVar5 = local_200;
              }
            }
          }
        }
        else {
LAB_1003ea57c:
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "shaResult == 1";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = 0x463;
          pvVar5 = local_200;
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "shaResult == 1";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = 0x463;
      pvVar5 = (void *)0x0;
    }
  }
LAB_1003ea101:
  FUN_100160772(*(undefined8 *)(local_208 + 0x100000),local_230);
  if (pvVar5 != (void *)0x0) {
    FUN_1001c64c1(pvVar5);
  }
LAB_1003ea128:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

