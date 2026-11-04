// name: FUN_10016df90
// address: 10016df90

undefined8 FUN_10016df90(long *param_1,int param_2)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = param_1[4];
  if ((ulong)(lVar1 - param_1[3]) < 0x10) {
    FUN_1006791d5();
  }
  else if (*(char *)(lVar1 + -8) != '\0') {
    param_1[4] = lVar1 + -0x10;
    lVar1 = *param_1;
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x5d;
    return CONCAT71((int7)((ulong)puVar2 >> 8),1);
  }
  FUN_1006791b2();
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (param_2 == 0) {
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x66;
    lVar1 = *param_1;
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x61;
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
    *puVar2 = 0x73;
  }
  else {
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x74;
    lVar1 = *param_1;
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x72;
    lVar1 = *param_1;
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x75;
  }
  lVar1 = *param_1;
  puVar2 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
    FUN_10016d504(lVar1,1);
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
  *puVar2 = 0x65;
  return CONCAT71((int7)((ulong)puVar2 >> 8),1);
}

