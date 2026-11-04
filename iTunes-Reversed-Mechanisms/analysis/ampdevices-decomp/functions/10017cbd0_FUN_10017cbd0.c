// name: FUN_10017cbd0
// address: 10017cbd0

bool FUN_10017cbd0(int *param_1)

{
  bool bVar1;
  
  if ((param_1 == (int *)0x0) || (*(long *)(param_1 + 4) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_1 == 0x504f5358 || *param_1 == 0x41464350;
  }
  return bVar1;
}

