// name: FUN_10014daf0
// address: 10014daf0

long * FUN_10014daf0(long *param_1)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long local_30;
  long *local_28;
  
  pvVar3 = operator_new(0xc0,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar3 != (void *)0x0) {
    FUN_10014dc78(pvVar3);
  }
  *param_1 = (long)pvVar3;
  puVar4 = operator_new(0x20);
  lVar6 = (long)pvVar3 + 8;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_10083b240;
  puVar4[3] = pvVar3;
  param_1[1] = (long)puVar4;
  if (pvVar3 == (void *)0x0) {
    lVar6 = 0;
  }
  FUN_10028535e(param_1,lVar6,pvVar3);
  local_30 = *param_1;
  if (local_30 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10014f312(uVar5);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') {
      return param_1;
    }
    local_30 = *param_1;
  }
  local_28 = (long *)param_1[1];
  if (local_28 != (long *)0x0) {
    LOCK();
    local_28[1] = local_28[1] + 1;
    UNLOCK();
  }
  cVar2 = FUN_10012daba(local_30,&local_30);
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (cVar2 == '\0') {
    FUN_1002188e4(param_1);
  }
  return param_1;
}

