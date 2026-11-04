// name: FUN_1001ad0b4
// address: 1001ad0b4

bool FUN_1001ad0b4(double *param_1)

{
  bool bVar1;
  
  if (((((*param_1 != 0.0) || (NAN(*param_1))) || (param_1[1] != 0.0)) ||
      ((NAN(param_1[1]) || (param_1[2] != 0.0)))) ||
     ((NAN(param_1[2]) || ((param_1[3] != 0.0 || (NAN(param_1[3]))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 4) == 0;
  }
  return bVar1;
}

