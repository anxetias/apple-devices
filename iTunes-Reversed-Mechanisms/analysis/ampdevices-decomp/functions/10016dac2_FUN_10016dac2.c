// name: FUN_10016dac2
// address: 10016dac2

undefined8 FUN_10016dac2(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  FUN_10016dd2e(param_1,6);
  lVar1 = *param_1;
  puVar4 = *(undefined1 **)(lVar1 + 0x18);
  if (*(undefined1 **)(lVar1 + 0x20) <= puVar4 + 0x15) {
    FUN_10016d504(lVar1,0x15);
    puVar4 = *(undefined1 **)(lVar1 + 0x18);
  }
  *(undefined1 **)(lVar1 + 0x18) = puVar4 + 0x15;
  puVar3 = puVar4;
  if (param_2 < 0) {
    *puVar4 = 0x2d;
    param_2 = -param_2;
    puVar3 = puVar4 + 1;
  }
  lVar2 = FUN_10016ecb7(param_2,puVar3);
  lVar1 = *param_1;
  if ((ulong)(*(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10)) < ((long)puVar4 - lVar2) + 0x15U) {
                    /* WARNING: Subroutine does not return */
    FUN_1006790e4();
  }
  lVar2 = (*(long *)(lVar1 + 0x18) - ((long)puVar4 - lVar2)) + -0x15;
  *(long *)(lVar1 + 0x18) = lVar2;
  return CONCAT71((int7)((ulong)lVar2 >> 8),1);
}

