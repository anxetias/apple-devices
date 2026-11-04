// name: FUN_1000c0cd0
// address: 1000c0cd0

undefined8 FUN_1000c0cd0(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 8);
  return 0;
}

