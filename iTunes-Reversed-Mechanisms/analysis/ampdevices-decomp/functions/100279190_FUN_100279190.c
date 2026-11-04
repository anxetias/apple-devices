// name: FUN_100279190
// address: 100279190

void FUN_100279190(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_1[3] != 0) {
    puVar3 = (undefined8 *)param_1[2];
    while (puVar3 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar3;
      operator_delete(puVar3);
      puVar3 = puVar1;
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
    param_1[3] = 0;
  }
  return;
}

