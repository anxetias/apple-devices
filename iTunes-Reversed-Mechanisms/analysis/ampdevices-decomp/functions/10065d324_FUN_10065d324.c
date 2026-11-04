// name: FUN_10065d324
// address: 10065d324

void FUN_10065d324(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_100502425(param_2,*(undefined8 *)(param_1 + 0x20));
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_100642e20();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      local_4a = *(undefined8 *)(param_1 + 0x20);
      local_58 = 0x8420302;
      local_4c = 0x842;
      local_42 = 0x400;
      local_54 = uVar5;
      local_40 = iVar3;
      __os_log_impl(0x100000000,uVar4,0x10,
                    "failed to set name of device %{public}@ to \"%{public}@\" (%d)",&local_58,0x1c)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    puVar1 = PTR__OBJC_CLASS___NSError_10082c660;
    if (iVar3 == -0x17ffffe9) {
      FUN_1001bdca6(local_68,*(undefined8 *)(param_1 + 0x20));
      FUN_1005c9322(&local_58,param_2,local_68);
      uVar4 = FUN_1001bdcb0(&local_58,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (puVar1,PTR_s_errorWithOSStatus_localizedDescr_10088dd70,0xe8000017,uVar5);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001b7a50(&local_58);
      FUN_1001b7a50(local_68);
    }
    else {
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,
                         iVar3);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    }
  }
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

