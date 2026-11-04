// name: FUN_100254eae
// address: 100254eae

ulong FUN_100254eae(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                   undefined4 param_5,long param_6,undefined1 *param_7,undefined1 *param_8)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 in_stack_fffffffffffffee0;
  uint uVar10;
  undefined8 in_stack_fffffffffffffee8;
  uint uVar11;
  undefined1 local_e0 [16];
  undefined4 local_d0 [2];
  undefined1 local_c8 [8];
  undefined4 local_c0 [2];
  undefined1 local_b8 [8];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [4];
  undefined8 local_98;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  long local_38;
  
  uVar10 = (uint)((ulong)in_stack_fffffffffffffee0 >> 0x20);
  uVar11 = (uint)((ulong)in_stack_fffffffffffffee8 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_98 = 0;
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  if (param_8 != (undefined1 *)0x0) {
    *param_8 = 0;
  }
  local_90 = param_6;
  if (param_6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_88 = 0x8220202;
      local_84 = 0x7a0a90;
      uStack_80 = 1;
      uStack_7c = 0x822;
      uStack_7a = 0x39a6;
      uStack_78 = 0x7b;
      uStack_76 = 1;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1002550bf:
    uVar9 = 0;
    goto LAB_1002551de;
  }
  iVar2 = *(int *)(param_3 + 0x18);
  local_b0 = param_5;
  local_ac = param_2;
  if (iVar2 == 0) {
    if (((*(int *)(param_3 + 0x20) == 0) && (*(int *)(param_3 + 0x24) == 0)) &&
       (*(char *)(param_3 + 0x28) == '\0')) goto LAB_1002550bf;
    iVar2 = FUN_10024a34a(param_4,&local_98);
    if (iVar2 != 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_88 = 0x8220202;
        local_84 = 0x7a0a90;
        uStack_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar2;
        uStack_78 = (undefined2)((uint)iVar2 >> 0x10);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
      goto LAB_1002551d0;
    }
    cVar1 = FUN_10024d72a(param_1,local_ac,param_3,local_98,1,local_b0,local_90,param_7,param_8,0,0,
                          0,0,0);
    if (cVar1 == '\0') goto LAB_1002551d0;
LAB_100255068:
    lVar3 = FUN_100249f90(local_90);
    uVar9 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    if (lVar3 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_88 = 0x8220202;
        local_84 = 0x7a0a90;
        uStack_80 = 1;
        uStack_7c = 0x822;
        uStack_7a = 0x5637;
        uStack_78 = 0x7b;
        uStack_76 = 1;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  else {
    local_d0[0] = 0;
    FUN_1001c62d9(local_c8,8);
    local_c0[0] = 0;
    FUN_1001c62d9(local_b8,8);
    lVar3 = FUN_1005f4b1c(0x69506f64);
    if (lVar3 == 0) {
LAB_100255033:
      lVar5 = 0;
LAB_100255036:
      param_1 = 0;
    }
    else {
      lVar4 = FUN_100166b7f(lVar3,&cf_iPodSoftwareVersions);
      if (lVar4 == 0) goto LAB_100255033;
      lVar5 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,iVar2);
      if (lVar5 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_88 = 0x8220202;
          local_84 = 0x7a0a90;
          uStack_80 = 1;
          uStack_7c = 0x822;
          uStack_7a = 0x39d7;
          uStack_78 = 0x7b;
          uStack_76 = 1;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
        }
        lVar5 = 0;
        FUN_1001782e9(0,0);
        goto LAB_100255036;
      }
      lVar4 = FUN_100166b7f(lVar4,lVar5);
      if (lVar4 == 0) goto LAB_100255036;
      lVar6 = FUN_100166c1b(lVar4,&cf_BuildVersion);
      if (lVar6 == 0) {
        cVar1 = FUN_10016801e(lVar4,&cf_BuildID,local_a8);
        if (cVar1 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_88 = 0x8220202;
            local_84 = 0x7a0a90;
            uStack_80 = 1;
            uStack_7c = 0x822;
            uStack_7a = 0x39f8;
            uStack_78 = 0x7b;
            uStack_76 = 1;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
          }
          FUN_1001782e9(0,0);
        }
        local_88 = 0x73766970;
        uStack_80 = local_a8[0];
        FUN_100249f2c(local_d0);
      }
      else {
        local_88 = 0x73766d64;
        uVar7 = FUN_1001705fc(lVar6);
        uStack_80 = (undefined4)uVar7;
        uStack_7c = (undefined2)((ulong)uVar7 >> 0x20);
        uStack_7a = (undefined2)((ulong)uVar7 >> 0x30);
        FUN_100249f2c(local_d0);
      }
      FUN_100249fca(&local_88);
      lVar6 = FUN_100166c1b(lVar4,&cf_ProductVersion);
      if (lVar6 == 0) {
        cVar1 = FUN_10016801e(lVar4,&cf_VisibleBuildID,local_a8);
        if (cVar1 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_88 = 0x8220202;
            local_84 = 0x7a0a90;
            uStack_80 = 1;
            uStack_7c = 0x822;
            uStack_7a = 0x3a8d;
            uStack_78 = 0x7b;
            uStack_76 = 1;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
          }
          FUN_1001782e9(0,0);
        }
        local_88 = 0x73766970;
        uStack_80 = local_a8[0];
        FUN_100249f2c(local_c0);
      }
      else {
        local_88 = 0x73766d64;
        uVar7 = FUN_1001705fc(lVar6);
        uStack_80 = (undefined4)uVar7;
        uStack_7c = (undefined2)((ulong)uVar7 >> 0x20);
        uStack_7a = (undefined2)((ulong)uVar7 >> 0x30);
        FUN_100249f2c(local_c0);
      }
      FUN_100249fee(&local_88);
      lVar6 = FUN_100166c1b(lVar4,&cf_FirmwareURL);
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          pcVar8 = "firmwareBundleURLString != nullptr";
LAB_100255563:
          uStack_7c = 0x822;
          uStack_80 = 1;
          local_84 = 0x7a0a90;
          local_88 = 0x8220202;
          uStack_7a = SUB82(pcVar8,0);
          uStack_78 = (undefined2)((ulong)pcVar8 >> 0x10);
          uStack_76 = (undefined4)((ulong)pcVar8 >> 0x20);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
        }
LAB_100255493:
        param_1 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        uVar7 = FUN_100166c1b(lVar4,&cf_FirmwareSHA1);
        lVar4 = FUN_100166c1b(lVar4,&cf_DocumentationURL);
        if (lVar4 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            pcVar8 = "documentationBundleURLString != nullptr";
            goto LAB_100255563;
          }
          goto LAB_100255493;
        }
        FUN_100249ed4(local_a8,local_d0);
        FUN_100249ed4(local_e0,local_c0);
        FUN_10024f288(&local_88,local_a8,local_e0,0,lVar6,uVar7,lVar4,(ulong)uVar10 << 0x20,
                      (ulong)uVar11 << 0x20);
        FUN_10024adb0(local_90,&local_88);
        FUN_10024f3ba(&local_88);
        FUN_100249fee(local_e0);
        FUN_100249fca(local_a8);
        param_1 = CONCAT71((int7)((ulong)uVar7 >> 8),1);
      }
    }
    FUN_10017060f(lVar5);
    FUN_10017060f(lVar3);
    FUN_100249fee(local_c0);
    FUN_100249fca(local_d0);
    if ((char)param_1 != '\0') goto LAB_100255068;
LAB_1002551d0:
    uVar9 = 0;
  }
  FUN_10017060f(local_98);
LAB_1002551de:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

