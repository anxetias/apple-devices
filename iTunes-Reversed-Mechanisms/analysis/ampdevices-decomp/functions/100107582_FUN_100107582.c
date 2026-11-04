// name: FUN_100107582
// address: 100107582

ulong FUN_100107582(long param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar7 = *(long *)(param_1 + 0xb28);
  lVar10 = *(long *)(param_1 + 0xb30);
  lVar5 = (param_2 & 0xffffffff) * 0x78;
  uVar4 = (ulong)*(uint *)(lVar10 + 8 + lVar5);
  lVar1 = lVar7 + (param_2 & 0xffffffff) * 0x20a0;
  lVar6 = lVar1 + 0xbb0;
  lVar8 = lVar7;
  if (*(char *)(lVar7 + 0x1ab78 + (ulong)*(uint *)(lVar10 + 0xc + lVar5)) != '\0') {
    FUN_100110ca4(lVar7,lVar10 + lVar5,uVar4,lVar7);
    lVar8 = *(long *)(param_1 + 0xb28);
  }
  iVar2 = FUN_100105c68(*(undefined8 *)(param_1 + 0x1f60),lVar6,lVar10 + lVar5,lVar8);
  uVar9 = 0xfffffffe;
  if (iVar2 == 0) {
    lVar10 = lVar10 + uVar4 * 0x78;
    lVar7 = lVar7 + uVar4 * 0x20a0;
    lVar8 = lVar7 + 0xbb0;
    iVar2 = FUN_100105c68(*(undefined8 *)(param_1 + 0x1f60),lVar8,lVar10,
                          *(undefined8 *)(param_1 + 0xb28));
    if (iVar2 == 0) {
      if (*(char *)(lVar10 + 0x74) == '\0') {
        uVar9 = 0;
      }
      else {
        uVar3 = FUN_100110ed0(*(undefined8 *)(param_1 + 0xb28),lVar10);
        uVar9 = (ulong)uVar3;
      }
      if (*(char *)(lVar1 + 0x2928) != '\0') {
        uVar3 = FUN_10012401c(lVar6);
        uVar9 = (ulong)uVar3;
      }
      if (*(char *)(lVar7 + 0x2928) != '\0') {
        uVar4 = FUN_10012401c(lVar8);
        return uVar4;
      }
    }
  }
  return uVar9;
}

