// name: caseD_0
// address: 1000603a1

void switchD_10008e316::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  long unaff_RBP;
  uint unaff_R13D;
  undefined4 unaff_000000ac;
  int iVar3;
  
  iVar3 = (int)CONCAT71((int7)((ulong)param_4 >> 8),param_3) * 0x3fcc24b2;
  uVar2 = ((unaff_R13D & 0x7b772498) * -2 + unaff_R13D + 0x7b77249f ^ 0x76f878c6) * 0x3df53769;
  *(uint *)(unaff_RBP + -0x3c) = uVar2 + 0x9852863c;
  *(uint *)(unaff_RBP + -0x40) = uVar2 ^ iVar3 + 0xc033db56U;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  (*(code *)((&PTR_DAT_10082ee00)[iVar3 + -0x3fcc24a8] + -2))();
  uVar1 = (CONCAT44(unaff_000000ac,unaff_R13D) & 0x619d08f57c58da87) * -2 + unaff_RBP +
          0x619d08f57c58da3f ^ 0x3aa4783feb040005;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  *(ulong *)(unaff_RBP + -0x48) = uVar1 * -0x295bb3 + 0x3d8c459344aa9758;
  *(int *)(unaff_RBP + -0x40) = (int)uVar1 * 0x295bb3 + iVar3 + -0x3fcc24ae + -0x6d95cfce;
  FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x000100060494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    *(int *)(&DAT_1006e0ed0 +
            (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar3 + -0x3fcc24ae) * 4
            )))(caseD_0 + *(int *)(&DAT_1006e0ed0 +
                                  (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                             iVar3 + -0x3fcc24ae) * 4),
                (long)*(int *)(&DAT_1006e0ed0 +
                              (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                         iVar3 + -0x3fcc24ae) * 4),0);
  return;
}

