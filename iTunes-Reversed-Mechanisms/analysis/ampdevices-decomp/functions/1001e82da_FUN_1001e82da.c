// name: FUN_1001e82da
// address: 1001e82da

bool FUN_1001e82da(int *param_1)

{
  bool bVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73656d61)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1[2] == 0x636f6e64;
  }
  return bVar1;
}

