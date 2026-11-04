// name: FUN_1002f0e00
// address: 1002f0e00

undefined8 FUN_1002f0e00(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x10) = 1;
  }
  return CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 == 0);
}

