// name: FUN_1000659e0
// address: 1000659e0

ulong FUN_1000659e0(void)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  uint local_48;
  uint local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_44 = (((uint)&local_48 & 0x7c5b67f0) * -2 + (uint)&local_48 + 0xfc5b67f3 ^ 0xf1d43baa) *
             0x3df53769 ^ 0xcc71bcc9;
  FUN_10009ae70();
  bVar3 = local_48 == 0x3a3402de;
  switch(bVar3) {
  case true:
    iVar2 = (uint)!bVar3 * -0x5c8c2c0c + (uint)bVar3 * 4;
    local_48 = (((uint)&local_48 & 0x72b12750) * -2 + (uint)&local_48 + 0xf2b12753 ^ 0x2be66837) *
               0x34a356b1 ^ iVar2 + 0x40e64dcfU;
    FUN_100099ce0();
                    /* WARNING: Could not recover jumptable at 0x00010008d908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)((long)(int)(&switchD_100065a58::switchdataD_1006e29f0)
                                  [(int)((uint)(local_44 == 0x26666556) + iVar2)] + 0x10008d896))();
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_48 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

