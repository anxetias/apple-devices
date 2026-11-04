// name: FUN_100325496
// address: 100325496

ulong FUN_100325496(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_R12;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  uVar4 = CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar2 = FUN_10017076e();
    if (0 < lVar2) {
      lVar5 = 0;
      do {
        uVar3 = FUN_10016499b(*(undefined8 *)(param_1 + 0x38),lVar5);
        uVar3 = FUN_1001668a7(uVar3,&cf_AMSCollectionFiltered);
        uVar1 = FUN_100165a13(uVar3);
        if ((char)uVar1 != '\0') break;
        bVar6 = lVar2 + -1 != lVar5;
        lVar5 = lVar5 + 1;
      } while (bVar6);
      uVar4 = (ulong)uVar1 ^ 1;
    }
  }
  return uVar4 & 0xffffffff;
}

