// name: FUN_10065e1b8
// address: 10065e1b8

void FUN_10065e1b8(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceMode_10088daa0);
    if (lVar3 == 1) {
      local_50 = FUN_100502206(param_2);
    }
    else {
      uVar4 = FUN_1005e9a2c();
      FUN_1005e7b8a(uVar4,param_2,&local_50);
    }
    iVar2 = FUN_10031a983(local_50,0x656a6374,0);
    if (iVar2 != 0) {
      uVar4 = FUN_100642e20();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                          (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_48 = 0x8420202;
        local_3c = 0x400;
        local_44 = uVar5;
        local_3a = iVar2;
        __os_log_impl(0x100000000,uVar4,0x10,"failed to eject device %{public}@ (%d)",&local_48,0x12
                     );
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         iVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      goto LAB_10065e2eb;
    }
  }
  uVar4 = 0;
LAB_10065e2eb:
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

