// name: FUN_100034350
// address: 100034350

ulong FUN_100034350(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar1 = (uint)&local_50;
  uVar1 = (uVar1 & 0x65f937d8) * -2 + uVar1 + 0x65f937da ^ 0x68766b83;
  local_44 = uVar1 * 0x3df53769 + 0xe9944bd9;
  local_48 = uVar1 * 0x3df53769 ^ 8;
  local_50 = local_d8;
  (*(code *)(PTR_LAB_100053fa1_1_10082ee50 + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x17768c20d249fc46 + ((ulong)&local_50 & 0x17768c20d249fc96) * -2)
                  ^ 0x4c4ffcea45152614) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x17768c20d249fc46 + ((ulong)&local_50 & 0x17768c20d249fc96) * -2) ^
              0x4c4ffcea45152614) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar3 = (uint)(local_44 == 0x3a3402de) * 0xe7caff + -0xe7caf7;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbd8ffff35eebff77) + (param_1 & 0x3d8ffff35eebff77) * 2 +
                ((ulong)(&stack0x51d25ff31724f476 + ((ulong)&local_50 & 0x51d25ff31724f4c6) * -2) ^
                0xaeb2f3980782e44) * -0x295bb3 + 0x7ffc459fe5be97df);
    local_48 = (int)((ulong)(&stack0x51d25ff31724f476 + ((ulong)&local_50 & 0x51d25ff31724f4c6) * -2
                            ) ^ 0xaeb2f3980782e44) * 0x295bb3 + iVar3 + -0x6d95cfd2;
    FUN_1000a30e0(&local_50);
    bVar4 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006dfb00 + (long)(int)((uint)bVar4 + iVar3) * 4) +
                 0x100037b27);
                    /* WARNING: Could not recover jumptable at 0x000100037be5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006dfb00 + (long)(int)((uint)bVar4 + iVar3) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar4,!bVar4);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

