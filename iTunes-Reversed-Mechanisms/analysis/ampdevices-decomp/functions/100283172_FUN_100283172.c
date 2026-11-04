// name: FUN_100283172
// address: 100283172

void FUN_100283172(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  std::mutex::lock();
  if (*param_2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inArtworkUUID.IsValid()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(param_1 + 0x60),PTR_s_removeObjectForKey__10088c648);
    lVar2 = FUN_1002859d0(param_1 + 0x68,param_2);
    if (lVar2 != param_1 + 0x70) {
      FUN_100285a3c(param_1 + 0x68,lVar2);
    }
  }
  std::mutex::unlock();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

