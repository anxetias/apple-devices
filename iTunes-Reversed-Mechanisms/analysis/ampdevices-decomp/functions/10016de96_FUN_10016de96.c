// name: FUN_10016de96
// address: 10016de96

undefined8 FUN_10016de96(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  
  lVar1 = param_1[4];
  if ((ulong)(lVar1 - param_1[3]) < 0x10) {
    FUN_10067918f();
  }
  else if (*(char *)(lVar1 + -8) != '\x01') {
    param_1[4] = lVar1 + -0x10;
    lVar1 = *param_1;
    puVar2 = *(undefined1 **)(lVar1 + 0x18);
    if (*(undefined1 **)(lVar1 + 0x20) <= puVar2 + 1) {
      FUN_10016d504(lVar1,1);
      puVar2 = *(undefined1 **)(lVar1 + 0x18);
    }
    *(undefined1 **)(lVar1 + 0x18) = puVar2 + 1;
    *puVar2 = 0x7d;
    return CONCAT71((int7)((ulong)puVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_10067916c();
}

