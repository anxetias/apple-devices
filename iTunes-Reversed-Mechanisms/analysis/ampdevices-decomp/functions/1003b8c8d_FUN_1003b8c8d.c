// name: FUN_1003b8c8d
// address: 1003b8c8d

void FUN_1003b8c8d(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_1003b7eba(param_1,0x636c7220,0);
    piVar1 = (int *)(*(long *)(param_1 + 0x18) + 0x68);
    *piVar1 = *piVar1 + -1;
  }
  if (DAT_1008c75a0 != 0) {
    lVar2 = DAT_1008c75a0;
    if (DAT_1008c75a0 == param_1) {
      lVar3 = 0;
    }
    else {
      do {
        lVar3 = lVar2;
        lVar2 = *(long *)(lVar3 + 8);
        if (lVar2 == 0) goto LAB_1003b8cf9;
      } while (lVar2 != param_1);
    }
    puVar4 = &DAT_1008c75a0;
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 8);
    }
    *puVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
LAB_1003b8cf9:
  FUN_1001c64c1(param_1);
  return;
}

