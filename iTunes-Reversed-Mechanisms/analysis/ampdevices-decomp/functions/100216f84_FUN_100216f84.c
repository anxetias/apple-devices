// name: FUN_100216f84
// address: 100216f84

void FUN_100216f84(int param_1,undefined4 param_2,undefined8 param_3,int param_4,undefined8 param_5,
                  long param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  short *psVar6;
  undefined8 *local_490;
  undefined1 local_488 [16];
  undefined8 local_478;
  undefined8 local_470;
  undefined1 local_468 [20];
  undefined4 local_454;
  undefined1 local_450 [16];
  undefined8 local_440;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  short local_238 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_238[0] = 0;
  local_478 = param_5;
  local_470 = param_3;
  local_454 = param_2;
  if (1 < param_1 - 1U) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = 
      "(updateRestoreDeviceClass == kUpdateRestoreDeviceClassTraditionalIPod) || (updateRestoreDeviceClass == kUpdateRestoreDeviceClassMobileDevice)"
      ;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = 0x45f;
    if (0x14 < param_4 - 20000U) {
      iVar3 = param_4;
    }
    goto LAB_1002171da;
  }
  iVar3 = 0x45f;
  if (0x14 < param_4 - 20000U) {
    iVar3 = param_4;
  }
  if (param_1 != 2) goto LAB_1002171da;
  if (param_4 - 0xc1cU < 900) {
    lVar4 = _AMRAuthInstallCopyLocalizedStringForServerError(param_4);
    if (lVar4 == 0) {
      local_440 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(local_440,0x10);
      if (cVar1 != '\0') {
        local_438 = 0x8220202;
        local_434 = "Assertion failure (expected to be not NULL)";
        local_42c = 0x822;
        local_42a = "errorString";
        __os_log_error_impl(0x100000000,local_440,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_1002170e7;
    }
    cVar1 = FUN_100169c4c(lVar4,local_238);
    if (cVar1 == '\0') {
      local_440 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(local_440,0x10);
      if (cVar1 != '\0') {
        local_438 = 0x8220202;
        local_434 = "Assertion failure";
        local_42c = 0x822;
        local_42a = "JRCFStringGetUString(errorString, personalizationErrorUString)";
        __os_log_error_impl(0x100000000,local_440,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar2 = 0x665;
    if (local_238[0] == 0) {
      iVar2 = iVar3;
    }
    iVar3 = iVar2;
    FUN_10017060f(lVar4);
  }
LAB_1002170e7:
  if ((param_6 != 0) && (iVar2 = FUN_1001e115f(param_6,&local_438), iVar2 == 0)) {
    if (local_238[0] == 0) {
      FUN_1001b7a44(local_468);
      iVar3 = FUN_1004c6512(&local_490);
      if (iVar3 == 0) {
        FUN_1004c5c38(*local_490,0,param_4,0,0,0,0,0);
        FUN_1004c673f(local_450,local_490);
        FUN_1001b80b2(local_468,local_450);
        FUN_1001b7a50(local_450);
        FUN_1004c6565(local_490);
      }
      FUN_1001bb41a(local_468,local_238);
      FUN_1001b7a50(local_468);
      iVar3 = 0x665;
    }
    FUN_1001e4b58(" ",local_238);
    FUN_1001e1890(&local_438,local_238);
  }
LAB_1002171da:
  FUN_1001c334a(&local_438,param_1 == 1 | 0x830006);
  FUN_1001b7a5c(local_488,&local_438);
  FUN_1001bb630(local_450,local_488,param_4);
  FUN_1001b7a50(local_488);
  psVar6 = (short *)0x0;
  if (local_238[0] != 0) {
    psVar6 = local_238;
  }
  FUN_100243ce4((int)(short)local_454,local_470,iVar3,psVar6,local_450,local_478);
  FUN_1001b7a50(local_450);
  FUN_1001b7a50(&local_438);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

