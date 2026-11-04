// name: FUN_100576efe
// address: 100576efe

long FUN_100576efe(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    lVar5 = *(long *)(param_1 + 0xa8);
    if (lVar5 != param_1 + 0xa0) {
      while( true ) {
        plVar2 = *(long **)(lVar5 + 0x10);
        plVar3 = *(long **)(lVar5 + 0x18);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar3[1] = plVar3[1] + 1;
          UNLOCK();
        }
        lVar4 = (**(code **)(*plVar2 + 0x30))();
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar2 = plVar3 + 1;
          lVar1 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (lVar4 != 0) break;
        lVar5 = *(long *)(lVar5 + 8);
        if (lVar5 == param_1 + 0xa0) {
          return 0;
        }
      }
      return lVar4;
    }
  }
  return 0;
}

