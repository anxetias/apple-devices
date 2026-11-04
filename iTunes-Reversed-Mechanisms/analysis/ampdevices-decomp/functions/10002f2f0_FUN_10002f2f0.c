// name: FUN_10002f2f0
// address: 10002f2f0

void FUN_10002f2f0(int *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 local_1c8 [400];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *param_1;
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 2);
  rdtsc();
  FUN_1000cb740(local_1c8,0,0x80);
                    /* WARNING: Could not recover jumptable at 0x00010002f395. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d5920 +
                           (long)(int)((uint)(lVar2 == 0 || lVar3 == 0) +
                                      iVar1 + (((uint)param_1 & 0x247733e9) * -2 + (uint)param_1 +
                                               0xa47733e9 ^ 0xa9f86fb0) * -0x3df53769) * 4) +
            0x10002f371))();
  return;
}

