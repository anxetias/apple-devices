// name: FUN_10013720c
// address: 10013720c

void FUN_10013720c(undefined8 param_1,long *param_2)

{
  long lVar1;
  
  if (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      FUN_100137240(param_2);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

