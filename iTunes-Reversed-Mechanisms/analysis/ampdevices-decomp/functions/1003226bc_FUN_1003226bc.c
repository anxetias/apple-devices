// name: FUN_1003226bc
// address: 1003226bc

void FUN_1003226bc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10030252b();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_1 + 0x450);
    *(byte *)(lVar1 + 0x49) = *(byte *)(lVar1 + 0x49) & 0xdf;
    FUN_1002fc8ec(lVar1);
    FUN_1002b532a(lVar1,0xc);
    FUN_1002fc9c2(lVar1);
  }
  FUN_1001c64c1(param_1);
  return;
}

