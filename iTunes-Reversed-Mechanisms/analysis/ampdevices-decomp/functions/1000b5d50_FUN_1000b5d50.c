// name: FUN_1000b5d50
// address: 1000b5d50

void FUN_1000b5d50(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = *(int *)(*(long *)(param_1 + 2) + 4) + 0xbe6d8fbd;
  iVar2 = *param_1 + ((uVar4 & 0x770664e1) * -2 + uVar4 + 0x770664e1 ^ 0x3bd1785f) * -0xca815c1;
  uVar1 = -uVar3;
  if ((int)uVar1 < 0) {
    uVar1 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000b5dd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f2eb0 + (long)iVar2 * 4) + 0x1000b5d9d))
            (uVar4,(long)*(int *)(&DAT_1006f2eb0 + (long)iVar2 * 4),uVar1 ^ 0xffefb73b,iVar2 + 3,
             &LAB_1000b33a0,&LAB_1000b7669);
  return;
}

