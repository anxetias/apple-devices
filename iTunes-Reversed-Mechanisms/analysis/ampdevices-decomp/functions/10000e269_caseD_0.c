// name: caseD_0
// address: 10000e269

void switchD_10000f016::caseD_0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long unaff_RBX;
  bool bVar6;
  long unaff_R13;
  uint unaff_R15D;
  bool bVar7;
  
  uVar1 = *(int *)(unaff_RBX + 0xc) + 0xee9c75ba;
  uVar2 = *(int *)(unaff_RBX + 8) + 0xc2b8cd9f;
  uVar3 = (unaff_R15D | 4) + 0xf9307918;
  bVar7 = uVar1 < uVar3;
  bVar6 = uVar2 < uVar3 != bVar7;
  bVar4 = uVar2 < uVar1;
  if (bVar6) {
    bVar4 = bVar7;
  }
  lVar5 = (long)*(int *)(unaff_R13 + (ulong)((uint)bVar4 + (unaff_R15D | 4)) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010000e2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + lVar5))
            (bVar7,CONCAT31((int3)(uVar3 >> 8),bVar6),caseD_0 + lVar5,lVar5,bVar4,unaff_RBX + 0xc);
  return;
}

