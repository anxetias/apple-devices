// name: FUN_10043e3da
// address: 10043e3da

void FUN_10043e3da(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x548);
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_100446d44(lVar1,0);
    }
    lVar1 = FUN_1001705fc(param_2);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x548));
    *(long *)(param_1 + 0x548) = lVar1;
    if (lVar1 != 0) {
      FUN_100446d44(lVar1,1);
      return;
    }
  }
  return;
}

