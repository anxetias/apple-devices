// name: FUN_10024a528
// address: 10024a528

undefined8 FUN_10024a528(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    uVar3 = 0xffffffce;
    if (cVar1 != '\0') {
      local_2a = "outCString != nullptr";
LAB_10024a669:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    *param_2 = 0;
    if ((*param_1 == 0) || (*param_1 == 0x73766d64)) {
      cVar1 = FUN_10017393c(*(undefined8 *)(param_1 + 2),param_2,param_3,0x600);
      uVar3 = 0;
      if (cVar1 != '\0') goto LAB_10024a62a;
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      uVar3 = 0xffffffce;
      if (cVar1 != '\0') {
        local_2a = 
        "JRCFStringGetCString(u.mobileDevice.mProductVersion, outCString, static_cast<CFIndex>(maxSize), kCFStringEncodingASCII)"
        ;
        goto LAB_10024a669;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      uVar3 = 0xfffffffe;
      if (cVar1 != '\0') {
        local_2a = "(mKind == 0) || (mKind == kSoftwareVersionKindMobileDevice)";
        goto LAB_10024a669;
      }
    }
  }
  FUN_1001782e9(0,0);
LAB_10024a62a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

