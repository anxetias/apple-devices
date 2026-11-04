// name: FUN_1000c7750
// address: 1000c7750

ulong FUN_1000c7750(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
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
  local_44 = (int)((ulong)(&stack0x06cf9839424b6032 + ((ulong)&local_50 & 0x6cf9839424b6082) * -2) ^
                  0x84e9ae64fc43cdb) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x9184e9fb;
  uVar2 = (char)((ulong)(&stack0x06cf9839424b6032 + ((ulong)&local_50 & 0x6cf9839424b6082) * -2) ^
                0x84e9ae64fc43cdb) * -0x4d & 0xffff;
  bVar1 = ((byte)((char)(((char)(uVar2 >> 8) >> 5) + (char)(uVar2 >> 0xf)) >> 5 ^ 0x1bU) % 0x53 &
          0xc) << 4 | 0x27;
  uVar2 = (char)bVar1 * 0x6f & 0xffff;
  bVar1 = bVar1 + (((char)(uVar2 >> 8) >> 4) + (char)(uVar2 >> 0xf)) * -0x25;
  bVar1 = bVar1 + (char)((uint)bVar1 * 0x4f >> 0xd) * -0x68;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((((byte)(((char)(bVar1 + (char)((uint)bVar1 * 0xb9 >> 0xe) * -0x59 + 'o') >> 4)
                             + 0x3bU) >> 1 | 0x4f) + 0x4f & 0x66) - 0xe) - 0xe] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x748f75f59318517d + ((ulong)&local_50 & 0x748f75f5931851cd) * -2) ^
              0x2fb6053f04448b4f) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x748f75f59318517d + ((ulong)&local_50 & 0x748f75f5931851cd) * -2)
                  ^ 0x2fb6053f04448b4f) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * -0x3f3d8352 + (uint)bVar5 * -2 + 8;
    local_48 = (int)((ulong)(&stack0x125e30fe4e2de781 + ((ulong)&local_50 & 0x125e30fe4e2de7d1) * -2
                            ) ^ 0x49674034d9713d53) * 0x295bb3 + iVar4 + -0x6d95cfd0;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbdfe4797ccffff77) + (param_1 & 0x3dfe4797ccffff77) * 2 +
                ((ulong)(&stack0x125e30fe4e2de781 + ((ulong)&local_50 & 0x125e30fe4e2de7d1) * -2) ^
                0x49674034d9713d53) * -0x295bb3 + 0x7f8dfdfb77aa97df);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f1e80 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000b2401);
                    /* WARNING: Could not recover jumptable at 0x0001000b24c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f1e80 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006f1e80 + (ulong)(bVar5 + 8) * 4) + 0x1000c78e2,
                    (long)*(int *)(&DAT_1006f1e80 + (ulong)(bVar5 + 8) * 4),0);
}

