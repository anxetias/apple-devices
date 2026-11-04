// name: FUN_100115eee
// address: 100115eee

undefined8 FUN_100115eee(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar4 = DAT_100701cfc;
  lVar2 = *(long *)(param_1 + 0xc108);
  lVar3 = *(long *)(param_1 + 0xc110);
  bVar1 = *(byte *)(lVar2 + 0xe8c);
  if ((ulong)bVar1 != 0) {
    uVar7 = 0;
    do {
      fVar9 = *(float *)(lVar2 + uVar7 * 4);
      fVar9 = (fVar9 + fVar9) * *(float *)(lVar3 + 0x7f8 + uVar7 * 4);
      fVar10 = *(float *)(lVar3 + uVar7 * 4) * fVar4 * fVar9;
      *(float *)(lVar2 + uVar7 * 4) = fVar10;
      *(float *)(lVar3 + uVar7 * 4) = fVar9;
      *(float *)(lVar2 + 0x3c0 + uVar7 * 4) = SQRT(fVar10);
      *(float *)(lVar3 + 0x3c0 + uVar7 * 4) = SQRT(fVar9);
      uVar7 = uVar7 + 1;
    } while (bVar1 != uVar7);
  }
  fVar10 = DAT_100701d10;
  fVar9 = DAT_100701d0c;
  fVar4 = DAT_100701d08;
  uVar5 = (uint)*(byte *)(lVar2 + 0xbdc) * (uint)*(byte *)(*(long *)(param_2 + 0x18) + 8);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      fVar12 = fVar4 - *(float *)(lVar2 + 0x780 + uVar7 * 4);
      fVar11 = *(float *)(lVar3 + 0x780 + uVar7 * 4) + fVar9;
      if (fVar12 < fVar10) {
        return 0xfffffffe;
      }
      if (fVar11 < fVar10) {
        return 0xfffffffe;
      }
      lVar6 = (long)(int)fVar12 * 0xc0 + 0x1800;
      lVar8 = (long)(int)fVar11;
      fVar11 = *(float *)(param_1 + lVar6 + 0xdc50 + lVar8 * 4);
      *(float *)(lVar2 + 0x780 + uVar7 * 4) = *(float *)(param_1 + 0xd550 + lVar8 * 4) * fVar11;
      *(float *)(lVar3 + 0x780 + uVar7 * 4) = fVar11;
      *(undefined4 *)(lVar2 + 0x7a8 + uVar7 * 4) =
           *(undefined4 *)(param_1 + lVar6 + 0x10c50 + lVar8 * 4);
      *(undefined4 *)(lVar3 + 0x7a8 + uVar7 * 4) =
           *(undefined4 *)(param_1 + lVar6 + 0x13c50 + lVar8 * 4);
      *(undefined4 *)(lVar2 + 2000 + uVar7 * 4) =
           *(undefined4 *)(param_1 + lVar6 + 0x16c50 + lVar8 * 4);
      *(undefined4 *)(lVar3 + 2000 + uVar7 * 4) =
           *(undefined4 *)(lVar6 + param_1 + 0x19c50 + lVar8 * 4);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  return 0;
}

