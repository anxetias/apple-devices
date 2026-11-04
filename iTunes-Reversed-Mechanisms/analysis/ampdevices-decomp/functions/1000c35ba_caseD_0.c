// name: caseD_0
// address: 1000c35ba

void switchD_1000ca49d::caseD_0
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined1 unaff_BL;
  long unaff_RBP;
  uint unaff_R12D;
  undefined4 unaff_000000a4;
  int iVar3;
  
  iVar3 = param_3 * 0x78210116 + (int)CONCAT71((int7)((ulong)param_4 >> 8),unaff_BL) * -6;
  uVar2 = ((unaff_R12D & 0x2f617bc8) * -2 + unaff_R12D + 0xaf617bce ^ 0xa2ee2797) * 0x3df53769;
  *(uint *)(unaff_RBP + -0x40) = iVar3 + 0xeU ^ uVar2;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  *(uint *)(unaff_RBP + -0x3c) = uVar2 + 0xf9c71ae0;
  (*(code *)((&PTR_DAT_10082ee00)[iVar3 + 0x10] + -2))();
  uVar1 = (CONCAT44(unaff_000000a4,unaff_R12D) & 0x4ce5f7800b03fa5e) * -2 + unaff_RBP +
          0x4ce5f7800b03fa16 ^ 0x17dc874a9c5f20dc;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  *(int *)(unaff_RBP + -0x40) = (int)uVar1 * 0x295bb3 + iVar3 + 6 + -0x6d95cfca;
  *(ulong *)(unaff_RBP + -0x48) = uVar1 * -0x295bb3 + 0x3d8c459344aa9759;
  FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x0001000c36b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    *(int *)(&DAT_1006ee230 +
            (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar3 + 6) * 4)))
            (caseD_0 + *(int *)(&DAT_1006ee230 +
                               (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                          iVar3 + 6) * 4),
             (long)*(int *)(&DAT_1006ee230 +
                           (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar3 + 6
                                      ) * 4),0);
  return;
}

