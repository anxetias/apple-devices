// name: FUN_100107958
// address: 100107958

undefined8 FUN_100107958(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(param_1 + 0xb30);
  iVar5 = *(int *)(lVar3 + 0x5c0) + *(int *)(lVar3 + 0x5bc);
  iVar2 = *(int *)(lVar3 + 0x5c4);
  uVar4 = 0xfffffffe;
  if ((iVar2 + iVar5) - 1U < 0xb) {
    *(undefined1 *)(param_1 + 0x1f4c) = *(undefined1 *)(param_1 + 0x1f4d);
    uVar6 = 0;
    do {
      uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0xb30) + 0x5c8 + uVar6 * 4);
      cVar1 = *(char *)(*(long *)(param_1 + 0xb30) + 4 + uVar7 * 0x78);
      *(ulong *)(param_2 + uVar7 * 8) = *(long *)(param_1 + 0xb28) + 0x1920 + uVar7 * 0x20a0;
      if (cVar1 != '\0') {
        uVar7 = (ulong)*(uint *)(*(long *)(param_1 + 0xb30) + 8 + uVar7 * 0x78);
        *(ulong *)(param_2 + uVar7 * 8) = *(long *)(param_1 + 0xb28) + uVar7 * 0x20a0 + 0x1920;
      }
      uVar6 = uVar6 + 1;
    } while ((uint)(iVar5 + iVar2) != uVar6);
    uVar4 = 0;
  }
  return uVar4;
}

