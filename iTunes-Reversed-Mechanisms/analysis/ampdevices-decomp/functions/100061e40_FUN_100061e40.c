// name: FUN_100061e40
// address: 100061e40

ulong FUN_100061e40(ulong param_1)

{
  ulong uVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar4 = (uint)&local_50;
  local_48 = ((uVar4 & 0x7348c9f8) * -2 + uVar4 + 0xf348c9ff ^ 0xfec795a6) * 0x3df53769;
  local_44 = local_48 + 0x72c1845a;
  local_48 = local_48 ^ 8;
  bVar2 = (char)local_44 << 2 | 0x52;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((uint)(byte)((char)((uint)(int)(short)((char)bVar2 * 0x29) >>
                                                       0xc) - ((char)bVar2 >> 7) | 0x92) * -0x14 &
                                   0xff) * 0x19 >> 9) & 0xc) * '\t' + 0x62) - 0x7c)] + -2))
            (&local_50);
  local_48 = (int)((ulong)(&stack0x6c1cf3a3685faad4 + ((ulong)&local_50 & 0x6c1cf3a3685fab24) * -2)
                  ^ 0x37258369ff0371a6) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x6c1cf3a3685faad4 + ((ulong)&local_50 & 0x6c1cf3a3685fab24) * -2) ^
              0x37258369ff0371a6) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar3 = (uint)!bVar5 * -0x16af46cf + (uint)bVar5 * 6 + 2;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x3f9c5fd36debff7f) + (param_1 & 0x3f9c5fd36debff7f) * 2 +
                ((ulong)(&stack0x0e982f6a340d7ffd + ((ulong)&local_50 & 0xe982f6a340d804d) * -2) ^
                0x55a15fa0a3515acf) * -0x295bb3 + -0x2101a4029416829);
    local_48 = (int)((ulong)(&stack0x0e982f6a340d7ffd + ((ulong)&local_50 & 0xe982f6a340d804d) * -2)
                    ^ 0x55a15fa0a3515acf) * 0x295bb3 + iVar3 + -0x6d95cfd2;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e92b0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4) +
                 0x10007bacb);
                    /* WARNING: Could not recover jumptable at 0x00010007bb83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e92b0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

