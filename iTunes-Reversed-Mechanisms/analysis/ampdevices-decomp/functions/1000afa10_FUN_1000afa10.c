// name: FUN_1000afa10
// address: 1000afa10

/* WARNING: Switch with 1 destination removed at 0x0001000afa6b : 2 cases all go to same destination
    */

void FUN_1000afa10(uint *param_1)

{
  uint uVar1;
  long unaff_RBP;
  uint uVar2;
  
  *(undefined8 *)(unaff_RBP + -0x30) = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *param_1 ^
          ((uint)param_1 + ((uint)param_1 & 0x37cfda93) * -2 + 0x37cfda93 ^ 0x4620b88a) * 0x540651b;
  uVar2 = (int)unaff_RBP - 0x38;
  *(uint *)(unaff_RBP + -0x38) =
       ((uVar2 & 0x2c2eb3e8) * -2 + uVar2 + 0x2c2eb3ea ^ 0xf579fc8e) * 0x34a356b1 + uVar1 +
       0x47767aeb;
  FUN_1000bf1d0();
                    /* WARNING: Could not recover jumptable at 0x0001000399bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006dcc40 + (long)(int)uVar1 * 4) + 0x1000399a7))();
  return;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
}

