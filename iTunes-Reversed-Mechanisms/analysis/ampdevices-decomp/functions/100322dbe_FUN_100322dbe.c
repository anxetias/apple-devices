// name: FUN_100322dbe
// address: 100322dbe

undefined8 FUN_100322dbe(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  lVar2 = *param_2;
  plVar3 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(lVar2 + 0x34);
  if (iVar1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    *(undefined4 *)(lVar2 + 0x34) = 0;
    (**(code **)(*plVar4 + 0x10))(plVar4,0x53506d66,lVar2,iVar1,0);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar2 = *plVar4;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  return 0;
}

