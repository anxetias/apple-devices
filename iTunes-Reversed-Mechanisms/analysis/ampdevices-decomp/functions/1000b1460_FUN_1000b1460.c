// name: FUN_1000b1460
// address: 1000b1460

undefined8 FUN_1000b1460(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 0x58) = 0x33;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 8);
  return 0;
}

