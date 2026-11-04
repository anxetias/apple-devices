// name: FUN_100102f70
// address: 100102f70

undefined8 FUN_100102f70(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  int iStack_48;
  uint uStack_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar3 = param_1 == 0;
  switch(bVar3) {
  case false:
    iVar2 = (uint)bVar3 * 0x4d660b54 + (uint)!bVar3 * 2;
    uStack_44 = (((uint)&iStack_48 & 0x7447c140) * -2 + (uint)&iStack_48 + 0x7447c147 ^ 0x79c89d1e)
                * 0x3df53769 ^ iVar2 + 0xcc71bcc7U;
    FUN_10009ae70();
                    /* WARNING: Could not recover jumptable at 0x0001000da772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_100102fbc::caseD_0 +
              *(int *)(&DAT_1006fbd90 + (long)(int)((uint)(iStack_48 == 0x3a3402de) + iVar2 + 2) * 4
                      )))(switchD_100102fbc::caseD_0 +
                          *(int *)(&DAT_1006fbd90 +
                                  (long)(int)((uint)(iStack_48 == 0x3a3402de) + iVar2 + 2) * 4),
                          (long)*(int *)(&DAT_1006fbd90 +
                                        (long)(int)((uint)(iStack_48 == 0x3a3402de) + iVar2 + 2) * 4
                                        ),iStack_48 != 0x3a3402de,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

