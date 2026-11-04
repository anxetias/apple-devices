// name: caseD_0
// address: 1000461a9

void switchD_10002bb87::caseD_0(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_RBP;
  uint uVar6;
  ulong unaff_R14;
  
  iVar1 = param_4 * -0x42cc364b + (uint)(byte)((byte)param_4 ^ 1) * 2;
  uVar6 = iVar1 + 6;
  uVar3 = (((uint)unaff_R14 & 0x61ea5960) * -2 + (uint)unaff_R14 + 0x61ea5963 ^ 0x6c65053a) *
          0x3df53769;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  *(uint *)(unaff_RBP + -0x3c) = uVar3 + 0x9747fb36;
  *(uint *)(unaff_RBP + -0x40) = uVar3 ^ uVar6;
  puVar2 = (&PTR_DAT_10082ee00)[iVar1 + 8];
  *(int *)(unaff_RBP + -0xd4) = param_2;
  (*(code *)(puVar2 + -2))();
  uVar5 = (ulong)(0x1d2d4998 < param_2) + 1;
  uVar4 = (unaff_R14 & 0x25cb005c25f71b6) * -2 + unaff_RBP + 0x25cb005c25f716e ^ 0x5965c0cf5503ab34;
  *(ulong *)(unaff_RBP + -0x48) =
       (uVar5 ^ 0x3d8fd7dfeebabff6) + uVar4 * -0x295bb3 + (ulong)((uint)uVar5 & 0xfffffffe) * 2 +
       -0x3924caa1028a0;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  *(uint *)(unaff_RBP + -0x40) = (int)uVar4 * 0x295bb3 + uVar6 + -0x6d95cfd2;
  FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x0001000462cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    *(int *)(&DAT_1006d48d0 + (long)(int)((*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + uVar6) * 4))
  )(caseD_0 + *(int *)(&DAT_1006d48d0 +
                      (long)(int)((*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + uVar6) * 4),
    (long)*(int *)(&DAT_1006d48d0 +
                  (long)(int)((*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + uVar6) * 4),0);
  return;
}

