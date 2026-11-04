// name: caseD_13923
// address: 100013923

void switchD_100013a5e::caseD_13923(void)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long unaff_RBP;
  uint uVar4;
  bool bVar5;
  long in_R9;
  long in_R10;
  int unaff_R14D;
  
  *(long *)(unaff_RBP + -0x1a0) = in_R9 + 0xc;
  uVar4 = *(uint *)(in_R9 + 8);
  uVar1 = *(int *)(in_R9 + 0xc) + 0x104537a3;
  *(ulong *)(unaff_RBP + -0xf0) = (ulong)uVar4;
  uVar4 = (unaff_R14D + 0xdU ^ 0xb2770b0) + uVar4;
  uVar2 = (unaff_R14D + 2) * 4 + 0x606b5015;
  bVar5 = uVar4 < 0x606b501d != uVar1 < uVar2;
  bVar3 = uVar4 < uVar1;
  if (bVar5) {
    bVar3 = uVar1 < uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000139a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_13923 + *(int *)(in_R10 + (ulong)((uint)bVar3 + unaff_R14D + 2) * 4)))
            (CONCAT31((int3)(uVar2 >> 8),bVar5),
             caseD_13923 + *(int *)(in_R10 + (ulong)((uint)bVar3 + unaff_R14D + 2) * 4));
  return;
}

