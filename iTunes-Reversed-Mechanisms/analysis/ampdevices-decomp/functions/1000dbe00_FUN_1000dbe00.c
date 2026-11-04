// name: FUN_1000dbe00
// address: 1000dbe00

void FUN_1000dbe00(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = ((uint)param_1 & 0x2984f75b) * -2 + (uint)param_1 + 0x2984f75b ^ 0x586b9542;
  iVar4 = uVar3 * 0x540651b;
  lVar2 = param_1[1];
  iVar1 = *(int *)((long)param_1 + 0xc);
  iVar5 = (*(uint *)(*param_1 + 0x44) ^ 0x1e4d2cb6) + iVar4 + iVar1 + -0x57a33251;
  uVar6 = (iVar5 - (iVar5 * 2 & 0x3c9a596cU)) + 0x1e4d2cb6;
  *(uint *)(*param_1 + 0x44) = uVar6;
  uVar6 = (uint)((uVar6 ^ 0x1e4d2cb6) < iVar4 + iVar1 + 0xa85ccdafU);
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006f8134 +
                              (long)(int)((int)lVar2 + uVar3 * -0x540651b + uVar6) * 4) +
               0x1000dbe64);
                    /* WARNING: Could not recover jumptable at 0x0001000dbe88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            ((long)*(int *)(&DAT_1006f8134 +
                           (long)(int)((int)lVar2 + uVar3 * -0x540651b + uVar6) * 4),uVar6,
             UNRECOVERED_JUMPTABLE);
  return;
}

