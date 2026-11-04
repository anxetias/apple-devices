// name: FUN_100230d9d
// address: 100230d9d

undefined8 FUN_100230d9d(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1002304d1();
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  if (lVar3 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "agent != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"failed to create BKAgent: %{public}@",&local_48,
                          0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    uVar2 = 0x234f;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(lVar3,PTR_s_downloadsDirectory_10088c430);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = 0;
    cVar1 = FUN_10016ffd2(uVar4,param_1,0);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "JRCFURLGetJRFileSpec( (__bridge CFURLRef)downloadsDirectoryURL, outDownloadsDirSpec )";
        __os_log_error_impl(0x100000000,uVar2,0x10,"failed to create BKAgent: %{public}@",&local_48,
                            0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar2);
      uVar2 = 0xffffff88;
      FUN_1001782e9(0,0);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

