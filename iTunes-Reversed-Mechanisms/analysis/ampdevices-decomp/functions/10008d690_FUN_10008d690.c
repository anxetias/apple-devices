// name: FUN_10008d690
// address: 10008d690

ulong FUN_10008d690(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  iVar5 = (int)((ulong)(&stack0x0ea8e2ebe3aebd21 + ((ulong)&local_50 & 0xea8e2ebe3aebd71) * -2) ^
               0x29e034ee21e128) * 0x26717e00;
  lVar3 = ((ulong)(&stack0x0ea8e2ebe3aebd21 + ((ulong)&local_50 & 0xea8e2ebe3aebd71) * -2) ^
          0x29e034ee21e128) * 0x1783b969;
  iVar6 = (int)lVar3;
  local_44 = iVar5 + iVar6 + 0xb50796ef;
  local_48 = iVar5 + iVar6 ^ 8;
  uVar1 = (char)((byte)lVar3 & 0x9e) * -7;
  bVar4 = (char)(((char)((uVar1 & 0xffff) >> 0xf) + (char)(uVar1 >> 9) + 0xa1U ^ 0x85) + 0x6a) >> 7;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)((bVar4 * bVar4 & bVar4 | 0x2e) + 0x7b) - 0xa0)] + -2)
  )(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7b89184def8433df + ((ulong)&local_50 & 0x7b89184def84342f) * -2) ^
              0x20b0688778d8eead) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x7b89184def8433df + ((ulong)&local_50 & 0x7b89184def84342f) * -2)
                  ^ 0x20b0688778d8eead) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar6 = (uint)(local_44 == 0x3a3402de) * 0x50e2513 + -0x50e2511;
    local_48 = (int)((ulong)(&stack0x0aa982dbf6523672 + ((ulong)&local_50 & 0xaa982dbf65236c2) * -2)
                    ^ 0x5190f211610eec40) * 0x295bb3 + iVar6 + -0x6d95cfcc;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xfdacc7f3c4fab757) + (param_1 & 0xfdacc7f3c4fab757) * 2 +
                ((ulong)(&stack0x0aa982dbf6523672 + ((ulong)&local_50 & 0xaa982dbf65236c2) * -2) ^
                0x5190f211610eec40) * -0x295bb3 + 0x3fdf7d9f7fafdfff);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e2880 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4) +
                 0x10008551a);
                    /* WARNING: Could not recover jumptable at 0x0001000855d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e2880 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

