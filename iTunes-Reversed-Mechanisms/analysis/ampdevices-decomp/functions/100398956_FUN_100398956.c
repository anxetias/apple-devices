// name: FUN_100398956
// address: 100398956

int FUN_100398956(int param_1,char param_2,long param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  int local_86a;
  undefined4 local_858;
  char *local_854;
  undefined2 local_84c;
  int local_84a;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "outLogFileSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_100398c62;
  }
  ___bzero(param_3,0x420);
  iVar2 = -0x32;
  if (param_1 < 0x69506164) {
    if (param_1 < 0x57617463) {
      if (param_1 == 0x48506f64) {
        uVar5 = 0x2a;
        pcVar3 = "HomePodUpdater";
      }
      else {
        if (param_1 != 0x4d616320) goto LAB_100398c62;
        uVar5 = 0x2b;
        pcVar3 = "MacUpdater";
      }
    }
    else if (param_1 == 0x57617463) {
      uVar5 = 0x29;
      pcVar3 = "AppleWatchUpdater";
    }
    else {
      if (param_1 != 0x69427269) goto LAB_100398c62;
      uVar5 = 0x2c;
      pcVar3 = "iBridgeUpdater";
    }
  }
  else if (param_1 < 0x69506f64) {
    if (param_1 == 0x69506164) {
      pcVar3 = "iPadUpdater";
      if (param_2 != '\0') {
        pcVar3 = "iPadOTAUpdater";
      }
      uVar5 = 0x27;
    }
    else {
      if (param_1 != 0x6950686e) goto LAB_100398c62;
      pcVar3 = "iPhoneUpdater";
      if (param_2 != '\0') {
        pcVar3 = "iPhoneOTAUpdater";
      }
      uVar5 = 0x26;
    }
  }
  else {
    if (param_1 != 0x69506f64) {
      if (param_1 == 0x69545620) {
        pcVar3 = "AppleTVUpdater";
        if (param_2 != '\0') {
          pcVar3 = "AppleTVOTAUpdater";
        }
        uVar5 = 0x28;
        goto LAB_100398b18;
      }
      if (param_1 != 0x69506f74) goto LAB_100398c62;
    }
    pcVar3 = "iPodUpdater";
    if (param_2 != '\0') {
      pcVar3 = "iPodOTAUpdater";
    }
    uVar5 = 0x25;
  }
LAB_100398b18:
  FUN_1001e04f5(pcVar3,local_658);
  iVar2 = FUN_1003870d4(uVar5,3,&local_458);
  if (iVar2 == -0x80) goto LAB_100398c62;
  if (iVar2 == 0) {
    FUN_1001e04f5("log",&local_858);
    iVar2 = FUN_10018166a(&local_458);
    if (iVar2 == -0x80) goto LAB_100398c62;
    if (iVar2 == 0) {
      iVar2 = FUN_10018156b(&local_458,local_658,0,0x54455854,param_3);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) goto LAB_100398c62;
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_878 = 0x8220202;
          local_874 = "Assertion failure";
          local_86c = 0x400;
          local_86a = iVar2;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_878,0x12);
        }
      }
      ___bzero(param_3,0x420);
      goto LAB_100398c62;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') goto LAB_100398c62;
    puVar4 = &local_878;
    local_878 = 0x8220202;
    local_874 = "Assertion failure";
    local_86c = 0x400;
    local_86a = iVar2;
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 == '\0') goto LAB_100398c62;
    puVar4 = &local_858;
    local_858 = 0x8220202;
    local_854 = "Assertion failure";
    local_84c = 0x400;
    local_84a = iVar2;
  }
  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",puVar4,0x12);
LAB_100398c62:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

