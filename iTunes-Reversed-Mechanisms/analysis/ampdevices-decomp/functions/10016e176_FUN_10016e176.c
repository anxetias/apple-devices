// name: FUN_10016e176
// address: 10016e176

undefined8 FUN_10016e176(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
    FUN_10016d504(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x6e;
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
    FUN_10016d504(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x75;
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
    FUN_10016d504(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x6c;
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
    FUN_10016d504(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x6c;
  return CONCAT71((int7)((ulong)puVar2 >> 8),1);
}

