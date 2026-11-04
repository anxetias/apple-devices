// name: FUN_1000bba40
// address: 1000bba40

undefined8 FUN_1000bba40(undefined4 *param_1,long param_2)

{
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x18);
  return 0;
}

