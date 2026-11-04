// name: FUN_100259071
// address: 100259071

int FUN_100259071(undefined4 param_1,uint param_2,long param_3,undefined8 param_4,int *param_5,
                 long param_6)

{
  long lVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 *puVar9;
  long lVar10;
  bool bVar11;
  undefined8 in_stack_fffffffffffff6b8;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  undefined8 local_908;
  long *plStack_900;
  undefined8 local_8f0;
  undefined1 local_8e8 [16];
  undefined4 local_8d8 [2];
  undefined1 local_8d0 [8];
  long local_8c8;
  long local_8c0;
  int local_8b4;
  long local_8b0;
  ulong local_8a8;
  undefined4 local_89c;
  undefined4 local_898;
  undefined8 local_894;
  undefined2 local_88c;
  int local_88a;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  char *local_86a;
  short local_854;
  undefined *local_850;
  undefined1 local_848 [24];
  undefined1 *local_830;
  undefined1 local_458 [1056];
  long local_38;
  
  uVar13 = (undefined4)((ulong)in_stack_fffffffffffff6b8 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_8c8 = param_6;
  local_8b0 = param_3;
  if (1 < param_2 - 1) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_878 = 0x8220202;
      local_874 = "Assertion failure";
      local_86c = 0x822;
      local_86a = 
      "(deviceSoftwareType == kDeviceSoftwareTypeUpdate) || (deviceSoftwareType == kDeviceSoftwareTypeRestore)"
      ;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_100259a2d;
  }
  local_89c = param_1;
  local_8c0 = FUN_1004de449(param_5[0x82]);
  local_8a8 = (ulong)param_2;
  if ((local_8c0 == 0) || (*(char *)(local_8c0 + 0x386) == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = FUN_1001cd44e("carrier-testing",0,0);
  }
  FUN_1001b7a44(local_848);
  FUN_100451002(&local_878);
  local_830 = local_458;
  local_854 = 2 - (ushort)(cVar3 == '\0');
  local_850 = &DAT_10071be50;
  cVar4 = FUN_1004510ca();
  FUN_1001b7a50(local_848);
  if (cVar4 == '\0') {
    iVar6 = 0;
    goto LAB_100259a2d;
  }
  iVar6 = FUN_100187d80(local_458,&local_8b4);
  if (iVar6 != -0x80) {
    if (iVar6 == 0) {
      if (local_8b4 == 0x49504343) {
        if (*param_5 == 2) {
          if (cVar3 == '\0') {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_878 = 0x8220202;
              local_874 = "Assertion failure";
              local_86c = 0x822;
              local_86a = "allowCarrierBundles";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16)
              ;
            }
            FUN_1001782e9(0,0);
LAB_100259482:
            iVar6 = -0x1b;
          }
          else if (local_8c0 == 0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_878 = 0x8220202;
              local_874 = "Assertion failure";
              local_86c = 0x822;
              local_86a = "handlerData != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar6 = 0x45f;
          }
          else {
            if (*(char *)(local_8c0 + 0x386) == '\0') goto LAB_100259482;
            iVar6 = FUN_100251d1a(*(undefined8 *)(local_8c0 + 0x7168),local_458);
            if ((iVar6 != -0x80) && (iVar6 != 0)) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_86a = (char *)CONCAT44(local_86a._4_4_,iVar6);
                goto LAB_1002592c7;
              }
            }
          }
        }
        else {
          uVar7 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar7,0x10);
          if (cVar3 != '\0') {
            local_878 = 0x8220202;
            local_874 = "Assertion failure";
            local_86c = 0x822;
            local_86a = 
            "updateRestoreDeviceParams.updateRestoreDeviceClass == kUpdateRestoreDeviceClassMobileDevice"
            ;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_878,0x16);
          }
          FUN_1001782e9(0,0);
          iVar6 = -0x32;
        }
      }
      else {
        bVar11 = (int)local_8a8 == 1;
        local_8d8[0] = 0;
        FUN_1001c62d9(local_8d0,8);
        lVar10 = local_8b0;
        lVar1 = local_8c0;
        if (bVar11 && *param_5 == 2) {
          cVar3 = FUN_1002228c8(local_458,2);
          if (cVar3 != '\0') {
            param_5[0x19b] = 1;
          }
        }
        if ((((*(int *)(lVar10 + 0x18) == 0) && (*(int *)(lVar10 + 0x20) == 0)) &&
            (*(int *)(lVar10 + 0x24) == 0)) && (*(char *)(lVar10 + 0x28) == '\0')) {
LAB_10025957c:
          if ((int)local_8a8 == 2 && lVar1 != 0) {
            FUN_100315cf3(*(undefined8 *)(lVar1 + 0x30));
          }
          iVar6 = *param_5;
          if (iVar6 == 1) {
            local_908 = 0;
            plStack_900 = (long *)0x0;
            puVar12 = &local_878;
            iVar6 = FUN_1002253a4(0,local_89c,local_458,0,0,&local_908,puVar12);
            uVar13 = (undefined4)((ulong)puVar12 >> 0x20);
            if (plStack_900 != (long *)0x0) {
              LOCK();
              plVar8 = plStack_900 + 1;
              lVar1 = *plVar8;
              *plVar8 = *plVar8 + -1;
              UNLOCK();
              if (lVar1 == 0) {
                (**(code **)(*plStack_900 + 0x10))(plStack_900);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar6 != -0x80) {
              if (iVar6 == 0) {
                _memcpy(param_5 + 0x86,&local_878,0x420);
                iVar6 = *param_5;
                goto LAB_10025965e;
              }
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_898 = 0x8220202;
                local_894 = "Assertion failure";
                local_88c = 0x400;
                local_88a = iVar6;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_898,0x12
                                   );
              }
            }
          }
          else {
            *(undefined1 *)((long)param_5 + 0x211) = 1;
            _memcpy(param_5 + 0x86,local_458,0x420);
LAB_10025965e:
            if ((iVar6 == 2) &&
               (((*(int *)(lVar10 + 0x20) != 0 || (*(int *)(lVar10 + 0x24) != 0)) ||
                (*(char *)(lVar10 + 0x28) != '\0')))) {
              iVar6 = FUN_10024a018(local_8d8,param_5 + 0x18e,0x20);
              if (iVar6 == 0) {
                FUN_1001df1e7(" (option key)",param_5 + 0x18e,0x20);
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_898 = 0x8220202;
                  local_894 = "Assertion failure";
                  local_88c = 0x400;
                  local_88a = iVar6;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_898,
                                      0x12);
                }
              }
            }
            plVar8 = (long *)FUN_10039a28c();
            iVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,param_5,&local_8f0);
            if (iVar6 != -0x80) {
              if (iVar6 == 0) {
LAB_100259808:
                plVar8 = (long *)FUN_10039a28c();
                iVar6 = (**(code **)(*plVar8 + 8))(plVar8,local_8f0);
                if (iVar6 != -0x80) {
                  if (iVar6 != 0) {
                    uVar7 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar3 != '\0') {
                      local_898 = 0x8220202;
                      local_894 = "Assertion failure";
                      local_88c = 0x400;
                      local_88a = iVar6;
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",
                                          &local_898,0x12);
                    }
                    if (iVar6 != 0) goto LAB_1002598f6;
                  }
                  if (((int)local_8a8 == 2) || (param_5[0x19b] == 1)) {
                    plVar8 = (long *)FUN_10039a28c();
                    if (*(long **)(local_8c8 + 0x20) == (long *)0x0) goto LAB_100259c51;
                    puVar9 = local_928;
                    (**(code **)(**(long **)(local_8c8 + 0x20) + 0x30))(puVar9);
                    iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,puVar9,0);
                  }
                  else {
                    plVar8 = (long *)FUN_10039a28c();
                    if (*(long **)(local_8c8 + 0x20) == (long *)0x0) {
LAB_100259c51:
                    /* WARNING: Subroutine does not return */
                      FUN_10016bf14();
                    }
                    puVar9 = local_918;
                    (**(code **)(**(long **)(local_8c8 + 0x20) + 0x30))(puVar9);
                    iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,puVar9);
                  }
                  FUN_100205d70(puVar9);
                  if ((iVar6 == -0x80) || (iVar6 == 0)) goto LAB_1002598f6;
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    local_898 = 0x8220202;
                    local_894 = "Assertion failure";
                    local_88c = 0x400;
                    local_88a = iVar6;
                    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_898,
                                        0x12);
                  }
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  local_898 = 0x8220202;
                  local_894 = "Assertion failure";
                  local_88c = 0x400;
                  local_88a = iVar6;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_898,
                                      0x12);
                }
                if (iVar6 == 0) goto LAB_100259808;
LAB_1002598f6:
                if (iVar6 == 0) {
                  iVar6 = 0;
                  goto LAB_100259910;
                }
              }
            }
            FUN_100182d59(&local_878,1);
          }
        }
        else {
          local_898 = 0;
          FUN_1001c62d9((long)&local_894 + 4,8);
          bVar11 = (int)local_8a8 == 2;
          iVar2 = param_5[0x19b];
          iVar6 = FUN_1002226f9(local_458,(iVar2 == 1 || bVar11) + '\x01',local_8b0,param_4,
                                local_8d8,&local_898);
          if (iVar6 == 0) {
            if ((iVar2 == 1 || bVar11) && *param_5 == 2) {
              cVar3 = FUN_100259ce4(local_458,local_89c,*(undefined4 *)(local_8b0 + 0x60),
                                    *(undefined4 *)(local_8b0 + 100),(int)local_8a8 == 2);
              iVar6 = -0x80;
              if (cVar3 != '\0') goto LAB_1002593c9;
              cVar3 = FUN_10022262f(local_458);
              if (cVar3 != '\0') {
                FUN_1001b7a5c(local_8e8,local_8b0 + 8);
                bVar11 = false;
                if (((int)local_8a8 == 1) && (bVar11 = false, param_5[0x83] != 0)) {
                  cVar3 = FUN_100247cdd(local_89c);
                  bVar11 = cVar3 == '\0';
                }
                cVar3 = FUN_100258d18(local_8e8,local_89c,&local_898,(int)local_8a8 == 2,bVar11);
                FUN_1001b7a50(local_8e8);
                if (cVar3 == '\0') goto LAB_1002593c9;
              }
            }
            FUN_100249fee(&local_898);
            lVar10 = local_8b0;
            goto LAB_10025957c;
          }
LAB_1002593c9:
          FUN_100249fee(&local_898);
        }
LAB_100259910:
        FUN_100249fca(local_8d8);
      }
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_86a = (char *)CONCAT44(local_86a._4_4_,iVar6);
LAB_1002592c7:
        local_86c = 0x400;
        local_874 = "Assertion failure";
        local_878 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_878,0x12);
      }
    }
  }
  iVar2 = *param_5;
  FUN_1004fda52(&local_878,param_5[0x82]);
  if (((((iVar6 + 0x80U & 0xffffff7f) != 0) && (1 < iVar6 - 0x581U)) && (iVar6 != 0x462)) &&
     (iVar6 != 0x465)) {
    if (iVar2 == 2) {
      bVar11 = (int)local_8a8 == 2;
      sVar5 = FUN_1004174a0(local_89c,(ulong)bVar11 * 5 + 0x10ec,(uint)bVar11 * 5 + 0x10ee,
                            (uint)bVar11 * 5 + 0x10ed,(uint)bVar11 * 5 + 0x10ef,bVar11 | 0x111a,
                            CONCAT44(uVar13,bVar11 + 0x112c),0,bVar11 + 0x1131,bVar11 + 0x1134);
      uVar7 = 2;
    }
    else {
      sVar5 = (ushort)((int)local_8a8 == 2) * 5 + 0x10eb;
      uVar7 = 1;
    }
    FUN_100216f84(uVar7,(int)sVar5,param_5 + 1,iVar6,&local_878,0);
  }
  FUN_1001b7a50(&local_878);
LAB_100259a2d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

