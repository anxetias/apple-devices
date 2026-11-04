// name: FUN_10030a4a4
// address: 10030a4a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10030a4a4(long param_1,uint param_2,long param_3,uint *param_4,ulong *param_5,uint *param_6
                  )

{
  ulong *puVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  undefined4 uVar5;
  long lVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte bVar19;
  short sVar20;
  ulong uVar21;
  uint *puVar22;
  long lVar23;
  ulong uVar24;
  int local_ec;
  uint *local_e8;
  long local_e0;
  long local_d8;
  uint local_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  char *local_ba;
  ulong local_70;
  ulong uStack_68;
  ulong local_60;
  ulong uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = *(long *)(param_1 + 8);
  local_e0 = param_1;
  local_d8 = param_3;
  local_cc = param_2;
  if (param_4 != (uint *)0x0) {
    if ((param_3 == 0) || (cVar7 = FUN_10053916d(param_3,2), cVar7 != '\0')) {
      FUN_100476928(lVar6,param_4 + 2);
      if (((local_cc & 0x10) == 0) || ((short)param_4[2] != 0)) {
        *(byte *)param_4 = (byte)*param_4 | 1;
      }
      if (local_d8 != 0) goto LAB_10030a53e;
LAB_10030a553:
      FUN_1004779ac(lVar6,param_4 + 0x102);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x102] != 0)) {
        *(byte *)param_4 = (byte)*param_4 | 4;
      }
      if (local_d8 != 0) goto LAB_10030a582;
LAB_10030a597:
      FUN_100478022(lVar6,param_4 + 0x516);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x516] != 0)) {
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 0x40;
      }
      if (local_d8 != 0) goto LAB_10030a5c7;
LAB_10030a5dc:
      FUN_10047a0d2(lVar6,param_4 + 0x410);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x410] != 0)) {
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 0x20;
      }
      if (local_d8 != 0) goto LAB_10030a60c;
LAB_10030a621:
      FUN_1004772c4(lVar6,param_4 + 0x182);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x182] != 0)) {
        *(byte *)param_4 = (byte)*param_4 | 8;
      }
      if (local_d8 != 0) goto LAB_10030a650;
LAB_10030a665:
      FUN_100478a09(lVar6,param_4 + 0x495);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x495] != 0)) {
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 0x10;
      }
      if (local_d8 != 0) goto LAB_10030a695;
LAB_10030a6aa:
      FUN_10047a7b5(lVar6,param_4 + 0x202);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x202] != 0)) {
        *(byte *)param_4 = (byte)*param_4 | 0x10;
      }
      if (local_d8 != 0) goto LAB_10030a6d9;
LAB_10030a6ee:
      FUN_10047aca3(lVar6,param_4 + 0x282);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x282] != 0)) {
        *(byte *)param_4 = (byte)*param_4 | 0x20;
      }
      if (local_d8 != 0) goto LAB_10030a71d;
LAB_10030a732:
      FUN_10047b307(lVar6,param_4 + 0x302);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x302] != 0)) {
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 2;
      }
      if (local_d8 != 0) goto LAB_10030a762;
LAB_10030a777:
      FUN_10047b65a(lVar6,param_4 + 0x382);
      if (((local_cc & 0x10) == 0) || ((short)param_4[0x382] != 0)) {
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 4;
      }
    }
    else {
LAB_10030a53e:
      cVar7 = FUN_10053916d(local_d8,4);
      if (cVar7 != '\0') goto LAB_10030a553;
LAB_10030a582:
      cVar7 = FUN_10053916d(local_d8,0x47);
      if (cVar7 != '\0') goto LAB_10030a597;
LAB_10030a5c7:
      cVar7 = FUN_10053916d(local_d8,0x12);
      if (cVar7 != '\0') goto LAB_10030a5dc;
LAB_10030a60c:
      cVar7 = FUN_10053916d(local_d8,3);
      if (cVar7 != '\0') goto LAB_10030a621;
LAB_10030a650:
      cVar7 = FUN_10053916d(local_d8,0x27);
      if (cVar7 != '\0') goto LAB_10030a665;
LAB_10030a695:
      cVar7 = FUN_10053916d(local_d8,8);
      if (cVar7 != '\0') goto LAB_10030a6aa;
LAB_10030a6d9:
      cVar7 = FUN_10053916d(local_d8,9);
      if (cVar7 != '\0') goto LAB_10030a6ee;
LAB_10030a71d:
      cVar7 = FUN_10053916d(local_d8,0x11);
      if (cVar7 != '\0') goto LAB_10030a732;
LAB_10030a762:
      cVar7 = FUN_10053916d(local_d8,0xe);
      if (cVar7 != '\0') goto LAB_10030a777;
    }
    lVar14 = local_e0;
    iVar11 = *(int *)(local_e0 + 0x3c);
    if (iVar11 == 0x44574e4c) {
      if ((*(char *)(local_e0 + 0x44) == '\x01') &&
         (lVar14 = FUN_1004aa9fa(*(undefined8 *)(local_e0 + 0x80)), lVar14 != 0)) {
        FUN_10017d489(lVar14,param_4 + 0x82);
        param_4[0x40c] = *(uint *)(lVar14 + 0x420);
        uVar9 = 0x40002;
        goto LAB_10030a7f0;
      }
    }
    else if (((iVar11 == 0x4d46494c) || (iVar11 == 0x46494c45)) &&
            ((*(char *)(local_e0 + 0x44) == '\x01' ||
             (((local_cc & 0x20) != 0 &&
              (FUN_1002b0559(local_e0,local_cc >> 5 & 2 | local_cc >> 2 & 0x40 | local_cc & 0xa0),
              *(char *)(lVar14 + 0x44) == '\x01')))))) {
      param_4[0x40c] = *(uint *)(*(long *)(local_e0 + 0x80) + 0x420);
      uVar9 = 0x40000;
LAB_10030a7f0:
      *param_4 = uVar9 | *param_4;
    }
    lVar14 = local_d8;
    if (((local_d8 == 0) || (cVar7 = FUN_10053916d(local_d8,0xb), cVar7 != '\0')) ||
       (cVar7 = FUN_10053916d(lVar14,0x34), cVar7 != '\0')) {
      uVar9 = (uint)*(ushort *)(lVar6 + 0x136);
      uVar3 = *(ushort *)(lVar6 + 0x138);
      if (*(ushort *)(lVar6 + 0x136) == 0 && (local_cc & 0x10) != 0) {
        if (uVar3 != 0) {
          uVar9 = 0;
          goto LAB_10030a8d8;
        }
      }
      else {
LAB_10030a8d8:
        param_4[0x402] = uVar9;
        param_4[0x403] = (uint)uVar3;
        *(byte *)param_4 = (byte)*param_4 | 0x40;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030a8f6;
LAB_10030a918:
      sVar20 = *(short *)(lVar6 + 0x13a);
      sVar4 = *(short *)(lVar6 + 0x13c);
      if (sVar20 == 0 && (local_cc & 0x10) != 0) {
        if (sVar4 != 0) {
          sVar20 = 0;
          goto LAB_10030a945;
        }
      }
      else {
LAB_10030a945:
        *(short *)(param_4 + 0x491) = sVar20;
        *(short *)((long)param_4 + 0x1246) = sVar4;
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 0x80;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030a963;
LAB_10030a974:
      if (*(short *)(lVar6 + 0x142) != 0 || (local_cc & 0x10) == 0) {
        *(short *)(param_4 + 0x404) = *(short *)(lVar6 + 0x142);
        *(byte *)param_4 = (byte)*param_4 | 0x80;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030a9a9;
LAB_10030a9ba:
      if (*(short *)(lVar6 + 0x12a) != 0 || (local_cc & 0x10) == 0) {
        *(short *)((long)param_4 + 0x1012) = *(short *)(lVar6 + 0x12a);
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 1;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030a9f0;
LAB_10030aa01:
      if (*(uint *)(local_e0 + 100) != 0 || (local_cc & 0x10) == 0) {
        param_4[0x405] = *(uint *)(local_e0 + 100);
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 8;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030aa37;
LAB_10030aa48:
      lVar15 = *(long *)(lVar6 + 0x80);
      if (((local_cc & 0x10) == 0) || (*(uint *)(lVar15 + 4) != 0)) {
        param_4[0x406] = *(uint *)(lVar15 + 4);
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x10;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030aa75;
LAB_10030aa8d:
      if (((local_cc & 0x10) == 0) || (*(uint *)(lVar15 + 8) != 0)) {
        param_4[0x407] = *(uint *)(lVar15 + 8);
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x20;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030aab3;
LAB_10030aac4:
      if (*(ushort *)(local_e0 + 0x54) != 0 || (local_cc & 0x10) == 0) {
        param_4[0x40a] = (uint)*(ushort *)(local_e0 + 0x54);
        *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x80;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030aaff;
LAB_10030ab10:
      fVar2 = *(float *)(local_e0 + 0x50);
      if ((((local_cc & 0x10) == 0) || (fVar2 != 0.0)) || (NAN(fVar2))) {
        param_4[0x515] = (uint)fVar2;
        uVar9 = 0xffff0000;
        if (fVar2 < DAT_1007439c0) {
          uVar9 = (uint)(long)(fVar2 * _DAT_1007439c4);
        }
        param_4[0x40b] = uVar9;
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 1;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030ab6d;
LAB_10030ab7e:
      uVar9 = local_cc & 0x10;
      uVar10 = FUN_1002b6093(local_e0);
      param_4[0x40e] = uVar10;
      if (uVar10 != 0 || uVar9 == 0) {
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 2;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030abb7;
LAB_10030abc8:
      if (*(uint *)(local_e0 + 0x5c) != 0 || (local_cc & 0x10) == 0) {
        param_4[0x408] = *(uint *)(local_e0 + 0x5c);
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 8;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030abfe;
      *(byte *)(param_4 + 0x490) = (byte)(*(uint *)(lVar6 + 0xc2) >> 10) & 1;
      *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 0x40;
LAB_10030ac60:
      if (((local_cc & 0x10) == 0) || ((*(uint *)(lVar6 + 0xc2) & 0x20000) != 0)) {
        *(byte *)((long)param_4 + 0x1241) = (byte)(*(uint *)(lVar6 + 0xc2) >> 0x11) & 1;
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 0x20;
      }
      param_1 = local_e0;
      if (local_d8 != 0) goto LAB_10030ac93;
LAB_10030aca8:
      cVar7 = *(char *)(lVar6 + 300);
      *(short *)((long)param_4 + 0x1242) = (short)cVar7;
      if (cVar7 != '\0' || (local_cc & 0x10) == 0) {
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 1;
      }
      if (local_d8 != 0) goto LAB_10030acdd;
LAB_10030acf2:
      if (*(uint *)(lVar6 + 0x144) != 0 || (local_cc & 0x10) == 0) {
        param_4[0x492] = *(uint *)(lVar6 + 0x144);
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 2;
      }
      if (local_d8 != 0) goto LAB_10030ad23;
LAB_10030ad38:
      if (*(uint *)(lVar6 + 0x14c) != 0 || (local_cc & 0x10) == 0) {
        param_4[0x493] = *(uint *)(lVar6 + 0x14c);
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 4;
      }
      if (local_d8 != 0) goto LAB_10030ad69;
LAB_10030ad7e:
      if (*(short *)(lVar6 + 0x15c) != 0 || (local_cc & 0x10) == 0) {
        *(short *)(param_4 + 0x494) = *(short *)(lVar6 + 0x15c);
        *(byte *)((long)param_4 + 3) = *(byte *)((long)param_4 + 3) | 8;
      }
      if (local_d8 != 0) goto LAB_10030adb2;
    }
    else {
LAB_10030a8f6:
      cVar7 = FUN_10053916d(lVar14,0x18);
      if ((cVar7 != '\0') || (cVar7 = FUN_10053916d(lVar14,0x31), cVar7 != '\0'))
      goto LAB_10030a918;
LAB_10030a963:
      cVar7 = FUN_10053916d(lVar14,7);
      if (cVar7 != '\0') goto LAB_10030a974;
LAB_10030a9a9:
      cVar7 = FUN_10053916d(lVar14,0x4a);
      if (cVar7 != '\0') goto LAB_10030a9ba;
LAB_10030a9f0:
      cVar7 = FUN_10053916d(lVar14,0xd);
      if (cVar7 != '\0') goto LAB_10030aa01;
LAB_10030aa37:
      cVar7 = FUN_10053916d(lVar14,0x32);
      if (cVar7 != '\0') goto LAB_10030aa48;
LAB_10030aa75:
      cVar7 = FUN_10053916d(lVar14,0x33);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(lVar6 + 0x80);
        goto LAB_10030aa8d;
      }
LAB_10030aab3:
      cVar7 = FUN_10053916d(lVar14,5);
      if (cVar7 != '\0') goto LAB_10030aac4;
LAB_10030aaff:
      cVar7 = FUN_10053916d(lVar14,6);
      if (cVar7 != '\0') goto LAB_10030ab10;
LAB_10030ab6d:
      cVar7 = FUN_10053916d(lVar14,0x4b);
      if (cVar7 != '\0') goto LAB_10030ab7e;
LAB_10030abb7:
      cVar7 = FUN_10053916d(lVar14,10);
      if (cVar7 != '\0') goto LAB_10030abc8;
LAB_10030abfe:
      cVar7 = FUN_10053916d(lVar14,0x1f);
      if (cVar7 != '\0') {
        *(byte *)(param_4 + 0x490) = (byte)(*(uint *)(lVar6 + 0xc2) >> 10) & 1;
        *(byte *)((long)param_4 + 2) = *(byte *)((long)param_4 + 2) | 0x40;
      }
      cVar7 = FUN_10053916d(local_d8,0x46);
      if (cVar7 != '\0') goto LAB_10030ac60;
LAB_10030ac93:
      param_1 = local_e0;
      cVar7 = FUN_10053916d(local_d8,0x19);
      if (cVar7 != '\0') goto LAB_10030aca8;
LAB_10030acdd:
      cVar7 = FUN_10053916d(local_d8,0x16);
      if (cVar7 != '\0') goto LAB_10030acf2;
LAB_10030ad23:
      cVar7 = FUN_10053916d(local_d8,0x17);
      if (cVar7 != '\0') goto LAB_10030ad38;
LAB_10030ad69:
      cVar7 = FUN_10053916d(local_d8,0x23);
      if (cVar7 != '\0') goto LAB_10030ad7e;
LAB_10030adb2:
      cVar7 = FUN_10053916d(local_d8,0xc);
      if (cVar7 == '\0') goto LAB_10030adee;
    }
    if (*(long *)(param_1 + 0x68) != 0 || (local_cc & 0x10) == 0) {
      FUN_1003aead8(param_4);
      *(byte *)((long)param_4 + 1) = *(byte *)((long)param_4 + 1) | 0x40;
    }
  }
LAB_10030adee:
  lVar14 = local_d8;
  if (param_5 != (ulong *)0x0) {
    if ((local_d8 == 0) || (cVar7 = FUN_10053916d(local_d8,0x88), cVar7 != '\0')) {
      if (*(short *)(param_1 + 0x56) != 0 || (local_cc & 0x10) == 0) {
        *(short *)((long)param_5 + 0x16) = *(short *)(param_1 + 0x56);
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 0x10;
      }
      if (lVar14 != 0) goto LAB_10030ae3f;
LAB_10030ae50:
      if (*(short *)(param_1 + 0x5a) != 0 || (local_cc & 0x10) == 0) {
        *(short *)(param_5 + 3) = *(short *)(param_1 + 0x5a);
        *(byte *)param_5 = (byte)*param_5 | 2;
      }
      if (lVar14 != 0) goto LAB_10030ae7b;
LAB_10030ae8c:
      if (*(short *)(param_1 + 0x58) != 0 || (local_cc & 0x10) == 0) {
        *(short *)((long)param_5 + 0x1a) = *(short *)(param_1 + 0x58);
        *(byte *)param_5 = (byte)*param_5 | 4;
        goto LAB_10030aeb2;
      }
LAB_10030aec5:
      pbVar17 = *(byte **)(param_1 + 0x10);
      uVar16 = *(ulong *)(pbVar17 + 8);
      if (uVar16 != 0) goto LAB_10030aefd;
      if (((((*(long *)(pbVar17 + 0x10) != 0) || (*(long *)(pbVar17 + 0x18) != 0)) ||
           (*(int *)(pbVar17 + 0x84) != 0)) ||
          ((*(int *)(pbVar17 + 4) != 0 || (*(long *)(pbVar17 + 0x20) != 0)))) ||
         ((*pbVar17 & 0x20) != 0)) {
        uVar16 = 0;
        goto LAB_10030aefd;
      }
    }
    else {
LAB_10030ae3f:
      cVar7 = FUN_10053916d(lVar14,0x14);
      if (cVar7 != '\0') goto LAB_10030ae50;
LAB_10030ae7b:
      cVar7 = FUN_10053916d(lVar14,0xde);
      if (cVar7 != '\0') goto LAB_10030ae8c;
LAB_10030aeb2:
      if ((local_cc & 0x10) != 0) goto LAB_10030aec5;
      pbVar17 = *(byte **)(param_1 + 0x10);
      uVar16 = *(ulong *)(pbVar17 + 8);
LAB_10030aefd:
      param_5[0xf] = uVar16;
      uVar16 = *(ulong *)(pbVar17 + 0x18);
      param_5[0x10] = *(ulong *)(pbVar17 + 0x10);
      param_5[0x11] = uVar16;
      *(undefined4 *)(param_5 + 0x12) = *(undefined4 *)(pbVar17 + 0x84);
      *(undefined4 *)((long)param_5 + 0x94) = *(undefined4 *)(pbVar17 + 4);
      param_5[0xe] = *(ulong *)(pbVar17 + 0x20);
      uVar16 = *(ulong *)(pbVar17 + 0x30);
      param_5[0x13] = *(ulong *)(pbVar17 + 0x28);
      param_5[0x14] = uVar16;
      *(byte *)(param_5 + 0x15) = *pbVar17 >> 1 & 1;
      *(byte *)((long)param_5 + 0xa9) = *pbVar17 >> 2 & 1;
      *(byte *)((long)param_5 + 0xab) = (byte)(*(uint *)(param_1 + 0x48) >> 0x13) & 1;
      *(byte *)((long)param_5 + 0xaa) = *pbVar17 >> 5 & 1;
      *(byte *)param_5 = (byte)*param_5 | 8;
    }
    if ((lVar14 == 0) || (cVar7 = FUN_10053916d(lVar14,0xcf), cVar7 != '\0')) {
      if (*(byte *)(lVar6 + 0xb8) != 0 || (local_cc & 0x10) == 0) {
        *(byte *)((long)param_5 + 0x11) = *(byte *)(lVar6 + 0xb8);
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 0x20;
      }
      if (lVar14 != 0) goto LAB_10030afba;
LAB_10030afcb:
      if ((((local_cc & 0x10) == 0) || (iVar11 = FUN_1004744bf(lVar6,0), iVar11 != 0)) ||
         (*(int *)(*(long *)(lVar6 + 0x70) + 0xc) != 0)) {
        iVar12 = FUN_1004744bf(lVar6,1);
        *(int *)((long)param_5 + 0x1c) = iVar12;
        iVar11 = *(int *)(*(long *)(lVar6 + 0x70) + 0xc);
        iVar13 = 0;
        if (iVar12 != iVar11) {
          iVar13 = iVar11;
        }
        *(int *)(param_5 + 4) = iVar13;
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 0x40;
      }
      if (lVar14 != 0) goto LAB_10030b019;
LAB_10030b02a:
      FUN_100475454(lVar6,param_5 + 0x3fd);
      if ((short)param_5[0x3fd] != 0) {
        *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) | 4;
      }
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x480;
      if (lVar14 != 0) goto LAB_10030b06c;
LAB_10030b07d:
      lVar15 = *(long *)(local_e0 + 8);
      if ((local_cc & 0x10) == 0) {
        if (lVar15 == 0) {
LAB_10030b0ce:
          uVar18 = 0;
        }
        else {
LAB_10030b0b6:
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_10030b0ce;
          uVar18 = *(undefined8 *)(*(long *)(local_e0 + 0x10) + 0x38);
        }
        *(undefined8 *)((long)param_5 + 0xccc) = uVar18;
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 8;
      }
      else if (((lVar15 != 0) && (*(long *)(lVar15 + 0x10) != 0)) &&
              (*(long *)(*(long *)(local_e0 + 0x10) + 0x38) != 0)) goto LAB_10030b0b6;
      if (lVar14 != 0) goto LAB_10030b0e1;
LAB_10030b0f2:
      lVar15 = *(long *)(local_e0 + 0x10);
      if (*(long *)(lVar15 + 0x48) != 0 || (local_cc & 0x10) == 0) {
        *(long *)((long)param_5 + 0xcd4) = *(long *)(lVar15 + 0x48);
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 0x40;
      }
      if (lVar14 != 0) goto LAB_10030b12c;
LAB_10030b148:
      if (((local_cc & 0x10) == 0) || (*(long *)(lVar15 + 0x58) != 0)) {
        *(long *)((long)param_5 + 0xcec) = *(long *)(lVar15 + 0x58);
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 0x80;
      }
      if (lVar14 != 0) goto LAB_10030b16b;
LAB_10030b187:
      if (((local_cc & 0x10) == 0) || (*(long *)(lVar15 + 0x40) != 0)) {
        *(long *)((long)param_5 + 0xce4) = *(long *)(lVar15 + 0x40);
        *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) | 1;
      }
      if (lVar14 != 0) goto LAB_10030b1aa;
LAB_10030b1c6:
      if (((local_cc & 0x10) == 0) || (*(long *)(lVar15 + 0x50) != 0)) {
        *(long *)((long)param_5 + 0xcdc) = *(long *)(lVar15 + 0x50);
        *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) | 0x10;
      }
      if (lVar14 != 0) goto LAB_10030b1e9;
LAB_10030b205:
      if (((local_cc & 0x10) == 0) || (*(long *)(lVar15 + 0x60) != 0)) {
        *(long *)((long)param_5 + 0xcf4) = *(long *)(lVar15 + 0x60);
        *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) | 2;
        goto LAB_10030b223;
      }
LAB_10030b22c:
      cVar7 = FUN_10047eee6(lVar6);
      if (cVar7 != '\0') goto LAB_10030b238;
    }
    else {
LAB_10030afba:
      cVar7 = FUN_10053916d(lVar14,0x3c);
      if (cVar7 != '\0') goto LAB_10030afcb;
LAB_10030b019:
      cVar7 = FUN_10053916d(lVar14,0x59);
      if (cVar7 != '\0') goto LAB_10030b02a;
      *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 0x480;
LAB_10030b06c:
      cVar7 = FUN_10053916d(lVar14,0x29);
      if (cVar7 != '\0') goto LAB_10030b07d;
LAB_10030b0e1:
      cVar7 = FUN_10053916d(lVar14,0x2a);
      if (cVar7 != '\0') goto LAB_10030b0f2;
LAB_10030b12c:
      cVar7 = FUN_10053916d(lVar14,0x2b);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(local_e0 + 0x10);
        goto LAB_10030b148;
      }
LAB_10030b16b:
      cVar7 = FUN_10053916d(lVar14,0x2d);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(local_e0 + 0x10);
        goto LAB_10030b187;
      }
LAB_10030b1aa:
      cVar7 = FUN_10053916d(lVar14,0x2c);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(local_e0 + 0x10);
        goto LAB_10030b1c6;
      }
LAB_10030b1e9:
      cVar7 = FUN_10053916d(lVar14,0x35);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(local_e0 + 0x10);
        goto LAB_10030b205;
      }
LAB_10030b223:
      if ((local_cc & 0x10) != 0) goto LAB_10030b22c;
LAB_10030b238:
      bVar8 = FUN_10047eee6(lVar6);
      *(byte *)(param_5 + 0x1a1) = bVar8;
      *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 0x20;
    }
    puVar22 = (uint *)(param_1 + 0x48);
    if ((lVar14 == 0) || (cVar7 = FUN_10053916d(lVar14,0x20), cVar7 != '\0')) {
      lVar15 = *(long *)(local_e0 + 0x10);
      if (*(int *)(lVar15 + 0x88) != 0 || (local_cc & 0x10) == 0) {
        *(int *)((long)param_5 + 0xcfc) = *(int *)(lVar15 + 0x88);
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 0x80;
      }
      if (lVar14 != 0) goto LAB_10030b29d;
LAB_10030b2b9:
      lVar15 = *(long *)(lVar15 + 0xa8);
      if (((local_cc & 0x10) == 0) || (lVar15 != 0)) {
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 1;
        *(long *)((long)param_5 + 0xd1c) = lVar15;
      }
      if (lVar14 != 0) goto LAB_10030b2df;
LAB_10030b2f0:
      FUN_10047ced8(lVar6,(byte *)((long)param_5 + 0x15c4));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x15c4) != 0)) {
        *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) | 4;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030b322;
LAB_10030b333:
      FUN_100300f72(local_e0,(byte *)((long)param_5 + 0xd24));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0xd24) != 0)) {
        *(byte *)((long)param_5 + 7) = *(byte *)((long)param_5 + 7) | 0x40;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030b369;
LAB_10030b37c:
      if (((local_cc & 0x10) == 0) || (lVar15 = FUN_1002af980(local_e0), lVar15 != 0)) {
        lVar15 = local_e0;
        local_e8 = puVar22;
        uVar16 = FUN_1002af980(local_e0);
        param_5[0x225] = uVar16;
        uVar16 = FUN_1002afe3f(lVar15);
        param_5[0x226] = uVar16;
        bVar8 = FUN_1002aff0b(lVar15);
        puVar22 = local_e8;
        *(byte *)(param_5 + 0x228) = bVar8;
        uVar16 = FUN_1002afd8b(lVar15);
        param_5[0x227] = uVar16;
        *(byte *)((long)param_5 + 7) = *(byte *)((long)param_5 + 7) | 0x80;
      }
      if (lVar14 != 0) goto LAB_10030b3f7;
LAB_10030b408:
      FUN_10030c4f9(local_e0,(byte *)((long)param_5 + 0x2dee),0x20);
      if (((local_cc & 0x10) == 0) || (*(byte *)((long)param_5 + 0x2dee) != 0)) {
        *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) | 0x20;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030b442;
LAB_10030b453:
      FUN_10030666b(local_e0,(byte *)((long)param_5 + 0xf24),0);
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0xf24) != 0)) {
        *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) | 8;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030b48b;
LAB_10030b49c:
      FUN_10047c1d6(lVar6,(byte *)((long)param_5 + 0x17c4));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x17c4) != 0)) {
        *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) | 8;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030b4ce;
LAB_10030b4df:
      FUN_10047b9ad(lVar6,param_5 + 0x119);
      if (((local_cc & 0x10) == 0) || ((short)param_5[0x119] != 0)) {
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 0x10;
        goto LAB_10030b505;
      }
LAB_10030b538:
      if (*(short *)(local_e0 + 0x74) != 0) {
        *(short *)(param_5 + 0x16) = *(short *)(local_e0 + 0x74);
        *(byte *)param_5 = (byte)*param_5 | 0x40;
      }
      if (*(short *)(local_e0 + 0x76) != 0) {
        *(short *)((long)param_5 + 0xb2) = *(short *)(local_e0 + 0x76);
        *(byte *)param_5 = (byte)*param_5 | 0x80;
      }
      iVar11 = *(int *)(local_e0 + 0x78);
      if (iVar11 != 0) {
        uVar21 = *param_5;
        uVar16 = param_5[1];
        goto LAB_10030b58f;
      }
    }
    else {
LAB_10030b29d:
      cVar7 = FUN_10053916d(lVar14,0x8b);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(local_e0 + 0x10);
        goto LAB_10030b2b9;
      }
LAB_10030b2df:
      cVar7 = FUN_10053916d(lVar14,0x37);
      if (cVar7 != '\0') goto LAB_10030b2f0;
LAB_10030b322:
      cVar7 = FUN_10053916d(lVar14,0x77);
      if (cVar7 != '\0') goto LAB_10030b333;
LAB_10030b369:
      cVar7 = FUN_100539333(lVar14,&DAT_1007439d0);
      if (cVar7 != '\0') goto LAB_10030b37c;
LAB_10030b3f7:
      cVar7 = FUN_10053916d(lVar14,0x7b);
      if (cVar7 != '\0') goto LAB_10030b408;
LAB_10030b442:
      cVar7 = FUN_10053916d(lVar14,0x80);
      if (cVar7 != '\0') goto LAB_10030b453;
LAB_10030b48b:
      cVar7 = FUN_10053916d(lVar14,0x36);
      if (cVar7 != '\0') goto LAB_10030b49c;
LAB_10030b4ce:
      cVar7 = FUN_10053916d(lVar14,0x7c);
      if (cVar7 != '\0') goto LAB_10030b4df;
LAB_10030b505:
      if ((local_cc & 0x10) != 0) goto LAB_10030b538;
      uVar16 = param_5[1];
      *(undefined4 *)(param_5 + 0x16) = *(undefined4 *)(local_e0 + 0x74);
      uVar21 = *param_5 | 0xc0;
      iVar11 = *(int *)(local_e0 + 0x78);
LAB_10030b58f:
      *(int *)((long)param_5 + 0xb4) = iVar11;
      *param_5 = uVar21 | 0x100;
      param_5[1] = uVar16;
    }
    lVar14 = local_d8;
    if ((local_d8 == 0) || (cVar7 = FUN_10053916d(local_d8,0x6e), cVar7 != '\0')) {
      iVar11 = *(int *)(local_e0 + 0xe4);
      iVar13 = *(int *)(local_e0 + 0xe8);
      if ((iVar11 != 0 || (local_cc & 0x10) == 0) || (iVar11 = 0, iVar13 != 0)) {
LAB_10030b608:
        *(byte *)((long)param_5 + 3) = *(byte *)((long)param_5 + 3) | 0x40;
        *(int *)(param_5 + 0xb) = iVar11;
        *(int *)((long)param_5 + 0x5c) = iVar13;
        uVar16 = *(ulong *)(local_e0 + 0xd8);
        param_5[0xc] = *(ulong *)(local_e0 + 0xd0);
        param_5[0xd] = uVar16;
        *(undefined4 *)((long)param_5 + 0x54) = *(undefined4 *)(local_e0 + 0xe0);
        goto LAB_10030b632;
      }
      iVar13 = 0;
      if ((*(long *)(local_e0 + 0xd0) != 0) || (*(long *)(local_e0 + 0xd8) != 0)) {
        iVar11 = 0;
        iVar13 = 0;
        goto LAB_10030b608;
      }
      iVar11 = 0;
      if (*(int *)(local_e0 + 0xe0) != 0) goto LAB_10030b608;
LAB_10030b66c:
      iVar11 = *(int *)(local_e0 + 0x7c);
      if (iVar11 != 0) {
        *param_5 = *param_5 | 0x80000000;
        *(int *)((long)param_5 + 0x1fe4) = iVar11;
      }
      lVar15 = *(long *)(lVar6 + 0x78);
      iVar11 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) != 0) goto LAB_10030b6a9;
      iVar11 = 0;
      if (((*(int *)(lVar15 + 0x14) != 0) || (iVar11 = 0, *(int *)(lVar15 + 0x18) != 0)) ||
         (*(int *)(lVar15 + 0x1c) != 0)) goto LAB_10030b6a9;
    }
    else {
LAB_10030b632:
      if ((local_cc & 0x10) != 0) goto LAB_10030b66c;
      uVar5 = *(undefined4 *)(local_e0 + 0x7c);
      *param_5 = *param_5 | 0x80000000;
      *(undefined4 *)((long)param_5 + 0x1fe4) = uVar5;
      lVar15 = *(long *)(lVar6 + 0x78);
      iVar11 = *(int *)(lVar15 + 0x10);
LAB_10030b6a9:
      *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) | 0x20;
      *(int *)((long)param_5 + 0xd0c) = iVar11;
      param_5[0x1a2] = *(ulong *)(lVar15 + 0x14);
      *(undefined4 *)(param_5 + 0x1a3) = *(undefined4 *)(lVar15 + 0x1c);
    }
    if ((lVar14 == 0) || (cVar7 = FUN_100539333(lVar14,&DAT_1007439e4), cVar7 != '\0')) {
      pbVar17 = *(byte **)(local_e0 + 0x18);
      if (((local_cc & 0x10) == 0) || ((*pbVar17 & 6) != 0)) {
        *(byte *)((long)param_5 + 7) = *(byte *)((long)param_5 + 7) | 2;
        *(byte *)(param_5 + 0x3fa) = *pbVar17 >> 1 & 1;
        *(byte *)((long)param_5 + 0x1fd1) = *pbVar17 >> 2 & 1;
      }
      if (lVar14 != 0) goto LAB_10030b721;
LAB_10030b732:
      uVar9 = *(uint *)(*(long *)(local_e0 + 0x10) + 0x8c);
      if (100000 < uVar9 || (local_cc & 0x10) == 0) {
        *(byte *)((long)param_5 + 2) = *(byte *)((long)param_5 + 2) | 2;
        if (uVar9 < 0x186a1) {
          *(undefined2 *)(param_5 + 0x159) = 0;
        }
        else {
          FUN_1001e6b38();
        }
      }
      if (lVar14 != 0) goto LAB_10030b782;
LAB_10030b793:
      lVar15 = *(long *)(lVar6 + 0x78);
      if (((local_cc & 0x10) == 0) || (*(int *)(lVar15 + 0xc) != 0)) {
        *(int *)(param_5 + 0x3b9) = *(int *)(lVar15 + 0xc);
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 2;
      }
      if (lVar14 != 0) goto LAB_10030b7b8;
LAB_10030b7cd:
      iVar11 = *(int *)(lVar15 + 4);
      fVar2 = *(float *)(lVar15 + 8);
      if (((local_cc & 0x10) == 0) || (iVar11 != 0)) {
LAB_10030b7ee:
        *(int *)((long)param_5 + 0x1dc4) = iVar11;
        *(float *)((long)param_5 + 0x3634) = fVar2;
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 8;
      }
      else {
        iVar11 = 0;
        if ((fVar2 != 0.0) || (iVar11 = 0, NAN(fVar2))) goto LAB_10030b7ee;
      }
      if (lVar14 != 0) goto LAB_10030b808;
LAB_10030b819:
      if (((local_cc & 0x10) == 0) || ((*puVar22 & 0x100000) != 0)) {
        *(byte *)((long)param_5 + 0x1141) = (byte)(*puVar22 >> 0x14) & 1;
        *(byte *)((long)param_5 + 10) = *(byte *)((long)param_5 + 10) | 1;
      }
      if (lVar14 != 0) goto LAB_10030b845;
LAB_10030b856:
      if (((local_cc & 0x10) == 0) || ((*puVar22 & 0x200000) != 0)) {
        *(byte *)((long)param_5 + 0xac) = (byte)(*puVar22 >> 0x15) & 1;
        *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_5 + 0xb) | 2;
      }
      if (lVar14 != 0) goto LAB_10030b882;
LAB_10030b893:
      if (((local_cc & 0x10) == 0) || ((*puVar22 & 0x800000) != 0)) {
        *(byte *)((long)param_5 + 0xad) = (byte)(*puVar22 >> 0x17) & 1;
        *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_5 + 0xb) | 4;
      }
      if (lVar14 != 0) goto LAB_10030b8bf;
LAB_10030b8d0:
      lVar15 = *(long *)(lVar6 + 0x78);
      if (((local_cc & 0x10) == 0) || (*(byte *)(lVar15 + 0x20) != 0)) {
        *(byte *)((long)param_5 + 0x1dcc) = *(byte *)(lVar15 + 0x20);
        *(byte *)((long)param_5 + 10) = *(byte *)((long)param_5 + 10) | 2;
      }
      if (lVar14 != 0) goto LAB_10030b8f5;
LAB_10030b911:
      if (((local_cc & 0x10) == 0) || (*(byte *)(lVar15 + 0x21) != 0)) {
        *(byte *)((long)param_5 + 0x1dcd) = *(byte *)(lVar15 + 0x21);
        *(byte *)((long)param_5 + 10) = *(byte *)((long)param_5 + 10) | 4;
      }
      lVar23 = local_e0;
      if (lVar14 != 0) goto LAB_10030b939;
LAB_10030b94e:
      if (((local_cc & 0x10) == 0) || (*(byte *)(lVar15 + 0x22) != 0)) {
        *(byte *)((long)param_5 + 0x1dce) = *(byte *)(lVar15 + 0x22);
        *(byte *)((long)param_5 + 10) = *(byte *)((long)param_5 + 10) | 8;
      }
      if (lVar14 != 0) goto LAB_10030b96f;
LAB_10030b980:
      lVar15 = *(long *)(lVar23 + 0x18);
      if (*(short *)(lVar15 + 2) != 0 || (local_cc & 0x10) == 0) {
        *(short *)((long)param_5 + 0x4c) = *(short *)(lVar15 + 2);
        *(byte *)((long)param_5 + 7) = *(byte *)((long)param_5 + 7) | 4;
        goto LAB_10030b9b2;
      }
LAB_10030b9dc:
      if (*(short *)(lVar15 + 4) != 0) {
        *(short *)((long)param_5 + 0x4e) = *(short *)(lVar15 + 4);
        *(byte *)((long)param_5 + 7) = *(byte *)((long)param_5 + 7) | 8;
      }
      sVar20 = *(short *)(lVar23 + 0xec);
      if (sVar20 != 0) {
        uVar16 = *param_5;
        goto LAB_10030ba00;
      }
    }
    else {
LAB_10030b721:
      cVar7 = FUN_10053916d(lVar14,0x22);
      if (cVar7 != '\0') goto LAB_10030b732;
LAB_10030b782:
      cVar7 = FUN_10053916d(lVar14,0x3f);
      if (cVar7 != '\0') goto LAB_10030b793;
LAB_10030b7b8:
      cVar7 = FUN_10053916d(lVar14,0x41);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(lVar6 + 0x78);
        goto LAB_10030b7cd;
      }
LAB_10030b808:
      cVar7 = FUN_10053916d(lVar14,0xa4);
      if (cVar7 != '\0') goto LAB_10030b819;
LAB_10030b845:
      cVar7 = FUN_10053916d(lVar14,0xb5);
      if (cVar7 != '\0') goto LAB_10030b856;
LAB_10030b882:
      cVar7 = FUN_10053916d(lVar14,0xb6);
      if (cVar7 != '\0') goto LAB_10030b893;
LAB_10030b8bf:
      cVar7 = FUN_10053916d(lVar14,0xa5);
      if (cVar7 != '\0') goto LAB_10030b8d0;
LAB_10030b8f5:
      cVar7 = FUN_10053916d(lVar14,0xa6);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(lVar6 + 0x78);
        goto LAB_10030b911;
      }
LAB_10030b939:
      lVar23 = local_e0;
      cVar7 = FUN_10053916d(lVar14,0xa7);
      if (cVar7 != '\0') {
        lVar15 = *(long *)(lVar6 + 0x78);
        goto LAB_10030b94e;
      }
LAB_10030b96f:
      cVar7 = FUN_10053916d(lVar14,0xe4);
      if (cVar7 != '\0') goto LAB_10030b980;
      lVar15 = *(long *)(lVar23 + 0x18);
LAB_10030b9b2:
      if ((local_cc & 0x10) != 0) goto LAB_10030b9dc;
      *(undefined2 *)((long)param_5 + 0x4e) = *(undefined2 *)(lVar15 + 4);
      uVar16 = *param_5 | 0x800000000000000;
      sVar20 = *(short *)(lVar23 + 0xec);
LAB_10030ba00:
      *(short *)(param_5 + 10) = sVar20;
      *param_5 = uVar16 | 0x1000000000000000;
    }
    local_e8 = param_6;
    if ((lVar14 == 0) || (cVar7 = FUN_10053916d(lVar14,0x3e), cVar7 != '\0')) {
      FUN_10047dc87(lVar6,(byte *)((long)param_5 + 0x19c4));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x19c4) != 0)) {
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 1;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030ba5d;
LAB_10030ba6e:
      FUN_10047e42d(lVar6,(byte *)((long)param_5 + 0x3434));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x3434) != 0)) {
        *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_5 + 0xb) | 0x20;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030baa0;
LAB_10030bab1:
      FUN_10047e782(lVar6,(byte *)((long)param_5 + 0x1bc4));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x1bc4) != 0)) {
        *(byte *)((long)param_5 + 4) = *(byte *)((long)param_5 + 4) | 4;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030bae3;
LAB_10030baf4:
      if (*(int *)(lVar6 + 0x150) != 0 || (local_cc & 0x10) == 0) {
        *(int *)((long)param_5 + 0x1fdc) = *(int *)(lVar6 + 0x150);
        *(byte *)((long)param_5 + 5) = *(byte *)((long)param_5 + 5) | 1;
      }
      if (lVar14 != 0) goto LAB_10030bb22;
LAB_10030bb33:
      if (*(int *)(lVar6 + 0x158) != 0 || (local_cc & 0x10) == 0) {
        *(int *)(param_5 + 0x3fc) = *(int *)(lVar6 + 0x158);
        *(byte *)((long)param_5 + 5) = *(byte *)((long)param_5 + 5) | 2;
      }
      if (lVar14 != 0) goto LAB_10030bb61;
LAB_10030bb72:
      if (((local_cc & 0x10) == 0) || ((*(uint *)(lVar6 + 0xc2) & 0x8000) != 0)) {
        *(byte *)((long)param_5 + 0x12) = (byte)(*(uint *)(lVar6 + 0xc2) >> 0xf) & 1;
        *(byte *)((long)param_5 + 5) = *(byte *)((long)param_5 + 5) | 4;
      }
      if (lVar14 != 0) goto LAB_10030bb9f;
LAB_10030bbb0:
      if (((local_cc & 0x10) == 0) || ((*(uint *)(lVar6 + 0xc2) & 0x10000) != 0)) {
        *(byte *)((long)param_5 + 0x13) = (byte)(*(uint *)(lVar6 + 0xc2) >> 0x10) & 1;
        *(byte *)((long)param_5 + 5) = *(byte *)((long)param_5 + 5) | 8;
      }
      if (lVar14 != 0) goto LAB_10030bbdd;
LAB_10030bbee:
      *(undefined4 *)(param_5 + 0x685) = *(undefined4 *)(*(long *)(lVar6 + 0x80) + 0xc);
      *(byte *)((long)param_5 + 10) = *(byte *)((long)param_5 + 10) | 0x40;
    }
    else {
LAB_10030ba5d:
      cVar7 = FUN_10053916d(lVar14,0xbc);
      if (cVar7 != '\0') goto LAB_10030ba6e;
LAB_10030baa0:
      cVar7 = FUN_10053916d(lVar14,0x40);
      if (cVar7 != '\0') goto LAB_10030bab1;
LAB_10030bae3:
      cVar7 = FUN_10053916d(lVar14,0x44);
      if (cVar7 != '\0') goto LAB_10030baf4;
LAB_10030bb22:
      cVar7 = FUN_10053916d(lVar14,0x45);
      if (cVar7 != '\0') goto LAB_10030bb33;
LAB_10030bb61:
      cVar7 = FUN_10053916d(lVar14,0x70);
      if (cVar7 != '\0') goto LAB_10030bb72;
LAB_10030bb9f:
      cVar7 = FUN_10053916d(lVar14,0x5e);
      if (cVar7 != '\0') goto LAB_10030bbb0;
LAB_10030bbdd:
      cVar7 = FUN_10053916d(lVar14,0x5d);
      if (cVar7 != '\0') goto LAB_10030bbee;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uVar16 = 0;
    do {
      while ((FUN_1002fa385(lVar6,uVar16 & 0xffffffff,&local_c8), lVar14 == 0 ||
             (cVar7 = FUN_10053916d(lVar14,local_c0), cVar7 != '\0'))) {
        FUN_1002fb8c8(lVar6,uVar16 & 0xffffffff,param_5 + uVar16 * 0x40 + 0x43d);
        if ((local_cc & 0x10) == 0) {
          uVar21 = *param_5 | local_70;
          uVar24 = param_5[1] | uStack_68;
          bVar8 = *(byte *)(lVar6 + 0xba + uVar16);
LAB_10030bccb:
          *(byte *)((long)param_5 + uVar16 + 0x2de8) = bVar8;
          *param_5 = local_60 | uVar21;
          param_5[1] = uStack_58 | uVar24;
        }
        else {
          if ((short)param_5[uVar16 * 0x40 + 0x43d] != 0) {
            *param_5 = *param_5 | local_70;
            param_5[1] = param_5[1] | uStack_68;
          }
          bVar8 = *(byte *)(lVar6 + 0xba + uVar16);
          if (bVar8 != 0) {
            uVar21 = *param_5;
            uVar24 = param_5[1];
            goto LAB_10030bccb;
          }
        }
        uVar16 = uVar16 + 1;
        lVar14 = local_d8;
        if (uVar16 == 6) {
          param_6 = local_e8;
          lVar15 = local_e0;
          if (local_d8 == 0) goto LAB_10030bd2f;
          goto LAB_10030bd1e;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != 6);
LAB_10030bd1e:
    lVar15 = local_e0;
    param_6 = local_e8;
    cVar7 = FUN_10053916d(lVar14,0x90);
    if (cVar7 == '\0') {
LAB_10030bd63:
      cVar7 = FUN_10053916d(lVar14,0x91);
      if (cVar7 != '\0') goto LAB_10030bd74;
LAB_10030bda8:
      cVar7 = FUN_10053916d(lVar14,0x94);
      if (cVar7 != '\0') goto LAB_10030bdb9;
LAB_10030bded:
      cVar7 = FUN_10053916d(lVar14,0x95);
      if (cVar7 != '\0') goto LAB_10030bdfe;
LAB_10030be32:
      cVar7 = FUN_10053916d(lVar14,0x96);
      if (cVar7 != '\0') goto LAB_10030be43;
LAB_10030be93:
      cVar7 = FUN_10053916d(lVar14,0x97);
      if (cVar7 != '\0') {
        pbVar17 = *(byte **)(lVar15 + 0x20);
        goto LAB_10030bea8;
      }
LAB_10030becb:
      cVar7 = FUN_10053916d(lVar14,0xbd);
      if (cVar7 != '\0') {
        pbVar17 = *(byte **)(lVar15 + 0x20);
        goto LAB_10030bee0;
      }
LAB_10030bf03:
      cVar7 = FUN_10053916d(lVar14,0xbe);
      if (cVar7 != '\0') {
        pbVar17 = *(byte **)(lVar15 + 0x20);
        goto LAB_10030bf18;
      }
LAB_10030bf3f:
      cVar7 = FUN_10053916d(lVar14,0x98);
      if (cVar7 != '\0') {
        pbVar17 = *(byte **)(lVar15 + 0x20);
        goto LAB_10030bf54;
      }
LAB_10030bf76:
      cVar7 = FUN_10053916d(lVar14,0x99);
      if (cVar7 != '\0') {
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 0x20;
        *(byte *)((long)param_5 + 0x2e1d) = *(byte *)(lVar6 + 0xc6) >> 7;
      }
      cVar7 = FUN_10053916d(lVar14,0x9a);
      if (cVar7 != '\0') goto LAB_10030bfc9;
LAB_10030c001:
      cVar7 = FUN_10053916d(lVar14,0xb7);
      if (cVar7 != '\0') goto LAB_10030c012;
LAB_10030c063:
      cVar7 = FUN_10053916d(lVar14,0x9c);
      if (cVar7 != '\0') goto LAB_10030c074;
LAB_10030c0ac:
      cVar7 = FUN_10053916d(lVar14,0x9b);
      if (cVar7 != '\0') goto LAB_10030c0bd;
LAB_10030c0eb:
      cVar7 = FUN_10053916d(lVar14,0x9d);
      if (cVar7 != '\0') goto LAB_10030c0fc;
LAB_10030c12c:
      cVar7 = FUN_10053916d(lVar14,0x9e);
      if (cVar7 != '\0') goto LAB_10030c13d;
LAB_10030c16c:
      cVar7 = FUN_10053916d(lVar14,0xa3);
      if (cVar7 != '\0') {
        *(byte *)((long)param_5 + 0x2e23) = **(byte **)(lVar6 + 0x70) >> 2 & 1;
        param_5[1] = param_5[1] | 0x4000;
      }
      cVar7 = FUN_10053916d(lVar14,0x9f);
      if (cVar7 != '\0') goto LAB_10030c1c7;
LAB_10030c1f9:
      cVar7 = FUN_10053916d(lVar14,0xa0);
      if (cVar7 != '\0') goto LAB_10030c20a;
LAB_10030c23c:
      cVar7 = FUN_10053916d(lVar14,0xa1);
      if ((cVar7 != '\0') || (cVar7 = FUN_10053916d(lVar14,0xa2), cVar7 != '\0'))
      goto LAB_10030c25e;
    }
    else {
LAB_10030bd2f:
      FUN_1002b545d(lVar15,param_5 + 0x19,0);
      if (((local_cc & 0x10) == 0) || ((short)param_5[0x19] != 0)) {
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 4;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030bd63;
LAB_10030bd74:
      FUN_1002b5a57(lVar15,param_5 + 0x59,0);
      if (((local_cc & 0x10) == 0) || ((short)param_5[0x59] != 0)) {
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 2;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030bda8;
LAB_10030bdb9:
      FUN_1002b5814(lVar15,param_5 + 0x99,0);
      if (((local_cc & 0x10) == 0) || ((short)param_5[0x99] != 0)) {
        *(byte *)((long)param_5 + 1) = *(byte *)((long)param_5 + 1) | 4;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030bded;
LAB_10030bdfe:
      FUN_1002b5c9e(lVar15,param_5 + 0xd9,0);
      if (((local_cc & 0x10) == 0) || ((short)param_5[0xd9] != 0)) {
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 2;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030be32;
LAB_10030be43:
      pbVar17 = *(byte **)(lVar15 + 0x20);
      bVar8 = pbVar17[0x18];
      bVar19 = pbVar17[0x19];
      if (bVar8 == 0 && (local_cc & 0x10) != 0) {
        if (bVar19 != 0) {
LAB_10030be6f:
          bVar8 = 0;
          goto LAB_10030be71;
        }
        if (pbVar17[0x1a] != 0) {
          bVar19 = 0;
          goto LAB_10030be6f;
        }
      }
      else {
LAB_10030be71:
        *(byte *)((long)param_5 + 0x2e0e) = bVar8;
        *(byte *)((long)param_5 + 0x2e0f) = bVar19;
        *(byte *)(param_5 + 0x5c2) = pbVar17[0x1a];
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 4;
      }
      if (lVar14 != 0) goto LAB_10030be93;
LAB_10030bea8:
      if (((local_cc & 0x10) == 0) || (*(long *)(pbVar17 + 0x10) != 0)) {
        *(long *)((long)param_5 + 0x2e14) = *(long *)(pbVar17 + 0x10);
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 8;
      }
      if (lVar14 != 0) goto LAB_10030becb;
LAB_10030bee0:
      if (((local_cc & 0x10) == 0) || (*(ulong *)(pbVar17 + 0x28) != 0)) {
        param_5[0x6c7] = *(ulong *)(pbVar17 + 0x28);
        *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_5 + 0xb) | 0x40;
      }
      if (lVar14 != 0) goto LAB_10030bf03;
LAB_10030bf18:
      if (((local_cc & 0x10) == 0) || (*(ulong *)(pbVar17 + 0x20) != 0)) {
        param_5[0x6c8] = *(ulong *)(pbVar17 + 0x20);
        param_5[1] = param_5[1] | 0x80000000;
      }
      if (lVar14 != 0) goto LAB_10030bf3f;
LAB_10030bf54:
      uVar16 = param_5[1];
      param_5[1] = uVar16 | 0x10;
      *(byte *)((long)param_5 + 0x2e1c) = *pbVar17 >> 3 & 1;
      if (lVar14 != 0) goto LAB_10030bf76;
      param_5[1] = uVar16 | 0x30;
      *(byte *)((long)param_5 + 0x2e1d) = *(byte *)(lVar6 + 0xc6) >> 7;
LAB_10030bfc9:
      uVar9 = local_cc & 0x10;
      bVar8 = FUN_1004817dc(lVar6,0);
      if (bVar8 != 0 || uVar9 == 0) {
        *(byte *)((long)param_5 + 0x2e1e) = bVar8;
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 0x40;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030c001;
LAB_10030c012:
      uVar9 = local_cc & 0x10;
      local_c8 = 0;
      FUN_1004817dc(lVar6,&local_c8);
      if (local_c8 != 0 || uVar9 == 0) {
        *(int *)(param_5 + 0x686) = local_c8;
        *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_5 + 0xb) | 0x10;
      }
      lVar14 = local_d8;
      lVar15 = local_e0;
      if (local_d8 != 0) goto LAB_10030c063;
LAB_10030c074:
      uVar9 = local_cc & 0x10;
      bVar8 = FUN_10030c70d(lVar6,0);
      if (bVar8 != 0 || uVar9 == 0) {
        *(byte *)((long)param_5 + 0x2e1f) = bVar8;
        *(byte *)(param_5 + 1) = (byte)param_5[1] | 0x80;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030c0ac;
LAB_10030c0bd:
      bVar8 = *(byte *)(*(long *)(lVar15 + 0x20) + 0x1b);
      if (bVar8 != 0 || (local_cc & 0x10) == 0) {
        *(byte *)(param_5 + 0x5c4) = bVar8;
        *(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) | 1;
      }
      if (lVar14 != 0) goto LAB_10030c0eb;
LAB_10030c0fc:
      if (((local_cc & 0x10) == 0) ||
         (cVar7 = FUN_100481b0e(*(undefined8 *)(lVar15 + 8)), cVar7 != '\0')) {
        bVar8 = FUN_100481b0e(*(undefined8 *)(lVar15 + 8));
        *(byte *)((long)param_5 + 0x2e21) = bVar8;
        *(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) | 2;
      }
      if (lVar14 != 0) goto LAB_10030c12c;
LAB_10030c13d:
      uVar16 = param_5[1];
      *(byte *)((long)param_5 + 0x2e22) =
           (byte)((ushort)*(undefined2 *)(*(long *)(lVar15 + 8) + 0xc6) >> 0xb) & 1;
      param_5[1] = uVar16 | 0x400;
      if (lVar14 != 0) goto LAB_10030c16c;
      *(byte *)((long)param_5 + 0x2e23) = **(byte **)(lVar6 + 0x70) >> 2 & 1;
      param_5[1] = uVar16 | 0x4400;
LAB_10030c1c7:
      FUN_100478ed2(lVar6,(byte *)((long)param_5 + 0x2e24));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x2e24) != 0)) {
        *(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) | 8;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030c1f9;
LAB_10030c20a:
      FUN_1004793b3(lVar6,(byte *)((long)param_5 + 0x3024));
      if (((local_cc & 0x10) == 0) || (*(short *)((long)param_5 + 0x3024) != 0)) {
        *(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) | 0x10;
      }
      lVar14 = local_d8;
      if (local_d8 != 0) goto LAB_10030c23c;
LAB_10030c25e:
      sVar20 = *(short *)(*(long *)(lVar6 + 0x70) + 0x10);
      sVar4 = *(short *)(*(long *)(lVar6 + 0x70) + 0x12);
      if (((local_cc & 0x10) != 0) && (sVar20 == 0)) {
        if (sVar4 == 0) goto LAB_10030c294;
        sVar20 = 0;
      }
      *(short *)((long)param_5 + 0x3224) = sVar20;
      *(short *)((long)param_5 + 0x3226) = sVar4;
      *(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) | 0x20;
    }
LAB_10030c294:
    puVar1 = param_5 + 0x645;
    FUN_100478022(lVar6,puVar1);
    if ((short)param_5[0x645] == 0) {
      FUN_1004779ac(lVar6,puVar1);
    }
    lVar14 = local_d8;
    if (((local_cc & 0x10) == 0) || ((short)*puVar1 != 0)) {
      *(byte *)((long)param_5 + 9) = *(byte *)((long)param_5 + 9) | 0x80;
    }
    if ((local_d8 == 0) || (cVar7 = FUN_10053916d(local_d8,0xaa), cVar7 != '\0')) {
      if (*(byte *)(lVar15 + 0x4d) != 0 || (local_cc & 0x10) == 0) {
        *(byte *)((long)param_5 + 0x1124) = *(byte *)(lVar15 + 0x4d);
        *(byte *)((long)param_5 + 10) = *(byte *)((long)param_5 + 10) | 0x80;
      }
      if (lVar14 != 0) goto LAB_10030c318;
    }
    else {
LAB_10030c318:
      cVar7 = FUN_10053916d(lVar14,0xab);
      if (cVar7 == '\0') goto LAB_10030c341;
    }
    *(byte *)((long)param_5 + 0x1125) = (byte)(*(uint *)(lVar6 + 0xc2) >> 0xd) & 1;
    *(byte *)((long)param_5 + 0xb) = *(byte *)((long)param_5 + 0xb) | 1;
  }
LAB_10030c341:
  if (param_6 == (uint *)0x0) goto LAB_10030c474;
  iVar11 = FUN_10047c4cc(lVar6,param_6 + 3);
  if (iVar11 == 0) {
    if (((local_cc & 0x10) == 0) ||
       (cVar7 = FUN_1001e4783(*(undefined8 *)(param_6 + 3)), cVar7 == '\0')) {
      *(byte *)param_6 = (byte)*param_6 | 1;
      goto LAB_10030c38e;
    }
    iVar11 = FUN_10047c9a2(lVar6,param_6 + 5);
    if (iVar11 == 0) {
LAB_10030c3ab:
      cVar7 = FUN_1001e4783(*(undefined8 *)(param_6 + 5));
      if (cVar7 == '\0') goto LAB_10030c3b7;
    }
  }
  else {
LAB_10030c38e:
    iVar11 = FUN_10047c9a2(lVar6,param_6 + 5);
    if (iVar11 == 0) {
      if ((local_cc & 0x10) != 0) goto LAB_10030c3ab;
LAB_10030c3b7:
      *(byte *)param_6 = (byte)*param_6 | 0x40;
    }
  }
  param_6[9] = 0;
  param_6[10] = 0;
  if ((lVar6 != 0) && (lVar14 = *(long *)(lVar6 + 0x10), lVar14 != 0)) {
    if (*(int *)(lVar14 + 0x80) != 0x74646174) {
      uVar18 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar18,0x10);
      if (cVar7 != '\0') {
        local_c8 = 0x8220202;
        uStack_c4 = 0x7ab58c;
        local_c0 = 1;
        local_bc = 0x822;
        local_ba = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_10030c474;
    }
    FUN_1003071cd(lVar14);
    iVar11 = FUN_10047d582(lVar6,&local_c8,&local_ec);
    if ((local_ec != 0 && CONCAT44(uStack_c4,local_c8) != 0) && iVar11 == 0) {
      uVar18 = FUN_1001e5f3e();
      *(undefined8 *)(param_6 + 7) = uVar18;
      *(byte *)param_6 = (byte)*param_6 | 4;
    }
    FUN_100307383(lVar14);
  }
LAB_10030c474:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

