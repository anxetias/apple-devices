// name: FUN_1001aff66
// address: 1001aff66

undefined8 * FUN_1001aff66(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_30 [8];
  long *local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = _CGMainDisplayID();
  if (iVar4 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_10069f585(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    FUN_1001782e9(0,0);
  }
  FUN_1001afa4a(local_30,iVar4);
  FUN_100217418(param_1,local_30);
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

