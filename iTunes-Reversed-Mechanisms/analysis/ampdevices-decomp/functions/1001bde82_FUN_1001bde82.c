// name: FUN_1001bde82
// address: 1001bde82

void FUN_1001bde82(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x40) != 0)) {
    FUN_1002c3cd0(&local_38,param_2);
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    plVar3 = *(long **)(param_2 + 0x40);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    plVar3 = (long *)CONCAT44(uStack_1c,uStack_20);
    if (plVar3 != (long *)0x0) {
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
  }
  return;
}

