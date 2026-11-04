// name: FUN_10053ff80
// address: 10053ff80

double FUN_10053ff80(undefined8 param_1,double param_2,long *param_3)

{
  double dVar1;
  
  if ((char)param_3[0x9b] == '\0') {
    dVar1 = (double)(**(code **)(*param_3 + 0x200))(param_3);
    param_3[0x9c] = (long)dVar1;
    param_3[0x9d] = (long)param_2;
    if ((dVar1 <= 0.0) || (param_2 <= 0.0)) {
      if ((0.0 < (double)param_3[0x9e]) && (0.0 < (double)param_3[0x9f])) {
        dVar1 = (double)param_3[0x9e];
      }
    }
    else {
      *(undefined1 *)(param_3 + 0x9b) = 1;
    }
  }
  else {
    dVar1 = (double)param_3[0x9c];
  }
  return dVar1;
}

