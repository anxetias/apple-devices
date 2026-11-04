// name: FUN_10057576a
// address: 10057576a

void FUN_10057576a(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR_FUN_10086a550;
  *param_1 = (long)&PTR_FUN_10086a550;
  plVar3 = (long *)param_1[1];
  if (plVar3 != (long *)0x0) {
    if ((char)param_1[0x1e] != '\0') {
      (**(code **)(*plVar3 + 0x50))(plVar3,0);
    }
    FUN_100295c56(param_1 + 1);
    ppuVar4 = (undefined **)*param_1;
  }
  (*(code *)ppuVar4[0x14])(param_1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  FUN_1001e9d75(param_1 + 9);
  FUN_10017060f(param_1[0x19]);
  FUN_10057756c(param_1 + 0x1a);
  FUN_10057756c(param_1 + 0x14);
  FUN_10021e316(param_1 + 7);
  plVar3 = (long *)param_1[6];
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
  FUN_10021e316(param_1 + 3);
  FUN_10021e316(param_1 + 1);
  return;
}

