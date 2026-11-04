// name: FUN_10064e89c
// address: 10064e89c

void FUN_10064e89c(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined8 local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectIDForBootedOSDevice__10088dc10,
                     *(undefined8 *)(param_1 + 0x28));
  if (iVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      return;
    }
  }
  else {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,1);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_48 = 0x8420102;
      local_44 = uVar5;
      __os_log_impl(0x100000000,uVar4,1,"stopping sync for device %{public}@",&local_48,0xc);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    uVar4 = FUN_1004de449(iVar3);
    FUN_1004e36a1(uVar4);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

