// name: FUN_1001bd05c
// address: 1001bd05c

long * FUN_1001bd05c(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((((long *)*param_1 != (long *)0x0) && (*(long *)*param_1 != 0)) ||
     (((long *)param_1[1] != (long *)0x0 && (*(long *)param_1[1] != 0)))) {
    uVar1 = FUN_1001b8d38(param_1,0);
    FUN_1001743c3(uVar1,param_2);
    FUN_1001b81f2(param_1,uVar1);
    FUN_10017060f(uVar1);
  }
  return param_1;
}

