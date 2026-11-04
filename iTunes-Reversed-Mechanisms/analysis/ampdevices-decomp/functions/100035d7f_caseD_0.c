// name: caseD_0
// address: 100035d7f

void switchD_10004ec34::caseD_0(void)

{
  ulong uVar1;
  ulong uVar2;
  byte in_CL;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long unaff_RBP;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_R14D;
  bool bVar10;
  
  iVar7 = (uint)(in_CL ^ 1) * -0x6fe2d7c2;
  iVar8 = iVar7 + 0x6fe2d7cc;
  *(undefined4 *)(unaff_RBP + -0xe0) = unaff_R14D;
  uVar1 = unaff_RBP - 0x48;
  uVar6 = (uint)uVar1;
  uVar3 = (uVar6 & 0x6408af00) * -2 + uVar6 + 0xe408af03 ^ 0xdfe801ae;
  uVar4 = uVar3 * 0x22116dab;
  *(uint *)(unaff_RBP + -0x3c) = uVar4 ^ 0x7b1aeb70;
  *(uint *)(unaff_RBP + -0x48) = uVar3 * -0x22116dab + 0x2b7d1cab;
  *(uint *)(unaff_RBP + -0x38) = uVar4 + 0x984301f;
  *(uint *)(unaff_RBP + -0x44) = iVar7 + 0xb2d69428U ^ uVar4;
  FUN_1000ac960(uVar1);
  iVar9 = *(int *)(unaff_RBP + -0x40) + -0x3568dcb1;
  uVar3 = ((uVar6 & 0x41b74d90) * -2 + uVar6 + 0xc1b74d94 ^ 0xcc3811cd) * 0x3df53769;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  *(uint *)(unaff_RBP + -0x3c) = uVar3 + 0xe86778cf;
  *(uint *)(unaff_RBP + -0x40) = uVar3 ^ iVar7 + 0x6fe2d7caU;
  (*(code *)((&PTR_DAT_10082ee00)[iVar8] + -2))(uVar1);
  lVar5 = 0x3d8c459344aa9758;
  *(int *)(unaff_RBP + -0xdc) = iVar9;
  if (iVar9 < 0x188011cc) {
    lVar5 = 0x3d8c459344aa9757;
  }
  uVar2 = (uVar1 & 0x7d0cf14a3d43f48b) * -2 + unaff_RBP + 0x7d0cf14a3d43f443 ^ 0x26358180aa1f2e09;
  *(int *)(unaff_RBP + -0x40) = (int)uVar2 * 0x295bb3 + iVar8 + -0x6d95cfd4;
  *(ulong *)(unaff_RBP + -0x48) = lVar5 + uVar2 * -0x295bb3;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  FUN_1000a30e0(uVar1);
  bVar10 = *(int *)(unaff_RBP + -0x3c) == 0x3a3402de;
                    /* WARNING: Could not recover jumptable at 0x000100035f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + (int)(&switchdataD_1006d6e20)[(int)((uint)bVar10 + iVar8)]))
            (caseD_0 + (int)(&switchdataD_1006d6e20)[(int)((uint)bVar10 + iVar8)],
             (long)(int)(&switchdataD_1006d6e20)[(int)((uint)bVar10 + iVar8)],bVar10,0);
  return;
}

