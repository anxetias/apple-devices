// name: FUN_100116e4c
// address: 100116e4c

void FUN_100116e4c(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100835bc0;
  lVar2 = 0x397a;
  do {
    if ((void *)param_1[lVar2 + 0x18] != (void *)0x0) {
      operator_delete__((void *)param_1[lVar2 + 0x18]);
      param_1[lVar2 + 0x18] = 0;
    }
    if ((void *)param_1[lVar2 + 0xc] != (void *)0x0) {
      operator_delete__((void *)param_1[lVar2 + 0xc]);
      param_1[lVar2 + 0xc] = 0;
    }
    if ((void *)param_1[lVar2] != (void *)0x0) {
      operator_delete__((void *)param_1[lVar2]);
      param_1[lVar2] = 0;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x3986);
  pvVar1 = (void *)param_1[0x399e];
  if (pvVar1 != (void *)0x0) {
    FUN_100108b4c(pvVar1);
    operator_delete(pvVar1);
    param_1[0x399e] = 0;
  }
  pvVar1 = (void *)param_1[0x399f];
  if (pvVar1 != (void *)0x0) {
    FUN_100108b4c(pvVar1);
    operator_delete(pvVar1);
    param_1[0x399f] = 0;
  }
  FUN_1001150be(param_1);
  return;
}

