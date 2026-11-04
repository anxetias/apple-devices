// name: FUN_1001b3824
// address: 1001b3824

long FUN_1001b3824(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = _CGImageGetHeight();
    lVar2 = _CGImageGetBytesPerRow(*(undefined8 *)(param_1 + 0x48));
    lVar2 = lVar2 * lVar1;
  }
  return lVar2;
}

