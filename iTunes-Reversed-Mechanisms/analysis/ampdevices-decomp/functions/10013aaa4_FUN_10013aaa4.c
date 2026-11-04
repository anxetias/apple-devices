// name: FUN_10013aaa4
// address: 10013aaa4

long * FUN_10013aaa4(long *param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  byte bVar6;
  
  std::mutex::lock();
  lVar3 = *(long *)(param_2 + 0x10);
  plVar4 = *(long **)(param_2 + 0x18);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  bVar2 = *(byte *)(param_2 + 0x78);
  bVar5 = true;
  if ((bVar2 == 0) &&
     ((*(int *)(lVar3 + 0x14) == 0 ||
      ((*(int *)(lVar3 + 0x30) == 3 && (*(byte *)(lVar3 + 0x34) < 5)))))) {
    *(undefined1 *)(param_2 + 0x78) = 1;
    std::mutex::unlock();
    FUN_10013ab9c(param_2);
    bVar6 = 1;
    bVar5 = false;
  }
  else {
    bVar6 = 0;
  }
  bVar6 = bVar6 | bVar2;
  *param_1 = lVar3;
  param_1[1] = (long)plVar4;
  if (plVar4 == (long *)0x0) {
    *(byte *)(param_1 + 2) = bVar6;
  }
  else {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
    *(byte *)(param_1 + 2) = bVar6;
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (bVar5) {
    std::mutex::unlock();
  }
  return param_1;
}

