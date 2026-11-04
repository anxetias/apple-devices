// name: caseD_0
// address: 1000aabe8

void switchD_1000a53b7::caseD_0
               (undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  ulong uVar1;
  uint uVar2;
  long unaff_RBP;
  int iVar3;
  int iVar4;
  uint unaff_R15D;
  undefined4 unaff_000000bc;
  
  iVar3 = (int)CONCAT71((int7)((ulong)param_4 >> 8),param_3) * 0x71cc5447;
  iVar4 = iVar3 + -0x71cc543d;
  uVar2 = ((unaff_R15D & 0x2535ed20) * -2 + unaff_R15D + 0x2535ed26 ^ 0x28bab17f) * 0x3df53769;
  *(uint *)(unaff_RBP + -0x40) = iVar3 + 0x8e33abc1U ^ uVar2;
  *(long *)(unaff_RBP + -0x48) = unaff_RBP + -0xd0;
  *(uint *)(unaff_RBP + -0x3c) = uVar2 + 0x46905349;
  (*(code *)((&PTR_DAT_10082ee00)[iVar4] + -2))();
  uVar1 = (CONCAT44(unaff_000000bc,unaff_R15D) & 0x45949bc7daef6bdf) * -2 + unaff_RBP +
          0x45949bc7daef6b97 ^ 0x1eadeb0d4db3b15d;
  *(ulong *)(unaff_RBP + -0x48) = uVar1 * -0x295bb3 + 0x3d8c459344aa9757;
  *(long *)(unaff_RBP + -0x38) = unaff_RBP + -0xd0;
  *(int *)(unaff_RBP + -0x40) = (int)uVar1 * 0x295bb3 + iVar4 + -0x6d95cfd4;
  FUN_1000a30e0();
                    /* WARNING: Could not recover jumptable at 0x0001000aacd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 +
    (int)(&switchdataD_1006f3a80)[(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar4)])
  )(caseD_0 + (int)(&switchdataD_1006f3a80)
                   [(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar4)],
    (long)(int)(&switchdataD_1006f3a80)
               [(int)((uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de) + iVar4)],0);
  return;
}

