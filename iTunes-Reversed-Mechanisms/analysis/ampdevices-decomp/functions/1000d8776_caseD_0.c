// name: caseD_0
// address: 1000d8776

void switchD_1000dc1b8::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  long unaff_RBP;
  ulong unaff_R15;
  bool bVar3;
  
  iVar2 = (int)CONCAT71((int7)((ulong)param_4 >> 8),param_3) * 0x12e047d5 + -0x12e047cd;
  uVar1 = (unaff_R15 & 0x535417f1cfcbbe91) * -2 + unaff_RBP + 0x535417f1cfcbbe49 ^ 0x86d673b58976413
  ;
  *(ulong *)(unaff_RBP + -0x48) = uVar1 * -0x295bb3 + 0x3d8c459344aa9757;
  *(int *)(unaff_RBP + -0x40) = (int)uVar1 * 0x295bb3 + iVar2 + -0x6d95cfd2;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  FUN_1000a30e0();
  bVar3 = *(int *)(unaff_RBP + -0x3c) == 0x3a3402de;
                    /* WARNING: Could not recover jumptable at 0x0001000d8814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(&DAT_1006f7200 + (long)(int)((uint)bVar3 + iVar2) * 4)))
            ((long)*(int *)(&DAT_1006f7200 + (long)(int)((uint)bVar3 + iVar2) * 4),
             caseD_0 + *(int *)(&DAT_1006f7200 + (long)(int)((uint)bVar3 + iVar2) * 4),0,bVar3,
             !bVar3);
  return;
}

