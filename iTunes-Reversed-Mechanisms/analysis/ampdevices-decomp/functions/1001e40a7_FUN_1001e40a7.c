// name: FUN_1001e40a7
// address: 1001e40a7

void FUN_1001e40a7(undefined8 param_1,short *param_2,ushort *param_3)

{
  FUN_1001e222d(param_1,param_3);
  if (param_2 != (short *)0x0) {
    FUN_1001e1c39(param_1,param_2);
    if (*param_3 != 0) {
      *param_2 = *param_2 + ~*param_3;
    }
  }
  return;
}

