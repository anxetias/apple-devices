// name: FUN_100655475
// address: 100655475

void FUN_100655475(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined local_68 [8];
  long *local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  _objc_msgSend_stret(local_68,0x10088e6d0,PTR_s_backupRestoreProgressInfoForObje_10088dc80,
                      (ulong)param_2);
  iVar4 = FUN_100504891(param_2,local_68);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar4 == 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_addBackupRestoreProgress_withRep_10088dc88,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x30),param_2);
  }
  else {
    uVar5 = FUN_100642e20();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x28),PTR_s_deviceIdentifier_10088ca18);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_54 = uVar6;
      local_4a = iVar4;
      __os_log_impl(0x100000000,uVar5,0x10,"failed to start backup for device %{public}@ (%d)",
                    &local_58,0x12);
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    lVar2 = *(long *)(param_1 + 0x30);
    uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithOSStatus_forObjectID__10088d960,iVar4,param_2);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

