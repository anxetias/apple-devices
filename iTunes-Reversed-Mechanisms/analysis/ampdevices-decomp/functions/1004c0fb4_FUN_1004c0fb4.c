// name: FUN_1004c0fb4
// address: 1004c0fb4

undefined8 FUN_1004c0fb4(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  if ((param_2 >> 10 & 1) != 0 && param_3 != 0) {
    if (*(long *)(param_1 + 0x4f0) == 0) {
      FUN_1004c3f8e(param_1);
    }
    plVar3 = *(long **)(param_1 + 0x4f8);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*(long *)(param_1 + 0x4f0) != 0) {
      uVar4 = FUN_10044013a();
      *(undefined4 *)(param_3 + 0x1014) = uVar4;
      *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | 8;
    }
  }
  return 0;
}

