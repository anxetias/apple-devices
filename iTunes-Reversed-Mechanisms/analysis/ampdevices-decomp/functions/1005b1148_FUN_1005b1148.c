// name: FUN_1005b1148
// address: 1005b1148

bool FUN_1005b1148(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((*(long *)(param_1 + 0x18) == 0) && (*(long *)(param_1 + 0x28) == 0)) &&
      (*(long *)(param_1 + 0x38) == 0)) &&
     (((*(long *)(param_1 + 0x48) == 0 && (*(long *)(param_1 + 0x58) == 0)) &&
      (*(long *)(param_1 + 0x68) == 0)))) {
    bVar1 = *(long *)(param_1 + 0x78) != 0;
  }
  return bVar1;
}

