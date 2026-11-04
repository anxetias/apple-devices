// name: FUN_100439e4f
// address: 100439e4f

undefined8 FUN_100439e4f(long param_1,int param_2,undefined8 param_3)

{
  if ((param_2 == 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 2;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    FUN_100595808(param_3,param_1,0,0);
  }
  return 0;
}

