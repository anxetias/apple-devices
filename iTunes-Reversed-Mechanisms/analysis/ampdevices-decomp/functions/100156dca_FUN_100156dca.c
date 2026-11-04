// name: FUN_100156dca
// address: 100156dca

undefined1 FUN_100156dca(long param_1)

{
  undefined1 uVar1;
  
  FUN_100156de8();
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x128);
  *(undefined1 *)(param_1 + 0x128) = 1;
  UNLOCK();
  return uVar1;
}

