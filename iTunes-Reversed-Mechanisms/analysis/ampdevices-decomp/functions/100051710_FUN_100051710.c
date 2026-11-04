// name: FUN_100051710
// address: 100051710

void FUN_100051710(long *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(*param_1 + 4) + 0x210a97cd;
  iVar2 = *(int *)(param_1[2] + 4) + 0x210a97cd;
  bVar3 = iVar1 < -0x1d62f7f0;
  if (iVar2 < -0x1d62f7f0 == iVar1 < -0x1d62f7f0) {
    bVar3 = iVar2 < iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000517aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d8ff0 +
                           (long)(int)((uint)bVar3 +
                                      ((((uint)param_1 & 0x3493fb9d) * -2 + (uint)param_1 +
                                        0xb493fb9d ^ 0xf844e723) * 0xca815c1 ^
                                      *(uint *)((long)param_1 + 0xc))) * 4) + 0x100051787))();
  return;
}

