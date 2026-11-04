// name: FUN_100045170
// address: 100045170

undefined8 FUN_100045170(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_d8 [136];
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  uint uStack_44;
  int iStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  switch(param_3 == 0) {
  case false:
    iVar3 = (uint)(param_3 != 0) * -0x5640f2b9;
    uVar2 = ((uint)&iStack_50 & 0x54c6e6e8) * -2 + (uint)&iStack_50 + 0xd4c6e6ee ^ 0xef264843;
    uStack_44 = uVar2 * 0x22116dab;
    iStack_50 = uVar2 * -0x22116dab + 0x2b7d1cab;
    iStack_40 = uStack_44 + 0x984301c;
    uStack_4c = iVar3 + 0x9934af1fU ^ uStack_44;
    uStack_44 = uStack_44 ^ 0x7b1aeb73;
    FUN_1000ac960();
    iStack_48 = iStack_48 + -0x227cd23b;
                    /* WARNING: Could not recover jumptable at 0x000100036701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_1000451f5::caseD_0 +
              (int)(&switchD_1000451f5::switchdataD_1006dc670)
                   [(int)((uint)(iStack_48 < 0x2b6c1c42) + iVar3 + 0x5640f2c1)]))
                      (switchD_1000451f5::caseD_0 +
                       (int)(&switchD_1000451f5::switchdataD_1006dc670)
                            [(int)((uint)(iStack_48 < 0x2b6c1c42) + iVar3 + 0x5640f2c1)],
                       0x2b6c1c41 < iStack_48,iStack_48 < 0x2b6c1c42,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

