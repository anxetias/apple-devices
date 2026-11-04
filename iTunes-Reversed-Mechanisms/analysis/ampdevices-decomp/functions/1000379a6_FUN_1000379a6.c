// name: FUN_1000379a6
// address: 1000379a6

void FUN_1000379a6(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  *(long *)(unaff_RBP + -0xe0) = param_1;
  iVar5 = *(int *)(param_1 + 4) +
          ((uint)param_1 + ((uint)param_1 & 0xd1d9cb68) * -2 + 0xd1d9cb68 ^ 0x23d3c475) *
          -0x54361bb5;
  lVar2 = unaff_RBP + -0xd0;
  FUN_1000cb740(lVar2,0,0x80);
  uVar1 = unaff_RBP - 0x48;
  uVar4 = (((uint)uVar1 & 0x602fcb98) * -2 + (uint)uVar1 + 0x602fcb99 ^ 0x6da097c0) * 0x3df53769;
  *(uint *)(unaff_RBP + -0x40) = iVar5 + 6U ^ uVar4;
  *(uint *)(unaff_RBP + -0x3c) = uVar4 + 0x66b5a065;
  *(long *)(unaff_RBP + -0x48) = lVar2;
  (*(code *)((&PTR_DAT_10082ee00)[iVar5 + 8] + -2))(uVar1);
  uVar3 = (uVar1 & 0x42695afd927abf42) * -2 + unaff_RBP + 0x42695afd927abefa ^ 0x19502a37052665c0;
  *(int *)(unaff_RBP + -0x40) = iVar5 + (int)uVar3 * 0x295bb3 + -0x6d95cfcc;
  *(long *)(unaff_RBP + -0x38) = lVar2;
  *(ulong *)(unaff_RBP + -0x48) = uVar3 * -0x295bb3 + 0x3d8c459344aa9757;
  FUN_1000a30e0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100037af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d9530 +
                           (long)(int)(iVar5 + (uint)(*(int *)(unaff_RBP + -0x3c) == 0x3a3402de)) *
                           4) + 0x100037ac9))();
  return;
}

