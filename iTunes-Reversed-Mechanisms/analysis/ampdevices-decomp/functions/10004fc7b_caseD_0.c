// name: caseD_0
// address: 10004fc7b

void switchD_100046977::caseD_0
               (undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined1 unaff_BL;
  long unaff_RBP;
  uint unaff_R14D;
  undefined4 unaff_000000b4;
  int iVar3;
  
  iVar3 = param_3 * 0xe9adbbd + (int)CONCAT71((int7)((ulong)param_4 >> 8),unaff_BL) * -8;
  uVar2 = ((unaff_R14D & 0x3a574578) * -2 + unaff_R14D + 0x3a57457c ^ 0x37d81925) * 0x3df53769;
  *(uint *)(unaff_RBP + -0x40) = iVar3 + 0x10U ^ uVar2;
  *(uint *)(unaff_RBP + -0x3c) = uVar2 + 0x3e6a777e;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  (*(code *)((&PTR_DAT_10082ee00)[iVar3 + 0x12] + -2))();
  uVar1 = (CONCAT44(unaff_000000b4,unaff_R14D) & 0x5f6606082fc26b4d) * -2 + unaff_RBP +
          0x5f6606082fc26b05 ^ 0x45f76c2b89eb1cf;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  *(ulong *)(unaff_RBP + -0x48) = uVar1 * -0x295bb3 + 0x3d8c459344aa9758;
  *(int *)(unaff_RBP + -0x40) = (int)uVar1 * 0x295bb3 + iVar3 + 10 + -0x6d95cfcc;
  FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x00010004fd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    *(int *)(&DAT_1006d7a20 +
            (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar3 + 10) * 4)))
            (caseD_0 + *(int *)(&DAT_1006d7a20 +
                               (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                          iVar3 + 10) * 4),
             (long)*(int *)(&DAT_1006d7a20 +
                           (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                      iVar3 + 10) * 4),0);
  return;
}

