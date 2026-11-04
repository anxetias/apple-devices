// name: FUN_10030e507
// address: 10030e507

void FUN_10030e507(uint *param_1,long param_2,uint param_3,long param_4,uint *param_5)

{
  short sVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  undefined1 local_258 [32];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (uint *)0x0 || param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_22a = "(trackInstance != nullptr) && (itTrackInfo != nullptr)";
LAB_10030e71a:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    lVar3 = *(long *)(param_2 + 8);
    if ((lVar3 != 0) && (lVar8 = *(long *)(lVar3 + 0x10), lVar8 != 0)) {
      if (*(int *)(lVar8 + 0x80) != 0x74646174) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure (expected to be true)";
          local_22c = 0x822;
          local_22a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
        }
        cVar4 = FUN_1001782e9(0,1);
        if (cVar4 == '\0') goto LAB_10030e6ab;
      }
      FUN_1001c62d9(local_258,0x20);
      uVar6 = *param_1;
      uVar13 = 0;
      if (uVar6 != 0) {
        if ((((uVar6 & 1) == 0) || (uVar13 = 0, (short)param_1[2] == 0)) ||
           ((*(byte *)(lVar3 + 0xc2) & 0x20) != 0)) {
LAB_10030e772:
          if ((uVar6 & 4) != 0) {
            if ((param_3 & 1) == 0) {
LAB_10030e7a3:
              if (((param_3 & 2) == 0) || ((short)param_1[0x102] != 0)) {
                FUN_1004779ac(lVar3,&local_238);
                cVar4 = FUN_1001e3edc(param_1 + 0x102,&local_238,0x20);
                if (cVar4 == '\0') goto LAB_10030e77b;
              }
            }
            else {
LAB_10030e77b:
              FUN_1004711f9(lVar3,param_1 + 0x102,0);
              uVar13 = uVar13 | 4;
              FUN_1005389ba(local_258,4);
            }
          }
        }
        else {
          if ((param_3 & 1) != 0) {
LAB_10030e741:
            FUN_100471097(lVar3,param_1 + 2,0);
            FUN_1005389ba(local_258,2);
            *(byte *)(lVar3 + 0xc2) = *(byte *)(lVar3 + 0xc2) & 0xef;
            uVar6 = *param_1;
            uVar13 = 1;
            goto LAB_10030e772;
          }
          FUN_100476928(lVar3,&local_238);
          cVar4 = FUN_1001e3edc(param_1 + 2,&local_238,0x20);
          if (cVar4 == '\0') goto LAB_10030e741;
          uVar13 = 0;
          if ((*param_1 & 4) != 0) goto LAB_10030e7a3;
        }
        if ((*param_1 & 0x40000000) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x516] != 0)) {
              FUN_100478022(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x516,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030e7f8;
            }
          }
          else {
LAB_10030e7f8:
            FUN_10047136f(lVar3,param_1 + 0x516,0);
            uVar13 = uVar13 | 0x40000000;
            FUN_1005389ba(local_258,0x47);
          }
        }
        if ((*param_1 & 0x200000) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x410] != 0)) {
              FUN_10047a0d2(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x410,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030e878;
            }
          }
          else {
LAB_10030e878:
            FUN_100471bc2(lVar3,param_1 + 0x410,0);
            uVar13 = uVar13 | 0x200000;
            FUN_1005389ba(local_258,0x12);
          }
        }
        if ((*param_1 & 8) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x182] != 0)) {
              FUN_1004772c4(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x182,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030e8f8;
            }
          }
          else {
LAB_10030e8f8:
            FUN_1004714e5(lVar3,param_1 + 0x182,0);
            uVar13 = uVar13 | 8;
            FUN_1005389ba(local_258,3);
          }
        }
        if ((*param_1 & 0x10000000) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x495] != 0)) {
              FUN_100478a09(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x495,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030e980;
            }
          }
          else {
LAB_10030e980:
            FUN_1001ddeca(lVar8 + 0x1d00,param_1 + 0x495,lVar3 + 0xe8);
            uVar13 = uVar13 | 0x10000000;
            FUN_1005389ba(local_258,0x27);
          }
        }
        if ((*param_1 & 0x10) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x202] != 0)) {
              FUN_10047a7b5(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x202,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030ea15;
            }
          }
          else {
LAB_10030ea15:
            FUN_10047aaa8(lVar3,param_1 + 0x202,0);
            uVar13 = uVar13 | 0x10;
            FUN_1005389ba(local_258,8);
          }
        }
        if (((*param_1 & 0x20) != 0) && ((*(byte *)(lVar3 + 0xc2) & 0x80) == 0)) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x282] != 0)) {
              FUN_10047aca3(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x282,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030eaac;
            }
          }
          else {
LAB_10030eaac:
            FUN_1001ddeca(lVar8 + 0x1e40,param_1 + 0x282,lVar3 + 0xf4);
            uVar13 = uVar13 | 0x20;
            FUN_1005389ba(local_258,9);
          }
        }
        if ((*param_1 & 0x200) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x302] != 0)) {
              FUN_10047b307(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x302,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030eb42;
            }
          }
          else {
LAB_10030eb42:
            FUN_1001ddeca(lVar8 + 0x1e90,param_1 + 0x302,lVar3 + 0xf8);
            uVar13 = uVar13 | 0x200;
            FUN_1005389ba(local_258,0x11);
          }
        }
        if ((*param_1 & 0x400) != 0) {
          if ((param_3 & 1) == 0) {
            if (((param_3 & 2) == 0) || ((short)param_1[0x382] != 0)) {
              FUN_10047b65a(lVar3,&local_238);
              cVar4 = FUN_1001e3edc(param_1 + 0x382,&local_238,0x20);
              if (cVar4 == '\0') goto LAB_10030ebdb;
            }
          }
          else {
LAB_10030ebdb:
            FUN_1001ddeca(lVar8 + 0x1ee0,param_1 + 0x382,lVar3 + 0xfc);
            uVar13 = uVar13 | 0x400;
            FUN_1005389ba(local_258,0xe);
          }
        }
        uVar6 = *param_1;
        if (((uVar6 & 0x40) != 0) &&
           ((uVar10 = param_1[0x402], (param_3 & 3) != 2 || uVar10 != 0 ||
            (uVar10 = 0, param_1[0x403] != 0)))) {
          if (uVar10 == *(ushort *)(lVar3 + 0x136)) {
            uVar12 = param_1[0x403];
            if (((param_3 & 1) == 0) && (uVar12 == *(ushort *)(lVar3 + 0x138))) goto LAB_10030ed1a;
          }
          else {
            uVar12 = param_1[0x403];
          }
          *(short *)(lVar3 + 0x136) = (short)uVar10;
          uVar6 = 0;
          if ((uVar10 & 0xffff) <= uVar12) {
            uVar6 = uVar12;
          }
          *(short *)(lVar3 + 0x138) = (short)uVar6;
          uVar13 = uVar13 | 0x40;
          FUN_1005389ba(local_258,0xb);
          FUN_1005389ba(local_258,0x34);
          uVar6 = *param_1;
        }
LAB_10030ed1a:
        if ((uVar6 >> 0x17 & 1) != 0) {
          uVar9 = (ushort)param_1[0x491];
          if (uVar9 == 0 && (param_3 & 3) == 2) {
            if (*(short *)((long)param_1 + 0x1246) == 0) goto LAB_10030edd2;
            uVar9 = 0;
          }
          if (*(ushort *)(lVar3 + 0x13a) == uVar9) {
            uVar5 = *(ushort *)((long)param_1 + 0x1246);
            if (((param_3 & 1) == 0) && (*(ushort *)(lVar3 + 0x13c) == uVar5)) goto LAB_10030edd2;
          }
          else {
            uVar5 = *(ushort *)((long)param_1 + 0x1246);
          }
          *(ushort *)(lVar3 + 0x13a) = uVar9;
          if (uVar5 < uVar9) {
            uVar5 = 0;
          }
          *(ushort *)(lVar3 + 0x13c) = uVar5;
          uVar13 = uVar13 | 0x800000;
          FUN_1005389ba(local_258,0x18);
          FUN_1005389ba(local_258,0x31);
          uVar6 = *param_1;
        }
LAB_10030edd2:
        if ((((char)uVar6 < '\0') &&
            (sVar1 = (short)param_1[0x404], (param_3 & 3) != 2 || sVar1 != 0)) &&
           (((param_3 & 1) != 0 || (*(short *)(lVar3 + 0x142) != sVar1)))) {
          *(short *)(lVar3 + 0x142) = sVar1;
          uVar13 = uVar13 | 0x80;
          FUN_1005389ba(local_258,7);
          uVar6 = *param_1;
        }
        if ((((uVar6 >> 0x1b & 1) != 0) &&
            (sVar1 = (short)param_1[0x494], (param_3 & 3) != 2 || sVar1 != 0)) &&
           (((param_3 & 1) != 0 || (*(short *)(lVar3 + 0x15c) != sVar1)))) {
          *(short *)(lVar3 + 0x15c) = sVar1;
          uVar13 = uVar13 | 0x8000000;
          FUN_1005389ba(local_258,0x23);
          uVar6 = *param_1;
        }
        if ((((uVar6 >> 0x19 & 1) != 0) &&
            (uVar10 = param_1[0x492], (param_3 & 3) != 2 || uVar10 != 0)) &&
           (((param_3 & 1) != 0 || (*(uint *)(lVar3 + 0x144) != uVar10)))) {
          *(uint *)(lVar3 + 0x144) = uVar10;
          uVar13 = uVar13 | 0x2000000;
          FUN_1005389ba(local_258,0x16);
          uVar6 = *param_1;
        }
        if ((((uVar6 >> 0x1a & 1) != 0) &&
            (uVar10 = param_1[0x493], (param_3 & 3) != 2 || uVar10 != 0)) &&
           (((param_3 & 1) != 0 || (*(uint *)(lVar3 + 0x14c) != uVar10)))) {
          *(uint *)(lVar3 + 0x14c) = uVar10;
          uVar13 = uVar13 | 0x4000000;
          FUN_1005389ba(local_258,0x17);
          uVar6 = *param_1;
        }
        if ((((uVar6 >> 0x13 & 1) != 0) &&
            (uVar10 = param_1[0x408], (param_3 & 3) != 2 || uVar10 != 0)) &&
           (((param_3 & 1) != 0 || (*(uint *)(param_2 + 0x5c) != uVar10)))) {
          *(uint *)(param_2 + 0x5c) = uVar10;
          uVar13 = uVar13 | 0x80000;
          FUN_1005389ba(local_258,10);
          uVar6 = *param_1;
        }
        if ((((uVar6 >> 8 & 1) != 0) &&
            (sVar1 = *(short *)((long)param_1 + 0x1012), (param_3 & 3) != 2 || sVar1 != 0)) &&
           (((param_3 & 1) != 0 || (*(short *)(lVar3 + 0x12a) != sVar1)))) {
          *(short *)(lVar3 + 0x12a) = sVar1;
          uVar13 = uVar13 | 0x100;
          FUN_1005389ba(local_258,0x4a);
          uVar6 = *param_1;
        }
        if ((((uVar6 >> 0xb & 1) != 0) &&
            (uVar10 = param_1[0x405], (param_3 & 3) != 2 || uVar10 != 0)) &&
           (((param_3 & 1) != 0 || (*(uint *)(param_2 + 100) != uVar10)))) {
          *(uint *)(param_2 + 100) = uVar10;
          uVar13 = uVar13 | 0x800;
          FUN_1005389ba(local_258,0xd);
          uVar6 = *param_1;
        }
        if ((uVar6 >> 0xc & 1) != 0) {
          uVar10 = 0;
          if (param_1[0x406] <= *(uint *)(param_2 + 100)) {
            uVar10 = param_1[0x406];
          }
          if (((param_3 & 3) != 2 || uVar10 != 0) &&
             (((param_3 & 1) != 0 || (*(uint *)(*(long *)(lVar3 + 0x80) + 4) != uVar10)))) {
            FUN_100473a90(lVar3);
            *(uint *)(*(long *)(lVar3 + 0x80) + 4) = uVar10;
            uVar13 = uVar13 | 0x1000;
            FUN_1005389ba(local_258,0x32);
            uVar6 = *param_1;
          }
        }
        if ((uVar6 >> 0xd & 1) != 0) {
          uVar10 = 0;
          if (param_1[0x407] <= *(uint *)(param_2 + 100)) {
            uVar10 = param_1[0x407];
          }
          if (((param_3 & 3) != 2 || uVar10 != 0) &&
             (((param_3 & 1) != 0 || (*(uint *)(*(long *)(lVar3 + 0x80) + 8) != uVar10)))) {
            FUN_100473a90(lVar3);
            *(uint *)(*(long *)(lVar3 + 0x80) + 8) = uVar10;
            uVar13 = uVar13 | 0x2000;
            FUN_1005389ba(local_258,0x33);
            uVar6 = *param_1;
          }
        }
        if ((uVar6 >> 0xe & 1) != 0) {
          uVar11 = *(ulong *)(param_1 + 0x596);
          if (uVar11 == 0) {
            if ((param_3 & 3) == 2 && param_1[0x409] == 0) goto LAB_10030f177;
            uVar11 = (ulong)param_1[0x409];
          }
          if (((param_3 & 1) != 0) || (*(ulong *)(param_2 + 0x68) != uVar11)) {
            *(ulong *)(param_2 + 0x68) = uVar11;
            uVar13 = uVar13 | 0x4000;
            FUN_1005389ba(local_258,0xc);
            uVar6 = *param_1;
          }
        }
LAB_10030f177:
        if ((((short)uVar6 < 0) && (uVar10 = param_1[0x40a], (param_3 & 3) != 2 || uVar10 != 0)) &&
           (((param_3 & 1) != 0 || (uVar10 != *(ushort *)(param_2 + 0x54))))) {
          *(short *)(param_2 + 0x54) = (short)uVar10;
          uVar13 = uVar13 | 0x8000;
          FUN_1005389ba(local_258,5);
          uVar6 = *param_1;
        }
        if ((uVar6 >> 0x10 & 1) != 0) {
          fVar14 = (float)param_1[0x515];
          if ((fVar14 == 0.0) && (!NAN(fVar14))) {
            fVar14 = (float)param_1[0x40b] * DAT_100701cfc;
          }
          if ((((param_3 & 3) != 2) || (fVar14 != 0.0)) || (NAN(fVar14))) {
            if ((param_3 & 1) == 0) {
              if ((*(float *)(param_2 + 0x50) == fVar14) &&
                 (!NAN(*(float *)(param_2 + 0x50)) && !NAN(fVar14))) goto LAB_10030f24b;
            }
            *(float *)(param_2 + 0x50) = fVar14;
            uVar13 = uVar13 | 0x10000;
            FUN_1005389ba(local_258,6);
            uVar6 = *param_1;
          }
        }
LAB_10030f24b:
        if ((uVar6 >> 0x11 & 1) != 0) {
          uVar6 = FUN_1002b6093(param_2);
          if (((param_3 & 3) != 2 || param_1[0x40e] != 0) &&
             (uVar6 != param_1[0x40e] || (param_3 & 1) != 0)) {
            FUN_1002b61c6(param_2);
            uVar13 = uVar13 | 0x20000;
            FUN_1005389ba(local_258,0x4b);
          }
        }
        if ((*param_1 & 0x40000) != 0) {
          FUN_1002ae6f7(param_2);
          iVar2 = *(int *)(param_2 + 0x3c);
          if ((iVar2 == 0x4d46494c) || (iVar2 == 0x46494c45)) {
            lVar8 = *(long *)(param_2 + 0x80);
          }
          else if ((iVar2 != 0x44574e4c) ||
                  (lVar8 = FUN_1004aa9fa(*(undefined8 *)(param_2 + 0x80)), lVar8 == 0))
          goto LAB_10030f385;
          if ((((param_3 & 3) != 2) || (*(uint *)(lVar8 + 0x420) != 0)) &&
             (((param_3 & 1) != 0 || (*(uint *)(lVar8 + 0x420) != param_1[0x40c])))) {
            *(uint *)(lVar8 + 0x420) = param_1[0x40c];
            uVar13 = uVar13 | 0x40000;
            FUN_1005389ba(local_258,0xf);
          }
        }
LAB_10030f385:
        uVar6 = *param_1;
        if ((uVar6 >> 0x16 & 1) != 0) {
          if (((param_3 & 1) != 0) ||
             ((*(uint *)(lVar3 + 0xc2) >> 10 & 1) != (uint)(byte)param_1[0x490])) {
            *(uint *)(lVar3 + 0xc2) =
                 *(uint *)(lVar3 + 0xc2) & 0xfffffbff | ((byte)param_1[0x490] & 1) << 10;
            uVar13 = uVar13 | 0x400000;
            FUN_1005389ba(local_258,0x1f);
            uVar6 = *param_1;
          }
        }
        if ((uVar6 >> 0x1d & 1) != 0) {
          if (((param_3 & 1) != 0) ||
             ((*(uint *)(lVar3 + 0xc2) >> 0x11 & 1) != (uint)*(byte *)((long)param_1 + 0x1241))) {
            *(uint *)(lVar3 + 0xc2) =
                 *(uint *)(lVar3 + 0xc2) & 0xfffdffff |
                 (*(byte *)((long)param_1 + 0x1241) & 1) << 0x11;
            uVar13 = uVar13 | 0x20000000;
            FUN_1005389ba(local_258,0x46);
            uVar6 = *param_1;
          }
        }
        if ((uVar6 >> 0x18 & 1) != 0) {
          uVar9 = *(ushort *)((long)param_1 + 0x1242);
          uVar5 = 100;
          if (uVar9 < 100) {
            uVar5 = uVar9;
          }
          if (((param_3 & 3) != 2 || uVar9 != 0) &&
             (((param_3 & 1) != 0 || (uVar5 != (short)*(char *)(lVar3 + 300))))) {
            FUN_100320aca(lVar3,(int)(char)uVar5,0);
            uVar13 = uVar13 | 0x1000000;
            FUN_1005389ba(local_258,0x19);
          }
        }
      }
      if (param_4 != 0) {
        FUN_100538877(param_4,local_258);
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = uVar13;
      }
      goto LAB_10030e6cd;
    }
LAB_10030e6ab:
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_22a = "TrackDataIsValid(trackData)";
      goto LAB_10030e71a;
    }
  }
  FUN_1001782e9(0,0);
LAB_10030e6cd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

