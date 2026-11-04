// name: FUN_100365dd6
// address: 100365dd6

void FUN_100365dd6(long *param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  undefined1 local_60 [4];
  undefined4 local_5c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "deviceInfo != __null";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100366092;
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "eventDict.IsValid()";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100366092;
  }
  if (*(char *)(param_2 + 0xf4) != '\0') {
    lVar5 = FUN_100279630();
    local_b0 = 0;
    pcVar1 = (char *)(lVar5 + 0x12d8);
    cVar2 = *(char *)(lVar5 + 0x12d8);
    while (cVar2 == '\0') {
      FUN_1001ebdcf(pcVar1,0x20);
      cVar2 = *pcVar1;
    }
    iVar3 = FUN_100179732(1,&local_b0);
    uVar7 = local_b0;
    if (iVar3 == 0) {
      local_60[0] = 0;
      local_5c = 0;
      sVar6 = _strlen((char *)(param_2 + 0xf4));
      FUN_10017983e(uVar7,(char *)(param_2 + 0xf4),sVar6);
      FUN_10017983e(local_b0,pcVar1,0x20);
      FUN_1001799f1(local_b0,local_60);
      FUN_100179ae2(local_60,&local_a8,1,0x40);
      FUN_1001a7b90(local_b8,&PTR_cf_deviceID_1008558c0);
      FUN_1001aaf3c(local_c0,&local_a8);
      FUN_1001a9cdc(plVar4,local_b8,local_c0);
      FUN_1001ab006(local_c0);
      FUN_1001ab240(local_b8);
      FUN_100179a7b(local_b0);
    }
  }
  if (*(char *)(param_2 + 0xb6) == '\0') {
    if (*(int *)(param_2 + 0x234) - 1U < 9999) {
      _snprintf((char *)&local_a8,0x20,"iPod-%u");
      FUN_1001a7b90(local_60,&PTR_cf_deviceModel_1008558c8);
      FUN_100365d22(plVar4,local_60,&local_a8);
      puVar8 = (undefined4 *)local_60;
      goto LAB_100366026;
    }
  }
  else {
    FUN_1001a7b90(&local_a8,&PTR_cf_deviceModel_1008558c8);
    FUN_1003661a6(plVar4,&local_a8,param_2 + 0xb6);
    puVar8 = &local_a8;
LAB_100366026:
    FUN_1001ab240(puVar8);
  }
  FUN_1001a7b90(&local_a8,&PTR_cf_deviceVersion_1008558d0);
  FUN_1003661a6(plVar4,&local_a8,param_2 + 0x16);
  FUN_1001ab240(&local_a8);
  FUN_1001a7b90(&local_a8,&PTR_cf_deviceBuildVersion_1008558d8);
  FUN_1003661a6(plVar4,&local_a8,param_2 + 0x76);
  FUN_1001ab240(&local_a8);
LAB_100366092:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

