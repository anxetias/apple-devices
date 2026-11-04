// name: FUN_100410a0d
// address: 100410a0d

int FUN_100410a0d(uint param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 >> 10 & 1) == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PhotoImportOptions::ExactlyOnePhotoApplicationSpecified(importOptions)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_100410c01;
  }
  uVar3 = FUN_1004a7bcc();
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "systemPhotoLibraryURL != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75b8);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    iVar2 = 0x47c;
    if (cVar1 != '\0') {
      local_48 = 0x4000100;
      local_44 = (char *)CONCAT44(local_44._4_4_,param_1);
      __os_log_impl(0x100000000,uVar3,0x10,
                    "sync> can\'t get current photo media library folder for options %x",&local_48,8
                   );
    }
LAB_100410bef:
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  else {
    uVar3 = _objc_retainAutorelease(lVar4);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_fileSystemRepresentation_10088cac8);
    FUN_1001b7b04(&local_48,uVar3);
    iVar2 = FUN_10017df7e(0,&local_48,param_3,0,0);
    FUN_1001b7a50(&local_48);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_100410bef;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
LAB_100410c01:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

