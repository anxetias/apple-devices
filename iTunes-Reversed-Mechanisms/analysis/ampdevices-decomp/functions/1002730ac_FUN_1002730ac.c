// name: FUN_1002730ac
// address: 1002730ac

void FUN_1002730ac(long *param_1)

{
  undefined1 local_20 [16];
  
  if (*param_1 != 0) {
    FUN_10015a0ac(local_20,param_1[1]);
    FUN_1000a4560(*param_1);
    FUN_10015a142(local_20);
  }
  if (((char)param_1[4] == '\x01') && ((void *)param_1[3] != (void *)0x0)) {
    operator_delete((void *)param_1[3]);
  }
  FUN_10027364e(param_1 + 1,0);
  return;
}

