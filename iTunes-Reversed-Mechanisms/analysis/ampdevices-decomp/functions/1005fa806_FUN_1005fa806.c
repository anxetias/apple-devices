// name: FUN_1005fa806
// address: 1005fa806

void FUN_1005fa806(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  char cVar5;
  ulong in_RAX;
  long lVar6;
  ulong local_28;
  
  *param_1 = (long)&PTR_FUN_100870478;
  param_1[3] = (long)&PTR_FUN_100870558;
  local_28 = in_RAX;
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar4 = DAT_1008c7d18;
  cVar5 = _os_log_type_enabled(DAT_1008c7d18,2);
  if (cVar5 != '\0') {
    local_28 = local_28 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar4,2,"deleting AMPLibraryClient",&local_28,2);
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_10044d294(param_1);
  if (param_1[0x1c] != 0) {
    FUN_100236412();
    FUN_10023614c(param_1[0x1c]);
  }
  plVar2 = (long *)param_1[0x1d];
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  cVar5 = FUN_1001e9c23(param_1 + 7);
  if (cVar5 != '\0') {
    FUN_1001e9d75(param_1 + 7);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  pvVar3 = (void *)param_1[0x2f];
  if (pvVar3 != (void *)0x0) {
    param_1[0x30] = (long)pvVar3;
    operator_delete(pvVar3);
  }
  FUN_1006005aa(param_1[0x2d]);
  plVar2 = (long *)param_1[0x2a];
  if (plVar2 == param_1 + 0x26) {
    lVar6 = 0x20;
LAB_1005fa94a:
    (**(code **)(*plVar2 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (plVar2 != (long *)0x0) goto LAB_1005fa94a;
  }
  plVar2 = (long *)param_1[0x24];
  if (plVar2 == param_1 + 0x20) {
    lVar6 = 0x20;
  }
  else {
    lVar6 = 0x28;
    if (plVar2 == (long *)0x0) goto LAB_1005fa97a;
  }
  (**(code **)(*plVar2 + lVar6))();
LAB_1005fa97a:
  FUN_100205d70(param_1 + 0x1e);
  FUN_100205d70(param_1 + 0x1c);
  FUN_1001a8fac(param_1 + 0x11);
  FUN_1001b7a50(param_1 + 4);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  return;
}

