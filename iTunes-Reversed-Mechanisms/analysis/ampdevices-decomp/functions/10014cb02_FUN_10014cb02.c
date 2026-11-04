// name: FUN_10014cb02
// address: 10014cb02

void FUN_10014cb02(void)

{
  undefined *puVar1;
  char cVar2;
  ulong in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong local_28;
  
  local_28 = in_RAX;
  uVar3 = _objc_autoreleasePoolPush();
  uVar4 = _NSClassFromString(&cf_BiometricKit);
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_manager_10088bba8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar2 = (*(code *)puVar1)(uVar4,PTR_s_isTouchIDCapable_10088bba0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (cVar2 == '\0') {
    uVar4 = FUN_10014c4fc();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0);
    if (cVar2 != '\0') {
      local_28 = local_28 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar4,0,
                    "Skipping TouchID initialization. Device is not TouchID capable.",&local_28,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    pvVar5 = operator_new(0x28,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar5 != (void *)0x0) {
      FUN_10014c56e(pvVar5);
    }
    FUN_10014cc2e(&DAT_1008c4d60,pvVar5);
    FUN_1001c0fbe(FUN_10014cc5c,0,0,0,0);
  }
  _objc_autoreleasePoolPop(uVar3);
  return;
}

