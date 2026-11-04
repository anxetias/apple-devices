// name: FUN_1006541f6
// address: 1006541f6

void FUN_1006541f6(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  uVar3 = FUN_1004de449(param_2);
  cVar2 = FUN_1001fc52f(uVar3,&local_40);
  uVar3 = local_40;
  if (cVar2 == '\0') {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_38 = 0x8420102;
      local_34 = uVar4;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "failed to copy backup password from keychain for device %{public}@",&local_38,
                    0xc);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar1 = *(long *)(param_1 + 0x28);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                       0xffffffff);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (**(code **)(lVar1 + 0x10))(lVar1,0,uVar3);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),local_40,0);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

