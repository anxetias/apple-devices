// name: FUN_1005fd93c
// address: 1005fd93c

ulong FUN_1005fd93c(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  undefined1 local_38 [16];
  
  FUN_100238ca8(local_38,param_1 + 0x38);
  lVar3 = *(long *)(param_1 + 0x168);
  if (lVar3 == 0) goto LAB_1005fd9eb;
  lVar4 = param_1 + 0x168;
  do {
    bVar5 = *(uint *)(lVar3 + 0x20) < param_2;
    if (!bVar5) {
      lVar4 = lVar3;
    }
    lVar3 = *(long *)(lVar3 + (ulong)bVar5 * 8);
  } while (lVar3 != 0);
  if ((lVar4 == param_1 + 0x168) || (param_2 < *(uint *)(lVar4 + 0x20))) goto LAB_1005fd9eb;
  if (*(long *)(lVar4 + 0x30) == 0) {
LAB_1005fd9b4:
    lVar4 = 0;
    lVar3 = 0;
  }
  else {
    lVar3 = std::__shared_weak_count::lock();
    if (lVar3 == 0) goto LAB_1005fd9b4;
    lVar4 = *(long *)(lVar4 + 0x28);
  }
  *param_3 = lVar4;
  plVar2 = (long *)param_3[1];
  param_3[1] = lVar3;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005fd9eb:
  lVar3 = *param_3;
  FUN_10015a142(local_38);
  return CONCAT71((int7)((ulong)param_3 >> 8),lVar3 != 0) & 0xffffffff;
}

