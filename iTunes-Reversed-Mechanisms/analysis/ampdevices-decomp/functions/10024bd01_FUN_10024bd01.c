// name: FUN_10024bd01
// address: 10024bd01

ulong FUN_10024bd01(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1005f4b1c();
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "webUpdateDictionary != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 1;
  }
  else {
    lVar3 = FUN_10024e6d3(lVar2,param_3,0);
    if (lVar3 != 0) {
      cVar1 = FUN_100171439(lVar3,param_2);
      uVar5 = CONCAT71((int7)((ulong)param_2 >> 8),cVar1 != '\0');
      goto LAB_10024bd7c;
    }
    uVar5 = 0;
    if ((param_3 == 7) || (param_3 == 10)) goto LAB_10024bd7c;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 
      "(mobileDeviceSoftwareVersionsParentDictionary != nullptr) || (supportedPayloadVersion == kMobileDeviceSupportedPayloadVersionITunes10_0_1) || (supportedPayloadVersion == kMobileDeviceSupportedPayloadVersionITunes10_6)"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
  }
  uVar5 = 0;
  FUN_1001782e9(uVar4,0);
LAB_10024bd7c:
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

