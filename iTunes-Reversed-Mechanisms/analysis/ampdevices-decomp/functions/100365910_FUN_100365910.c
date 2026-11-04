// name: FUN_100365910
// address: 100365910

void FUN_100365910(long *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  cfstringStruct *local_60;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined2 uStack_32;
  undefined8 uStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x521a;
      uStack_38 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004d6810(param_1);
    if (1 < (int)param_1[3] - 2U) {
      lVar8 = 0x1348;
      if ((int)param_1[3] != 1) {
        lVar8 = 0x12f8;
      }
      lVar5 = FUN_100279568();
      uVar1 = *(ulong *)(lVar5 + lVar8);
      local_60 = (cfstringStruct *)
                 (uVar1 >> 0x38 | (uVar1 & 0xff000000000000) >> 0x28 |
                  (uVar1 & 0xff0000000000) >> 0x18 | (uVar1 & 0xff00000000) >> 8 |
                  (uVar1 & 0xff000000) << 8 | (uVar1 & 0xff0000) << 0x18 | (uVar1 & 0xff00) << 0x28
                 | uVar1 << 0x38);
      FUN_1001a7b90(local_50,&PTR_cf_machineID_100855898);
      FUN_1001e0d0f(&local_48,&local_60,8,0,0);
      FUN_100365cc6(plVar4,local_50,&local_48);
      FUN_1001b7a50(&local_48);
      FUN_1001ab240(local_50);
      uStack_38 = 0;
      uStack_32 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_3a = 0;
      iVar3 = FUN_1001c2203(&local_48,0x1f);
      if (iVar3 == 0) {
        FUN_1001a7b90(local_50,&PTR_cf_machineRegion_1008558a0);
        FUN_100365d22(plVar4,local_50,&local_48);
        FUN_1001ab240(local_50);
      }
    }
    FUN_1001a7b90(&local_48,&PTR_cf_platform_1008558a8);
    local_60 = &cf_macOS;
    FUN_10021f0aa(plVar4,&local_48);
    FUN_1001ab240(&local_48);
    local_54 = 1;
    FUN_10015095e(&local_48);
    local_60 = (cfstringStruct *)FUN_100150dd2(&local_48);
    uVar7 = *(uint *)(param_1 + 3);
    if (local_60 != (cfstringStruct *)0x0) {
      if (uVar7 == 2) {
        FUN_1001a7b90(local_50,&PTR_cf_dsId_100855a38);
        FUN_10021f04c(plVar4,local_50,&local_60);
        FUN_1001ab240(local_50);
        uVar7 = *(uint *)(param_1 + 3);
      }
      local_54 = 2;
    }
    if (uVar7 < 2) {
      FUN_1001a7b90(local_50,&PTR_cf_storeState_1008558b0);
      FUN_100365d78(plVar4,local_50,&local_54);
      FUN_1001ab240(local_50);
      FUN_1001a7b90(local_50,&PTR_cf_analyticsClientId_1008558b8);
      FUN_10021f0aa(plVar4,local_50);
      FUN_1001ab240(local_50);
      uVar7 = *(uint *)(param_1 + 3);
    }
    if (uVar7 != 2) {
      FUN_1001a7b90(local_50,&PTR_cf_dsId_100855a38);
      FUN_1001a9f38(plVar4,local_50);
      FUN_1001ab240(local_50);
    }
    FUN_1001a7b90(local_50,&PTR_cf_pixelRatio_100855a48);
    FUN_1001a9f38(plVar4,local_50);
    FUN_1001ab240(local_50);
    FUN_1001a7b90(local_50,&PTR_cf_screenHeight_100855a50);
    FUN_1001a9f38(plVar4,local_50);
    FUN_1001ab240(local_50);
    FUN_1001a7b90(local_50,&PTR_cf_screenWidth_100855a58);
    FUN_1001a9f38(plVar4,local_50);
    FUN_1001ab240(local_50);
    FUN_1001a7b90(local_50,&PTR_cf_isSignedIn_100855a40);
    FUN_1001a9f38(plVar4,local_50);
    FUN_1001ab240(local_50);
    FUN_100150de8(&local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

