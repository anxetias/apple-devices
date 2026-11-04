// name: FUN_100116548
// address: 100116548

void FUN_100116548(undefined4 param_1,undefined8 param_2,long param_3,uint param_4,uint param_5,
                  int param_6)

{
  if (param_6 == 0) {
    if ((int)param_4 < 0) {
      if (param_5 < -param_4) {
        *(undefined4 *)(param_3 + (ulong)(param_5 * 3) * 4) = param_1;
        *(undefined4 *)(param_3 + (ulong)(param_5 * 3 + 1) * 4) = param_1;
        param_5 = param_5 * 3 + 2;
        goto LAB_100116588;
      }
    }
    else if (param_5 < param_4) goto LAB_100116588;
    param_4 = param_5 * 2 - param_4;
    *(undefined4 *)(param_3 + (ulong)param_4 * 4) = param_1;
    param_5 = param_4 + 1;
  }
LAB_100116588:
  *(undefined4 *)(param_3 + (ulong)param_5 * 4) = param_1;
  return;
}

