// name: FUN_10063bcac
// address: 10063bcac

undefined8 FUN_10063bcac(long param_1,void *param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  char cVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  ushort uVar30;
  ushort uVar31;
  byte bVar32;
  ushort uVar33;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x8a2) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  FUN_1001c62d9(param_1 + 0x420,0x20);
  _memcpy((void *)(param_1 + 0x298),param_2,0x178);
  if (*(char *)(param_1 + 0x898) == '\x01') {
    lVar11 = *(long *)(param_1 + 0x344);
    if (lVar11 == 0) {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "dbTrackInfo.albumInfoPersistentID != 0";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar11 = *(long *)(param_1 + 0x344);
    }
    lVar11 = FUN_1003a34b8(param_1 + 0x7f0,lVar11);
    if (lVar11 == 0) {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "newTrackParams.albumInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(char *)(param_1 + 0x899) == '\x01') {
    lVar11 = *(long *)(param_1 + 0x34c);
    if (lVar11 == 0) {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "dbTrackInfo.artistInfoPersistentID";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      lVar11 = *(long *)(param_1 + 0x34c);
    }
    lVar11 = FUN_1004cff34(param_1 + 0x818,lVar11);
    if (lVar11 == 0) {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "newTrackParams.artistInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  lVar11 = *(long *)(param_1 + 0x2a8);
  lVar12 = lVar11;
  if (lVar11 == 0) {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "dbTrackInfo.persistentID != 0";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    lVar12 = *(long *)(param_1 + 0x2a8);
  }
  lVar1 = param_1 + 0x778;
  lVar12 = FUN_100306c68(lVar1,lVar12);
  if (lVar12 == 0) {
    if ((*(uint *)(param_1 + 0x18) & 8) == 0) {
      if ((*(uint *)(param_1 + 0x18) & 0x10) != 0) {
        lVar12 = FUN_100300729(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2a8));
        if (lVar12 != 0) {
          *(undefined1 *)(param_1 + 0x8a2) = 1;
        }
      }
      goto LAB_10063be87;
    }
    lVar12 = FUN_100300729(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x2a8));
    if (lVar12 == 0) goto LAB_10063be87;
    uVar10 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
  }
  else {
    uVar10 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 0x2a8) = uVar10;
LAB_10063be87:
  plVar13 = (long *)FUN_100472d20(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x308));
  if (plVar13 == (long *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar10 = 0xffffff94;
  }
  else {
    *(undefined2 *)((long)plVar13 + 0x136) = *(undefined2 *)(param_1 + 0x338);
    *(undefined2 *)(plVar13 + 0x27) = *(undefined2 *)(param_1 + 0x30c);
    *(undefined2 *)((long)plVar13 + 0x13a) = *(undefined2 *)(param_1 + 0x2ec);
    *(undefined2 *)((long)plVar13 + 0x13c) = *(undefined2 *)(param_1 + 0x2f2);
    *(undefined2 *)((long)plVar13 + 0x142) = *(undefined2 *)(param_1 + 0x340);
    *(undefined1 *)((long)plVar13 + 300) = *(undefined1 *)(param_1 + 0x2d9);
    uVar8 = (*(byte *)(param_1 + 0x2be) & 1) << 10;
    uVar3 = *(uint *)((long)plVar13 + 0xc2);
    *(uint *)((long)plVar13 + 0xc2) = uVar3 & 0xfffffbff | uVar8;
    uVar9 = (*(byte *)(param_1 + 0x2c7) & 1) << 4;
    *(uint *)((long)plVar13 + 0xc2) = uVar3 & 0xfffffbef | uVar8 | uVar9;
    *(undefined2 *)((long)plVar13 + 0x12a) = *(undefined2 *)(param_1 + 0x2f4);
    *(undefined4 *)((long)plVar13 + 0x124) = *(undefined4 *)(param_1 + 0x334);
    uVar3 = (uVar3 & 0xfffffbeb | uVar8 | uVar9) + (*(byte *)(param_1 + 0x2c2) & 1) * 4;
    *(uint *)((long)plVar13 + 0xc2) = uVar3;
    *(undefined2 *)((long)plVar13 + 0x15c) = *(undefined2 *)(param_1 + 0x2ea);
    *(undefined1 *)(plVar13 + 0x17) = *(undefined1 *)(param_1 + 0x2d3);
    uVar21 = (*(byte *)(param_1 + 0x2c8) & 1) << 0x13;
    *(uint *)((long)plVar13 + 0xc2) = uVar3 & 0xfff7ffff | uVar21;
    uVar22 = (*(byte *)(param_1 + 0x2b5) & 1) << 0x17;
    *(uint *)((long)plVar13 + 0xc2) = uVar3 & 0xff77ffff | uVar21 | uVar22;
    uVar23 = (*(byte *)(param_1 + 0x2b6) & 1) << 0xf;
    *(uint *)((long)plVar13 + 0xc2) = uVar3 & 0xff777fff | uVar21 | uVar22 | uVar23;
    uVar24 = (*(byte *)(param_1 + 0x2ca) & 1) << 0x10;
    *(uint *)((long)plVar13 + 0xc2) = uVar3 & 0xff767fff | uVar21 | uVar22 | uVar23 | uVar24;
    uVar25 = (*(byte *)(param_1 + 0x2c1) & 1) << 0x16;
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0xff367fff | uVar21 | uVar22 | uVar23 | uVar24 | uVar25;
    uVar26 = (*(byte *)(param_1 + 0x2b8) & 1) << 0x12;
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0xff327fff | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26;
    *(undefined2 *)(plVar13 + 0x25) = *(undefined2 *)(param_1 + 0x310);
    uVar27 = (uint)(byte)(*(char *)(param_1 + 0x2c3) << 7);
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0xff327f7f | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27;
    uVar28 = (*(byte *)(param_1 + 0x2b7) & 1) << 0x1d;
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0xdf327f7f | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28;
    uVar2 = *(ushort *)((long)plVar13 + 0xc6);
    bVar32 = *(char *)(param_1 + 0x2bf) << 7;
    uVar33 = (ushort)bVar32;
    *(ushort *)((long)plVar13 + 0xc6) = uVar2 & 0xff7f | (ushort)bVar32;
    uVar30 = (*(byte *)(param_1 + 700) & 1) << 9;
    *(ushort *)((long)plVar13 + 0xc6) = uVar2 & 0xfd7f | uVar33 | uVar30;
    uVar31 = (*(byte *)(param_1 + 0x2bd) & 1) << 10;
    *(ushort *)((long)plVar13 + 0xc6) = uVar2 & 0xf97f | uVar33 | uVar30 | uVar31;
    *(undefined1 *)((long)plVar13 + 0x134) = *(undefined1 *)(param_1 + 0x2d6);
    *(undefined4 *)(plVar13 + 0x26) = *(undefined4 *)(param_1 + 1000);
    uVar20 = (*(byte *)(param_1 + 0x2cb) & 1) << 0xb;
    *(ushort *)((long)plVar13 + 0xc6) = uVar2 & 0xf17f | uVar33 | uVar30 | uVar31 | uVar20;
    uVar9 = (*(byte *)(param_1 + 0x2c9) & 1) << 0x11;
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0xdf307f7f | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28
         | uVar9;
    *(ushort *)((long)plVar13 + 0xc6) =
         uVar2 & 0xf15f | uVar33 | uVar30 | uVar31 | uVar20 | (*(byte *)(param_1 + 0x2ba) & 1) << 5;
    plVar13[0x2f] = *(long *)(param_1 + 0x37c);
    uVar8 = *(uint *)(param_1 + 0x304);
    *(uint *)((long)plVar13 + 0xd4) = uVar8;
    plVar13[0x34] = *(long *)(param_1 + 0x3a8);
    uVar29 = (*(byte *)(param_1 + 0x395) & 1) << 0x1a;
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0xdb307f7f | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28
         | uVar9 | uVar29;
    *(uint *)((long)plVar13 + 0xc2) =
         uVar3 & 0x9b307f7f | uVar21 | uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28
         | uVar9 | uVar29 | (*(byte *)(param_1 + 0x3e4) & 1) << 0x1e;
    if ((*(char *)(param_1 + 0x394) != '\0') &&
       (*(uint *)((long)plVar13 + 0xd4) = uVar8 | 4,
       (uVar8 & 0xc62) == 0 && *(char *)(param_1 + 0x2b8) != '\0')) {
      *(uint *)((long)plVar13 + 0xd4) = uVar8 | 6;
    }
    FUN_100472a20(plVar13,*(undefined8 *)(param_1 + 0x36c),*(undefined8 *)(param_1 + 0x374));
    if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x3b4);
      uVar5 = *(undefined4 *)(param_1 + 0x3b8);
      uVar6 = *(undefined4 *)(param_1 + 0x3bc);
      *(undefined4 *)(plVar13 + 0x21) = *(undefined4 *)(param_1 + 0x3b0);
      *(undefined4 *)((long)plVar13 + 0x10c) = uVar4;
      *(undefined4 *)(plVar13 + 0x22) = uVar5;
      *(undefined4 *)((long)plVar13 + 0x114) = uVar6;
      plVar13[0x23] = *(long *)(param_1 + 0x3c0);
      *(undefined4 *)(plVar13 + 0x24) = *(undefined4 *)(param_1 + 0x3c8);
    }
    plVar13[0x32] = *(long *)(param_1 + 0x364);
    *(undefined4 *)(plVar13 + 0x33) = *(undefined4 *)(param_1 + 0x300);
    *(ushort *)(plVar13 + 0x28) = (ushort)*(byte *)(param_1 + 0x3e3);
    *(undefined1 *)(plVar13 + 0x19) = *(undefined1 *)(param_1 + 0x2d8);
    *(undefined1 *)((long)plVar13 + 0x92) = *(undefined1 *)(param_1 + 0x2d2);
    bVar32 = *(byte *)(plVar13 + 0x12);
    bVar14 = (*(byte *)(param_1 + 0x2b9) & 1) << 4;
    *(byte *)(plVar13 + 0x12) = bVar32 & 0xef | bVar14;
    bVar15 = *(byte *)(param_1 + 0x2c6) & 1;
    *(byte *)(plVar13 + 0x12) = bVar32 & 0xee | bVar14 | bVar15;
    bVar16 = *(char *)(param_1 + 0x2b4) * '\x02' & 2;
    *(byte *)(plVar13 + 0x12) = bVar32 & 0xec | bVar14 | bVar15 | bVar16;
    bVar17 = (*(byte *)(param_1 + 0x2c4) & 1) << 2;
    *(byte *)(plVar13 + 0x12) = bVar32 & 0xe8 | bVar14 | bVar15 | bVar16 | bVar17;
    bVar18 = (*(byte *)(param_1 + 0x3e5) & 1) << 3;
    *(byte *)(plVar13 + 0x12) = bVar32 & 0xe0 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18;
    *(undefined4 *)((long)plVar13 + 0x94) = *(undefined4 *)(param_1 + 0x2f8);
    *(undefined1 *)((long)plVar13 + 0x91) = *(undefined1 *)(param_1 + 0x2d1);
    *(byte *)(plVar13 + 0x12) =
         bVar32 & 0x60 | bVar14 | bVar15 | bVar16 | bVar17 | bVar18 |
         *(char *)(param_1 + 0x397) << 7;
    FUN_100475f85(plVar13,*(undefined8 *)(param_1 + 900),*(undefined8 *)(param_1 + 0x3d8),
                  *(undefined8 *)(param_1 + 0x38c),*(undefined1 *)(param_1 + 0x396));
    if (*(char *)(param_1 + 0x2cf) != '\0') {
      FUN_100473a90(plVar13);
      *(undefined8 *)(plVar13[0x10] + 4) = *(undefined8 *)(param_1 + 0x32c);
    }
    if (*(char *)(param_1 + 0x2cd) != '\0') {
      if (*(int *)(param_1 + 0x33c) != 0) {
        FUN_100471a46(plVar13);
        *(undefined4 *)(plVar13[0xe] + 0xc) = *(undefined4 *)(param_1 + 0x33c);
      }
      if (*(short *)(param_1 + 0x2f0) != 0) {
        FUN_100471a46(plVar13);
        *(undefined2 *)(plVar13[0xe] + 0x10) = *(undefined2 *)(param_1 + 0x2f0);
      }
      if (*(short *)(param_1 + 0x2ee) != 0) {
        FUN_100471a46(plVar13);
        *(undefined2 *)(plVar13[0xe] + 0x12) = *(undefined2 *)(param_1 + 0x2ee);
      }
      if (*(char *)(param_1 + 0x2cc) != '\0') {
        FUN_100471a46(plVar13);
        *(byte *)plVar13[0xe] = *(byte *)plVar13[0xe] & 0xfb | (*(byte *)(param_1 + 0x2cc) & 1) << 2
        ;
      }
    }
    if (*(char *)(param_1 + 0x2ce) != '\0') {
      if (*(int *)(param_1 + 0x2fc) != 0) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 4) = *(undefined4 *)(param_1 + 0x2fc);
      }
      if (*(int *)(param_1 + 0x328) != 0) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 0xc) = *(undefined4 *)(param_1 + 0x328);
      }
      if (*(char *)(param_1 + 0x2d7) != '\0') {
        FUN_100471fde(plVar13);
        *(undefined1 *)(plVar13[0xf] + 0x20) = *(undefined1 *)(param_1 + 0x2d7);
      }
      if (*(char *)(param_1 + 0x2d5) != '\0') {
        FUN_100471fde(plVar13);
        *(undefined1 *)(plVar13[0xf] + 0x21) = *(undefined1 *)(param_1 + 0x2d5);
      }
      if (*(char *)(param_1 + 0x2d4) != '\0') {
        FUN_100471fde(plVar13);
        *(undefined1 *)(plVar13[0xf] + 0x22) = *(undefined1 *)(param_1 + 0x2d4);
      }
      if (*(int *)(param_1 + 0x324) != 0) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 0x10) = *(undefined4 *)(param_1 + 0x324);
      }
      if (*(int *)(param_1 + 0x318) != 0) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 0x14) = *(undefined4 *)(param_1 + 0x318);
      }
      if (*(int *)(param_1 + 800) != 0) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 0x18) = *(undefined4 *)(param_1 + 800);
      }
      if (*(int *)(param_1 + 0x31c) != 0) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 0x1c) = *(undefined4 *)(param_1 + 0x31c);
      }
      if ((*(float *)(param_1 + 0x3ec) != 0.0) || (NAN(*(float *)(param_1 + 0x3ec)))) {
        FUN_100471fde(plVar13);
        *(undefined4 *)(plVar13[0xf] + 8) = *(undefined4 *)(param_1 + 0x3ec);
      }
      if (*(char *)(param_1 + 0x3e1) != '\0') {
        FUN_100471fde(plVar13);
        *(ushort *)(plVar13[0xf] + 0x38) = (ushort)*(byte *)(param_1 + 0x3e1);
      }
      if (*(char *)(param_1 + 0x3e2) != '\0') {
        FUN_100471fde(plVar13);
        *(ushort *)(plVar13[0xf] + 0x3a) = (ushort)*(byte *)(param_1 + 0x3e2);
      }
    }
    if ((*(uint *)((long)plVar13 + 0xc2) >> 0x19 & 1) != 0) {
      *(uint *)((long)plVar13 + 0xc2) = *(uint *)((long)plVar13 + 0xc2) & 0xff7ffffd;
    }
    lVar12 = -6;
    do {
      cVar7 = *(char *)(param_1 + 0x2e0 + lVar12);
      if (cVar7 == '\0') {
        *(undefined1 *)(param_1 + 0x89b) = 1;
      }
      else {
        *(char *)((long)plVar13 + lVar12 + 0xc0) = cVar7;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0);
    FUN_1001f1970(&local_58,*(undefined8 *)(param_1 + 0x398),*(undefined8 *)(param_1 + 0x3a0));
    FUN_1001aaadc(plVar13 + 0x2c,&local_58);
    FUN_1001ab006(&local_58);
    plVar13[0x2d] = *(long *)(param_1 + 0x3d0);
    *(undefined4 *)(plVar13 + 0x2e) = *(undefined4 *)(param_1 + 0x3cc);
    cVar7 = *(char *)(param_1 + 0x3e0);
    cVar19 = '\x01';
    if (cVar7 != '\x02') {
      cVar19 = cVar7;
    }
    if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
      cVar19 = cVar7;
    }
    *(char *)((long)plVar13 + 0x13e) = cVar19;
    FUN_100401874(lVar1,*plVar13,plVar13);
    uVar10 = 0;
    if (lVar11 != 0 && lVar11 != *plVar13) {
      FUN_100401874(lVar1,lVar11,plVar13);
    }
  }
  *(long **)(param_1 + 0x410) = plVar13;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

