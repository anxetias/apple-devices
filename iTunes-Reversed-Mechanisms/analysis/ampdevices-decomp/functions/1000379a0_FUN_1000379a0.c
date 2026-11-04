// name: FUN_1000379a0
// address: 1000379a0

void FUN_1000379a0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_d8 [136];
  undefined1 *puStack_50;
  uint uStack_48;
  int iStack_44;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  iVar2 = *(int *)(param_1 + 4) +
          ((uint)param_1 + ((uint)param_1 & 0xd1d9cb68) * -2 + 0xd1d9cb68 ^ 0x23d3c475) *
          -0x54361bb5;
  FUN_1000cb740(auStack_d8,0,0x80);
  uVar1 = (uint)&puStack_50;
  uVar1 = ((uVar1 & 0x602fcb98) * -2 + uVar1 + 0x602fcb99 ^ 0x6da097c0) * 0x3df53769;
  uStack_48 = iVar2 + 6U ^ uVar1;
  iStack_44 = uVar1 + 0x66b5a065;
  puStack_50 = auStack_d8;
  (*(code *)((&PTR_DAT_10082ee00)[iVar2 + 8] + -2))(&puStack_50);
  uStack_48 = iVar2 + (int)((ulong)(&stack0x42695afd927abef2 +
                                   ((ulong)&puStack_50 & 0x42695afd927abf42) * -2) ^
                           0x19502a37052665c0) * 0x295bb3 + -0x6d95cfcc;
  puStack_50 = (undefined1 *)
               (((ulong)(&stack0x42695afd927abef2 + ((ulong)&puStack_50 & 0x42695afd927abf42) * -2)
                ^ 0x19502a37052665c0) * -0x295bb3 + 0x3d8c459344aa9757);
  puStack_40 = auStack_d8;
  FUN_1000a30e0(&puStack_50);
                    /* WARNING: Could not recover jumptable at 0x000100037af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d9530 +
                           (long)(int)(iVar2 + (uint)(iStack_44 == 0x3a3402de)) * 4) + 0x100037ac9))
            ();
  return;
}

