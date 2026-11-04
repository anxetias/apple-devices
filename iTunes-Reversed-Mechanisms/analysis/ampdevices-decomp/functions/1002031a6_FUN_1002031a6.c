// name: FUN_1002031a6
// address: 1002031a6

void FUN_1002031a6(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_1002008a6(param_2);
  if ((iVar1 == 0) && (*(int *)((long)param_2 + 0x68c) == 0)) {
    FUN_1004e3b42(*param_2);
  }
  FUN_1004e1e68(*param_2);
  FUN_100205d70(param_2 + 0xcf);
  operator_delete(param_2);
  return;
}

