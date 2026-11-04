// name: FUN_1003b8716
// address: 1003b8716

void FUN_1003b8716(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1008c7598;
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    if (*(long *)(lVar2 + 0x40) != 0) {
      FUN_1003b7d55(lVar2,param_1,param_2);
    }
  }
  return;
}

