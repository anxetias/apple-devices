// name: FUN_100495a1c
// address: 100495a1c

void FUN_100495a1c(long param_1)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  
  cVar3 = FUN_100495380();
  if (cVar3 != '\0') {
    FUN_100496a4d(param_1);
    lVar4 = FUN_100496392(param_1);
    while (lVar4 != 0) {
      lVar2 = FUN_100496449(lVar4);
      FUN_100496508(lVar4);
      lVar4 = lVar2;
    }
    lVar4 = FUN_100496019(param_1);
    while (lVar4 != 0) {
      lVar2 = FUN_1004960d0(lVar4);
      FUN_100496ab1(lVar4);
      lVar4 = lVar2;
    }
    puVar5 = *(undefined8 **)(param_1 + 0x13d0);
    if (puVar5 != (undefined8 *)0x0) {
      _free((void *)*puVar5);
      operator_delete(puVar5);
    }
    *(undefined8 *)(param_1 + 0x13d0) = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x13d8);
    if (puVar5 != (undefined8 *)0x0) {
      _free((void *)*puVar5);
      operator_delete(puVar5);
    }
    *(undefined8 *)(param_1 + 0x13d8) = 0;
    if (*(long *)(param_1 + 0x13e0) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x13e0) = 0;
    }
    FUN_1001dcc15(param_1 + 0x70);
    FUN_1001dcc15(param_1 + 0xc0);
    lVar4 = 0x110;
    do {
      FUN_1001dcc15(param_1 + lVar4);
      lVar4 = lVar4 + 0x50;
    } while (lVar4 != 0x750);
    puVar5 = (undefined8 *)FUN_100495ce0(param_1);
    while (puVar5 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar5;
      FUN_100496dcc();
    }
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_1001c5781();
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      FUN_1001c5781();
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      FUN_1001c5781();
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_1001c5781();
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      FUN_1001c5781();
    }
    pvVar1 = *(void **)(param_1 + 0x2488);
    if (pvVar1 != (void *)0x0) {
      FUN_10049be6c(*(undefined8 *)((long)pvVar1 + 8));
      operator_delete(pvVar1);
    }
    FUN_1001c62d9(param_1,0x2490);
    FUN_1001c64c1(param_1);
    return;
  }
  return;
}

