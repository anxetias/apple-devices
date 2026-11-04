// name: FUN_100380761
// address: 100380761

undefined8 FUN_100380761(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10037ddf6(*(undefined8 *)(param_1 + 0x3c0));
  if (lVar1 != 0) {
    uVar2 = FUN_100242590(lVar1);
    return uVar2;
  }
  return 0;
}

