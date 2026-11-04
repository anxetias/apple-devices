// name: FUN_1000dd260
// address: 1000dd260

void FUN_1000dd260(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = ((uint)param_1 & 0x63ceccca) * -2 + (uint)param_1 + 0x63ceccca ^ 0x1221aed3;
  uVar3 = **(int **)(param_1 + 8) + 0xc3c8abff;
  uVar4 = *(int *)(param_1 + 0x38) + uVar2 * -0x540651b + 0xb9848f03;
  bVar1 = uVar3 < 0x2c157247;
  if (uVar4 < 0x2c157247 == uVar3 < 0x2c157247) {
    bVar1 = uVar4 < uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000dd2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f5410 +
                           (long)(int)((uint)bVar1 + (*(uint *)(param_1 + 0x10) ^ uVar2 * 0x540651b)
                                      ) * 4) + 0x1000dd2d8))();
  return;
}

