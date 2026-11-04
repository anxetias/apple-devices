// name: FUN_1001160fc
// address: 1001160fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001160fc(long param_1,long param_2,long param_3,long param_4)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  
  cVar11 = *(char *)(param_4 + 0x115);
  cVar3 = *(char *)(param_1 + 0xaa);
  bVar4 = *(byte *)(param_4 + 0x114);
  *(uint *)(param_3 + 3000) = (uint)bVar4;
  iVar6 = *(int *)(param_4 + 0xfc);
  *(int *)(param_3 + 0xc10) = iVar6;
  fVar8 = DAT_100701d18;
  fVar14 = DAT_100701d14;
  uVar2 = DAT_100700b50;
  lVar7 = *(long *)(param_1 + 0xc148);
  lVar12 = 0;
  do {
    uVar15 = *(uint *)(param_4 + 0x100 + lVar12 * 4);
    fVar16 = *(float *)(lVar7 + (long)(int)uVar15 * 4 + (ulong)uVar15 * 4);
    fVar1 = *(float *)(param_4 + 0xd4 + lVar12 * 4);
    uVar10 = (ulong)(fVar1 <= fVar16);
    fVar16 = fVar16 * *(float *)(&DAT_100701d40 + uVar10 * 8) +
             fVar1 * *(float *)(&DAT_100701d44 + uVar10 * 8);
    fVar16 = (float)(-(uint)(fVar14 <= fVar16) & uVar2) * fVar16;
    if (fVar8 <= fVar16) {
      fVar16 = fVar8;
    }
    *(float *)(param_3 + 0xbe0 + lVar12 * 4) = fVar16;
    *(float *)(param_3 + 0xbf8 + lVar12 * 4) = fVar16 * fVar16;
    *(float *)(param_4 + 0xd4 + lVar12 * 4) = fVar16;
    lVar12 = lVar12 + 1;
  } while (lVar12 != 5);
  cVar11 = cVar11 - cVar3;
  *(undefined1 *)(param_3 + 0xbbd) = 1;
  *(char *)(param_3 + 0xbbe) = cVar11;
  *(char *)(param_3 + 0xbbf) = cVar3;
  *(undefined4 *)(param_3 + 0xbc4) = 1;
  *(undefined4 *)(param_3 + 0xbd8) = 0xffffffff;
  *(undefined1 *)(param_3 + 0xbdc) = 1;
  *(char *)(param_3 + 0xbdd) = cVar11;
  *(char *)(param_3 + 0xbde) = cVar3;
  bVar5 = *(byte *)(*(long *)(param_2 + 0x18) + 1);
  fVar14 = DAT_100701d1c;
  if (iVar6 != 2) {
    fVar14 = 0.0;
  }
  uVar10 = 0;
  if (bVar4 == 0) {
    fVar14 = fVar14 + fVar14;
  }
  *(byte *)(param_3 + 0xe8c) = bVar5;
  *(undefined1 *)(param_3 + 0xe85) = 1;
  if ((ulong)bVar5 != 0) {
    uVar10 = (ulong)(bVar4 == 0);
    uVar2 = *(uint *)(&DAT_100701d28 + uVar10 * 4);
    uVar15 = _DAT_100700430 ^ uVar2;
    uVar9 = 0;
    do {
      uVar13 = -(uint)(fVar14 < *(float *)(param_4 + uVar9 * 4));
      *(uint *)(param_3 + uVar9 * 4) = ~uVar13 & uVar2 | uVar13 & uVar15;
      uVar9 = uVar9 + 1;
    } while (bVar5 != uVar9);
  }
  *(undefined1 *)(param_3 + 0xe8a) = 1;
  bVar4 = *(byte *)(*(long *)(param_2 + 0x18) + 8);
  if (bVar4 == 0) {
    return;
  }
  ___bzero(param_3 + 0x780,(ulong)bVar4 << 2,param_3 + 0x780,param_4,uVar10);
  return;
}

