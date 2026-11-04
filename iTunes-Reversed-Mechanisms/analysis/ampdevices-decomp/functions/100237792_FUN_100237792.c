// name: FUN_100237792
// address: 100237792

char * FUN_100237792(long param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char *pcVar4;
  
  pcVar4 = "";
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar3 = (long *)std::__shared_weak_count::lock();
    if (plVar3 != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x18);
      if (plVar2 == (long *)0x0) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)(**(code **)(*plVar2 + 0x20))(plVar2,param_2);
      }
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
  }
  return pcVar4;
}

