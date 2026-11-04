// name: caseD_0
// address: 10000a624

void switchD_1000036a4::caseD_0(long param_1)

{
  uint uVar1;
  bool bVar2;
  int unaff_EBX;
  uint uVar3;
  long unaff_RBP;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 in_R9;
  long in_R11;
  
  *(undefined8 *)(unaff_RBP + -0x48) = in_R9;
  uVar3 = unaff_EBX - 4U | 6;
  *(long *)(unaff_RBP + -0x150) = param_1 + 0xc;
  uVar4 = *(uint *)(param_1 + 8);
  uVar1 = *(int *)(param_1 + 0xc) + 0x7e29f96c + (uVar3 + 0x9b8d05f5 & 0x6472fa0c);
  *(ulong *)(unaff_RBP + -0x108) = (ulong)uVar4;
  uVar4 = uVar4 + 0x19429922;
  uVar6 = (uVar3 - 5 | 0x12) + 0x83b083e8;
  bVar5 = uVar4 < 0x83b083fb != uVar1 < uVar6;
  bVar2 = uVar4 < uVar1;
  if (bVar5) {
    bVar2 = uVar1 < uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010000a6ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(caseD_0 + *(int *)(in_R11 + (long)(int)(bVar2 + uVar3) * 4)))
            (CONCAT31((int3)(uVar6 >> 8),bVar5),
             caseD_0 + *(int *)(in_R11 + (long)(int)(bVar2 + uVar3) * 4));
  return;
}

