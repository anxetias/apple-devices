// name: FUN_100035180
// address: 100035180

void FUN_100035180(long param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  
  uVar2 = ((uint)param_1 + ((uint)param_1 & 0x39f868b6) * -2 + 0x39f868b6 ^ 0xcbf267ab) * 0x54361bb5
  ;
  uVar1 = *(uint *)(param_1 + 8) ^ uVar2;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006dd230 +
                              (long)(int)(uVar1 + (*(int *)(param_1 + 0x28) + uVar2 == 0x542f5a7b &&
                                                  (*(long *)(param_1 + 0x20) != 0 &&
                                                  (*(long *)(param_1 + 0x10) != 0 &&
                                                  *(long *)(param_1 + 0x18) != 0)))) * 4) +
               0x10003523e);
                    /* WARNING: Could not recover jumptable at 0x000100035266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,UNRECOVERED_JUMPTABLE,
             (long)*(int *)(&DAT_1006dd230 +
                           (long)(int)(uVar1 + (*(int *)(param_1 + 0x28) + uVar2 == 0x542f5a7b &&
                                               (*(long *)(param_1 + 0x20) != 0 &&
                                               (*(long *)(param_1 + 0x10) != 0 &&
                                               *(long *)(param_1 + 0x18) != 0)))) * 4),uVar1,param_1
            );
  return;
}

