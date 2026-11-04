// name: FUN_100661cff
// address: 100661cff

void FUN_100661cff(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_appIdentifier_10088ddc0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = FUN_1005b8e71(uVar3);
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10036d5c0(lVar5,uVar4);
    FUN_10017060f(lVar5);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

