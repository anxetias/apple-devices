// name: FUN_1003cfe02
// address: 1003cfe02

void FUN_1003cfe02(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_100857768;
  lVar4 = 0x158;
  do {
    puVar3 = *(undefined8 **)((long)param_1 + lVar4 + -0x18);
    while (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar3;
      pvVar2 = (void *)puVar3[3];
      if (pvVar2 != (void *)0x0) {
        puVar3[4] = pvVar2;
        operator_delete(pvVar2);
      }
      operator_delete(puVar3);
      puVar3 = puVar1;
    }
    lVar4 = lVar4 + -0x28;
    pvVar2 = *(void **)((long)param_1 + lVar4);
    *(undefined8 *)((long)param_1 + lVar4) = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  } while (lVar4 != 0x18);
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}

