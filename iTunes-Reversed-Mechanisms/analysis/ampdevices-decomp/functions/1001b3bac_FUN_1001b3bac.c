// name: FUN_1001b3bac
// address: 1001b3bac

undefined4 FUN_1001b3bac(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    iVar1 = _CGImageGetAlphaInfo();
    return CONCAT31((int3)(iVar1 - 1U >> 8),iVar1 - 1U < 4);
  }
  return 0;
}

