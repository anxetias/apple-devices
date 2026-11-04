// name: FUN_1005a6584
// address: 1005a6584

undefined8 FUN_1005a6584(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      local_23a = "mHandlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
    goto LAB_1005a6744;
  }
  FUN_1005a2d1e();
  cVar1 = FUN_1005a56c6(param_1);
  if (cVar1 == '\0') {
    uVar4 = 0x46d;
    goto LAB_1005a6744;
  }
  if ((char)param_1[0x2b4] == '\0') {
LAB_1005a65dd:
    lVar5 = 0x1590;
  }
  else {
    cVar1 = FUN_100537ef0(0);
    lVar5 = 0x1598;
    if (cVar1 == '\0') goto LAB_1005a65dd;
  }
  iVar2 = (**(code **)(**(long **)((long)param_1 + lVar5) + 0x20))
                    (*(long **)((long)param_1 + lVar5),&local_248);
  if (iVar2 == 0) {
    if (param_1[0x2bf] != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mVoiceStr == nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    lVar5 = FUN_1001658f1(DAT_1008c4d90,&local_248);
    param_1[0x2bf] = lVar5;
  }
  uVar3 = (**(code **)(*(long *)param_1[0x2b2] + 0x28))();
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  lVar5 = *param_1;
  *(undefined4 *)(param_1 + 0x2c3) = *(undefined4 *)(lVar5 + 0x284);
  if (param_1[0x2c1] != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mBuildIDStr == nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar5 = *param_1;
  }
  lVar5 = FUN_100172473(DAT_1008c4d90,lVar5 + 0x66,0x600);
  param_1[0x2c1] = lVar5;
  if (param_1[0x2c2] != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mBuildVersionStr == nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = 0;
  if (*(char *)(*param_1 + 0xc6) != '\0') {
    lVar5 = FUN_100172473(DAT_1008c4d90,*param_1 + 0xc6,0x600);
    param_1[0x2c2] = lVar5;
  }
LAB_1005a6744:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

