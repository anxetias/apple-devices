// name: FUN_10015d7c7
// address: 10015d7c7

bool FUN_10015d7c7(long param_1,byte *param_2)

{
  bool bVar1;
  
  if (param_2 != (byte *)0x0) {
    *param_2 = *(byte *)(param_1 + 0xc) >> 1 & 1;
  }
  if ((*(int *)(param_1 + 8) == 0x6c70636d) && ((*(uint *)(param_1 + 0xc) & 0xd) == 0xc)) {
    bVar1 = *(int *)(param_1 + 0x20) == 0x10;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

