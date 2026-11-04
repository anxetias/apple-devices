// name: FUN_10065651c
// address: 10065651c

void FUN_10065651c(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined local_70 [8];
  long *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined1 *)(param_1 + 0x48);
  uVar4 = *(undefined1 *)(param_1 + 0x49);
  _objc_msgSend_stret(local_70,0x10088e6d0,PTR_s_backupRestoreProgressInfoForObje_10088dc80,
                      (ulong)param_2);
  iVar6 = FUN_1005049b8(param_2,local_60,uVar7,uVar3,uVar4,local_70);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar6 == 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (&objc::class_t::AMPDevicesClientConnection,
               PTR_s_addBackupRestoreProgress_withRep_10088dc88,*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x40),param_2);
  }
  else {
    uVar7 = FUN_100642e20();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      uVar8 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*(undefined8 *)(param_1 + 0x38),PTR_s_deviceIdentifier_10088ca18);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      local_58 = 0x8420202;
      local_4c = 0x400;
      local_54 = uVar8;
      local_4a = iVar6;
      __os_log_impl(0x100000000,uVar7,0x10,
                    "failed to start restore from backup for device %{public}@ (%d)",&local_58,0x12)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    lVar2 = *(long *)(param_1 + 0x40);
    uVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithOSStatus_forObjectID__10088d960,iVar6,param_2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar7);
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

