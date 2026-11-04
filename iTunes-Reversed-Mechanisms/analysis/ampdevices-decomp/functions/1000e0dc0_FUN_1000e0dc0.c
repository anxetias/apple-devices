// name: FUN_1000e0dc0
// address: 1000e0dc0

ulong FUN_1000e0dc0(uint param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char cVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  bool bVar8;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar5 = ((ulong)(&stack0x02fc500ec1b57877 + ((ulong)&local_50 & 0x2fc500ec1b578c7) * -2) ^
          0xc7d52d1cc3a249e) * 0x3df53769;
  local_48 = (uint)lVar5;
  local_44 = local_48 + 0x3a0ba82e;
  local_48 = local_48 ^ 8;
  uVar3 = (char)(((byte)lVar5 & 1) * ' ') * -0x5b;
  bVar1 = (char)((uVar3 & 0xffff) >> 0xf) + (char)(uVar3 >> 0xd) | 0x55;
  cVar2 = bVar1 * '\x10';
  cVar6 = cVar2 + 'P';
  if (bVar1 < 0x9b) {
    cVar6 = cVar2;
  }
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)((cVar6 - 0x30U ^ 0x50) + 0xbb) - 0x21)] + -2))
            (&local_50);
  local_48 = (int)((ulong)(&stack0x0fa88703983000f5 + ((ulong)&local_50 & 0xfa8870398300145) * -2) ^
                  0x5491f7c90f6cdbc7) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x0fa88703983000f5 + ((ulong)&local_50 & 0xfa8870398300145) * -2) ^
              0x5491f7c90f6cdbc7) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar8 = local_44 == 0x3a3402de;
  switch(bVar8) {
  case true:
    iVar7 = (uint)!bVar8 * -0x1201fe7c + (uint)bVar8 * 6 + 4;
    local_48 = (int)((ulong)(&stack0x7a22caea71cb12c8 + ((ulong)&local_50 & 0x7a22caea71cb1318) * -2
                            ) ^ 0x211bba20e697c99a) * 0x295bb3 + iVar7 + -0x6d95cfd4;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xfddf5593d5beb77e) + (ulong)(param_1 & 0xd5beb77e) * 2 +
                ((ulong)(&stack0x7a22caea71cb12c8 + ((ulong)&local_50 & 0x7a22caea71cb1318) * -2) ^
                0x211bba20e697c99a) * -0x295bb3 + 0x3facefff6eebdfd8);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f9470 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4) +
                 0x1000debd3);
                    /* WARNING: Could not recover jumptable at 0x0001000dec8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f9470 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

