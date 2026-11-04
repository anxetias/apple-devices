// name: FUN_1003c703a
// address: 1003c703a

undefined8 FUN_1003c703a(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  CC_LONG CVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *data;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_518 [1056];
  uchar local_f8 [32];
  undefined1 local_d8 [12];
  undefined2 local_cc;
  char *local_ca;
  CC_LONG local_70;
  undefined1 local_6c [20];
  CC_LONG local_58;
  CC_LONG CStack_54;
  CC_LONG CStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1001888ba(param_2,"StorePurchasesInfo.plist",local_518,0);
  if (iVar2 == 0) {
    lVar5 = FUN_10016aa24(DAT_1008c4d90,local_518,0,0);
    if (lVar5 != 0) {
      lVar6 = FUN_10016696d(lVar5,&cf_data);
      if (lVar6 == 0) {
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_ca = "xmlData != nullptr";
LAB_1003c750b:
          local_cc = 0x822;
          local_d8._4_8_ = "Assertion failure";
          local_d8._0_4_ = 0x8220202;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_d8,0x16);
        }
      }
      else {
        lVar7 = FUN_10016696d(lVar5,&cf_cbk);
        if (lVar7 != 0) {
          FUN_1001c62d9(&local_70,0x18);
          local_70 = *(CC_LONG *)(param_1 + 0x71b4);
          FUN_1001c631b(param_1 + 0x71a0,local_6c);
          if (*(ushort *)(param_1 + 0x40c) < 4) {
            local_58 = 0;
            CStack_54 = 0;
            iVar2 = FUN_10009b1b0(&local_58,&local_70);
            if (iVar2 != -0x80) {
              if (iVar2 != 0) {
                uVar8 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar8,0x10);
                if (cVar1 != '\0') {
                  local_d8._0_4_ = 0x8220202;
                  local_d8._4_8_ = "Assertion failure";
                  local_cc = 0x400;
                  local_ca = (char *)CONCAT44(local_ca._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_d8,0x12
                                     );
                }
                if (iVar2 != 0) goto LAB_1003c73e8;
              }
              uVar8 = CONCAT44(CStack_54,local_58);
              uVar9 = FUN_100170f3b(lVar6);
              uVar4 = FUN_100170ef7(lVar6);
              iVar2 = FUN_10007de00(uVar8,uVar9,uVar4);
              if (iVar2 != -0x80) {
                if (iVar2 != 0) {
                  uVar8 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar1 != '\0') {
                    local_d8._0_4_ = 0x8220202;
                    local_d8._4_8_ = "Assertion failure";
                    local_cc = 0x400;
                    local_ca = (char *)CONCAT44(local_ca._4_4_,iVar2);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_d8,
                                        0x12);
                  }
                  if (iVar2 != 0) goto LAB_1003c73e8;
                }
                uVar8 = CONCAT44(CStack_54,local_58);
                uVar9 = FUN_100170f3b(lVar7);
                uVar4 = FUN_100170ef7(lVar7);
                iVar2 = FUN_1000c2d60(uVar8,uVar9,uVar4);
              }
            }
          }
          else {
            iVar2 = _CC_SHA1_Init((CC_SHA1_CTX *)local_d8);
            if (iVar2 == 1) {
              data = (void *)FUN_100170f3b(lVar6);
              CVar3 = FUN_100170ef7(lVar6);
              iVar2 = _CC_SHA1_Update((CC_SHA1_CTX *)local_d8,data,CVar3);
              if ((iVar2 == 1) &&
                 (iVar2 = _CC_SHA1_Final(local_f8,(CC_SHA1_CTX *)local_d8), CVar3 = local_70,
                 iVar2 == 1)) {
                uVar8 = FUN_100170f3b(lVar7);
                uVar9 = FUN_100170ef7(lVar7);
                iVar2 = FUN_1000bca30(0,0,local_6c,CVar3,local_f8,0x14,uVar8,uVar9);
                goto LAB_1003c73e8;
              }
            }
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              CStack_54 = 0x7a0a90;
              CStack_50 = 1;
              local_4c = 0x822;
              local_4a = "shaResult == 1";
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = 0x463;
          }
LAB_1003c73e8:
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              uVar8 = FUN_10016a9bd(DAT_1008c4d90,lVar6,1,0);
              goto LAB_1003c70e2;
            }
            uVar8 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar8,0x10);
            if (cVar1 != '\0') {
              local_d8._0_4_ = 0x8220202;
              local_d8._4_8_ = "Assertion failure";
              local_cc = 0x400;
              local_ca = (char *)CONCAT44(local_ca._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_d8,0x12);
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar8 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            local_d8._0_4_ = 0x4000100;
            local_d8._4_4_ = iVar2;
            __os_log_impl(0x100000000,uVar8,0x10,"sync> purchases verification failed (%d)",local_d8
                          ,8);
          }
          goto LAB_1003c70df;
        }
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_ca = "candyData != nullptr";
          goto LAB_1003c750b;
        }
      }
      uVar8 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1003c70e2;
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 != '\0') {
      local_d8._0_4_ = 0x8220202;
      local_d8._4_8_ = "Assertion failure";
      local_cc = 0x822;
      local_ca = "fileDict != nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_d8,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar8 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_d8._0_4_ = 0x4000100;
      local_d8._4_4_ = iVar2;
      __os_log_impl(0x100000000,uVar8,1,"sync> failed to find StorePurchasesInfo.plist (%d)",
                    local_d8,8);
    }
    lVar5 = 0;
  }
LAB_1003c70df:
  uVar8 = 0;
LAB_1003c70e2:
  FUN_10017060f(lVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

