// name: FUN_100161f0e
// address: 100161f0e

bool FUN_100161f0e(int *param_1)

{
  bool bVar1;
  
  if (param_1 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_1 == 0x62756666;
  }
  return bVar1;
}

