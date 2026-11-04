// name: FUN_100107cac
// address: 100107cac

void FUN_100107cac(undefined4 param_1,undefined8 *param_2,ulong param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  pvVar1 = (void *)*param_2;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_2[1];
    if (pvVar2 != pvVar1) {
      param_2[1] = ((long)pvVar1 + (3 - (long)pvVar2) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (param_3 != 0) {
    if (param_3 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    puVar3 = operator_new(param_3 * 4);
    *param_2 = puVar3;
    do {
      *puVar3 = param_1;
      puVar3 = puVar3 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    param_2[1] = puVar3;
  }
  return;
}

