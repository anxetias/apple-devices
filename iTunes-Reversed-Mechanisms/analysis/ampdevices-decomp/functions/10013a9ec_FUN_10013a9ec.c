// name: FUN_10013a9ec
// address: 10013a9ec

void FUN_10013a9ec(undefined8 *param_1,undefined4 param_2)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  pvVar1 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar1 != (void *)0x0) {
    FUN_100272bc0(pvVar1,0);
    *(undefined4 *)((long)pvVar1 + 0x30) = 1;
    *(undefined1 *)((long)pvVar1 + 0x34) = 0;
  }
  FUN_10013bf6e(param_1 + 2,pvVar1);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x32aaaba7;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x69) = 0;
  *(undefined8 *)((long)param_1 + 0x71) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = param_2;
  return;
}

