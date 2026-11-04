// name: FUN_10029b39e
// address: 10029b39e

bool FUN_10029b39e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "imageInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    bVar3 = true;
  }
  else {
    cVar1 = FUN_10058f971();
    if (cVar1 != '\0') {
      cVar1 = __os_feature_enabled_impl("AMPLibrary","PhotoKitCloudDownload");
      bVar3 = true;
      if (cVar1 == '\0') goto LAB_10029b436;
    }
    bVar3 = true;
    if ((*(char *)(param_1 + 0x80) != '\x06') && (*(int *)(param_1 + 0xa4) != 0)) {
      bVar3 = *(char *)(param_1 + 0xb0) != '\0';
    }
  }
LAB_10029b436:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

