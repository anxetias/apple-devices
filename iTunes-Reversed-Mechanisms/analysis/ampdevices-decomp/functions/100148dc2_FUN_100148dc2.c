// name: FUN_100148dc2
// address: 100148dc2

void FUN_100148dc2(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 local_30 [16];
  
  lVar1 = *param_3;
  plVar2 = (long *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  if (lVar1 == 0) {
    FUN_10032f0f2(local_30);
  }
  else {
    uVar4 = FUN_100153f3a();
    FUN_1001a7a9e(local_30,uVar4);
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2,local_30);
    FUN_1001a8fac(local_30);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar3 = plVar2 + 1;
      lVar1 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

