// name: FUN_100197f54
// address: 100197f54

void FUN_100197f54(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_10017060f(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xbff0000000000000;
  lVar1 = *(long *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != lVar1) {
    do {
      lVar2 = lVar2 + -0x30;
      FUN_1001987fa(lVar2);
    } while (lVar2 != lVar1);
    *(long *)(param_1 + 0x30) = lVar1;
  }
  return;
}

