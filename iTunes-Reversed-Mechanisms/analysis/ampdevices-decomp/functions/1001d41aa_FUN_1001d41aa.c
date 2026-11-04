// name: FUN_1001d41aa
// address: 1001d41aa

void FUN_1001d41aa(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x980);
  while (lVar1 != 0) {
    FUN_1001d41e3(param_1);
    lVar1 = *(long *)(param_1 + 0x980);
  }
  *(undefined1 *)(param_1 + 0x952) = *(undefined1 *)(param_1 + 0x951);
  return;
}

