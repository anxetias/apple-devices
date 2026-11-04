// name: FUN_1003a535e
// address: 1003a535e

undefined8 FUN_1003a535e(long param_1,long *param_2)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar2 = *param_2;
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = FUN_100474dd0(lVar2,0);
  if ((uVar5 & 0x402) != 0) {
    lVar4 = *(long *)(lVar2 + 0x10);
    puVar1 = (ushort *)(lVar3 + 0xf8);
    *puVar1 = *puVar1 & 0xfffb;
    FUN_1001de8c6(lVar3 + 0x98,lVar4 + 0x1c10,*(undefined4 *)(lVar2 + 0xd8));
    **(undefined1 **)(param_1 + 0x10) = 1;
  }
  uVar6 = 0x2349;
  if (**(char **)(param_1 + 0x10) == '\0') {
    uVar6 = 0;
  }
  return uVar6;
}

