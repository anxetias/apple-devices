// name: FUN_100626cf6
// address: 100626cf6

void FUN_100626cf6(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar3 = 2;
    do {
      puVar1 = *(undefined8 **)(param_2 + lVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_1002a41f4(puVar1 + 3,puVar1[4]);
        pvVar2 = (void *)*puVar1;
        if (pvVar2 != (void *)0x0) {
          puVar1[1] = pvVar2;
          operator_delete(pvVar2);
        }
        operator_delete(puVar1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0xfc);
    FUN_1001c64c1(param_2);
    return;
  }
  return;
}

