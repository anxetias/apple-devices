// name: FUN_1000509c0
// address: 1000509c0

undefined8 FUN_1000509c0(void)

{
  undefined8 uVar1;
  long in_RCX;
  uint uVar2;
  int iVar3;
  undefined1 local_d8 [136];
  undefined1 *puStack_50;
  uint uStack_48;
  int iStack_44;
  undefined1 *puStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  switch(in_RCX == 0) {
  case false:
    iVar3 = (uint)(in_RCX != 0) * -0x64ccb55b;
    uVar2 = (uint)&puStack_50;
    uStack_48 = ((uVar2 & 0xef1168) * -2 + uVar2 + 0xef1169 ^ 0xd604d30) * 0x3df53769;
    iStack_44 = uStack_48 + 0x9155778a;
    uStack_48 = uStack_48 ^ iVar3 + 0x64ccb563U;
    puStack_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar3 + 0x64ccb565] + -2))(&puStack_50);
    uStack_48 = (int)((ulong)(&stack0x0183e578a017b2e9 +
                             ((ulong)&puStack_50 & 0x183e578a017b339) * -2) ^ 0x5aba95b2374b69bb) *
                0x295bb3 + iVar3 + 0x64ccb55f + -0x6d95cfce;
    puStack_50 = (undefined1 *)
                 (((ulong)(&stack0x0183e578a017b2e9 + ((ulong)&puStack_50 & 0x183e578a017b339) * -2)
                  ^ 0x5aba95b2374b69bb) * -0x295bb3 + 0x3d8c459344aa9757);
    puStack_40 = local_d8;
    FUN_1000a30e0(&puStack_50);
                    /* WARNING: Could not recover jumptable at 0x000100048253. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(switchD_100050a2e::caseD_0 +
              *(int *)(&DAT_1006e0070 +
                      (long)(int)((uint)(iStack_44 == 0x3a3402de) + iVar3 + 0x64ccb55f) * 4)))
                      (switchD_100050a2e::caseD_0 +
                       *(int *)(&DAT_1006e0070 +
                               (long)(int)((uint)(iStack_44 == 0x3a3402de) + iVar3 + 0x64ccb55f) * 4
                               ),
                       (long)*(int *)(&DAT_1006e0070 +
                                     (long)(int)((uint)(iStack_44 == 0x3a3402de) +
                                                iVar3 + 0x64ccb55f) * 4),0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5bd9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

