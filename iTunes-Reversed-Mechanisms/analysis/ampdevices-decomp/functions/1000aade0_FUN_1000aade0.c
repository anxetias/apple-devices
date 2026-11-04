// name: FUN_1000aade0
// address: 1000aade0

void FUN_1000aade0(int *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar3 = (long)param_1 + ((ulong)param_1 & 0x4c83d56970013d3c) * -2 + 0x4c83d56970013d3c ^
          0x19fed0da9567258;
  iVar7 = (int)uVar3 * 0x34a356b1;
  iVar2 = param_1[7] + (int)uVar3 * -0x34a356b1;
  iVar5 = param_1[10] + iVar7;
  uVar8 = ((iVar5 - (iVar5 * 2 & 0x41b8064cU)) + 0x20dc0326 ^ 0xec3f912) * 0x6badd653;
  uVar6 = (ulong)(uVar8 & 7);
  bVar1 = *(long *)(param_1 + 8) == *(long *)(param_1 + 4);
  if ((param_1[6] + iVar7 & 1U) != 0) {
    bVar1 = *(long *)(param_1 + 4) + uVar3 * -0x34a356b1 <
            *(long *)(param_1 + 8) + uVar3 * -0x34a356b1;
  }
  puVar4 = (&PTR_DAT_10082ee00)[iVar2 + -0x7d38a321] + -10;
  if (bVar1) {
    puVar4 = (&PTR_DAT_10082ee00)[iVar2 + -0x7d38a373] + -6;
  }
  *param_1 = *(int *)(*(long *)((&PTR_DAT_10082ee00)[iVar2 + -0x7d38a25b] + (long)iVar5 * 8 + -0xe)
                     + (long)*(int *)(puVar4 + uVar6 * 4) * 4) -
             (uVar8 >> (bVar1 << 4) & 0xffff ^
             *(uint *)(*(long *)((&PTR_DAT_10082ee00)[iVar2 + -0x7d38a25b] + (long)iVar5 * 8 + -0xe)
                      + (long)*(int *)((&PTR_DAT_10082ee00)[iVar2 + -0x7d38a331] + uVar6 * 4 + -10)
                        * 4));
  return;
}

