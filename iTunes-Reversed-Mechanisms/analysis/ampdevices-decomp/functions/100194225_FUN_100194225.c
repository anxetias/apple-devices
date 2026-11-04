// name: FUN_100194225
// address: 100194225

undefined8 FUN_100194225(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *local_70;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100694e22(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
    goto LAB_10019439e;
  }
  lVar2 = FUN_10016ff43(0,param_1);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100694dac(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    cVar1 = FUN_1001782e9(0,0);
    uVar3 = 0xffffffdd;
    if (cVar1 == '\0') goto LAB_10019439e;
  }
  IVar4 = NSFileManager::defaultManager
                    ((ID)PTR__OBJC_CLASS___NSFileManager_10082c668,PTR_s_defaultManager_10088bfa0);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
  local_88 = PTR___NSConcreteStackBlock_10082caf0;
  local_80 = 0xc6000000;
  local_78 = FUN_10019441f;
  local_70 = &DAT_10083c440;
  FUN_10028593a(local_68,param_2);
  (*(code *)PTR__objc_msgSend_10082c770)
            (uVar3,PTR_s_unmountVolumeAtURL_options_compl_10088c008,lVar2,3,&local_88);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_10017060f(lVar2);
  if (local_48 == local_68) {
    lVar2 = 0x20;
LAB_100194396:
    (**(code **)(*local_48 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_100194396;
  }
  uVar3 = 0;
LAB_10019439e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

