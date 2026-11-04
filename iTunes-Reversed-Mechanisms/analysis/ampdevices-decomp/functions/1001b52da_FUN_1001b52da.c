// name: FUN_1001b52da
// address: 1001b52da

long ** FUN_1001b52da(long **param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long **pplVar7;
  long *local_38;
  long *plStack_30;
  
  puVar5 = operator_new(0x58,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[7] = 0x3ff0000000000000;
    puVar5[8] = 0x100000000;
    *puVar5 = &PTR_FUN_10083cc58;
    puVar5[9] = 0;
    *(undefined1 *)(puVar5 + 10) = 0;
  }
  FUN_1001b5e96(&local_38,puVar5);
  pplVar7 = param_1;
  if (local_38 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006a1260(uVar6);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    FUN_1001782e9(0,0);
  }
  else {
    iVar4 = (**(code **)(*local_38 + 0xf0))(local_38,param_2,param_3);
    if (iVar4 == 0) {
      *param_1 = local_38;
      param_1[1] = plStack_30;
      pplVar7 = &local_38;
    }
  }
  *pplVar7 = (long *)0x0;
  pplVar7[1] = (long *)0x0;
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

