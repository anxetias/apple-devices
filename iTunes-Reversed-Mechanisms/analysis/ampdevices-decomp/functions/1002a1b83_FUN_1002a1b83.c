// name: FUN_1002a1b83
// address: 1002a1b83

void FUN_1002a1b83(long param_1,long param_2,uint *param_3,undefined1 *param_4,undefined8 param_5)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x870) == 4) {
    *(undefined1 *)(param_1 + 0xcf8) = 1;
    *param_4 = 1;
  }
  else {
    FUN_1001c62d9((ulong)*param_3 * 0x60 + param_2,0x60);
    lVar1 = (ulong)*param_3 * 0x60;
    *(code **)(param_2 + 0x40 + lVar1) = FUN_1002a42e4;
    *(long *)(param_2 + 0x48 + lVar1) = param_1;
    FUN_1001ebfee(param_5,param_2 + lVar1);
    *param_3 = *param_3 + 1;
  }
  return;
}

