// name: FUN_10056fae8
// address: 10056fae8

void FUN_10056fae8(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_10086a390;
  if (param_1[0xc] != 0) {
    FUN_1000bdde0();
    param_1[0xc] = 0;
  }
  FUN_10017060f(param_1[10]);
  FUN_10017060f(param_1[0xb]);
  if (param_1[0xd] != 0) {
    FUN_1001c64c1();
    param_1[0xd] = 0;
  }
  plVar3 = (long *)param_1[9];
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
  FUN_10021e316(param_1 + 6);
  FUN_10021e316(param_1 + 4);
  FUN_10021e316(param_1 + 2);
  return;
}

