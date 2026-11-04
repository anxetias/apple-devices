// name: FUN_1000b5c20
// address: 1000b5c20

void FUN_1000b5c20(int *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = ((long)param_1 + ((ulong)param_1 & 0x41fa8e8dc8b037bf) * -2 + 0x41fa8e8dc8b037bf ^
          0xce6b6e911e778db) * 0x34a356b1;
  uVar6 = (uint)uVar2;
  iVar5 = param_1[3] - uVar6;
  uVar4 = param_1[2] ^ uVar6;
  bVar1 = (long)(uVar2 ^ *(ulong *)(param_1 + 4)) < (long)(*(ulong *)(param_1 + 8) ^ uVar2);
  if ((param_1[1] - uVar6 & 1) == 0) {
    bVar1 = (uVar2 ^ *(ulong *)(param_1 + 4)) < (*(ulong *)(param_1 + 8) ^ uVar2);
  }
  puVar3 = (&PTR_DAT_10082ee00)[iVar5 + -0x3558aae7] + -10;
  if (bVar1) {
    puVar3 = (&PTR_DAT_10082ee00)[iVar5 + -0x3558ab39] + -6;
  }
  uVar6 = ((uVar4 - (uVar4 * 2 & 0x7b86d3b4)) + 0x3dc369da ^ 0x13dc93ee) * 0x6badd653;
  uVar2 = (ulong)(uVar6 & 7);
  *param_1 = *(int *)(*(long *)((&PTR_DAT_10082ee00)[iVar5 + -0x3558aa21] +
                               (long)(int)uVar4 * 8 + -0xe) + (long)*(int *)(puVar3 + uVar2 * 4) * 4
                     ) -
             (uVar6 >> (bVar1 << 4) & 0xffff ^
             *(uint *)(*(long *)((&PTR_DAT_10082ee00)[iVar5 + -0x3558aa21] +
                                (long)(int)uVar4 * 8 + -0xe) +
                      (long)*(int *)((&PTR_DAT_10082ee00)[iVar5 + -0x3558aaf7] + uVar2 * 4 + -10) *
                      4));
  return;
}

