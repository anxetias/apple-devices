// name: FUN_100652948
// address: 100652948

void FUN_100652948(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_objectIDForBootedOSDevice__10088dc10,
                     *(undefined8 *)(param_1 + 0x28));
  if (iVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x30);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x45f)
    ;
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar1 + 0x10))(lVar1,0,lVar5);
  }
  else {
    uVar4 = FUN_1004de449(iVar3);
    lVar5 = FUN_1005ca0ec(uVar4);
    if (lVar5 == 0) {
      uVar4 = FUN_100642e20();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_38 = 0x8420102;
        local_34 = uVar6;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "failed to create sync error list for device %{public}@",&local_38,0xc);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      lVar1 = *(long *)(param_1 + 0x30);
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         0xffffffff);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (**(code **)(lVar1 + 0x10))(lVar1,0,uVar4);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        return;
      }
      goto LAB_100652ada;
    }
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),lVar5,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    (*(code *)PTR__objc_release_10082c7b0)(lVar5);
    return;
  }
LAB_100652ada:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

