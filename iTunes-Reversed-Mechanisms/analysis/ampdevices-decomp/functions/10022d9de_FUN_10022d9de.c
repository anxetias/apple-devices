// name: FUN_10022d9de
// address: 10022d9de

undefined8 FUN_10022d9de(long param_1,long param_2)

{
  *(long *)(param_1 + 0x48) = *(long *)(param_2 + 0xc) - *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x14);
  *(long *)(param_1 + 0x58) = (long)*(int *)(param_2 + 0x24) + *(long *)(param_1 + 0x58);
  return 0;
}

