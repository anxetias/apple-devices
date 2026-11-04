// name: FUN_1005f563f
// address: 1005f563f

void FUN_1005f563f(int param_1,char param_2,long param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char local_338 [256];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0x4d616320) {
    pcVar6 = "https://mesu.apple.com/assets/macos/com_apple_macOSIPSW/com_apple_macOSIPSW.xml";
    pcVar7 = "mac-restore-version-check-url";
  }
  else {
    if (param_1 != 0x69427269) {
      pcVar6 = "https://s.mzstatic.com/version";
      pcVar7 = "version-check-url";
      pcVar3 = "http://itunes.com./version";
      bVar1 = true;
      goto LAB_1005f56b4;
    }
    pcVar6 = 
    "https://mesu.apple.com/assets/bridgeos/com_apple_bridgeOSIPSW/com_apple_bridgeOSIPSW.xml";
    pcVar7 = "ibridge-restore-version-check-url";
  }
  bVar1 = false;
  pcVar3 = (char *)0x0;
LAB_1005f56b4:
  if (param_3 == 0) {
    uVar4 = FUN_1001cc310(pcVar6);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "versionCheckURL != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001dfbb3(pcVar6,param_3,param_4);
    cVar2 = FUN_1001ce62e("com.apple.AMPDevicesAgent",pcVar7,&local_238);
    if (cVar2 != '\0') {
      FUN_1001e5b77(&local_238,param_3,param_4);
    }
    if (bVar1 && param_2 != '\0') {
      FUN_1001dfbb3(pcVar3,param_3,param_4);
      pcVar6 = "?touchUpdate=true";
    }
    else {
      lVar5 = FUN_100279568();
      pcVar6 = local_338;
      _snprintf(pcVar6,0xff,"?machineID=%llx",*(undefined8 *)(lVar5 + 0x30e));
    }
    FUN_1001df1e7(pcVar6,param_3,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

