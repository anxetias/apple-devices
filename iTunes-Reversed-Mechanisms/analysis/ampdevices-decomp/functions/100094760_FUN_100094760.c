// name: FUN_100094760
// address: 100094760

void FUN_100094760(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 local_68 [16];
  undefined1 local_58 [32];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 8);
  rdtsc();
  FUN_1000cb740(local_68,0,0x10);
  FUN_1000cb740(local_58,0,0x10);
                    /* WARNING: Could not recover jumptable at 0x00010009483b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e4800 +
                           (long)(int)((uint)(lVar2 == 0) +
                                      (uVar1 ^ ((uint)param_1 + ((uint)param_1 & 0xcd333c56) * -2 +
                                                0xcd333c56 ^ 0x3107b83) * 0x4516280f)) * 4) +
            0x100094806))();
  return;
}

