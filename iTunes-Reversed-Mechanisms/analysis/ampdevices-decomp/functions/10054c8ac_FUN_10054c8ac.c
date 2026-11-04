// name: FUN_10054c8ac
// address: 10054c8ac

int FUN_10054c8ac(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  int in_R9D;
  
  lVar3 = *(long *)(param_1 + 0x808);
  uVar1 = *(uint *)(lVar3 + 0xc);
  if (uVar1 == 0 || *(int *)(param_1 + 0x850) != 0x6d703461) {
    if ((ulong)uVar1 == 0) goto LAB_10054c962;
  }
  else if (*(int *)(lVar3 + 0x14) == 0) goto LAB_10054c962;
  uVar5 = 0;
  do {
    iVar2 = *(int *)(lVar3 + 0x14 + uVar5 * 8);
    iVar4 = iVar2;
    if (iVar2 < 0x780) {
      if ((iVar2 != 0x3c0) && (iVar2 != 0x400)) {
LAB_10054c925:
        iVar4 = in_R9D;
      }
    }
    else if ((iVar2 != 0x780) && (iVar2 != 0x800)) goto LAB_10054c925;
    if (iVar2 < 0x780) {
      if (iVar2 == 0x3c0) {
        return iVar4;
      }
      if (iVar2 == 0x400) {
        return iVar4;
      }
    }
    else {
      if (iVar2 == 0x780) {
        return iVar4;
      }
      if (iVar2 == 0x800) {
        return iVar4;
      }
    }
    uVar5 = uVar5 + 1;
    in_R9D = iVar4;
  } while (uVar1 != uVar5);
LAB_10054c962:
  return *(int *)(param_1 + 0x868);
}

