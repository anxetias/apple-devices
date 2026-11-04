// name: FUN_10017cc4a
// address: 10017cc4a

bool FUN_10017cc4a(int *param_1)

{
  bool bVar1;
  
  if (param_1 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_1 == 0x66726566;
  }
  return bVar1;
}

