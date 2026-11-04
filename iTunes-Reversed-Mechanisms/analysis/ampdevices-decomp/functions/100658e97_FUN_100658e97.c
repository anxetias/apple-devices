// name: FUN_100658e97
// address: 100658e97

void FUN_100658e97(long param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  char local_4a;
  char local_49;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10053a708(param_2,&local_4a,&local_49);
  if (iVar2 != 0) {
    uVar3 = FUN_100642e20();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceIdentifier_10088ca18);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_48 = 0x8420202;
      local_3c = 0x400;
      local_44 = uVar4;
      local_3a = iVar2;
      __os_log_impl(0x100000000,uVar3,0x10,
                    "failed to request activation state for device %{public}@ (%d)",&local_48,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    lVar5 = *(long *)(param_1 + 0x28);
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar2)
    ;
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (**(code **)(lVar5 + 0x10))(lVar5,0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  lVar5 = 3;
  if (local_4a == '\0') {
    lVar5 = 2 - (ulong)(local_49 == '\0');
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar5,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

