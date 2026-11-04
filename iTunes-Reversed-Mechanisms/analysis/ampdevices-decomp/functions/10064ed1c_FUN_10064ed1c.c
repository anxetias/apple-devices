// name: FUN_10064ed1c
// address: 10064ed1c

void FUN_10064ed1c(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_5d [5];
  undefined4 local_58;
  undefined1 *local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
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
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      return;
    }
  }
  else {
    FUN_1001e3312(*(undefined4 *)(param_1 + 0x38),local_5d);
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,1);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_58 = 0x8220202;
      local_4c = 0x842;
      local_54 = local_5d;
      local_4a = uVar5;
      __os_log_impl(0x100000000,uVar4,1,"skipping sync operation %{public}s for device %{public}@",
                    &local_58,0x16);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1004e37d4(iVar3,*(undefined4 *)(param_1 + 0x38));
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

