// name: FUN_1004a4f67
// address: 1004a4f67

undefined8 FUN_1004a4f67(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 local_28 [8];
  
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)();
  if (DAT_1008bfa20 == 0) {
    uVar3 = FUN_1004a4efe();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_28[0] = 0;
      __os_log_error_impl(0x100000000,uVar3,0x10,"No import initiated yet (still photo)!",local_28,2
                         );
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (DAT_1008bfa20,PTR_s_downloadPhotoAsset__10088d520,uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return uVar3;
}

