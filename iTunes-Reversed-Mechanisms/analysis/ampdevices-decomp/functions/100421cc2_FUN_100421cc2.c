// name: FUN_100421cc2
// address: 100421cc2

int FUN_100421cc2(long param_1,char param_2,int param_3,undefined4 *param_4,undefined1 *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  char *pcVar11;
  short sVar12;
  undefined1 *puVar13;
  code *in_stack_fffffffffffffa78;
  ulong in_stack_fffffffffffffa80;
  undefined1 local_568 [40];
  undefined8 local_540;
  undefined1 local_520 [16];
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  char *local_4e0;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b0 [2];
  undefined1 local_4a8 [8];
  undefined4 *local_4a0;
  undefined1 *local_498;
  short local_48c;
  short local_48a;
  undefined1 local_488 [1056];
  undefined1 local_68 [12];
  undefined2 local_5c;
  char *local_5a;
  undefined2 local_52;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4a0 = param_4;
  FUN_10024f22a(local_568);
  local_4b0[0] = 0;
  FUN_1001c62d9(local_4a8,8);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_5a = "mIsAppleMobileDevice";
LAB_100421e08:
      local_5c = 0x822;
      local_68._4_8_ = "Assertion failure";
      local_68._0_4_ = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_68,0x16);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x58);
    cVar3 = FUN_100247c62(iVar6);
    if (cVar3 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_5a = "IsSoftwareUpdateRestoreDeviceClass(mDeviceClass)";
        goto LAB_100421e08;
      }
    }
    else {
      if (*(char *)(param_1 + 0x1359) == '\0') {
        if (iVar6 == 0x69545620) {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_68._0_4_ = 0x8220202;
            local_68._4_8_ = "Assertion failure";
            local_5c = 0x822;
            local_5a = "mDeviceClass != kITIPodDeviceClassAppleTV";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_68,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        if (param_5 != (undefined1 *)0x0) {
          *param_5 = 0;
        }
        *(undefined2 *)(param_1 + 0x1354) = 0;
        *(undefined2 *)(param_1 + 0x1357) = 0;
        local_48c = 0x10e5;
        if (param_2 == '\0') {
LAB_100421f28:
          if (param_3 == 6) {
            cVar3 = FUN_10024bc99(6);
            if (cVar3 == '\0') {
              iVar5 = 0;
              goto LAB_100422281;
            }
            puVar13 = (undefined1 *)(param_1 + 0x1357);
            if (param_5 != (undefined1 *)0x0) {
              *param_5 = 1;
            }
          }
          else {
            puVar13 = (undefined1 *)(param_1 + 0x1358);
          }
          cVar3 = FUN_10024ca82(param_3,0,param_1 + 0x4c0,local_568,0);
          if (cVar3 == '\0') {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_68._0_4_ = 0x8220202;
              local_68._4_8_ = "Assertion failure";
              local_5c = 0x822;
              local_5a = 
              "::GetNewestKnownMobileDeviceRecoveryBundleInfoForProductType(deviceSoftwareType, 0, mDeviceUpdaterFamilyInfo, &webBundleInfo, nullptr)"
              ;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_68,0x16);
            }
            FUN_1001782e9(0,0);
            iVar5 = 0x5c6;
            goto LAB_100422281;
          }
          local_48c = FUN_1004174a0(*(undefined4 *)(param_1 + 0x58),0x10db,0x10dc,0x10da,0,0,
                                    (ulong)in_stack_fffffffffffffa78 & 0xffffffff00000000,
                                    in_stack_fffffffffffffa80 & 0xffffffff00000000,0,0);
          local_48a = local_48c;
          iVar6 = FUN_100228fd4(param_1 + 0x4c0,local_540,local_488,local_4b0);
          local_498 = puVar13;
          if ((iVar6 == 0) && (cVar3 = FUN_10024abfd(local_568,local_4b0), cVar3 != '\0')) {
            if (param_3 != 6) {
              cVar3 = FUN_1004225fd(param_1 + 0x4c8);
              iVar5 = -0x80;
              sVar12 = local_48a;
              if (cVar3 == '\0') goto LAB_100422286;
            }
            *(undefined4 *)(param_1 + 0x1300) = 1;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            puVar13 = local_498;
            uVar7 = DAT_1008c75b8;
            cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar3 != '\0') {
              local_4e0 = (char *)FUN_1001b83ae(param_1 + 0x60);
              cVar3 = FUN_1001df957("setting","",0);
              pcVar10 = "in";
              if (cVar3 == '\0') {
                pcVar10 = "setting";
              }
              local_50 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
              local_68._0_4_ = 0x8200302;
              local_68._4_8_ = local_4e0;
              local_5c = 0x820;
              local_52 = 0x820;
              local_5a = pcVar10;
              __os_log_impl(0x100000000,uVar7,1,"\"%s\" %s state %s",local_68,0x20);
              puVar13 = local_498;
            }
            *puVar13 = 1;
            iVar5 = FUN_10041c30c(param_1,local_488,local_4b0,(ulong)(param_3 != 6) << 2,0);
            sVar12 = local_48a;
            if (iVar5 == 0) {
              plVar9 = (long *)FUN_10039a28c();
              local_4d8 = *local_4a0;
              uStack_4d4 = local_4a0[1];
              uStack_4d0 = local_4a0[2];
              uStack_4cc = local_4a0[3];
              if (*(long *)(local_4a0 + 2) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(local_4a0 + 2) + 8);
                *plVar1 = *plVar1 + 1;
                UNLOCK();
              }
              iVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,&local_4d8,0);
              sVar12 = local_48a;
              FUN_100205d70(&local_4d8);
            }
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0x58);
            uVar7 = FUN_100416f20(uVar2,0x10cc0137);
            FUN_1001b7eb0(local_520,uVar7);
            uVar7 = FUN_100416f20(uVar2,0x10cc0138);
            FUN_1001b7eb0(local_510,uVar7);
            FUN_1001c334a(local_500,0x10cf0005);
            FUN_1001c334a(local_4f0,0x5db30004);
            local_48 = (long *)0x0;
            sVar4 = FUN_10044fcd7(local_520,local_510,local_500,local_4f0,param_1 + 0x4c8,local_68);
            if (local_48 == (long *)local_68) {
              lVar8 = 0x20;
LAB_1004222b6:
              (**(code **)(*local_48 + lVar8))();
            }
            else {
              lVar8 = 0x28;
              if (local_48 != (long *)0x0) goto LAB_1004222b6;
            }
            FUN_1001b7a50(local_4f0);
            FUN_1001b7a50(local_500);
            FUN_1001b7a50(local_510);
            FUN_1001b7a50(local_520);
            iVar5 = -0x80;
            sVar12 = local_48a;
            if (sVar4 == 1) {
              *(undefined4 *)(param_1 + 0x1300) = 6;
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              puVar13 = local_498;
              uVar7 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 != '\0') {
                pcVar10 = (char *)FUN_1001b83ae(param_1 + 0x60);
                cVar3 = FUN_1001df957("setting","",0);
                pcVar11 = "in";
                if (cVar3 == '\0') {
                  pcVar11 = "setting";
                }
                local_50 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
                local_68._0_4_ = 0x8200302;
                local_5c = 0x820;
                local_52 = 0x820;
                local_68._4_8_ = pcVar10;
                local_5a = pcVar11;
                __os_log_impl(0x100000000,uVar7,1,"\"%s\" %s state %s",local_68,0x20);
                puVar13 = local_498;
              }
              *puVar13 = 1;
              local_4c8 = *local_4a0;
              uStack_4c4 = local_4a0[1];
              uStack_4c0 = local_4a0[2];
              uStack_4bc = local_4a0[3];
              if (*(long *)(local_4a0 + 2) != 0) {
                LOCK();
                plVar9 = (long *)(*(long *)(local_4a0 + 2) + 8);
                *plVar9 = *plVar9 + 1;
                UNLOCK();
              }
              iVar5 = FUN_100419d7e(param_1,0,0,local_568,&local_4c8,&local_48c);
              FUN_100205d70(&local_4c8);
              sVar12 = local_48c;
            }
          }
        }
        else {
          in_stack_fffffffffffffa78 = FUN_10025364a;
          in_stack_fffffffffffffa80 = 0;
          iVar5 = FUN_10024f5ea(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x58),0,0,0,0,
                                FUN_10025364a,0);
          iVar6 = -0x80;
          if (iVar5 != 0x5ca) {
            iVar6 = iVar5;
          }
          if (iVar6 == -0x80) {
            iVar5 = -0x80;
          }
          else {
            if (iVar6 == 0) goto LAB_100421f28;
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_68._0_4_ = 0x8220202;
              local_68._4_8_ = "Assertion failure";
              local_5c = 0x400;
              local_5a = (char *)CONCAT44(local_5a._4_4_,iVar6);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_68,0x12);
            }
          }
LAB_100422281:
          sVar12 = 0x10e5;
        }
LAB_100422286:
        FUN_100216f84(*(byte *)(param_1 + 0x5c) + 1,(int)sVar12,0,iVar5,param_1 + 0x4c8,0);
        FUN_1001ceee0(param_1);
        goto LAB_100421e3c;
      }
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_5a = "mIsDulcimerDevice == false";
        goto LAB_100421e08;
      }
    }
  }
  iVar5 = -0x32;
  FUN_1001782e9(0,0);
LAB_100421e3c:
  FUN_100249fca(local_4b0);
  FUN_10024f3ba(local_568);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

