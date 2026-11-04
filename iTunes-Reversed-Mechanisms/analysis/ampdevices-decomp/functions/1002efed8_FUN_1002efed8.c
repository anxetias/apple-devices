// name: FUN_1002efed8
// address: 1002efed8

void FUN_1002efed8(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_100853360;
  puVar4 = (undefined8 *)param_1[3];
  plVar5 = (long *)puVar4[2];
  if (plVar5 != (long *)0x0) {
    do {
      pvVar1 = (void *)plVar5[3];
      if (pvVar1 != (void *)0x0) {
        FUN_1002842e4(pvVar1);
        operator_delete(pvVar1);
      }
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
    puVar4 = (undefined8 *)param_1[3];
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = (undefined8 *)puVar4[2];
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar3;
      operator_delete(puVar3);
      puVar3 = puVar2;
    }
  }
  pvVar1 = (void *)*puVar4;
  *puVar4 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  operator_delete(puVar4);
  return;
}

