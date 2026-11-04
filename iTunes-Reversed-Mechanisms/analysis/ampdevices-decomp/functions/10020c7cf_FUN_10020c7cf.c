// name: FUN_10020c7cf
// address: 10020c7cf

int FUN_10020c7cf(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 local_10e0 [15];
  undefined1 local_10d1;
  code *local_10b0;
  undefined8 local_10a8;
  undefined1 local_1090 [16];
  undefined1 local_1080 [16];
  undefined8 local_1070;
  undefined1 local_1068 [16];
  undefined4 local_1058;
  char *local_1054;
  undefined2 local_104c;
  char *local_104a;
  undefined1 local_1030 [32];
  undefined1 local_1010 [16];
  undefined1 local_1000 [48];
  undefined1 local_fd0 [18];
  undefined4 local_fbe;
  char local_eb8;
  undefined1 local_e98 [1056];
  undefined1 local_a78 [1056];
  undefined1 local_658 [1056];
  undefined1 local_238 [504];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10020c7e7;
  auVar9 = FUN_100108310();
  lVar8 = auVar9._8_8_;
  lVar1 = -auVar9._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c812;
  local_1070 = param_2;
  iVar4 = FUN_10017d489();
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c836;
      iVar4 = FUN_10017d5ba(param_1,local_658);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c861;
          lVar5 = FUN_100165eef(DAT_1008c4d90,param_1,0,0);
          if (lVar5 != 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c878;
            lVar6 = _MISProfileCreateWithData(DAT_1008c4d90,lVar5);
            if (lVar6 == 0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c9e6;
              uVar7 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c9f6;
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                local_1058 = 0x8220202;
                local_1054 = "Assertion failure";
                local_104c = 0x822;
                local_104a = "profile != __null";
                *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cdfd;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1058,
                                    0x16);
              }
              *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ca07;
              FUN_1001782e9(0,0);
              iVar4 = -0x32;
              lVar6 = 0;
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c890;
              iVar4 = _MISProvisioningProfileCheckValidity(lVar6,0,0);
              if (iVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ca28;
                iVar4 = FUN_1003870d4(0x35,3,local_a78);
                if (iVar4 != -0x80) {
                  if (iVar4 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ca50;
                    cVar2 = FUN_10017f77e(local_658,local_a78);
                    iVar4 = 0;
                    if (cVar2 != '\0') goto LAB_10020c9a8;
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ca72;
                    iVar4 = FUN_10017ecc9(local_a78,local_238,0,0);
                    if (iVar4 == 0) {
                      if ((lVar8 == 0) || (sVar3 = *(short *)(lVar8 + 0xb4), sVar3 == 0)) {
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ca9c;
                        FUN_10044eef2(&local_1058);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020caad;
                        FUN_1001c334a(local_1090,0x10d00001);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cac0;
                        FUN_1001b8dfc(local_1080,local_238);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cada;
                        FUN_1001bbec4(local_1068,local_1090,local_1080);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020caed;
                        FUN_1001b80b2(local_1030,local_1068);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020caf9;
                        FUN_1001b7a50(local_1068);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb05;
                        FUN_1001b7a50(local_1080);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb11;
                        FUN_1001b7a50(local_1090);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb22;
                        FUN_1001c334a(local_1068,0x5db30011);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb35;
                        FUN_1001b80b2(local_1010,local_1068);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb41;
                        FUN_1001b7a50(local_1068);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb52;
                        FUN_1001c334a(local_1068,0x5db30012);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb65;
                        FUN_1001b80b2(local_1000,local_1068);
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb71;
                        FUN_1001b7a50(local_1068);
                        local_fbe = 0x20001;
                        if (lVar8 != 0) {
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cb91;
                          FUN_1001c334a(local_1068,0x10cf0033);
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cba4;
                          FUN_1001b80b2(local_fd0,local_1068);
                          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cbb0;
                          FUN_1001b7a50(local_1068);
                        }
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cbbc;
                        sVar3 = FUN_10044f1a0(&local_1058);
                        if ((lVar8 != 0) && (local_eb8 != '\0')) {
                          *(short *)(lVar8 + 0xb4) = sVar3;
                        }
                        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cbe1;
                        FUN_10020dfaa(&local_1058);
                      }
                      iVar4 = -0x80;
                      if (sVar3 != 1) goto LAB_10020c9a8;
                    }
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cc05;
                    FUN_1001c62d9(local_10e0,0x50);
                    local_10d1 = 0;
                    local_10b0 = FUN_10020ce6e;
                    local_10a8 = local_1070;
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cc42;
                    iVar4 = FUN_100182f89(1,param_1,local_a78,local_e98);
                    if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_10020c9a8;
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cc5c;
                    uVar7 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cc6c;
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_10020c9a8;
                    local_104a = (char *)CONCAT44(local_104a._4_4_,iVar4);
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ccad;
                    uVar7 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar1) = 0x10020ccbd;
                    cVar2 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar2 == '\0') goto LAB_10020c9a8;
                    local_104a = (char *)CONCAT44(local_104a._4_4_,iVar4);
                  }
                  local_104c = 0x400;
                  local_1054 = "Assertion failure";
                  local_1058 = 0x8220202;
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cd0a;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_1058,
                                      0x12);
                }
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c8a0;
                uVar7 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c8b0;
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_1058 = 0x8220202;
                  local_1054 = "Assertion failure";
                  local_104c = 0x822;
                  local_104a = "misError == kMISNoError";
                  *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cdac;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1058,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c8c1;
                FUN_1001782e9(0,0);
              }
            }
            goto LAB_10020c9a8;
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c97c;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c98c;
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_1058 = 0x8220202;
            local_1054 = "Assertion failure";
            local_104c = 0x822;
            local_104a = "profileData != __null";
            *(undefined8 *)((long)&local_38 + lVar1) = 0x10020cd5b;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1058,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c99d;
          FUN_1001782e9(0,0);
          iVar4 = -0x2b;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c91c;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c92c;
          cVar2 = _os_log_type_enabled(uVar7,0x10);
          if (cVar2 != '\0') {
            local_104a = (char *)CONCAT44(local_104a._4_4_,iVar4);
            goto LAB_10020c962;
          }
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c8cb;
      uVar7 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c8db;
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_104a = (char *)CONCAT44(local_104a._4_4_,iVar4);
LAB_10020c962:
        local_104c = 0x400;
        local_1054 = "Assertion failure";
        local_1058 = 0x8220202;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c975;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_1058,0x12);
      }
    }
  }
  lVar6 = 0;
  lVar5 = 0;
LAB_10020c9a8:
  *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c9b0;
  FUN_10017060f(lVar6);
  *(undefined8 *)((long)&local_38 + lVar1) = 0x10020c9b8;
  FUN_10017060f(lVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar1) = &UNK_10020ce07;
  ___stack_chk_fail();
}

