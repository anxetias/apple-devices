// name: FUN_10018d33b
// address: 10018d33b

void FUN_10018d33b(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DADiskCopyDescription();
  if (lVar1 != 0) {
    lVar2 = FUN_10018ced3(param_1);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x680) = 0;
      FUN_100181f31();
    }
    FUN_10017060f(lVar1);
    return;
  }
  return;
}

