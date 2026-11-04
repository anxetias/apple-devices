// name: FUN_1000c738b
// address: 1000c738b

void FUN_1000c738b(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x28) = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (((uint)param_1 & 0x72f98fee) * -2 + (uint)param_1 + 0x72f98fee ^ 0xa295bef5) * 0x29e509e3
  ;
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = uVar2 ^ *(uint *)(param_1 + 0x10);
  *(undefined8 *)(unaff_RBP + -0x70) = 0;
  *(undefined4 *)(unaff_RBP + -0x68) = 0xf0e3c17;
  *(undefined1 *)(unaff_RBP + -0x61) = 0x47;
  uVar5 = uVar3 & 0x3f000000 ^ 0x21000000;
  uVar5 = (uVar5 - (uVar5 * 2 & 0x12000000)) + 0x9491db4 ^ 0x6fbf14;
  bVar4 = uVar5 - (uVar5 * 2 & 0xe054100) == 0x292161a0 || (~uVar3 & 0x30000000) == 0;
                    /* WARNING: Could not recover jumptable at 0x0001000c7452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006ea8d0 + (long)(int)(iVar1 + uVar2 + (uint)bVar4) * 4) +
            0x1000c742f))
            ((code *)((long)*(int *)(&DAT_1006ea8d0 + (long)(int)(iVar1 + uVar2 + (uint)bVar4) * 4)
                     + 0x1000c742f),bVar4,0xc5cb5962);
  return;
}

