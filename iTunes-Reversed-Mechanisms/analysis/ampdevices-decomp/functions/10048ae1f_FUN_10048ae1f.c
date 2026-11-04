// name: FUN_10048ae1f
// address: 10048ae1f

undefined8 FUN_10048ae1f(long param_1,int param_2)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return 0;
}

