// name: FUN_1004ded16
// address: 1004ded16

void FUN_1004ded16(long param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_1004de937(param_1);
  }
  if (*(long *)(param_1 + 0x66b8) != 0) {
    FUN_100495a1c();
    *(undefined8 *)(param_1 + 0x66b8) = 0;
  }
  return;
}

