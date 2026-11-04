// name: FUN_1001b371c
// address: 1001b371c

undefined8 FUN_1001b371c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar1 = _CGImageGetDataProvider();
    if (lVar1 != 0) {
      uVar2 = _CGDataProviderCopyData(lVar1);
      return uVar2;
    }
  }
  return 0;
}

