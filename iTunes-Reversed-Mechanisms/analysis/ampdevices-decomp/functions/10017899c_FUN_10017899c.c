// name: FUN_10017899c
// address: 10017899c

ulong FUN_10017899c(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  size_t sVar5;
  bool bVar6;
  undefined1 local_30 [16];
  
  if ((int)param_1 == 0) {
    return 0;
  }
  FUN_1001785f7();
  FUN_10015a0ac(local_30,&DAT_100890050);
  FUN_1001785f7();
  plVar4 = DAT_100890030;
  FUN_1001785f7();
  for (; (plVar4 != DAT_100890038 && (*(int *)(*plVar4 + 0x34) != (int)param_1));
      plVar4 = plVar4 + 1) {
  }
  FUN_1001785f7();
  bVar6 = plVar4 != DAT_100890038;
  if (!bVar6) goto LAB_100178a74;
  plVar1 = (long *)*plVar4;
  if (plVar1 != (long *)0x0) {
    if (plVar1[0xc] != 0) {
      std::__shared_weak_count::__release_weak();
    }
    plVar2 = (long *)plVar1[4];
    if (plVar2 == plVar1) {
      lVar3 = 0x20;
LAB_100178a3c:
      (**(code **)(*plVar2 + lVar3))();
    }
    else {
      lVar3 = 0x28;
      if (plVar2 != (long *)0x0) goto LAB_100178a3c;
    }
    operator_delete(plVar1);
  }
  FUN_1001785f7();
  sVar5 = (long)DAT_100890038 - (long)(plVar4 + 1);
  if (sVar5 != 0) {
    _memmove(plVar4,plVar4 + 1,sVar5);
  }
  DAT_100890038 = (long *)((long)plVar4 + sVar5);
LAB_100178a74:
  FUN_10015a142(local_30);
  return CONCAT71((int7)((ulong)param_1 >> 8),bVar6) & 0xffffffff;
}

