// name: FUN_1003a2058
// address: 1003a2058

ulong FUN_1003a2058(long param_1)

{
  ulong uVar1;
  
  if ((*(byte *)(param_1 + 0xf9) & 8) == 0) {
    uVar1 = FUN_1003a4b24(param_1);
    *(int *)(param_1 + 0x7c) = (int)uVar1;
    *(byte *)(param_1 + 0xf9) = *(byte *)(param_1 + 0xf9) | 8;
  }
  else {
    uVar1 = (ulong)*(uint *)(param_1 + 0x7c);
  }
  return uVar1;
}

