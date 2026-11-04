// name: FUN_1003c7866
// address: 1003c7866

int FUN_1003c7866(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  CC_LONG len;
  undefined4 uVar3;
  ulong uVar4;
  void *data;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 local_13c;
  int local_138;
  char *local_134;
  undefined2 local_12c;
  int local_12a;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined8 local_d8 [4];
  undefined1 local_b8 [12];
  undefined2 local_ac;
  char *local_aa;
  undefined8 local_58;
  CC_LONG local_50 [6];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = FUN_10016aaf8(DAT_1008c4d90,param_2,0);
  if (uVar4 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_b8._0_4_ = 0x8220202;
      local_b8._4_8_ = "Assertion failure";
      local_ac = 0x822;
      local_aa = "xmlData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_b8,0x16);
    }
    uVar5._0_4_ = 0;
    uVar5._4_4_ = 0;
    FUN_1001782e9(0,0);
    iVar2 = -0xd0;
  }
  else {
    FUN_1001c62d9(&local_58,0x18);
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1 + 0x71b4));
    FUN_1001c631b(param_1 + 0x71a0,(long)&local_58 + 4);
    if (*(ushort *)(param_1 + 0x40c) < 4) {
      local_d8[0] = 0;
      local_138 = 0x14;
      iVar2 = FUN_10009b1b0(local_d8,&local_58);
      if (iVar2 != -0x80) {
        if (iVar2 != 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_b8._0_4_ = 0x8220202;
            local_b8._4_8_ = "Assertion failure";
            local_ac = 0x400;
            local_aa = (char *)CONCAT44(local_aa._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_b8,0x12);
          }
          if (iVar2 != 0) goto LAB_1003c7b16;
        }
        uVar5 = local_d8[0];
        uVar6 = FUN_100170f3b(uVar4);
        uVar3 = FUN_100170ef7(uVar4);
        iVar2 = FUN_10007de00(uVar5,uVar6,uVar3);
        if (iVar2 != -0x80) {
          if (iVar2 != 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_b8._0_4_ = 0x8220202;
              local_b8._4_8_ = "Assertion failure";
              local_ac = 0x400;
              local_aa = (char *)CONCAT44(local_aa._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_b8,0x12);
            }
            if (iVar2 != 0) goto LAB_1003c7b16;
          }
          iVar2 = FUN_1000a19d0(local_d8[0],&local_118,&local_138);
          if (iVar2 == -0x80) goto LAB_1003c7b16;
          if (iVar2 != 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_b8._0_4_ = 0x8220202;
              local_b8._4_8_ = "Assertion failure";
              local_ac = 0x400;
              local_aa = (char *)CONCAT44(local_aa._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_b8,0x12);
            }
            if (iVar2 != 0) goto LAB_1003c7b16;
          }
          if (local_138 == 0x14) {
            uVar3 = 0x14;
            goto LAB_1003c7ce4;
          }
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            puVar9 = (undefined4 *)local_b8;
            local_b8._0_4_ = 0x8220202;
            local_b8._4_8_ = "Assertion failure";
            local_ac = 0x822;
            pcVar8 = "candyLength == 20";
            goto LAB_1003c7d6c;
          }
          goto LAB_1003c7b38;
        }
      }
LAB_1003c7b16:
      uVar5._0_4_ = 0;
      uVar5._4_4_ = 0;
    }
    else {
      iVar2 = _CC_SHA1_Init((CC_SHA1_CTX *)local_b8);
      if (iVar2 == 1) {
        data = (void *)FUN_100170f3b(uVar4);
        len = FUN_100170ef7(uVar4);
        iVar2 = _CC_SHA1_Update((CC_SHA1_CTX *)local_b8,data,len);
        if ((iVar2 != 1) ||
           (iVar2 = _CC_SHA1_Final((uchar *)local_d8,(CC_SHA1_CTX *)local_b8), iVar2 != 1))
        goto LAB_1003c7b1b;
        local_13c = 0x39;
        uVar5._0_4_ = 0;
        uVar5._4_4_ = 0;
        iVar2 = FUN_10008be20(3 - (uint)(*(ushort *)(param_1 + 0x40c) < 5),0,(long)&local_58 + 4,
                              local_58 & 0xffffffff,local_d8,0x14,&local_118,&local_13c);
        if (iVar2 != -0x80) {
          uVar3 = local_13c;
          if (iVar2 != 0) {
            uVar5 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar5,0x10);
            if (cVar1 != '\0') {
              local_138 = 0x8220202;
              local_134 = "Assertion failure";
              local_12c = 0x400;
              local_12a = iVar2;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_138,0x12);
            }
            uVar3 = local_13c;
            if (iVar2 != 0) goto LAB_1003c7b16;
          }
LAB_1003c7ce4:
          uVar5 = FUN_100170dc5(DAT_1008c4d90,&local_118,uVar3);
          iVar2 = 0;
        }
      }
      else {
LAB_1003c7b1b:
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          puVar9 = &local_118;
          local_118 = 0x8220202;
          uStack_114 = 0x7a0a90;
          local_110 = 1;
          uStack_10c = 0x822;
          pcVar8 = "shaResult == 1";
LAB_1003c7d6c:
          *(char **)((long)puVar9 + 0xe) = pcVar8;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",puVar9,0x16);
        }
LAB_1003c7b38:
        uVar5._0_4_ = 0;
        uVar5._4_4_ = 0;
        FUN_1001782e9(0,0);
        iVar2 = 0x463;
      }
    }
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        local_118 = 0x872e50;
        uStack_114 = 1;
        local_110 = 0x87e990;
        uStack_10c = 1;
        uStack_10a = 0;
        local_58 = uVar4;
        local_50._0_8_ = uVar5;
        uVar6 = FUN_1001713ff(DAT_1008c4d90,&local_118,&local_58,2,
                              PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        iVar2 = FUN_10016a60e(uVar6,param_3,"StorePurchasesInfo.plist",0,0,100,0);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) goto LAB_1003c7c79;
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_b8._0_4_ = 0x8220202;
            local_b8._4_8_ = "Assertion failure";
            local_ac = 0x400;
            local_aa = (char *)CONCAT44(local_aa._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_b8,0x12);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_b8._0_4_ = 0x4000100;
          local_b8._4_4_ = iVar2;
          __os_log_impl(0x100000000,uVar7,1,"sync> failed to save StorePurchasesInfo.plist (%d)",
                        local_b8,8);
        }
        goto LAB_1003c7c79;
      }
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_b8._0_4_ = 0x8220202;
        local_b8._4_8_ = "Assertion failure";
        local_ac = 0x400;
        local_aa = (char *)CONCAT44(local_aa._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",local_b8,0x12);
      }
    }
  }
  uVar6 = 0;
LAB_1003c7c79:
  FUN_10017060f(0);
  FUN_10017060f(uVar6);
  FUN_10017060f(uVar5);
  FUN_10017060f(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

