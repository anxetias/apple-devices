// name: FUN_1000c2ce0
// address: 1000c2ce0

undefined8 FUN_1000c2ce0(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 8);
  return 0;
}

