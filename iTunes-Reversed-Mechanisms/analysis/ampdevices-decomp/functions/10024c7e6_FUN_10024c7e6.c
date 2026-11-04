// name: FUN_10024c7e6
// address: 10024c7e6

undefined4 FUN_10024c7e6(undefined4 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 local_e8 [76];
  undefined4 local_9c;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  char *local_8a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10024f22a(local_e8);
  lVar2 = FUN_1005f4b1c(*param_1);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_8a = "webUpdateDictionary != nullptr";
LAB_10024c9c8:
      local_8c = 0x822;
      local_94 = "Assertion failure";
      local_98 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
  }
  else {
    lVar3 = FUN_10024c50f(lVar2,&cf_MobileDeviceReverseDFUProductTypeIDs,param_1);
    if (lVar3 != 0) {
      cVar1 = FUN_100164d80(lVar3,&local_9c);
      if (cVar1 == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_98 = 0x8220202;
          local_94 = "Assertion failure";
          local_8c = 0x822;
          local_8a = "JRCFTypeGetUInt32(value, &dfuOneProductTypeID)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        uVar5 = 0x5c6;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_100249cb6(&local_98,local_9c,0,0xffffffff,0xffffffff,0,0);
        cVar1 = FUN_10024ca82(4,0,&local_98,local_e8,param_2);
        uVar5 = 0x5c6;
        if (cVar1 != '\0') {
          uVar5 = 0;
        }
        FUN_100249ea6(&local_98);
      }
      goto LAB_10024c934;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_8a = "value != nullptr";
      goto LAB_10024c9c8;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
  uVar5 = 0x5c6;
LAB_10024c934:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
  FUN_10024f3ba(local_e8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

