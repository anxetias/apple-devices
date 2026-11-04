// name: FUN_1000a3480
// address: 1000a3480

undefined8 FUN_1000a3480(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 8);
  return 0;
}

