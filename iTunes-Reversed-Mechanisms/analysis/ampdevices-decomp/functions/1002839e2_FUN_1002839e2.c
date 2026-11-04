// name: FUN_1002839e2
// address: 1002839e2

undefined4 FUN_1002839e2(long param_1,long *param_2,long *param_3)

{
  char cVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inArtworkUUID.IsValid()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_3 != 0) {
      IVar2 = _objc_alloc(PTR__OBJC_CLASS___NSImage_10082d310);
      IVar2 = NSImage::initWithContentsOfURL_(IVar2,PTR_s_initWithContentsOfURL__10088c630,*param_3)
      ;
      NSImage::setCacheMode_(IVar2,PTR_s_setCacheMode__10088c638,1);
      IVar3 = NSImage::isValid(IVar2,PTR_s_isValid_10088c640);
      uVar5 = 0xffffffd5;
      if ((char)IVar3 != '\0') {
        uVar5 = 0;
      }
      if (IVar2 != 0) {
        std::mutex::lock();
        (*(code *)PTR__objc_msgSend_10082c770)
                  (*(undefined8 *)(param_1 + 0x60),PTR_s_setObject_forKey_cost__10088c628,IVar2,
                   *param_2,0);
        std::mutex::unlock();
        (*(code *)PTR__objc_release_10082c7b0)(IVar2);
      }
      goto LAB_100283b33;
    }
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inArtworkFileURL.IsValid()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
  }
  uVar5 = 0xffffffce;
LAB_100283b33:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

