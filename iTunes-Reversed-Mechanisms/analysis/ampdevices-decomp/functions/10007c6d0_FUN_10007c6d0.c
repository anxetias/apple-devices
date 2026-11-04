// name: FUN_10007c6d0
// address: 10007c6d0

ulong FUN_10007c6d0(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x05e969377f8f5340 + ((ulong)&local_50 & 0x5e969377f8f5390) * -2) ^
                  0xb686be872000fc9) * 0x3df53769;
  local_44 = local_48 + 0x5cc3efa;
  local_48 = local_48 ^ 8;
  bVar1 = (char)((ulong)(&stack0x05e969377f8f5340 + ((ulong)&local_50 & 0x5e969377f8f5390) * -2) ^
                0xb686be872000fc9) + 0xab;
  bVar3 = bVar1 >> 2;
  bVar1 = ((char)(((byte)((char)bVar1 >> 7) >> 6) +
                 ((byte)((uint)bVar3 + ((uint)bVar3 + (uint)bVar3 * 8) * 4 >> 8) ^ bVar1)) >> 2) -
          0x27U & 0x86;
  bVar1 = ((byte)(bVar1 + (char)((uint)bVar1 * 0xb3 >> 0xe) * -0x5c + 0x71) >> 4) + 0xa4;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(byte)((bVar1 + (bVar1 / 5 & 0xfc) * -5) - 8) + 5] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x48acc281e0ad6a23 + ((ulong)&local_50 & 0x48acc281e0ad6a73) * -2) ^
              0x1395b24b77f1b0f1) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x48acc281e0ad6a23 + ((ulong)&local_50 & 0x48acc281e0ad6a73) * -2)
                  ^ 0x1395b24b77f1b0f1) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * -0xa5caa72 + (uint)bVar5 + (uint)bVar5 * -8 + 9;
    local_48 = (int)((ulong)(&stack0x61f941d812d0c537 + ((ulong)&local_50 & 0x61f941d812d0c587) * -2
                            ) ^ 0x3ac03112858c1f05) * 0x295bb3 + iVar4 + -0x6d95cfcc;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xffaf57df66ee975f) + (param_1 & 0xffaf57df66ee975f) * 2 +
                ((ulong)(&stack0x61f941d812d0c537 + ((ulong)&local_50 & 0x61f941d812d0c587) * -2) ^
                0x3ac03112858c1f05) * -0x295bb3 + 0x3ddcedb3ddbbfff7);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e0660 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000743ae);
                    /* WARNING: Could not recover jumptable at 0x000100074474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e0660 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006e0660 + (ulong)(bVar5 + 9) * 4) + 0x10007c820,
                    (long)*(int *)(&DAT_1006e0660 + (ulong)(bVar5 + 9) * 4),0);
}

