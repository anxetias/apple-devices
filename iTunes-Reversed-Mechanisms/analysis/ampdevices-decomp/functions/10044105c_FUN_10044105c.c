// name: FUN_10044105c
// address: 10044105c

bool FUN_10044105c(long param_1)

{
  char cVar1;
  
  if ((*(long *)(param_1 + 0x4a8) == 0) && (FUN_10043f0e2(param_1), *(long *)(param_1 + 0x4a8) == 0)
     ) {
    return false;
  }
  cVar1 = __AVCFPlayerItemIsRental();
  return cVar1 != '\0';
}

