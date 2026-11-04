// name: FUN_10011987c
// address: 10011987c

undefined8 FUN_10011987c(long param_1,long param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(param_2 + 0x18);
  bVar1 = *(byte *)(lVar6 + 0x19f6);
  lVar4 = *(long *)(param_3 + 0x18);
  bVar2 = *(byte *)(lVar4 + 10);
  *(byte *)(lVar6 + 0x19f6) = bVar2;
  uVar3 = *(undefined1 *)(lVar4 + 0xb);
  *(undefined1 *)(lVar6 + 0x19f7) = uVar3;
  lVar6 = *(long *)(param_2 + 0x10);
  *(byte *)(lVar6 + 0x19f6) = bVar2;
  *(undefined1 *)(lVar6 + 0x19f7) = uVar3;
  uVar5 = ((uint)*(byte *)(param_4 + 0x115) - (uint)*(byte *)(param_1 + 0x40)) *
          (uint)*(byte *)(param_1 + 0x41);
  if (uVar5 < 6) {
    lVar6 = param_2 + (ulong)(uVar5 * 0x80) * 4 + 0x260;
    do {
      uVar7 = (ulong)bVar1;
      if (bVar1 < bVar2) {
        do {
          *(undefined4 *)(lVar6 + uVar7 * 4) = 0;
          *(undefined4 *)(lVar6 + 0x100 + uVar7 * 4) = 0;
          uVar7 = uVar7 + 1;
        } while (bVar2 != uVar7);
      }
      lVar6 = lVar6 + 0x200;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 6);
  }
  return 0;
}

