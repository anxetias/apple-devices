// name: FUN_100293805
// address: 100293805

void FUN_100293805(long param_1)

{
  int *piVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0xc90) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0xc90) + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  lVar2 = *(long *)(param_1 + 0xc88);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0xcd8) != 0) {
      FUN_1002711a0();
      FUN_1001c64c1(*(undefined8 *)(param_1 + 0xcd8));
    }
  }
  else if (*(long *)(lVar2 + 0x10) == param_1) {
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x5a40) != 0) {
    FUN_1001c64c1();
  }
  if (*(long *)(param_1 + 0x5a48) != 0) {
    FUN_1001c64c1();
  }
  FUN_1001c64c1(param_1);
  return;
}

