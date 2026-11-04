// name: FUN_1004c5c38
// address: 1004c5c38

void FUN_1004c5c38(long param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,char param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 local_ca0 [16];
  undefined1 local_c90 [16];
  undefined8 local_c80;
  undefined8 local_c78;
  uint local_c6c;
  long local_c68;
  long local_c60;
  int local_c58;
  int local_c54;
  long local_c50;
  int local_c44;
  int local_c40;
  uint local_c3c;
  undefined4 local_c38;
  char *local_c34;
  undefined2 local_c2c;
  undefined8 local_c2a;
  int local_c18;
  uint local_c14;
  uint local_c10;
  short local_a38 [256];
  uint local_838;
  char *local_834;
  undefined2 local_82c;
  char *local_82a;
  short local_638 [256];
  short local_438 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_438[0] = 0;
  local_638[0] = 0;
  local_c6c = param_3 & 0xfc000000;
  local_c54 = 0;
  local_c80 = param_4;
  local_c78 = param_5;
  local_c68 = param_6;
  local_c50 = param_1;
  local_c3c = param_3;
  do {
    iVar4 = param_2;
    if (param_2 == 0) {
      iVar4 = 8000;
    }
    local_c40 = param_2;
    local_c60 = FUN_100171475(DAT_1008bfbf8,(long)iVar4);
    if (local_c60 != 0) {
      if (*(long *)(local_c60 + 0x10) == 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_838 = 0x8220202;
          local_834 = "Assertion failure (expected to be not NULL)";
          local_82c = 0x822;
          local_82a = "list->specs";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_838,0x16);
        }
        cVar3 = FUN_1001782e9(0,0);
        if (cVar3 == '\0') goto LAB_1004c5f87;
      }
      if (*(int *)(local_c60 + 8) != 0) {
        lVar8 = 0xc;
        uVar7 = 0;
        do {
          lVar6 = *(long *)(local_c60 + 0x10);
          if (lVar6 == 0) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_838 = 0x8220202;
              local_834 = "Assertion failure";
              local_82c = 0x822;
              local_82a = "spec";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_838,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_1004c62c6;
          }
          local_c44 = local_c54;
          if (local_c54 == 0) {
            local_c44 = *(int *)(lVar6 + -8 + lVar8);
          }
          uVar1 = *(uint *)(lVar6 + -0xc + lVar8);
          local_c58 = *(int *)(lVar6 + -4 + lVar8);
          iVar4 = *(int *)(lVar6 + lVar8);
          uVar2 = local_838 >> 0x10;
          local_838 = uVar2 << 0x10;
          local_a38[0] = 0;
          if (((uVar1 == local_c3c) || (uVar1 == 0)) || (uVar1 == 0xfffffff7 && local_c40 == 0)) {
            if (local_c40 == 0) {
              local_838 = uVar2 << 0x10;
              if (local_c6c == 0xe8000000) {
                lVar6 = _AMDCopyErrorText(local_c3c);
                if (lVar6 != 0) {
                  cVar3 = FUN_100173f7c(lVar6,&cf_kAMD);
                  if (cVar3 == '\0') {
                    FUN_1001e115f(lVar6,&local_838);
                  }
                  FUN_10017060f(lVar6);
                }
                goto LAB_1004c5d9b;
              }
LAB_1004c5da9:
              if (local_c58 != 0) {
                FUN_1001c34b7(local_c58,&local_838);
              }
              if (iVar4 == 0) {
                if ((local_638[0] != 0) && (local_a38[0] == 0)) {
                  FUN_1001e1c39(local_638,local_a38);
                }
              }
              else {
                FUN_1001c34b7(iVar4,local_a38);
                if (local_a38[0] == 0) {
                  uVar5 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar3 != '\0') {
                    local_c38 = 0x8220202;
                    local_c34 = "Assertion failure";
                    local_c2c = 0x822;
                    local_c2a = 
                    "explainStr[0] != 0 && \"No localized string found for specified explanation!\""
                    ;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_c38,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  local_838 = local_838 & 0xffff0000;
                  goto LAB_1004c5e39;
                }
              }
            }
            else {
LAB_1004c5d9b:
              if ((short)local_838 == 0) goto LAB_1004c5da9;
            }
            if (local_438[0] == 0) {
              FUN_1001e1c39(&local_838,local_438);
            }
            else {
              FUN_1001e26e1(" ",local_438);
              FUN_1001e3bc6(&local_838,local_438,0x1ff);
            }
            if (local_c68 != 0) {
              if (param_7 == '\0' || local_c40 != 0) {
                FUN_1001c34b7(0x2af80007,&local_c38);
                FUN_1001e48fe(&local_c38,&local_c38,local_a38);
                FUN_1001e48fe(&local_c38,&local_c38,local_c68);
                FUN_1001e1c39(&local_c38,local_a38);
              }
              else {
                FUN_1001e1c39(local_c68,local_a38);
              }
            }
            FUN_1004c63a9(local_438,0x1ff,local_c80,local_c3c);
            FUN_1004c647e(local_438,0x1ff,local_c78);
            FUN_1004c63a9(local_a38,0xff,local_c80,local_c3c);
            FUN_1004c647e(local_a38,0xff,local_c78);
            FUN_1001b8dfc(local_ca0,local_438);
            FUN_1001b8dfc(local_c90,local_a38);
            FUN_1001b7a5c(&local_c38,local_ca0);
            FUN_1001b7a5c((long)&local_c2a + 2,local_c90);
            local_c18 = local_c44;
            local_c14 = local_c3c;
            local_c10 = param_8;
            if ((param_8 & 2) == 0) {
              uVar7 = *(ulong *)(local_c50 + 0x10);
              if (uVar7 < *(ulong *)(local_c50 + 0x18)) {
                FUN_1004c5b62(uVar7,&local_c38);
                lVar8 = uVar7 + 0x30;
                *(long *)(local_c50 + 0x10) = lVar8;
              }
              else {
                lVar8 = FUN_1004c6d1e(local_c50 + 8,&local_c38);
              }
              *(long *)(local_c50 + 0x10) = lVar8;
            }
            else {
              uVar7 = *(ulong *)(local_c50 + 0x28);
              if (uVar7 < *(ulong *)(local_c50 + 0x30)) {
                FUN_1004c5b62(uVar7,&local_c38);
                lVar8 = uVar7 + 0x30;
                *(long *)(local_c50 + 0x28) = lVar8;
              }
              else {
                lVar8 = FUN_1004c6d1e(local_c50 + 0x20,&local_c38);
              }
              *(long *)(local_c50 + 0x28) = lVar8;
            }
            FUN_1001b7a50((long)&local_c2a + 2);
            FUN_1001b7a50(&local_c38);
            FUN_1001b7a50(local_c90);
            FUN_1001b7a50(local_ca0);
            goto LAB_1004c62c6;
          }
LAB_1004c5e39:
          if (((uVar1 == 0xfffffff7) && (local_c40 != 0)) && (uVar7 == *(int *)(local_c60 + 8) - 1))
          {
            if (local_c58 == 0) {
              local_438[0] = 0;
            }
            else {
              FUN_1001c34b7(local_c58,local_438);
            }
            if (iVar4 == 0) {
              local_638[0] = 0;
            }
            else {
              FUN_1001c34b7(iVar4,local_638);
            }
            local_c54 = local_c44;
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x10;
        } while (uVar7 < *(uint *)(local_c60 + 8));
      }
    }
LAB_1004c5f87:
    param_2 = 0;
    if (local_c40 == 0) {
LAB_1004c62c6:
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}

