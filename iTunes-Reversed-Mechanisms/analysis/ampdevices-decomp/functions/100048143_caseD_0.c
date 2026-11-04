// name: caseD_0
// address: 100048143

void switchD_100050a2e::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long unaff_RBP;
  undefined8 unaff_R12;
  int iVar4;
  
  iVar4 = (int)CONCAT71((int7)((ulong)param_4 >> 8),param_3) * -0x64ccb55b;
  *(undefined8 *)(unaff_RBP + -0xe8) = unaff_R12;
  uVar1 = unaff_RBP - 0x48;
  uVar3 = (((uint)uVar1 & 0xef1168) * -2 + (uint)uVar1 + 0xef1169 ^ 0xd604d30) * 0x3df53769;
  *(uint *)(unaff_RBP + -0x3c) = uVar3 + 0x9155778a;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  *(uint *)(unaff_RBP + -0x40) = uVar3 ^ iVar4 + 0x64ccb563U;
  (*(code *)((&PTR_DAT_10082ee00)[iVar4 + 0x64ccb565] + -2))(uVar1);
  uVar2 = (uVar1 & 0x183e578a017b339) * -2 + unaff_RBP + 0x183e578a017b2f1 ^ 0x5aba95b2374b69bb;
  *(int *)(unaff_RBP + -0x40) = (int)uVar2 * 0x295bb3 + iVar4 + 0x64ccb55f + -0x6d95cfce;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  *(ulong *)(unaff_RBP + -0x48) = uVar2 * -0x295bb3 + 0x3d8c459344aa9757;
  FUN_1000a30e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100048253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    *(int *)(&DAT_1006e0070 +
            (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar4 + 0x64ccb55f) * 4)
    ))(caseD_0 + *(int *)(&DAT_1006e0070 +
                         (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                    iVar4 + 0x64ccb55f) * 4),
       (long)*(int *)(&DAT_1006e0070 +
                     (long)(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) +
                                iVar4 + 0x64ccb55f) * 4),0);
  return;
}

