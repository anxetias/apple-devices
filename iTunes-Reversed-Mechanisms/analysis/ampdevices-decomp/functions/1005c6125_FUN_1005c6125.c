// name: FUN_1005c6125
// address: 1005c6125

undefined8 FUN_1005c6125(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0;
  lVar2 = FUN_1001cd685(&cf_MobileDeviceWakeupTokens,1,0);
  if (lVar2 != 0) {
    uVar3 = _CFStringGetTypeID();
    uVar5 = 0;
    lVar4 = FUN_1005ba383(param_1,0,&cf_UniqueDeviceID,uVar3,0);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "deviceUniqueID != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xe8000008;
    }
    else {
      cVar1 = FUN_100171439(lVar2,lVar4);
      if (cVar1 != '\0') {
        FUN_100171552(lVar2,lVar4);
        uVar5 = 0;
        FUN_1001cdefe(&cf_MobileDeviceWakeupTokens,lVar2,0);
      }
    }
    FUN_10017060f(lVar4);
    FUN_10017060f(lVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

