// name: FUN_1001ab17c
// address: 1001ab17c

undefined8 * FUN_1001ab17c(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_10032f0f2(param_1);
  }
  else {
    uVar1 = _CFStringCreateArrayBySeparatingStrings(0,*param_2,*param_3);
    FUN_1001a78e6(param_1,uVar1,0);
  }
  return param_1;
}

