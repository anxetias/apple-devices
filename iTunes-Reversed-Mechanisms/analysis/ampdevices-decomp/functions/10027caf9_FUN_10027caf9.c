// name: FUN_10027caf9
// address: 10027caf9

void FUN_10027caf9(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  lVar2 = *(long *)(param_2 + 0x40);
  *(long *)(param_1 + 0x40) = lVar2;
  if (lVar2 != 0) {
    *(long *)(lVar1 + 0x10) = param_1 + 0x38;
    *(undefined8 **)(param_2 + 0x30) = (undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    return;
  }
  *(long *)(param_1 + 0x30) = param_1 + 0x38;
  return;
}

