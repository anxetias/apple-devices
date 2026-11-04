// name: FUN_10018fd11
// address: 10018fd11

undefined8 FUN_10018fd11(long param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  
  uVar1 = (ushort)(param_2 >> 0x10);
  iVar2 = _chmod((char *)(param_1 + 0x19),
                 uVar1 & 1 | uVar1 >> 1 & 2 |
                 (ushort)(param_2 >> 0xf) & 4 |
                 (ushort)(param_2 >> 5) & 8 |
                 (ushort)(param_2 >> 6) & 0x10 |
                 (ushort)(param_2 >> 4) & 0x20 |
                 (ushort)((param_2 & 1) << 6) |
                 (ushort)((param_2 & 4) << 5) | (ushort)((param_2 & 2) << 7));
  if (iVar2 != 0) {
    piVar3 = ___error();
    uVar4 = FUN_1001eb020(*piVar3);
    return uVar4;
  }
  return 0;
}

