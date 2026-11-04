// name: FUN_10065936b
// address: 10065936b

void FUN_10065936b(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_100539d74(param_2);
  if (iVar3 != 0) {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_48 = 0x8420202;
      local_3c = 0x400;
      local_44 = uVar5;
      local_3a = iVar3;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "failed to request activation info for device %{public}@ (%d)",&local_48,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    lVar1 = *(long *)(param_1 + 0x28);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar3)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar1 + 0x10))(lVar1,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

