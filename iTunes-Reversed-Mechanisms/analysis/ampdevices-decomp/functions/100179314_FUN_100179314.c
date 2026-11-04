// name: FUN_100179314
// address: 100179314

void FUN_100179314(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (param_2[0xc] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  plVar1 = (long *)param_2[4];
  if (plVar1 == param_2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) goto LAB_100179351;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_100179351:
  operator_delete(param_2);
  return;
}

