// name: FUN_10054e55e
// address: 10054e55e

long FUN_10054e55e(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    cVar1 = FUN_1003b6f88(*(undefined4 *)(param_1 + 0x48),param_1 + 0x4c,param_2,param_3);
    if (cVar1 != '\0') break;
    param_1 = *(long *)(param_1 + 8);
  }
  return param_1;
}

