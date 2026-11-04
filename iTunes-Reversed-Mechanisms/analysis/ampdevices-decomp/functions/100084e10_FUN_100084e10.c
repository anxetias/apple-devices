// name: FUN_100084e10
// address: 100084e10

void FUN_100084e10(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 local_b8 [68];
  uint local_74;
  int local_50;
  int local_4c;
  undefined1 *local_48;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  rdtsc();
  **(undefined4 **)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x10);
  local_4c = (int)((ulong)(&stack0x91b920904b68eabe + ((ulong)&local_50 & 0x91b920904b68eb0e) * -2)
                  ^ 0xd80cdcc9b04da15) * 0x29e509e3;
  local_50 = local_4c + 0x45c4f3;
  local_48 = local_b8;
  bVar1 = (byte)((ulong)(&stack0x91b920904b68eabe + ((ulong)&local_50 & 0x91b920904b68eb0e) * -2) ^
                0xd80cdcc9b04da15) | 0x2e;
  bVar1 = ((byte)((uint)(0x92 < (byte)((bVar1 >> 2 & bVar1 & bVar1 * '\x17') - 0x30) | 0x66) * 0x39
                 >> 8) & 2) * '@';
  (*(code *)((&PTR_DAT_10082ee00)[(byte)(bVar1 + (bVar1 / 3 & 0xf0) * -3 | 9) | 4] + -7))();
  uVar6 = local_74 & 0x3f ^ 0x3c9777e9;
  uVar3 = local_74 * 2 & 0x3e ^ 0x2c;
  bVar7 = *(int *)(param_2 + 0x10) + uVar3 + uVar6 + 0x67bb392b < 0x40;
  bVar8 = !bVar7;
  iVar4 = (uint)bVar8 * 0x7f + (uint)bVar7 * 2;
  switch(bVar8) {
  case false:
    iVar5 = *(int *)(param_2 + 0x10) + -0x51f3173a;
                    /* WARNING: Could not recover jumptable at 0x00010008b466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_100084fbb::caseD_0 +
      (int)(&switchD_100084fbb::switchdataD_1006e6980)[(int)((uint)(iVar5 != 0x9ba37bc) + iVar4)]))
              (0x6fe1800b,iVar5,(ulong)(iVar5 != 0x9ba37bc) << 7,
               switchD_100084fbb::caseD_0 +
               (int)(&switchD_100084fbb::switchdataD_1006e6980)
                    [(int)((uint)(iVar5 != 0x9ba37bc) + iVar4)],0x9ba37bc,local_b8);
    return;
  }
  uVar2 = uVar3 + uVar6 + 0xc3688822;
  if (uVar2 < 0x41) {
    uVar2 = 0x40;
  }
  bVar8 = uVar2 + (-uVar3 - uVar6) + 0x3c9777de < 0xf;
                    /* WARNING: Could not recover jumptable at 0x00010008e7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&switchD_100084fbb::switchdataD_1006e6980)[(int)(iVar4 + (uint)bVar8)] +
            0x10008e755))
            ((code *)((long)(int)(&switchD_100084fbb::switchdataD_1006e6980)
                                 [(int)(iVar4 + (uint)bVar8)] + 0x10008e755),
             (uint)!bVar8 * 5 + (uint)bVar8 + (uint)bVar8 * 0x12 + iVar4);
  return;
}

