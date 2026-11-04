// name: FUN_100280aa1
// address: 100280aa1

void FUN_100280aa1(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),8);
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_10028507e(param_1 + 0x38,*(long *)(param_2 + 0x38),*(long *)(param_2 + 0x40),
                (*(long *)(param_2 + 0x40) - *(long *)(param_2 + 0x38) >> 4) * -0x5555555555555555);
  return;
}

