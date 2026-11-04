// name: FUN_1006598be
// address: 1006598be

/* WARNING: Type propagation algorithm not settling */

void FUN_1006598be(long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int local_5c [2];
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  undefined2 local_46;
  int local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectIDForBootedOSDevice__10088dc10,
                     *(undefined8 *)(param_1 + 0x28));
  if (iVar2 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  else {
    iVar3 = FUN_100539a8c(iVar2,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                          *(undefined8 *)(param_1 + 0x40),local_5c);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_100642e20();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_5c[1] = 0x8420302;
        local_4c = 0x400;
        local_46 = 0x400;
        local_44 = local_5c[0];
        local_54 = uVar5;
        local_4a = iVar3;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "failed to complete activation for device %{public}@ (%d / %d)",local_5c + 1,
                      0x18);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      if (local_5c[0] == 0) {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                           iVar3);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      }
      else {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,
                           PTR_s_errorWithActivationError_forObje_10088dcb0,local_5c[0],iVar2);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      }
    }
  }
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

