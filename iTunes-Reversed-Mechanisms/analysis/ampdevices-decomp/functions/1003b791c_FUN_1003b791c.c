// name: FUN_1003b791c
// address: 1003b791c

void FUN_1003b791c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x1a48) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)((long)param_1 + 0x1a48) = 0;
    }
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x1a98));
    *(undefined8 *)((long)param_1 + 0x1a98) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x1a60));
    *(undefined8 *)((long)param_1 + 0x1a60) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x1a70));
    *(undefined8 *)((long)param_1 + 0x1a70) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x1a80));
    *(undefined8 *)((long)param_1 + 0x1a80) = 0;
    FUN_1001c64c1(*(undefined8 *)((long)param_1 + 8));
    operator_delete(param_1);
    DAT_1008c76a0 = 0;
  }
  return;
}

