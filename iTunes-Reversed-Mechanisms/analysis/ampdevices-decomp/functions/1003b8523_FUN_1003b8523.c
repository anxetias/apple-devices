// name: FUN_1003b8523
// address: 1003b8523

void FUN_1003b8523(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  FUN_1003b85b7();
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_1001822bc(*(long *)(param_1 + 0x78),1);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_1003b7d55(param_1,0x636c7220,0);
  }
  if (DAT_1008c7598 != 0) {
    lVar1 = DAT_1008c7598;
    if (DAT_1008c7598 == param_1) {
      lVar2 = 0;
    }
    else {
      do {
        lVar2 = lVar1;
        lVar1 = *(long *)(lVar2 + 8);
        if (lVar1 == 0) goto LAB_1003b85a9;
      } while (lVar1 != param_1);
    }
    puVar3 = &DAT_1008c7598;
    if (lVar2 != 0) {
      puVar3 = (undefined8 *)(lVar2 + 8);
    }
    *puVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
LAB_1003b85a9:
  FUN_1001c64c1(param_1);
  return;
}

