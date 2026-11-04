// name: FUN_1004ca604
// address: 1004ca604

void FUN_1004ca604(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_3 != 0) {
    plVar3 = (long *)std::__shared_weak_count::lock();
    if (plVar3 != (long *)0x0) {
      *param_1 = param_2;
      param_1[1] = plVar3;
      LOCK();
      plVar3[2] = plVar3[2] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 != 0) {
        return;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10013bd04();
}

