// name: FUN_10016d244
// address: 10016d244

void FUN_10016d244(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((ulong)param_1[1] <= (ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10))) {
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) - param_1[1];
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100679060();
}

