// name: FUN_1001b68fe
// address: 1001b68fe

undefined8 FUN_1001b68fe(long param_1,uint param_2,long *param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if ((param_2 & 1) == 0) goto LAB_1001b69c5;
  if ((*(long *)(param_1 + 0x28) == 0) ||
     (plVar5 = (long *)std::__shared_weak_count::lock(), plVar5 == (long *)0x0)) {
    plVar5 = (long *)0x0;
LAB_1001b6966:
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006a1439(uVar6);
    }
    FUN_1001782e9(0x400,0);
    bVar7 = false;
    uVar6 = 0;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
  }
  else {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_1001b6966;
    bVar7 = *(long *)(param_1 + 0x20) == *param_3;
    uVar6 = 2;
  }
  LOCK();
  plVar1 = plVar5 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    std::__shared_weak_count::__release_weak();
  }
  if (!bVar7) {
    return uVar6;
  }
LAB_1001b69c5:
  if (((param_2 & 2) != 0) && (iVar4 = FUN_1001b9c66(param_1 + 0x30,param_4), iVar4 != 0)) {
    return 2;
  }
  return 1;
}

