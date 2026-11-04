// name: FUN_1000cb2d0
// address: 1000cb2d0

void FUN_1000cb2d0(ulong *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  uVar5 = (long)param_1 + ((ulong)param_1 & 0xd19716c1da42ce5c) * -2 + -0x2e68e93e25bd31a4 ^
          0x565c155a9695d2e2;
  uVar7 = uVar5 * 0xca815c1;
  iVar1 = (int)param_1[2];
  iVar6 = (int)uVar7;
  uVar9 = param_1[4] + uVar5 * -0xca815c1;
  iVar3 = *(int *)((long)param_1 + 0xc) + iVar6;
  uVar7 = uVar7 ^ *param_1;
  uVar4 = ((iVar3 - (iVar3 * 2 & 0x4f626bbaU)) + 0x27b135dd ^ 0x9aecfe9) * 0x6badd653;
  uVar5 = (ulong)(uVar4 & 7);
  bVar2 = uVar7 < uVar9;
  if (((int)param_1[1] + iVar6 & 1U) == 0) {
    bVar2 = uVar9 == uVar7;
  }
  puVar8 = (&PTR_DAT_10082ee00)[iVar1 + iVar6 + -0x5ba95ff8] + -10;
  if (bVar2) {
    puVar8 = (&PTR_DAT_10082ee00)[iVar1 + iVar6 + -0x5ba9604a] + -6;
  }
  *(uint *)(param_1 + 5) =
       *(int *)(*(long *)((&PTR_DAT_10082ee00)[iVar1 + -0x5ba95f32 + iVar6] + (long)iVar3 * 8 + -0xe
                         ) + (long)*(int *)(puVar8 + uVar5 * 4) * 4) -
       (uVar4 >> (bVar2 << 4) & 0xffff ^
       *(uint *)(*(long *)((&PTR_DAT_10082ee00)[iVar1 + -0x5ba95f32 + iVar6] +
                          (long)iVar3 * 8 + -0xe) +
                (long)*(int *)((&PTR_DAT_10082ee00)[iVar1 + iVar6 + -0x5ba96008] + uVar5 * 4 + -10)
                * 4));
  return;
}

