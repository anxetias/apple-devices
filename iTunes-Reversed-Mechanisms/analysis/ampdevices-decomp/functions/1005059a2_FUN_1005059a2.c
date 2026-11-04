// name: FUN_1005059a2
// address: 1005059a2

void FUN_1005059a2(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  lVar2 = FUN_1004de449(*puVar1);
  if (lVar2 != 0) {
    if (puVar1[0x10b] == 0) {
      *(undefined4 *)(lVar2 + 0x153d0) = puVar1[0x10c];
      *(undefined8 *)(lVar2 + 87000) = *(undefined8 *)(puVar1 + 0x10e);
    }
    if ((*(char *)(lVar2 + 0x6abd) != '\0') && (*(long *)(lVar2 + 0x30) != 0)) {
      FUN_100321e5c();
      return;
    }
  }
  return;
}

