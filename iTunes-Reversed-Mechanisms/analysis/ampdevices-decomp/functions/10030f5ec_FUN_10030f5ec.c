// name: FUN_10030f5ec
// address: 10030f5ec

void FUN_10030f5ec(ulong *param_1,long param_2,uint param_3,long param_4,ulong *param_5)

{
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  byte bVar22;
  bool bVar23;
  double local_4a0;
  long local_498;
  ulong *local_490;
  long local_488;
  long local_480;
  ulong local_478;
  ulong local_470;
  long local_468;
  uint local_45c;
  int local_458 [64];
  undefined1 local_358 [256];
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_24a = "nullptr != trackInstance";
LAB_10030f87d:
      local_24c = 0x822;
      local_254 = "Assertion failure";
      local_258 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
  }
  else {
    local_498 = param_4;
    FUN_1001c62d9(local_58,0x20);
    lVar18 = *(long *)(param_2 + 8);
    local_468 = param_2;
    if ((lVar18 != 0) && (lVar14 = *(long *)(lVar18 + 0x10), lVar14 != 0)) {
      local_45c = param_3;
      if (*(int *)(lVar14 + 0x80) != 0x74646174) {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure (expected to be true)";
          local_24c = 0x822;
          local_24a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
        }
        cVar5 = FUN_1001782e9(0,1);
        if (cVar5 == '\0') goto LAB_10030f6ba;
      }
      uVar15 = local_45c;
      uVar12 = *param_1;
      if (param_1[1] == 0 && uVar12 == 0) {
        uVar12 = 0;
        uVar21 = 0;
        lVar18 = local_498;
      }
      else {
        local_488 = lVar14;
        if ((((uVar12 & 2) == 0) || (sVar7 = (short)param_1[3], (local_45c & 3) == 2 && sVar7 == 0))
           || (((local_45c & 1) == 0 && (*(short *)(local_468 + 0x5a) == sVar7)))) {
          uVar21 = 0;
        }
        else {
          *(short *)(local_468 + 0x5a) = sVar7;
          FUN_1005389ba(local_58,0x14);
          uVar12 = *param_1;
          uVar21 = 2;
        }
        if ((((uint)uVar12 >> 0x1e & 1) != 0) &&
           (((((iVar9 = (int)param_1[0xb], *(int *)(local_468 + 0xe4) != iVar9 ||
               (*(int *)(local_468 + 0xe8) != *(int *)((long)param_1 + 0x5c))) ||
              (*(ulong *)(local_468 + 0xd0) != param_1[0xc])) ||
             ((*(ulong *)(local_468 + 0xd8) != param_1[0xd] || ((uVar15 & 1) != 0)))) ||
            (*(int *)(local_468 + 0xe0) != *(int *)((long)param_1 + 0x54))))) {
          if ((*(long *)(local_468 + 8) == 0) || (*(long *)(*(long *)(local_468 + 8) + 0x10) == 0))
          {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_258 = 0x8220202;
              local_254 = "Assertion failure";
              local_24c = 0x822;
              local_24a = "TrackInstanceIsValid(trackInstance)";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_258,0x16
                                 );
            }
            bVar23 = false;
            FUN_1001782e9(0,0);
            iVar9 = (int)param_1[0xb];
          }
          else if (((ushort)((short)*(undefined4 *)(local_468 + 0x58) - 0x12dU) < 3) &&
                  ((*(byte *)((long)param_1 + 0x54) & 2) == 0)) {
            bVar23 = param_1[0xd] == 0;
          }
          else {
            bVar23 = false;
          }
          *(int *)(local_468 + 0xe4) = iVar9;
          *(undefined4 *)(local_468 + 0xe8) = *(undefined4 *)((long)param_1 + 0x5c);
          *(ulong *)(local_468 + 0xd0) = param_1[0xc];
          *(undefined4 *)(local_468 + 0xe0) = *(undefined4 *)((long)param_1 + 0x54);
          if (!bVar23) {
            *(ulong *)(local_468 + 0xd8) = param_1[0xd];
          }
          uVar21 = uVar21 | 0x40000000;
          FUN_1005389ba(local_58,0x6e);
          uVar12 = *param_1;
          uVar15 = local_45c;
        }
        if ((((uVar12 & 4) != 0) &&
            (sVar7 = *(short *)((long)param_1 + 0x1a), (uVar15 & 3) != 2 || sVar7 != 0)) &&
           (((uVar15 & 1) != 0 || (*(short *)(local_468 + 0x58) != sVar7)))) {
          *(short *)(local_468 + 0x58) = sVar7;
          uVar21 = uVar21 | 4;
        }
        if ((uVar12 >> 0x2a & 1) != 0) {
          if (((uVar15 & 1) != 0) ||
             ((*(uint *)(lVar18 + 0xc2) >> 0xf & 1) != (uint)*(byte *)((long)param_1 + 0x12))) {
            *(uint *)(lVar18 + 0xc2) =
                 *(uint *)(lVar18 + 0xc2) & 0xffff7fff |
                 (*(byte *)((long)param_1 + 0x12) & 1) << 0xf;
            uVar21 = uVar21 | 0x40000000000;
            FUN_1005389ba(local_58,0x70);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x2b & 1) != 0) {
          if (((uVar15 & 1) != 0) ||
             ((*(uint *)(lVar18 + 0xc2) >> 0x10 & 1) != (uint)*(byte *)((long)param_1 + 0x13))) {
            *(uint *)(lVar18 + 0xc2) =
                 *(uint *)(lVar18 + 0xc2) & 0xfffeffff |
                 (*(byte *)((long)param_1 + 0x13) & 1) << 0x10;
            cVar5 = FUN_10047f358(lVar18);
            if (cVar5 == '\0') {
              FUN_100473a90(lVar18);
              lVar14 = *(long *)(lVar18 + 0x80);
              *(undefined4 *)(lVar14 + 0xc) = 0;
              *(undefined4 *)(lVar14 + 0x14) = 0;
            }
            uVar21 = uVar21 | 0x80000000000;
            FUN_1005389ba(local_58,0x5e);
            uVar12 = *param_1;
            uVar15 = local_45c;
          }
        }
        uVar17 = (uint)uVar12;
        if ((((uVar17 >> 0xd & 1) != 0) &&
            (bVar6 = *(byte *)((long)param_1 + 0x11), (uVar15 & 3) != 2 || bVar6 != 0)) &&
           (((uVar15 & 1) != 0 || (*(byte *)(lVar18 + 0xb8) != bVar6)))) {
          *(byte *)(lVar18 + 0xb8) = bVar6;
          uVar21 = uVar21 | 0x2000;
          FUN_1005389ba(local_58,0xcf);
          uVar17 = (uint)*param_1;
        }
        local_490 = param_5;
        if ((uVar17 >> 0x12 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x3fd] != 0)) {
              FUN_100475454(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x3fd,&local_258,0x20);
              if (cVar5 == '\0') goto LAB_10030facb;
            }
          }
          else {
LAB_10030facb:
            FUN_100471a46(lVar18);
            FUN_1001ddeca(local_488 + 0x21b0,param_1 + 0x3fd,*(long *)(lVar18 + 0x70) + 0x1c);
            uVar21 = uVar21 | 0x40000;
          }
        }
        lVar14 = local_468;
        if ((*param_1 & 8) != 0) {
          uVar17 = uVar15 & 3;
          if (uVar17 == 2 && param_1[0xf] == 0) {
LAB_10030fb68:
            uVar12 = param_1[0xe];
            if (uVar12 != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fbaa;
            }
LAB_10030fbe6:
            uVar12 = param_1[0x10];
            if (uVar12 != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fc06;
            }
LAB_10030fc45:
            uVar12 = param_1[0x11];
            if (uVar12 != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fc65;
            }
LAB_10030fca4:
            if ((int)param_1[0x12] != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fcb9;
            }
LAB_10030fd0e:
            if (*(int *)((long)param_1 + 0x94) != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fd23;
            }
LAB_10030fd72:
            uVar12 = param_1[0x13];
            if (uVar12 != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fd92;
            }
LAB_10030fdd1:
            uVar12 = param_1[0x14];
            if (uVar12 != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fdf1;
            }
LAB_10030fe30:
            bVar6 = (byte)param_1[0x15];
            if (bVar6 != 0) {
              pbVar11 = *(byte **)(local_468 + 0x10);
              goto LAB_10030fe4f;
            }
LAB_10030fe9b:
            bVar6 = *(byte *)((long)param_1 + 0xa9);
            if (bVar6 != 0) goto LAB_10030feaf;
LAB_10030ff09:
            bVar6 = *(byte *)((long)param_1 + 0xab);
            if (bVar6 != 0) goto LAB_10030ff1d;
LAB_10030ff63:
            bVar6 = *(byte *)((long)param_1 + 0xaa);
            uVar15 = local_45c;
            if (bVar6 == 0) goto LAB_10030ffd4;
          }
          else {
            if (((uVar15 & 1) != 0) ||
               (pbVar11 = *(byte **)(local_468 + 0x10), *(ulong *)(pbVar11 + 8) != param_1[0xf])) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(ulong *)(pbVar11 + 8) = param_1[0xf];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fb68;
            uVar12 = param_1[0xe];
LAB_10030fbaa:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || (*(ulong *)(pbVar11 + 0x20) != uVar12)) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(ulong *)(pbVar11 + 0x20) = param_1[0xe];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fbe6;
            uVar12 = param_1[0x10];
LAB_10030fc06:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || (*(ulong *)(pbVar11 + 0x10) != uVar12)) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(ulong *)(pbVar11 + 0x10) = param_1[0x10];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fc45;
            uVar12 = param_1[0x11];
LAB_10030fc65:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || (*(ulong *)(pbVar11 + 0x18) != uVar12)) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(ulong *)(pbVar11 + 0x18) = param_1[0x11];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fca4;
LAB_10030fcb9:
            lVar14 = local_468;
            *(byte *)(local_468 + 0x48) = *(byte *)(local_468 + 0x48) | 0x80;
            if (((local_45c & 1) != 0) || (*(int *)(pbVar11 + 0x84) != (int)param_1[0x12])) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(int *)(pbVar11 + 0x84) = (int)param_1[0x12];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fd0e;
LAB_10030fd23:
            lVar14 = local_468;
            *(byte *)(local_468 + 0x49) = *(byte *)(local_468 + 0x49) | 4;
            if (((local_45c & 1) != 0) || (*(int *)(pbVar11 + 4) != *(int *)((long)param_1 + 0x94)))
            {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(undefined4 *)(pbVar11 + 4) = *(undefined4 *)((long)param_1 + 0x94);
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fd72;
            uVar12 = param_1[0x13];
LAB_10030fd92:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || (*(ulong *)(pbVar11 + 0x28) != uVar12)) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(ulong *)(pbVar11 + 0x28) = param_1[0x13];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fdd1;
            uVar12 = param_1[0x14];
LAB_10030fdf1:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || (*(ulong *)(pbVar11 + 0x30) != uVar12)) {
              FUN_1002af0ff(local_468);
              pbVar11 = *(byte **)(lVar14 + 0x10);
              *(ulong *)(pbVar11 + 0x30) = param_1[0x14];
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fe30;
            bVar6 = (byte)param_1[0x15];
LAB_10030fe4f:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || ((*pbVar11 >> 1 & 1) != bVar6)) {
              FUN_1002af0ff(local_468);
              **(byte **)(lVar14 + 0x10) =
                   **(byte **)(lVar14 + 0x10) & 0xfd | (byte)param_1[0x15] * '\x02' & 2;
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030fe9b;
            bVar6 = *(byte *)((long)param_1 + 0xa9);
LAB_10030feaf:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || ((**(byte **)(local_468 + 0x10) >> 2 & 1) != bVar6)) {
              FUN_1002af0ff(local_468);
              **(byte **)(lVar14 + 0x10) =
                   **(byte **)(lVar14 + 0x10) & 0xfb | (*(byte *)((long)param_1 + 0xa9) & 1) << 2;
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030ff09;
            bVar6 = *(byte *)((long)param_1 + 0xab);
LAB_10030ff1d:
            uVar15 = *(uint *)(local_468 + 0x48) >> 0x13 & 1;
            if (((local_45c & 1) != 0) || (uVar15 != bVar6)) {
              if (uVar15 == 0) {
                *(uint *)(local_468 + 0x48) =
                     *(uint *)(local_468 + 0x48) & 0xfff7ffff | (bVar6 & 1) << 0x13;
              }
              uVar21 = uVar21 | 8;
            }
            if (uVar17 == 2) goto LAB_10030ff63;
            bVar6 = *(byte *)((long)param_1 + 0xaa);
          }
          uVar15 = local_45c;
          lVar14 = local_468;
          if (((local_45c & 1) != 0) || ((**(byte **)(local_468 + 0x10) >> 5 & 1) != bVar6)) {
            FUN_1002af0ff(local_468);
            **(byte **)(lVar14 + 0x10) =
                 **(byte **)(lVar14 + 0x10) & 0xdf | (*(byte *)((long)param_1 + 0xaa) & 1) << 5;
            uVar21 = uVar21 | 8;
          }
        }
LAB_10030ffd4:
        uVar12 = *param_1;
        uVar17 = (uint)param_1[1];
        if (((uVar17 >> 0x10 & 1) == 0) ||
           (bVar6 = *(byte *)((long)param_1 + 0x1141), (uVar15 & 3) == 2 && bVar6 == 0)) {
LAB_10031005a:
          local_470 = 0;
        }
        else {
          uVar20 = *(uint *)(local_468 + 0x48) >> 0x14 & 1;
          if (uVar20 == bVar6 && (uVar15 & 1) == 0) goto LAB_10031005a;
          local_470 = 0x10000;
          if (uVar20 == 0) {
            *(uint *)(local_468 + 0x48) =
                 *(uint *)(local_468 + 0x48) & 0xffefffff | (bVar6 & 1) << 0x14;
            uVar12 = *param_1;
            uVar17 = (uint)param_1[1];
          }
        }
        if (((uVar17 >> 0x19 & 1) != 0) &&
           (bVar6 = *(byte *)((long)param_1 + 0xac), (uVar15 & 3) != 2 || bVar6 != 0)) {
          uVar20 = *(uint *)(local_468 + 0x48) >> 0x15 & 1;
          if (uVar20 != bVar6 || (uVar15 & 1) != 0) {
            if (uVar20 == 0) {
              *(uint *)(local_468 + 0x48) =
                   *(uint *)(local_468 + 0x48) & 0xffdfffff | (bVar6 & 1) << 0x15;
              uVar12 = *param_1;
              uVar17 = (uint)param_1[1];
            }
            local_470 = local_470 + 0x2000000;
          }
        }
        if (((uVar17 >> 0x1a & 1) != 0) &&
           (bVar6 = *(byte *)((long)param_1 + 0xad), (uVar15 & 3) != 2 || bVar6 != 0)) {
          uVar17 = *(uint *)(local_468 + 0x48) >> 0x17 & 1;
          if (uVar17 != bVar6 || (uVar15 & 1) != 0) {
            if (uVar17 == 0) {
              *(uint *)(local_468 + 0x48) =
                   *(uint *)(local_468 + 0x48) & 0xff7fffff | (bVar6 & 1) << 0x17;
              uVar12 = *param_1;
            }
            local_470 = local_470 + 0x4000000;
          }
        }
        if ((((uint)uVar12 >> 0xb & 1) != 0) &&
           (((uVar15 & 3) != 2 || (*(long *)((long)param_1 + 0xccc) != 0)))) {
          if ((*(long *)(local_468 + 8) == 0) || (*(long *)(*(long *)(local_468 + 8) + 0x10) == 0))
          {
            lVar14 = 0;
          }
          else {
            lVar14 = *(long *)(*(long *)(local_468 + 0x10) + 0x38);
          }
          if (((uVar15 & 1) != 0) || (lVar14 != *(long *)((long)param_1 + 0xccc))) {
            FUN_1002b772e(local_468);
            uVar21 = uVar21 | 0x800;
            uVar12 = *param_1;
          }
        }
        lVar14 = local_468;
        if (((((uint)uVar12 >> 0xe & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(long *)((long)param_1 + 0xcd4) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(long *)(*(long *)(local_468 + 0x10) + 0x48) != *(long *)((long)param_1 + 0xcd4))))) {
          FUN_1002af0ff(local_468);
          *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x48) = *(undefined8 *)((long)param_1 + 0xcd4);
          uVar21 = uVar21 | 0x4000;
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if ((((short)uVar12 < 0) && ((uVar15 & 3) != 2 || *(long *)((long)param_1 + 0xcec) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(long *)(*(long *)(local_468 + 0x10) + 0x58) != *(long *)((long)param_1 + 0xcec))))) {
          FUN_1002af0ff(local_468);
          *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x58) = *(undefined8 *)((long)param_1 + 0xcec);
          uVar21 = uVar21 | 0x8000;
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if (((((uint)uVar12 >> 0x10 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(long *)((long)param_1 + 0xce4) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(long *)(*(long *)(local_468 + 0x10) + 0x40) != *(long *)((long)param_1 + 0xce4))))) {
          FUN_1002af0ff(local_468);
          *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x40) = *(undefined8 *)((long)param_1 + 0xce4);
          uVar21 = uVar21 | 0x10000;
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if (((((uint)uVar12 >> 0x14 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(long *)((long)param_1 + 0xcdc) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(long *)(*(long *)(local_468 + 0x10) + 0x50) != *(long *)((long)param_1 + 0xcdc))))) {
          FUN_1002af0ff(local_468);
          *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x50) = *(undefined8 *)((long)param_1 + 0xcdc);
          uVar21 = uVar21 | 0x100000;
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if (((((uint)uVar12 >> 0x19 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(long *)((long)param_1 + 0xcf4) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(long *)(*(long *)(local_468 + 0x10) + 0x60) != *(long *)((long)param_1 + 0xcf4))))) {
          FUN_1002af0ff(local_468);
          *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x60) = *(undefined8 *)((long)param_1 + 0xcf4);
          uVar21 = uVar21 | 0x2000000;
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if ((((uVar12 >> 0x25 & 1) != 0) &&
            (bVar6 = (byte)param_1[0x1a1], (uVar15 & 3) != 2 || bVar6 != 0)) &&
           (((uVar15 & 1) != 0 || (*(byte *)(lVar18 + 200) != bVar6)))) {
          *(byte *)(lVar18 + 200) = bVar6;
          uVar21 = uVar21 | 0x2000000000;
        }
        if ((((uVar12 >> 0x27 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(int *)((long)param_1 + 0xcfc) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(int *)(*(long *)(local_468 + 0x10) + 0x88) != *(int *)((long)param_1 + 0xcfc))))) {
          FUN_1002af0ff(local_468);
          *(undefined4 *)(*(long *)(lVar14 + 0x10) + 0x88) = *(undefined4 *)((long)param_1 + 0xcfc);
          uVar21 = uVar21 | 0x8000000000;
          uVar12 = *param_1;
          uVar15 = local_45c;
        }
        if ((((uint)uVar12 >> 0x15 & 1) != 0) &&
           ((((lVar14 = *(long *)(lVar18 + 0x78),
              *(int *)(lVar14 + 0x10) != *(int *)((long)param_1 + 0xd0c) ||
              (*(int *)(lVar14 + 0x14) != (int)param_1[0x1a2])) ||
             (*(int *)(lVar14 + 0x18) != *(int *)((long)param_1 + 0xd14))) ||
            (((uVar15 & 1) != 0 || (*(int *)(lVar14 + 0x1c) != (int)param_1[0x1a3])))))) {
          FUN_100471fde(lVar18);
          lVar14 = *(long *)(lVar18 + 0x78);
          uVar12 = param_1[0x1a2];
          uVar16 = *(undefined4 *)((long)param_1 + 0xd14);
          uVar4 = param_1[0x1a3];
          *(undefined4 *)(lVar14 + 0x10) = *(undefined4 *)((long)param_1 + 0xd0c);
          *(int *)(lVar14 + 0x14) = (int)uVar12;
          *(undefined4 *)(lVar14 + 0x18) = uVar16;
          *(int *)(lVar14 + 0x1c) = (int)uVar4;
          uVar21 = uVar21 | 0x200000;
          FUN_1005389ba(local_58,0x5b);
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if ((uVar12 >> 0x39 & 1) != 0) {
          if (((local_45c & 1) != 0) ||
             (bVar6 = **(byte **)(local_468 + 0x18),
             (bVar6 >> 2 & 1) != *(byte *)((long)param_1 + 0x1fd1))) {
            FUN_1002af503(local_468);
            pbVar11 = *(byte **)(lVar14 + 0x18);
            *pbVar11 = *pbVar11 & 0xfb | (*(byte *)((long)param_1 + 0x1fd1) & 1) << 2;
            uVar21 = uVar21 | 0x200000000000000;
            FUN_1005389ba(local_58,0x61);
            bVar6 = **(byte **)(lVar14 + 0x18);
          }
          lVar14 = local_468;
          if (((local_45c & 1) != 0) || ((bVar6 >> 1 & 1) != (byte)param_1[0x3fa])) {
            FUN_1002af503(local_468);
            **(byte **)(lVar14 + 0x18) =
                 **(byte **)(lVar14 + 0x18) & 0xfd | (byte)param_1[0x3fa] * '\x02' & 2;
            uVar21 = uVar21 | 0x200000000000000;
            FUN_1005389ba(local_58,0x60);
          }
        }
        uVar15 = local_45c;
        lVar14 = local_468;
        if ((*param_1 & 0x400000000000000) != 0) {
          FUN_1002af503(local_468);
          if (((uVar15 & 1) != 0) ||
             (*(short *)(*(long *)(lVar14 + 0x18) + 2) != *(short *)((long)param_1 + 0x4c))) {
            *(short *)(*(long *)(lVar14 + 0x18) + 2) = *(short *)((long)param_1 + 0x4c);
            uVar21 = uVar21 | 0x400000000000000;
          }
        }
        lVar14 = local_468;
        uVar12 = *param_1;
        if (((uVar12 >> 0x3b & 1) != 0) &&
           (((uVar15 & 1) != 0 ||
            (*(short *)(*(long *)(local_468 + 0x18) + 4) != *(short *)((long)param_1 + 0x4e))))) {
          FUN_1002af503(local_468);
          *(undefined2 *)(*(long *)(lVar14 + 0x18) + 4) = *(undefined2 *)((long)param_1 + 0x4e);
          uVar21 = uVar21 | 0x800000000000000;
          uVar12 = *param_1;
          uVar15 = local_45c;
        }
        if (((uVar12 >> 0x3c & 1) != 0) &&
           (((uVar15 & 1) != 0 || (*(short *)(local_468 + 0xec) != (short)param_1[10])))) {
          *(short *)(local_468 + 0xec) = (short)param_1[10];
          uVar21 = uVar21 | 0x1000000000000000;
        }
        if (((uint)uVar12 >> 0x1a & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0x15c4) != 0)) {
              FUN_10047ced8(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x15c4),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_10031071b;
            }
          }
          else {
LAB_10031071b:
            FUN_1001ddeca(local_488 + 0x1f30,(byte *)((long)param_1 + 0x15c4),lVar18 + 0x100);
            uVar21 = uVar21 | 0x4000000;
            FUN_1005389ba(local_58,0x37);
          }
        }
        uVar12 = *param_1;
        if ((uVar12 >> 0x3e & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0xd24) != 0)) {
              FUN_100300f72(local_468,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0xd24),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_1003107aa;
            }
          }
          else {
LAB_1003107aa:
            FUN_100301119(local_468,(byte *)((long)param_1 + 0xd24));
            uVar15 = local_45c;
            uVar21 = uVar21 | 0x4000000000000000;
            FUN_1005389ba(local_58,0x77);
          }
          uVar12 = *param_1;
        }
        lVar14 = local_468;
        if ((((long)uVar12 < 0) && (((uVar15 & 3) != 2 || (param_1[0x225] != 0)))) &&
           (((uVar12 = FUN_1002af980(local_468), uVar12 != param_1[0x225] ||
             (((uVar12 = FUN_1002afd8b(lVar14), uVar12 != param_1[0x227] ||
               (uVar17 = FUN_1002aff0b(lVar14), uVar17 != (byte)param_1[0x228])) ||
              (uVar12 = FUN_1002afe3f(lVar14), (uVar15 & 1) != 0)))) || (uVar12 != param_1[0x226])))
           ) {
          FUN_1002afa4c(lVar14,param_1[0x225],param_1[0x227],param_1[0x226],(byte)param_1[0x228]);
          uVar21 = uVar21 | 0x8000000000000000;
          FUN_1005389ba(local_58,0x81);
          FUN_1005389ba(local_58,0x89);
          FUN_1005389ba(local_58,0x8a);
          uVar15 = local_45c;
          FUN_1005389ba(local_58,0x84);
        }
        lVar14 = local_468;
        param_5 = local_490;
        local_480 = lVar18;
        if ((*param_1 & 0x20000000) != 0) {
          local_478 = uVar21;
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(byte *)((long)param_1 + 0x2dee) != 0)) {
              FUN_10030c4f9(local_468,local_358,0x100);
              uVar15 = local_45c;
              cVar5 = FUN_1001df957((byte *)((long)param_1 + 0x2dee),local_358,0);
              uVar21 = local_478;
              if (cVar5 == '\0') goto LAB_100310949;
            }
          }
          else {
LAB_100310949:
            FUN_1002af0ff(lVar14);
            lVar18 = local_488 + 0x22a0;
            sVar13 = _strlen((char *)((long)param_1 + 0x2dee));
            uVar15 = local_45c;
            FUN_1001ddddc(lVar18,(byte *)((long)param_1 + 0x2dee),sVar13 & 0xffffffff);
            uVar21 = local_478 | 0x20000000;
            FUN_1005389ba(local_58,0x7b);
          }
        }
        if ((*param_1 & 0x80000) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0xf24) != 0)) {
              FUN_10030666b(local_468,&local_258,0);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0xf24),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100310a10;
            }
          }
          else {
LAB_100310a10:
            lVar18 = local_468;
            FUN_1002af0ff(local_468);
            FUN_1001ddeca(local_488 + 0x22f0,(byte *)((long)param_1 + 0xf24),
                          *(long *)(lVar18 + 0x10) + 0x70);
            uVar21 = uVar21 | 0x80000;
            FUN_1005389ba(local_58,0x80);
          }
        }
        lVar18 = local_480;
        if ((*param_1 & 0x8000000) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0x17c4) != 0)) {
              FUN_10047c1d6(local_480,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x17c4),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100310ab0;
            }
          }
          else {
LAB_100310ab0:
            FUN_100471a46(lVar18);
            FUN_1001ddeca(local_488 + 0x2020,(byte *)((long)param_1 + 0x17c4),
                          *(long *)(lVar18 + 0x70) + 0x20);
            uVar21 = uVar21 | 0x8000000;
            FUN_1005389ba(local_58,0x36);
          }
        }
        if ((*param_1 & 0x1000) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x119] != 0)) {
              FUN_10047b9ad(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x119,&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100310b40;
            }
          }
          else {
LAB_100310b40:
            FUN_100471a46(lVar18);
            FUN_1001ddeca(local_488 + 0x2340,param_1 + 0x119,*(long *)(lVar18 + 0x70) + 0x2c);
            uVar21 = uVar21 | 0x1000;
            FUN_1005389ba(local_58,0x7c);
          }
        }
        uVar12 = *param_1;
        if (((uVar12 & 0x40) != 0) &&
           ((((*(int *)(local_468 + 0x3c) != 0x53485244 || (*(short *)(local_468 + 0x74) == 0)) &&
             (sVar7 = (short)param_1[0x16], (uVar15 & 3) != 2 || sVar7 != 0)) &&
            (((uVar15 & 1) != 0 || (*(short *)(local_468 + 0x74) != sVar7)))))) {
          *(short *)(local_468 + 0x74) = sVar7;
          uVar21 = uVar21 | 0x40;
          FUN_1005389ba(local_58,0x25);
          uVar12 = *param_1;
        }
        if ((((char)uVar12 < '\0') &&
            (sVar7 = *(short *)((long)param_1 + 0xb2), (uVar15 & 3) != 2 || sVar7 != 0)) &&
           ((uVar15 & 1) != 0 || *(short *)(local_468 + 0x76) != sVar7)) {
          if (sVar7 == 0 || *(short *)(local_468 + 0x76) == 0) {
            FUN_1005389ba(local_58,0x25);
            sVar7 = *(short *)((long)param_1 + 0xb2);
            uVar12 = *param_1;
          }
          *(short *)(local_468 + 0x76) = sVar7;
          uVar21 = uVar21 | 0x80;
        }
        if (((((uint)uVar12 >> 8 & 1) != 0) &&
            (iVar9 = *(int *)((long)param_1 + 0xb4), (uVar15 & 3) != 2 || iVar9 != 0)) &&
           (((uVar15 & 1) != 0 || (*(int *)(local_468 + 0x78) != iVar9)))) {
          *(int *)(local_468 + 0x78) = iVar9;
          uVar21 = uVar21 | 0x100;
          FUN_1005389ba(local_58,0x25);
          uVar12 = *param_1;
        }
        if (((uint)uVar12 >> 0x11 & 1) != 0) {
          FUN_1001e4d4c(param_1 + 0x159,local_458,0x100);
          iVar8 = FUN_1001a4c5b(local_458,&local_4a0);
          lVar18 = local_468;
          iVar9 = (int)(long)(local_4a0 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008
                             );
          if (iVar8 != 0) {
            iVar9 = 0;
          }
          if ((((local_45c & 3) != 2) || (iVar9 != 0)) &&
             (((local_45c & 1) != 0 || (*(int *)(*(long *)(local_468 + 0x10) + 0x8c) != iVar9)))) {
            FUN_1002af0ff(local_468);
            *(int *)(*(long *)(lVar18 + 0x10) + 0x8c) = iVar9;
            uVar21 = uVar21 | 0x20000;
            FUN_1005389ba(local_58,0x22);
          }
          uVar12 = *param_1;
          lVar18 = local_480;
        }
        if ((((int)uVar12 < 0) &&
            (iVar9 = *(int *)((long)param_1 + 0x1fe4), (local_45c & 3) != 2 || iVar9 != 0)) &&
           (((local_45c & 1) != 0 || (*(int *)(local_468 + 0x7c) != iVar9)))) {
          *(int *)(local_468 + 0x7c) = iVar9;
          uVar21 = uVar21 | 0x80000000;
        }
        uVar15 = local_45c;
        if ((uVar12 >> 0x20 & 1) != 0) {
          if ((local_45c & 1) == 0) {
            if (((local_45c & 2) == 0) || (*(short *)((long)param_1 + 0x19c4) != 0)) {
              FUN_10047dc87(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x19c4),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100310e14;
            }
          }
          else {
LAB_100310e14:
            FUN_1004722b7(lVar18,(byte *)((long)param_1 + 0x19c4),0);
            uVar15 = local_45c;
            uVar21 = uVar21 | 0x100000000;
            FUN_1005389ba(local_58,0x3e);
          }
        }
        if ((*(byte *)((long)param_1 + 0xb) & 0x20) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0x3434) != 0)) {
              FUN_10047e42d(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x3434),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100310e92;
            }
          }
          else {
LAB_100310e92:
            FUN_10047242b(lVar18,(byte *)((long)param_1 + 0x3434),0);
            local_470 = local_470 + 0x20000000;
            FUN_1005389ba(local_58,0xbc);
          }
        }
        if ((*param_1 & 0x400000000) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0x1bc4) != 0)) {
              FUN_10047e782(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x1bc4),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100310f0c;
            }
          }
          else {
LAB_100310f0c:
            FUN_100471fde(lVar18);
            FUN_1001ddeca(local_488 + 0x2160,(byte *)((long)param_1 + 0x1bc4),
                          *(long *)(lVar18 + 0x78) + 0x2c);
            uVar15 = local_45c;
            uVar21 = uVar21 | 0x400000000;
            FUN_1005389ba(local_58,0x40);
          }
        }
        uVar12 = *param_1;
        uVar17 = (uint)param_1[1];
        if ((uVar12 >> 0x23 & 1) != 0) {
          iVar9 = *(int *)((long)param_1 + 0x1dc4);
          if ((uVar15 & 3) == 2 && iVar9 == 0) {
            iVar9 = 0;
            if ((*(float *)((long)param_1 + 0x3634) == 0.0) &&
               (!NAN(*(float *)((long)param_1 + 0x3634)))) goto LAB_100311001;
          }
          if ((*(int *)(*(long *)(lVar18 + 0x78) + 4) == iVar9) && ((uVar15 & 1) == 0)) {
            fVar2 = *(float *)(*(long *)(lVar18 + 0x78) + 8);
            if ((fVar2 == *(float *)((long)param_1 + 0x3634)) &&
               (!NAN(fVar2) && !NAN(*(float *)((long)param_1 + 0x3634)))) goto LAB_100311001;
          }
          FUN_100471fde(lVar18);
          uVar15 = local_45c;
          lVar14 = *(long *)(lVar18 + 0x78);
          *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((long)param_1 + 0x1dc4);
          *(undefined4 *)(lVar14 + 8) = *(undefined4 *)((long)param_1 + 0x3634);
          uVar21 = uVar21 | 0x800000000;
          FUN_1005389ba(local_58,0x41);
          uVar12 = *param_1;
          uVar17 = (uint)param_1[1];
        }
LAB_100311001:
        if ((((uVar12 >> 0x21 & 1) != 0) && ((uVar15 & 3) != 2 || (int)param_1[0x3b9] != 0)) &&
           (((uVar15 & 1) != 0 || (*(int *)(*(long *)(lVar18 + 0x78) + 0xc) != (int)param_1[0x3b9]))
           )) {
          FUN_100471fde(lVar18);
          uVar15 = local_45c;
          *(int *)(*(long *)(lVar18 + 0x78) + 0xc) = (int)param_1[0x3b9];
          uVar21 = uVar21 | 0x200000000;
          FUN_1005389ba(local_58,0x3f);
          uVar17 = (uint)param_1[1];
        }
        if ((((uVar17 >> 0x11 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(byte *)((long)param_1 + 0x1dcc) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(byte *)(*(long *)(lVar18 + 0x78) + 0x20) != *(byte *)((long)param_1 + 0x1dcc))))) {
          FUN_100471fde(lVar18);
          *(byte *)(*(long *)(lVar18 + 0x78) + 0x20) = *(byte *)((long)param_1 + 0x1dcc);
          local_470 = local_470 | 0x20000;
          FUN_1005389ba(local_58,0xa5);
          uVar17 = (uint)param_1[1];
        }
        if ((((uVar17 >> 0x12 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(byte *)((long)param_1 + 0x1dcd) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(byte *)(*(long *)(lVar18 + 0x78) + 0x21) != *(byte *)((long)param_1 + 0x1dcd))))) {
          FUN_100471fde(lVar18);
          *(byte *)(*(long *)(lVar18 + 0x78) + 0x21) = *(byte *)((long)param_1 + 0x1dcd);
          local_470 = local_470 | 0x40000;
          FUN_1005389ba(local_58,0xa6);
          uVar17 = (uint)param_1[1];
        }
        if ((((uVar17 >> 0x13 & 1) != 0) &&
            ((uVar15 & 3) != 2 || *(byte *)((long)param_1 + 0x1dce) != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(byte *)(*(long *)(lVar18 + 0x78) + 0x22) != *(byte *)((long)param_1 + 0x1dce))))) {
          FUN_100471fde(lVar18);
          *(byte *)(*(long *)(lVar18 + 0x78) + 0x22) = *(byte *)((long)param_1 + 0x1dce);
          local_470 = local_470 | 0x80000;
          FUN_1005389ba(local_58,0xa7);
          uVar17 = (uint)param_1[1];
        }
        if ((uVar17 >> 0x14 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x3ba] != 0)) {
              FUN_10047ea77(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x3ba,&local_258,0x20);
              if (cVar5 == '\0') goto LAB_1003111e7;
            }
          }
          else {
LAB_1003111e7:
            FUN_100471fde(lVar18);
            FUN_1001ddeca(local_488 + 0x2160,param_1 + 0x3ba,*(long *)(lVar18 + 0x78) + 0x30);
            local_470 = local_470 | 0x100000;
            FUN_1005389ba(local_58,0xa8);
          }
        }
        if (((*param_1 & 0x4000000000) != 0) &&
           (iVar9 = *(int *)((long)param_1 + 0x1c), (uVar15 & 3) != 2 || iVar9 != 0)) {
          if (((uVar15 & 1) != 0) || (*(int *)(lVar18 + 0xd4) != iVar9)) {
            *(int *)(lVar18 + 0xd4) = iVar9;
            uVar21 = uVar21 | 0x4000000000;
            FUN_1005389ba(local_58,0x3c);
          }
          uVar15 = local_45c;
          if (((int)param_1[4] != -1) &&
             (*(int *)(*(long *)(lVar18 + 0x70) + 0xc) != (int)param_1[4] || (local_45c & 1) != 0))
          {
            FUN_100471a46(lVar18);
            *(int *)(*(long *)(lVar18 + 0x70) + 0xc) = (int)param_1[4];
            uVar21 = uVar21 | 0x4000000000;
            FUN_1005389ba(local_58,0x3c);
            uVar15 = local_45c;
          }
        }
        uVar12 = *param_1;
        if (((uint)uVar12 >> 9 & 1) != 0) {
          if (((uVar15 & 1) != 0) || ((*(uint *)(lVar18 + 0xc2) >> 2 & 1) != (uint)(byte)param_1[2])
             ) {
            *(uint *)(lVar18 + 0xc2) =
                 (*(uint *)(lVar18 + 0xc2) & 0xfffffffb) + ((byte)param_1[2] & 1) * 4;
            uVar21 = uVar21 | 0x200;
            FUN_1005389ba(local_58,0x7d);
            uVar12 = *param_1;
          }
        }
        if ((((uVar12 >> 0x28 & 1) != 0) &&
            (iVar9 = *(int *)((long)param_1 + 0x1fdc), (uVar15 & 3) != 2 || iVar9 != 0)) &&
           (((uVar15 & 1) != 0 || (*(int *)(lVar18 + 0x150) != iVar9)))) {
          *(int *)(lVar18 + 0x150) = iVar9;
          uVar21 = uVar21 | 0x10000000000;
          FUN_1005389ba(local_58,0x44);
          uVar12 = *param_1;
        }
        if ((((uVar12 >> 0x29 & 1) != 0) &&
            (iVar9 = (int)param_1[0x3fc], (uVar15 & 3) != 2 || iVar9 != 0)) &&
           (((uVar15 & 1) != 0 || (*(int *)(lVar18 + 0x158) != iVar9)))) {
          *(int *)(lVar18 + 0x158) = iVar9;
          uVar21 = uVar21 | 0x20000000000;
          FUN_1005389ba(local_58,0x45);
          uVar12 = *param_1;
        }
        if ((uVar12 >> 0x2d & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x43d] != 0)) {
              FUN_1002fb8c8(lVar18,0,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x43d,&local_258,0x20);
              uVar12 = *param_1;
              if (cVar5 == '\0') goto LAB_10031141a;
            }
          }
          else {
LAB_10031141a:
            if ((uVar12 >> 0x33 & 1) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = (byte)param_1[0x5bd];
              uVar21 = uVar21 | 0x8000000000000;
            }
            uVar21 = uVar21 | 0x200000000000;
            FUN_1002fb52e(lVar18,0,param_1 + 0x43d,bVar6);
            FUN_1005389ba(local_58,0x4e);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x2e & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x47d] != 0)) {
              FUN_1002fb8c8(lVar18,1,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x47d,&local_258,0x20);
              uVar12 = *param_1;
              if (cVar5 == '\0') goto LAB_1003114c9;
            }
          }
          else {
LAB_1003114c9:
            if ((uVar12 >> 0x34 & 1) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = *(byte *)((long)param_1 + 0x2de9);
              uVar21 = uVar21 | 0x10000000000000;
            }
            uVar21 = uVar21 | 0x400000000000;
            FUN_1002fb52e(lVar18,1,param_1 + 0x47d,bVar6);
            FUN_1005389ba(local_58,0x4f);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x2f & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x4bd] != 0)) {
              FUN_1002fb8c8(lVar18,2,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x4bd,&local_258,0x20);
              uVar12 = *param_1;
              if (cVar5 == '\0') goto LAB_10031157b;
            }
          }
          else {
LAB_10031157b:
            if ((uVar12 >> 0x35 & 1) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = *(byte *)((long)param_1 + 0x2dea);
              uVar21 = uVar21 | 0x20000000000000;
            }
            uVar21 = uVar21 | 0x800000000000;
            FUN_1002fb52e(lVar18,2,param_1 + 0x4bd,bVar6);
            FUN_1005389ba(local_58,0x50);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x30 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x4fd] != 0)) {
              FUN_1002fb8c8(lVar18,3,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x4fd,&local_258,0x20);
              uVar12 = *param_1;
              if (cVar5 == '\0') goto LAB_10031162d;
            }
          }
          else {
LAB_10031162d:
            if ((uVar12 >> 0x36 & 1) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = *(byte *)((long)param_1 + 0x2deb);
              uVar21 = uVar21 | 0x40000000000000;
            }
            uVar21 = uVar21 | 0x1000000000000;
            FUN_1002fb52e(lVar18,3,param_1 + 0x4fd,bVar6);
            FUN_1005389ba(local_58,0x51);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x31 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x53d] != 0)) {
              FUN_1002fb8c8(lVar18,4,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x53d,&local_258,0x20);
              uVar12 = *param_1;
              if (cVar5 == '\0') goto LAB_1003116df;
            }
          }
          else {
LAB_1003116df:
            if ((uVar12 >> 0x37 & 1) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = *(byte *)((long)param_1 + 0x2dec);
              uVar21 = uVar21 | 0x80000000000000;
            }
            uVar21 = uVar21 | 0x2000000000000;
            FUN_1002fb52e(lVar18,4,param_1 + 0x53d,bVar6);
            FUN_1005389ba(local_58,0x52);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x32 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x57d] != 0)) {
              FUN_1002fb8c8(lVar18,5,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x57d,&local_258,0x20);
              uVar12 = *param_1;
              if (cVar5 == '\0') goto LAB_100311791;
            }
          }
          else {
LAB_100311791:
            if ((uVar12 >> 0x38 & 1) == 0) {
              bVar6 = 0;
            }
            else {
              bVar6 = *(byte *)((long)param_1 + 0x2ded);
              uVar21 = uVar21 | 0x100000000000000;
            }
            uVar21 = uVar21 | 0x4000000000000;
            FUN_1002fb52e(lVar18,5,param_1 + 0x57d,bVar6);
            FUN_1005389ba(local_58,0x53);
            uVar12 = *param_1;
          }
        }
        if ((uVar12 >> 0x24 & 1) == 0) {
          if (((((uint)uVar12 >> 0x17 & 1) != 0) &&
              (uVar17 = (uint)param_1[8], (uVar15 & 3) != 2 || uVar17 != 0)) &&
             (((uVar15 & 1) != 0 || (uVar17 != *(ushort *)(local_468 + 0x56))))) {
            *(short *)(local_468 + 0x56) = (short)uVar17;
LAB_100311861:
            uVar21 = uVar21 | 0x1000000000;
            FUN_1005389ba(local_58,0x88);
            uVar12 = *param_1;
          }
        }
        else {
          sVar7 = *(short *)((long)param_1 + 0x16);
          if (((uVar15 & 3) != 2 || sVar7 != 0) &&
             (((uVar15 & 1) != 0 || (*(short *)(local_468 + 0x56) != sVar7)))) {
            *(short *)(local_468 + 0x56) = sVar7;
            goto LAB_100311861;
          }
        }
        if (((uint)uVar12 >> 10 & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (lVar18 = local_480, (short)param_1[0x19] != 0)) {
              FUN_1002b545d(local_468,&local_258,0);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x19,&local_258,0x20);
              lVar18 = local_480;
              if (cVar5 == '\0') goto LAB_1003118dd;
            }
          }
          else {
LAB_1003118dd:
            lVar18 = local_468;
            FUN_1002af0ff(local_468);
            FUN_1001ddeca(local_488 + 0x2390,param_1 + 0x19,*(long *)(lVar18 + 0x10) + 0x74);
            uVar21 = uVar21 | 0x400;
            FUN_1005389ba(local_58,0x90);
            lVar18 = local_480;
          }
        }
        if ((param_1[1] & 2) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0x59] != 0)) {
              FUN_1002b5a57(local_468,&local_258,0);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x59,&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100311987;
            }
          }
          else {
LAB_100311987:
            lVar14 = local_468;
            FUN_1002af0ff(local_468);
            lVar18 = local_480;
            FUN_1001ddeca(local_488 + 0x23e0,param_1 + 0x59,*(long *)(lVar14 + 0x10) + 0x78);
            local_470 = local_470 | 2;
            FUN_1005389ba(local_58,0x91);
          }
        }
        if ((*param_1 & 0x400) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (lVar18 = local_480, (short)param_1[0x99] != 0)) {
              FUN_1002b5814(local_468,&local_258,0);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0x99,&local_258,0x20);
              lVar18 = local_480;
              if (cVar5 == '\0') goto LAB_100311a39;
            }
          }
          else {
LAB_100311a39:
            lVar18 = local_468;
            FUN_1002af0ff(local_468);
            FUN_1001ddeca(local_488 + 0x2390,param_1 + 0x99,*(long *)(lVar18 + 0x10) + 0x7c);
            uVar21 = uVar21 | 0x400;
            FUN_1005389ba(local_58,0x94);
            lVar18 = local_480;
          }
        }
        local_478 = uVar21;
        if ((param_1[1] & 2) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || ((short)param_1[0xd9] != 0)) {
              FUN_1002b5c9e(local_468,&local_258,0);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc(param_1 + 0xd9,&local_258,0x20);
              if (cVar5 == '\0') goto LAB_100311aea;
            }
          }
          else {
LAB_100311aea:
            lVar14 = local_468;
            FUN_1002af0ff(local_468);
            uVar21 = local_478;
            FUN_1001ddeca(local_488 + 0x23e0,param_1 + 0xd9,*(long *)(lVar14 + 0x10) + 0x80);
            local_470 = local_470 | 2;
            FUN_1005389ba(local_58,0x95);
          }
        }
        lVar14 = local_468;
        uVar12 = param_1[1];
        if (((uVar12 & 1) != 0) &&
           (((uVar15 & 1) != 0 ||
            (*(long *)(*(long *)(local_468 + 0x10) + 0xa8) != *(long *)((long)param_1 + 0xd1c))))) {
          FUN_1002af0ff(local_468);
          uVar21 = local_478;
          *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0xa8) = *(undefined8 *)((long)param_1 + 0xd1c);
          local_470 = local_470 | 1;
          FUN_1005389ba(local_58,0x8b);
          uVar12 = param_1[1];
        }
        lVar14 = local_468;
        if ((uVar12 & 4) != 0) {
          uVar17 = uVar15 & 3;
          if (uVar17 == 2 && *(byte *)((long)param_1 + 0x2e0e) == 0) {
LAB_100311c1a:
            bVar6 = *(byte *)((long)param_1 + 0x2e0f);
            if (bVar6 != 0) goto LAB_100311c2e;
LAB_100311c86:
            bVar6 = (byte)param_1[0x5c2];
            uVar15 = local_45c;
            if (bVar6 == 0) goto LAB_100311cf5;
          }
          else {
            if (((uVar15 & 1) != 0) ||
               (*(byte *)(*(long *)(local_468 + 0x20) + 0x18) != *(byte *)((long)param_1 + 0x2e0e)))
            {
              FUN_1002af688(local_468);
              uVar21 = local_478;
              *(byte *)(*(long *)(lVar14 + 0x20) + 0x18) = *(byte *)((long)param_1 + 0x2e0e);
              local_470 = local_470 | 4;
              FUN_1005389ba(local_58,0x96);
            }
            if (uVar17 == 2) goto LAB_100311c1a;
            bVar6 = *(byte *)((long)param_1 + 0x2e0f);
LAB_100311c2e:
            lVar14 = local_468;
            if (((local_45c & 1) != 0) || (*(byte *)(*(long *)(local_468 + 0x20) + 0x19) != bVar6))
            {
              FUN_1002af688(local_468);
              uVar21 = local_478;
              *(byte *)(*(long *)(lVar14 + 0x20) + 0x19) = *(byte *)((long)param_1 + 0x2e0f);
              local_470 = local_470 | 4;
              FUN_1005389ba(local_58,0x96);
            }
            if (uVar17 == 2) goto LAB_100311c86;
            bVar6 = (byte)param_1[0x5c2];
          }
          uVar15 = local_45c;
          lVar14 = local_468;
          if (((local_45c & 1) != 0) || (*(byte *)(*(long *)(local_468 + 0x20) + 0x1a) != bVar6)) {
            FUN_1002af688(local_468);
            uVar21 = local_478;
            *(byte *)(*(long *)(lVar14 + 0x20) + 0x1a) = (byte)param_1[0x5c2];
            local_470 = local_470 | 4;
            FUN_1005389ba(local_58,0x96);
          }
        }
LAB_100311cf5:
        lVar14 = local_468;
        uVar12 = param_1[1];
        if ((((uVar12 & 8) != 0) && ((uVar15 & 3) != 2 || *(long *)((long)param_1 + 0x2e14) != 0))
           && (((uVar15 & 1) != 0 ||
               (*(long *)(*(long *)(local_468 + 0x20) + 0x10) != *(long *)((long)param_1 + 0x2e14)))
              )) {
          FUN_1002af688(local_468);
          uVar21 = local_478;
          *(undefined8 *)(*(long *)(lVar14 + 0x20) + 0x10) = *(undefined8 *)((long)param_1 + 0x2e14)
          ;
          local_470 = local_470 | 8;
          FUN_1005389ba(local_58,0x97);
          uVar12 = param_1[1];
        }
        lVar14 = local_468;
        if (((((uint)uVar12 >> 0x1e & 1) != 0) && ((uVar15 & 3) != 2 || param_1[0x6c7] != 0)) &&
           (((uVar15 & 1) != 0 || (*(ulong *)(*(long *)(local_468 + 0x20) + 0x28) != param_1[0x6c7])
            ))) {
          FUN_1002af688(local_468);
          uVar21 = local_478;
          *(ulong *)(*(long *)(lVar14 + 0x20) + 0x28) = param_1[0x6c7];
          local_470 = local_470 + 0x40000000;
          FUN_1005389ba(local_58,0xbd);
          uVar12 = param_1[1];
        }
        if ((((int)uVar12 < 0) && ((uVar15 & 3) != 2 || param_1[0x6c8] != 0)) &&
           (((uVar15 & 1) != 0 || (*(ulong *)(*(long *)(local_468 + 0x20) + 0x20) != param_1[0x6c8])
            ))) {
          FUN_1002af85d(local_468);
          local_470 = local_470 | 0x80000000;
          FUN_1005389ba(local_58,0xbe);
          uVar12 = param_1[1];
        }
        lVar14 = local_468;
        if ((((uVar12 & 0x10) != 0) && ((uVar15 & 3) != 2 || *(byte *)((long)param_1 + 0x2e1c) != 0)
            ) && (((uVar15 & 1) != 0 ||
                  ((**(byte **)(local_468 + 0x20) >> 3 & 1) != *(byte *)((long)param_1 + 0x2e1c)))))
        {
          FUN_1002af688(local_468);
          uVar21 = local_478;
          **(byte **)(lVar14 + 0x20) =
               **(byte **)(lVar14 + 0x20) & 0xf7 | (*(byte *)((long)param_1 + 0x2e1c) & 1) << 3;
          local_470 = local_470 | 0x10;
          FUN_1005389ba(local_58,0x98);
          uVar12 = param_1[1];
        }
        if ((((uVar12 & 0x20) != 0) &&
            (bVar6 = *(byte *)((long)param_1 + 0x2e1d), (uVar15 & 3) != 2 || bVar6 != 0)) &&
           (((uVar15 & 1) != 0 || ((*(ushort *)(lVar18 + 0xc6) >> 7 & 1) != (ushort)bVar6)))) {
          *(ushort *)(lVar18 + 0xc6) =
               *(ushort *)(lVar18 + 0xc6) & 0xff7f | (ushort)(byte)(bVar6 << 7);
          local_470 = local_470 | 0x20;
          FUN_1005389ba(local_58,0x99);
        }
        uVar12 = param_1[1];
        uVar17 = (uint)uVar12;
        if ((uVar15 & 4) == 0) {
          if ((((uVar12 & 0x40) != 0) &&
              (bVar6 = *(byte *)((long)param_1 + 0x2e1e), (uVar15 & 3) != 2 || bVar6 != 0)) &&
             (((uVar15 & 1) != 0 || (*(byte *)(lVar18 + 0x134) != bVar6)))) {
            *(byte *)(lVar18 + 0x134) = bVar6;
            local_470 = local_470 | 0x40;
            FUN_1005389ba(local_58,0x9a);
            uVar17 = (uint)param_1[1];
          }
          if ((((uVar17 >> 0x1c & 1) != 0) &&
              (iVar9 = (int)param_1[0x686], (uVar15 & 3) != 2 || iVar9 != 0)) &&
             (((uVar15 & 1) != 0 || (*(int *)(lVar18 + 0x130) != iVar9)))) {
            *(int *)(lVar18 + 0x130) = iVar9;
            local_470 = local_470 | 0x10000000;
            FUN_1005389ba(local_58,0xb7);
          }
        }
        else if ((uVar12 & 0x10000040) != 0) {
          bVar6 = FUN_1004817dc(lVar18,local_458);
          if (((param_1[1] & 0x40) == 0) ||
             ((uVar15 & 3) == 2 && *(byte *)((long)param_1 + 0x2e1e) == 0)) {
            bVar23 = false;
            bVar6 = 0;
          }
          else {
            bVar23 = bVar6 != *(byte *)((long)param_1 + 0x2e1e);
            bVar6 = (byte)uVar15 | bVar23;
          }
          if ((((uint)param_1[1] >> 0x1c & 1) == 0) ||
             (iVar9 = (int)param_1[0x686], (local_45c & 3) == 2 && iVar9 == 0)) {
            bVar22 = 0;
LAB_1003120be:
            iVar9 = local_458[0];
            if (bVar23) {
LAB_1003120c2:
              FUN_1004818a2(lVar18,*(byte *)((long)param_1 + 0x2e1e),iVar9);
            }
          }
          else {
            if (local_458[0] == iVar9) {
              bVar22 = (byte)local_45c & 1;
              goto LAB_1003120be;
            }
            bVar22 = 1;
            if (bVar23) goto LAB_1003120c2;
            *(int *)(lVar18 + 0x130) = iVar9;
            bVar22 = 1;
          }
          if ((bVar6 & 1) != 0) {
            local_470 = local_470 | 0x40;
            FUN_1005389ba(local_58,0x9a);
          }
          uVar15 = local_45c;
          param_5 = local_490;
          if (bVar22 != 0) {
            local_470 = local_470 | 0x10000000;
            FUN_1005389ba(local_58,0xb7);
            param_5 = local_490;
          }
        }
        lVar14 = local_468;
        uVar17 = (uint)param_1[1];
        if ((((uVar17 >> 8 & 1) != 0) && ((uVar15 & 3) != 2 || (byte)param_1[0x5c4] != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(byte *)(*(long *)(local_468 + 0x20) + 0x1b) != (byte)param_1[0x5c4])))) {
          FUN_1002af688(local_468);
          uVar21 = local_478;
          *(byte *)(*(long *)(lVar14 + 0x20) + 0x1b) = (byte)param_1[0x5c4];
          local_470 = local_470 | 0x100;
          FUN_1005389ba(local_58,0x9b);
          uVar17 = (uint)param_1[1];
        }
        if (((uVar17 >> 9 & 1) != 0) &&
           (((uVar15 & 3) != 2 || (*(byte *)((long)param_1 + 0x2e21) == 1)))) {
          bVar6 = FUN_100481b0e(*(undefined8 *)(local_468 + 8));
          if (((uVar15 & 1) != 0) || (*(byte *)((long)param_1 + 0x2e21) != bVar6)) {
            FUN_100481bcb(*(undefined8 *)(local_468 + 8),*(byte *)((long)param_1 + 0x2e21));
            local_470 = local_470 | 0x200;
            FUN_1005389ba(local_58,0x9d);
          }
        }
        uVar17 = (uint)param_1[1];
        if (((uVar17 >> 10 & 1) != 0) &&
           ((bVar6 = *(byte *)((long)param_1 + 0x2e22), (uVar15 & 3) != 2 || ((bVar6 & 1) != 0)))) {
          uVar3 = *(ushort *)(*(long *)(local_468 + 8) + 0xc6);
          if (((uVar15 & 1) != 0) || ((uVar3 >> 0xb & 1) != (ushort)bVar6)) {
            *(ushort *)(*(long *)(local_468 + 8) + 0xc6) = uVar3 & 0xf7ff | (ushort)bVar6 << 0xb;
            puVar1 = (ushort *)(*(long *)(*(long *)(local_468 + 8) + 0x28) + 0xf8);
            *puVar1 = *puVar1 & 0xfdff;
            local_470 = local_470 | 0x400;
            FUN_1005389ba(local_58,0x9e);
            uVar17 = (uint)param_1[1];
          }
        }
        if ((((uVar17 >> 0xe & 1) != 0) &&
            (((uVar15 & 3) != 2 || ((*(byte *)((long)param_1 + 0x2e23) & 1) != 0)))) &&
           (((uVar15 & 1) != 0 ||
            ((**(byte **)(lVar18 + 0x70) >> 2 & 1) != *(byte *)((long)param_1 + 0x2e23))))) {
          FUN_100471a46(lVar18);
          **(byte **)(lVar18 + 0x70) =
               **(byte **)(lVar18 + 0x70) & 0xfb | *(byte *)((long)param_1 + 0x2e23) << 2;
          local_470 = local_470 | 0x4000;
          FUN_1005389ba(local_58,0xa3);
          uVar17 = (uint)param_1[1];
        }
        if ((uVar17 >> 0xb & 1) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0x2e24) != 0)) {
              FUN_100478ed2(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x2e24),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_10031234c;
            }
          }
          else {
LAB_10031234c:
            FUN_100471a46(lVar18);
            FUN_1001ddeca(local_488 + 0x1d50,(byte *)((long)param_1 + 0x2e24),
                          *(long *)(lVar18 + 0x70) + 0x14);
            local_470 = local_470 | 0x800;
            FUN_1005389ba(local_58,0x9f);
          }
        }
        if ((*(byte *)((long)param_1 + 9) & 0x10) != 0) {
          if ((uVar15 & 1) == 0) {
            if (((uVar15 & 2) == 0) || (*(short *)((long)param_1 + 0x3024) != 0)) {
              FUN_1004793b3(lVar18,&local_258);
              uVar15 = local_45c;
              cVar5 = FUN_1001e3edc((byte *)((long)param_1 + 0x3024),&local_258,0x20);
              if (cVar5 == '\0') goto LAB_1003123e0;
            }
          }
          else {
LAB_1003123e0:
            FUN_100471a46(lVar18);
            FUN_1001ddeca(local_488 + 0x1da0,(byte *)((long)param_1 + 0x3024),
                          *(long *)(lVar18 + 0x70) + 0x18);
            local_470 = local_470 | 0x1000;
            FUN_1005389ba(local_58,0xa0);
          }
        }
        uVar17 = (uint)param_1[1];
        if ((uVar17 >> 0xd & 1) != 0) {
          sVar7 = *(short *)((long)param_1 + 0x3224);
          if (sVar7 == 0 && (uVar15 & 3) == 2) {
            if (*(short *)((long)param_1 + 0x3226) == 0) goto LAB_1003124e4;
            sVar7 = 0;
          }
          if (((*(short *)(*(long *)(lVar18 + 0x70) + 0x10) != sVar7) || ((uVar15 & 1) != 0)) ||
             (*(short *)(*(long *)(lVar18 + 0x70) + 0x12) != *(short *)((long)param_1 + 0x3226))) {
            FUN_100471a46(lVar18);
            uVar3 = *(ushort *)((long)param_1 + 0x3224);
            lVar14 = *(long *)(lVar18 + 0x70);
            *(ushort *)(lVar14 + 0x10) = uVar3;
            uVar19 = 0;
            if (uVar3 <= *(ushort *)((long)param_1 + 0x3226)) {
              uVar19 = *(ushort *)((long)param_1 + 0x3226);
            }
            *(ushort *)(lVar14 + 0x12) = uVar19;
            local_470 = local_470 | 0x2000;
            FUN_1005389ba(local_58,0xa1);
            uVar15 = local_45c;
            FUN_1005389ba(local_58,0xa2);
            uVar17 = (uint)param_1[1];
          }
        }
LAB_1003124e4:
        lVar14 = local_468;
        if ((((uVar17 >> 0x15 & 1) != 0) && ((uVar15 & 3) != 2 || (int)param_1[0x199] != 0)) &&
           (((uVar15 & 1) != 0 ||
            (*(int *)(*(long *)(local_468 + 0x10) + 0x90) != (int)param_1[0x199])))) {
          FUN_1002af0ff(local_468);
          uVar21 = local_478;
          *(int *)(*(long *)(lVar14 + 0x10) + 0x90) = (int)param_1[0x199];
          local_470 = local_470 | 0x200000;
          FUN_1005389ba(local_58,0xa9);
          uVar17 = (uint)param_1[1];
        }
        if ((uVar17 >> 0x16 & 1) != 0) {
          iVar9 = FUN_10047f424(lVar18);
          uVar17 = (uint)param_1[1];
          if (((uVar15 & 1) != 0) || (iVar9 != (int)param_1[0x685])) {
            uVar16 = 0;
            if ((uVar17 >> 0x1b & 1) != 0) {
              uVar16 = *(undefined4 *)((long)param_1 + 0x342c);
            }
            FUN_10047f6a5(lVar18,(int)param_1[0x685],uVar16,1,0);
            local_470 = local_470 | 0x400000;
            FUN_1005389ba(local_58,0x5d);
            uVar17 = (uint)param_1[1];
          }
        }
        if ((uVar17 >> 0x17 & 1) == 0) {
LAB_1003125c0:
          if (((uVar15 & 3) == 2) || ((uVar17 & 0x1000000) == 0)) goto LAB_100312644;
          if (((local_45c & 1) == 0) &&
             ((*(uint *)(lVar18 + 0xc2) >> 0xd & 1) == (uint)*(byte *)((long)param_1 + 0x1125)))
          goto LAB_100312644;
          *(uint *)(lVar18 + 0xc2) =
               *(uint *)(lVar18 + 0xc2) & 0xffffdfff |
               (*(byte *)((long)param_1 + 0x1125) & 1) << 0xd;
          uVar12 = local_470 | 0x1000000;
          FUN_1005389ba(local_58,0xab);
        }
        else {
          bVar6 = *(byte *)((long)param_1 + 0x1124);
          if ((uVar15 & 3) != 2 || bVar6 != 0) {
            if (((local_45c & 1) != 0) || (*(byte *)(local_468 + 0x4d) != bVar6)) {
              *(byte *)(local_468 + 0x4d) = bVar6;
              local_470 = local_470 | 0x800000;
              FUN_1005389ba(local_58,0xaa);
              uVar17 = (uint)param_1[1];
            }
            goto LAB_1003125c0;
          }
LAB_100312644:
          uVar12 = local_470;
          if (uVar21 == 0 && local_470 == 0) {
            uVar12 = 0;
            uVar21 = 0;
            lVar18 = local_498;
            goto LAB_100312670;
          }
        }
        lVar18 = local_498;
        FUN_1005389ba(local_58,0x4c);
      }
LAB_100312670:
      if (lVar18 != 0) {
        FUN_100538877(lVar18,local_58);
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar21;
        param_5[1] = uVar12;
      }
      goto LAB_10030f725;
    }
LAB_10030f6ba:
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_24a = "TrackDataIsValid(trackData)";
      goto LAB_10030f87d;
    }
  }
  FUN_1001782e9(0,0);
LAB_10030f725:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

