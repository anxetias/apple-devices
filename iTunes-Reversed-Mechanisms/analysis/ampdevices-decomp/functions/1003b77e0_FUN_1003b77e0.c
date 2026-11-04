// name: FUN_1003b77e0
// address: 1003b77e0

void FUN_1003b77e0(void)

{
  int iVar1;
  int *in_RCX;
  uint local_20;
  int local_1c;
  uint local_18;
  int local_14;
  
  iVar1 = FUN_1000509c0();
  if (in_RCX != (int *)0x0) {
    in_RCX[0] = 0;
    in_RCX[1] = 0;
    in_RCX[2] = 0;
    in_RCX[3] = 0;
    if (iVar1 == 0) {
      iVar1 = local_20 + 0x7c25b080;
      if (0x83da4f7f < local_20) {
        iVar1 = -1;
      }
      *in_RCX = iVar1;
      in_RCX[1] = local_1c;
      if (local_18 != 0xffffffff) {
        iVar1 = local_18 + 0x7c25b080;
        if (0x83da4f7f < local_18) {
          iVar1 = -1;
        }
        in_RCX[2] = iVar1;
      }
      in_RCX[3] = local_14;
    }
  }
  return;
}

