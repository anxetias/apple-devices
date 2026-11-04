// name: FUN_10052bca2
// address: 10052bca2

void FUN_10052bca2(long *param_1,int param_2)

{
  long lVar1;
  
  if ((param_2 == 0) && ((char)param_1[0x9e] == '\x01')) {
    lVar1 = (**(code **)(*param_1 + 0x70))(param_1);
    param_1[0xb6] = lVar1;
  }
  *(char *)(param_1 + 0x9e) = (char)param_2;
  return;
}

