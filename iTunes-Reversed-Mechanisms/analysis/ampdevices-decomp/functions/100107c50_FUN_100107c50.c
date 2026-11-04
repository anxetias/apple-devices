// name: FUN_100107c50
// address: 100107c50

int FUN_100107c50(long *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_100119272(param_1 + 9,param_3);
  if (iVar1 == 0) {
    FUN_100107cac(0,param_1 + 5,param_3 * param_2);
    FUN_100107a42(param_1 + 7,param_2,0);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return iVar1;
}

