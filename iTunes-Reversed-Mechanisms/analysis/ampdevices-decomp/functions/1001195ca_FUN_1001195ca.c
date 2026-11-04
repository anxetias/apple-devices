// name: FUN_1001195ca
// address: 1001195ca

undefined8
FUN_1001195ca(long param_1,long param_2,long param_3,long param_4,undefined1 param_5,uint param_6)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  
  *(undefined1 *)(param_1 + 0x40) = param_5;
  if (param_6 != 0) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 & 0xffff;
      uVar1 = *(ushort *)(param_2 + 0x5c8 + uVar5 * 4);
      uVar3 = (ulong)uVar1;
      lVar2 = **(long **)(param_3 + uVar3 * 8);
      ___bzero(lVar2 + 0x260,0x1000);
      FUN_1001196de(param_1,*(undefined8 *)(param_4 + uVar5 * 8),
                    *(undefined8 *)(param_3 + uVar3 * 8),uVar3);
      FUN_10011987c(param_1,lVar2,*(undefined8 *)(param_4 + uVar5 * 8),
                    *(undefined8 *)(*(long *)(param_3 + uVar3 * 8) + 8));
      if (*(char *)(param_2 + 4 + uVar3 * 0x78) != '\0') {
        uVar3 = (ulong)(uVar1 + 1);
        lVar2 = **(long **)(param_3 + uVar3 * 8);
        ___bzero(lVar2 + 0x260,0x1000);
        FUN_1001196de(param_1,*(undefined8 *)(param_4 + uVar5 * 8),
                      *(undefined8 *)(param_3 + uVar3 * 8),uVar3);
        FUN_10011987c(param_1,lVar2,*(undefined8 *)(param_4 + uVar5 * 8),
                      *(undefined8 *)(*(long *)(param_3 + uVar3 * 8) + 8));
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar4;
    } while ((uVar4 & 0xffff) < param_6);
  }
  return 0;
}

