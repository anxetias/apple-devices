// name: FUN_10013730a
// address: 10013730a

void FUN_10013730a(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long *local_30;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar1 = (long *)*param_2;
      local_30 = param_2 + 4;
      FUN_100133056(&local_30);
      FUN_1001b7a50(param_2 + 2);
      operator_delete(param_2);
      param_2 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}

