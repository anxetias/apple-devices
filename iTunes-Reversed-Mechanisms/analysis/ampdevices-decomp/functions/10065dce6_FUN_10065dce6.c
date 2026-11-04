// name: FUN_10065dce6
// address: 10065dce6

void FUN_10065dce6(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  puVar1 = PTR_s_deviceIdentifier_10088ca18;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  iVar3 = FUN_100194730(uVar4,1);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 0x20),puVar1);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_54 = uVar5;
      local_4a = iVar3;
      __os_log_impl(0x100000000,uVar4,0x10,"failed to reveal device %{public}@ (%d)",&local_58,0x12)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar3)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

