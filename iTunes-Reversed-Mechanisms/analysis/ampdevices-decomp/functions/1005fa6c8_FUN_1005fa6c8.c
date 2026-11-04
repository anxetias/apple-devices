// name: FUN_1005fa6c8
// address: 1005fa6c8

ulong FUN_1005fa6c8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    plVar3 = (long *)std::__shared_weak_count::lock();
    if (plVar3 != (long *)0x0) {
      if (*(long *)(param_1 + 0x38) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),
                         *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xd8));
      }
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
      goto LAB_1005fa722;
    }
  }
  uVar4 = 0;
LAB_1005fa722:
  return uVar4 & 0xffffffff;
}

