// name: FUN_1000d9370
// address: 1000d9370

ulong FUN_1000d9370(ulong param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  iVar4 = (int)((ulong)(&stack0x02df37d3aa7254b6 + ((ulong)&local_50 & 0x2df37d3aa725506) * -2) ^
               0xc5e350ca7fd095f) * 0x7d379ba;
  lVar2 = ((ulong)(&stack0x02df37d3aa7254b6 + ((ulong)&local_50 & 0x2df37d3aa725506) * -2) ^
          0xc5e350ca7fd095f) * 0x3621bdaf;
  iVar5 = (int)lVar2;
  local_48 = iVar4 + iVar5 ^ 8;
  local_44 = iVar4 + iVar5 + 0xe10d7d;
  bVar1 = (byte)lVar2 | 0x2e;
  bVar1 = ((byte)((uint)(0x92 < (byte)((bVar1 >> 2 & bVar1 & bVar1 * '\x17') - 0x30) | 0x66) * 0x39
                 >> 8) & 2) * '@';
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(bVar1 + (bVar1 / 3 & 0xf0) * -3 | 9) - 0x1f)] + -2))
            (&local_50);
  local_48 = (int)((ulong)(&stack0x4845fe48dda9fba2 + ((ulong)&local_50 & 0x4845fe48dda9fbf2) * -2)
                  ^ 0x137c8e824af52170) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x4845fe48dda9fba2 + ((ulong)&local_50 & 0x4845fe48dda9fbf2) * -2) ^
              0x137c8e824af52170) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * -0x2720c9fa + 0x2720c9fe;
    local_48 = (int)((ulong)(&stack0x645a50798b1477ad + ((ulong)&local_50 & 0x645a50798b1477fd) * -2
                            ) ^ 0x3f6320b31c48ad7f) * 0x295bb3 + iVar5 + -0x6d95cfce;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7d8e4d93e6ebd7df) + (param_1 & 0xfd8e4d93e6ebd7df) * 2 +
                ((ulong)(&stack0x645a50798b1477ad + ((ulong)&local_50 & 0x645a50798b1477fd) * -2) ^
                0x3f6320b31c48ad7f) * -0x295bb3 + -0x40020800a2414089);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f5ab0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000edf11);
                    /* WARNING: Could not recover jumptable at 0x0001000edfd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f5ab0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

