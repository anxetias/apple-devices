// name: FUN_100642814
// address: 100642814

void FUN_100642814(undefined1 *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(param_1 + 0x28);
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x180;
    FUN_100642785(lVar2);
  }
  *(long *)(param_1 + 0x28) = lVar1;
  FUN_10064272c();
  FUN_1001a8fac(param_1 + 0x10);
  return;
}

