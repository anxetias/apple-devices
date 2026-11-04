// name: FUN_1003a2e0a
// address: 1003a2e0a

void FUN_1003a2e0a(long param_1,long param_2)

{
  undefined1 uVar1;
  
  if (param_2 != 0) {
    if ((*(long *)(param_1 + 0x48) != 0) &&
       ((*(ulong *)(*(long *)(param_1 + 0x48) + 0x1bb0) & 0x280000000000) == 0x200000000000)) {
      *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
      *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
    }
    uVar1 = *(undefined1 *)(param_2 + 0xe6);
    *(undefined1 *)(param_1 + 0xe7) = uVar1;
    *(undefined1 *)(param_1 + 0xe6) = uVar1;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  }
  return;
}

