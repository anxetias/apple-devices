// name: FUN_1000dba60
// address: 1000dba60

void FUN_1000dba60(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) +
          ((uint)param_1 + ((uint)param_1 & 0xccf0bbb2) * -2 + 0xccf0bbb2 ^ 0x2d3fc67) * 0x4516280f;
                    /* WARNING: Could not recover jumptable at 0x0001000dbab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f86d0 + (long)iVar1 * 4) + 0x1000dba99))(param_1,iVar1 + -4);
  return;
}

