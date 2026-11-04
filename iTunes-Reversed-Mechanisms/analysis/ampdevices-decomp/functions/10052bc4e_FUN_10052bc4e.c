// name: FUN_10052bc4e
// address: 10052bc4e

undefined8 FUN_10052bc4e(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0x44415448;
  *(undefined4 *)(param_1 + 0x80) = *param_2;
  FUN_1001c631b(param_2 + 1,param_1 + 0x84,0x460);
  *(undefined1 *)(param_1 + 0x500) = *(undefined1 *)((long)param_2 + 0x469);
  return 0;
}

