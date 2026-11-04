// name: FUN_10013b58e
// address: 10013b58e

undefined4 * FUN_10013b58e(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1002c3cd0(&local_38);
  plVar3 = (long *)CONCAT44(uStack_2c,uStack_30);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[2] = plVar3[2] + 1;
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
  return param_1;
}

