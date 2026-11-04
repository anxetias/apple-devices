// name: FUN_1002711e9
// address: 1002711e9

bool FUN_1002711e9(long param_1,long *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  int iVar20;
  ushort uVar21;
  uint uVar22;
  int iVar24;
  ulong uVar25;
  char *pcVar26;
  long lVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  bool bVar31;
  bool bVar32;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 uStack_4a;
  uint uStack_48;
  undefined2 uStack_44;
  long local_38;
  ulong uVar23;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar16 = *(uint *)(*param_2 + 0x38);
  puVar1 = (undefined8 *)((long)param_2 + 0x32);
  bVar14 = false;
  while( true ) {
    lVar27 = param_1 + (ulong)uVar16;
    cVar13 = *(char *)(param_1 + (ulong)uVar16);
    bVar31 = false;
    if (cVar13 == 'I') {
      bVar32 = false;
      if ((*(char *)(lVar27 + 1) == 'n') && (bVar31 = false, *(char *)(lVar27 + 2) == 'f')) {
        bVar32 = *(char *)(lVar27 + 3) == 'o';
        bVar31 = false;
      }
    }
    else {
      bVar32 = false;
      bVar31 = false;
      if (cVar13 == 'X') {
        if ((*(char *)(lVar27 + 1) == 'i') && (*(char *)(lVar27 + 2) == 'n')) {
          bVar31 = *(char *)(lVar27 + 3) == 'g';
        }
        else {
          bVar31 = false;
        }
        bVar32 = false;
      }
    }
    if ((bVar31 != false) || (bVar32)) break;
    if (((cVar13 == 'V') && (*(char *)(lVar27 + 1) == 'B')) &&
       ((*(char *)(lVar27 + 2) == 'R' && (*(char *)(lVar27 + 3) == 'I')))) {
      *puVar1 = 0x666f686e75617246;
      *(undefined4 *)((long)param_2 + 0x39) = 0x726566;
      uVar21 = *(ushort *)(lVar27 + 6) << 8 | *(ushort *)(lVar27 + 6) >> 8;
      uVar22 = *(uint *)(lVar27 + 10);
      uVar15 = *(uint *)(lVar27 + 0xe);
      uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      bVar2 = *(byte *)(lVar27 + 0x12);
      bVar3 = *(byte *)(lVar27 + 0x13);
      uVar7 = *(ushort *)(lVar27 + 0x14);
      bVar4 = *(byte *)(lVar27 + 0x16);
      bVar5 = *(byte *)(lVar27 + 0x17);
      uVar8 = *(ushort *)(lVar27 + 0x18);
      *(uint *)(param_2 + 2) = uVar15;
      *(uint *)((long)param_2 + 0x14) =
           uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
      lVar18 = *param_2;
      if (uVar21 != 0) {
        uVar22 = 0x451;
        if (*(char *)(lVar18 + 3) == '\0') {
          uVar22 = 0x691;
        }
        if (uVar22 < uVar21) {
          iVar24 = uVar21 - 0x480;
          if (*(char *)(lVar18 + 3) != '\0') {
            iVar24 = uVar21 - 0x240;
          }
          *(int *)(param_2 + 4) = iVar24 + -0x211;
        }
      }
      iVar24 = (uint)bVar2 * 0x100;
      uVar22 = iVar24 + (uint)bVar3;
      uVar23 = (ulong)uVar22;
      uVar25 = CONCAT44(0,*(uint *)(lVar18 + 0xc));
      uVar17 = (ulong)*(uint *)(lVar18 + 0x20) * (ulong)uVar15 * 1000;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar25;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar17;
      lVar18 = FUN_1001c63e1(uVar22 * 4 + 4,uVar25,uVar17 % uVar25);
      local_58 = (undefined4)lVar18;
      uStack_54 = (undefined4)((ulong)lVar18 >> 0x20);
      if (lVar18 != 0) {
        uVar15 = (uint)bVar4 * 0x100;
        lVar27 = lVar27 + 0x1a;
        local_50 = SUB164(auVar10 / auVar9,0);
        local_4c = (undefined2)uVar23;
        uStack_4a = (undefined2)(uVar23 >> 0x10);
        uStack_48 = (uint)(ushort)(uVar8 << 8 | uVar8 >> 8);
        uVar22 = bVar5 + uVar15;
        uVar17 = 0;
        do {
          if ((short)uVar15 == 0 && bVar5 == 0) {
            uVar29 = 0;
          }
          else {
            uVar25 = 0;
            uVar29 = 0;
            iVar20 = uVar22 * 8;
            do {
              iVar20 = iVar20 + -8;
              uVar29 = uVar29 | (uint)*(byte *)(lVar27 + uVar25) << ((byte)iVar20 & 0x1f);
              uVar25 = uVar25 + 1;
            } while (uVar22 != uVar25);
          }
          *(uint *)(lVar18 + uVar17 * 4) = uVar29 * (ushort)(uVar7 << 8 | uVar7 >> 8);
          lVar27 = lVar27 + (ulong)(uVar15 | bVar5);
          uVar17 = uVar17 + 1;
        } while (uVar17 != (uint)bVar3 + iVar24 + 1);
        if (param_2[3] != 0) {
          FUN_100271810(param_2[3],0,&local_58,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc),
                        SUB168(auVar10 / auVar9,0),0x100,param_1,uVar23);
          *(undefined1 *)(param_2 + 6) = 1;
          lVar18 = CONCAT44(uStack_54,local_58);
        }
        FUN_1001c64c1(lVar18);
      }
      bVar14 = true;
    }
LAB_1002716b4:
    bVar32 = uVar16 != 0x20;
    uVar16 = 0x20;
    if ((bVar32 & (bVar31 ^ 1U)) == 0) goto LAB_1002717e9;
  }
  uVar6 = *(undefined1 *)(lVar27 + 6);
  bVar2 = *(byte *)(lVar27 + 7);
  if ((bVar2 & 1) == 0) {
    puVar28 = (uint *)(lVar27 + 8);
  }
  else {
    uVar22 = *(uint *)(lVar27 + 8);
    uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    puVar28 = (uint *)(lVar27 + 0xc);
    if ((uVar22 != 0 & bVar31) == 1) {
      *(uint *)(param_2 + 2) = uVar22;
    }
  }
  if ((bVar2 & 2) != 0) {
    uVar22 = *puVar28;
    uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
    puVar28 = puVar28 + 1;
    if (uVar22 != 0) {
      *(uint *)((long)param_2 + 0x14) = uVar22;
    }
  }
  uVar30 = (uint)CONCAT11(uVar6,bVar2);
  uVar22 = *(uint *)(param_2 + 2);
  uVar15 = *(uint *)(*param_2 + 0xc);
  uVar29 = *(uint *)(*param_2 + 0x20);
  if ((bVar2 & 8) != 0) {
    bVar14 = *(char *)((long)puVar28 + 2) == '\0';
    bVar32 = *(char *)((long)puVar28 + 1) == '\0';
    bVar11 = (char)*puVar28 == '\0';
    uVar12 = uVar30 & 0xfffffff7;
    if (!bVar14 || (!bVar32 || !bVar11)) {
      uVar12 = uVar30;
    }
    uVar30 = uVar12;
    puVar28 = puVar28 + (bVar14 && (bVar32 && bVar11));
  }
  if ((uVar30 >> 8 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x31) = 1;
    if ((uVar30 & 4) == 0) {
      uVar19 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar19,0x10);
      if (cVar13 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        local_4c = 0x822;
        uStack_4a = 0x655a;
        uStack_48 = 0x1007b;
        uStack_44 = 0;
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined1 *)(param_2 + 6) = 0;
    }
    else {
      *(undefined1 *)(param_2 + 6) = 0;
      uVar30 = uVar30 & 0xfffffffb;
      puVar28 = puVar28 + 0x19;
    }
  }
  if ((uVar30 & 4) != 0) {
    if (((bVar31 != false) && (param_2[3] != 0)) &&
       (FUN_100271810(param_2[3],puVar28,0,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc),
                      ((ulong)uVar29 * (ulong)uVar22 * 1000) / (ulong)uVar15,100),
       *(int *)(param_2[3] + 0x324) != 0)) {
      *(undefined1 *)(param_2 + 6) = 1;
    }
    puVar28 = puVar28 + 0x19;
  }
  uVar17 = (ulong)(uVar30 >> 1 & 4);
  pcVar26 = (char *)(uVar17 + (long)puVar28);
  FUN_1001c631b(pcVar26,puVar1,0x14);
  cVar13 = *(char *)((long)puVar28 + uVar17);
  bVar14 = bVar31;
  if (cVar13 == 'A') {
    if (pcVar26[1] == 'p') {
      if ((pcVar26[2] != 'p') || (pcVar26[3] != 'l')) goto LAB_100271680;
      bVar32 = pcVar26[4] == 'e';
    }
    else {
      bVar32 = false;
    }
LAB_100271682:
    if (((pcVar26[4] != 'L') || (pcVar26[5] != 'A')) || ((pcVar26[6] != 'M' || (pcVar26[7] != 'E')))
       ) {
      if (!bVar32) {
        *(undefined1 *)puVar1 = 0;
      }
      goto LAB_1002716b4;
    }
    pcVar26 = pcVar26 + 4;
    FUN_1001c631b(pcVar26,puVar1,0x14);
  }
  else {
    if (cVar13 == 'i') {
      if (((pcVar26[1] != 'T') || (pcVar26[2] != 'u')) ||
         ((pcVar26[3] != 'n' || ((pcVar26[4] != 'e' || (bVar32 = true, pcVar26[5] != 's'))))))
      goto LAB_100271680;
      goto LAB_100271682;
    }
    if ((cVar13 != 'L') || (((pcVar26[1] != 'A' || (pcVar26[2] != 'M')) || (pcVar26[3] != 'E')))) {
LAB_100271680:
      bVar32 = false;
      goto LAB_100271682;
    }
  }
  lVar27 = 0x32;
  do {
    if ((lVar27 == 0x45) || (*(char *)((long)param_2 + lVar27) < ' ')) {
      *(undefined1 *)((long)param_2 + lVar27) = 0;
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 != 0x46);
  bVar2 = pcVar26[0x15];
  uVar16 = (uint)((byte)pcVar26[0x16] >> 4) | (uint)bVar2 << 4;
  *(uint *)(param_2 + 4) = uVar16;
  uVar22 = (uint)(byte)pcVar26[0x17] | ((byte)pcVar26[0x16] & 0xf) << 8;
  *(uint *)((long)param_2 + 0x24) = uVar22;
  if (((bVar2 < 0x7d) && (uVar22 < 4000)) && ((int)param_2[2] != 0)) {
    iVar24 = *(int *)(*param_2 + 0x20);
    iVar20 = (int)param_2[2] * iVar24;
    uVar15 = (iVar20 - uVar22) - uVar16;
    param_2[5] = (ulong)uVar15;
    if (0x6f74ae < (uVar15 * 0x8b51d9b >> 2 | uVar15 * -0x40000000)) {
      iVar24 = iVar24 + uVar22;
      *(int *)((long)param_2 + 0x24) = iVar24;
      param_2[5] = (ulong)(iVar20 - (iVar24 + uVar16));
    }
  }
  else {
    param_2[4] = 0;
  }
LAB_1002717e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar14;
}

