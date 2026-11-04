// name: FUN_10005fdc6
// address: 10005fdc6

void FUN_10005fdc6(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long unaff_RBP;
  long lVar8;
  
  *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar6 = (((uint)param_1 & 0x3360c29f) * -2 + (uint)param_1 + 0x3360c29f ^ 0x93ac84a5) * 0x66d92ebf
  ;
  uVar4 = param_1[4];
  uVar7 = uVar6 + *(int *)((long)param_1 + 0xc);
  uVar2 = *param_1;
  *(ulong *)(unaff_RBP + -0x100) =
       (unaff_RBP + 0x85a7163334de8896U +
       ((unaff_RBP + 0x85a7163334de8896U) / 5 & 0xfffffffffffffffe) * -5) * 0x10;
  uVar5 = 0;
  if (uVar7 < 0x57a841ae) {
    uVar5 = 0x100000000;
  }
  uVar3 = param_1[2];
  *(ulong *)(unaff_RBP + -0x3a0) = (ulong)uVar7;
  lVar8 = (uVar5 | uVar7) + 0x6d7eb6bc5a37559;
  *(long *)(unaff_RBP + -0x5b0) = lVar8 * 2;
  *(long *)(unaff_RBP + -0x5b8) = lVar8;
  *(ulong *)(unaff_RBP + -0x188) = uVar3;
  iVar1 = *(int *)(&DAT_1006e7c50 + (long)(int)(((uint)uVar4 ^ uVar6) + (uint)(uVar3 < uVar2)) * 4);
  *(ulong **)(unaff_RBP + -0x378) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010005ff1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + 0x10005fec1))();
  return;
}

