// name: FUN_10020fb16
// address: 10020fb16

void FUN_10020fb16(long param_1)

{
  *(undefined8 *)(param_1 + 0x21a0) = 0;
  *(undefined8 *)(param_1 + 0x21a8) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x21c0));
  *(undefined8 *)(param_1 + 0x21c0) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x21c8));
  *(undefined8 *)(param_1 + 0x21c8) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x21d0));
  *(undefined8 *)(param_1 + 0x21d0) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x21e0));
  *(undefined8 *)(param_1 + 0x21e0) = 0;
  if (*(long *)(param_1 + 0x21d8) != -1) {
    FUN_10017060f();
  }
  *(undefined8 *)(param_1 + 0x21d8) = 0;
  return;
}

