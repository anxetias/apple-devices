// name: FUN_100025f10
// address: 100025f10

void FUN_100025f10(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  ulong in_RAX;
  uint unaff_EBX;
  long unaff_RBP;
  ulong uVar1;
  uint uVar2;
  undefined8 in_R10;
  ulong unaff_R13;
  ulong unaff_R14;
  
  *(undefined8 *)(unaff_RBP + -0x230) = param_2;
  *(long *)(unaff_RBP + -0x298) = *(long *)(unaff_RBP + -0x290) * 5;
  *(long *)(unaff_RBP + -0x180) = param_1 + 0x10 + *(long *)(unaff_RBP + -0x290) * 0x28;
  uVar2 = (uint)*(undefined8 *)(unaff_RBP + -0x120);
  *(uint *)(unaff_RBP + -0x178) =
       (uVar2 ^ 0xbfcef87f) + (uVar2 << (((byte)unaff_EBX ^ 0x23) & 0x1f) & 0x7f9df0fe) + 0x6ef99fe0
  ;
  uVar1 = (ulong)((int)*(undefined8 *)(unaff_RBP + -0x130) + 0xce995683);
  *(ulong *)(unaff_RBP + -0x2b8) = (uVar1 + param_5) - (uVar1 * 2 & unaff_R14);
  *(long *)(unaff_RBP + -0x2b0) = *(long *)(unaff_RBP + -0x270) + param_4;
  *(undefined8 *)(unaff_RBP + -0xe8) = in_R10;
                    /* WARNING: Could not recover jumptable at 0x0001000245ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d2600 +
                           (long)(int)((unaff_EBX ^ 7) + (uint)(in_RAX < unaff_R13)) * 4) +
            0x1000245c1))();
  return;
}

