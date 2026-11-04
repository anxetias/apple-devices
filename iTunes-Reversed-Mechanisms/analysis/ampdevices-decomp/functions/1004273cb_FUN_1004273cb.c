// name: FUN_1004273cb
// address: 1004273cb

void FUN_1004273cb(void)

{
  uint uVar1;
  ushort *in_RCX;
  ushort local_1c;
  
  FUN_100426ed6();
  if (((ulong)local_1c != 0) && (in_RCX[local_1c] == 0)) {
    uVar1 = (uint)local_1c;
    do {
      uVar1 = uVar1 - 1;
      local_1c = (ushort)uVar1;
      if (uVar1 == 0) break;
    } while (in_RCX[uVar1] == 0);
  }
  *in_RCX = local_1c;
  return;
}

