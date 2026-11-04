// name: FUN_100540056
// address: 100540056

long FUN_100540056(long *param_1)

{
  long lVar1;
  
  if ((char)param_1[0x99] == '\0') {
    *(undefined1 *)(param_1 + 0x99) = 1;
    lVar1 = (**(code **)(*param_1 + 0x1d0))(param_1);
    param_1[0x9a] = lVar1;
  }
  else {
    lVar1 = param_1[0x9a];
  }
  return lVar1;
}

