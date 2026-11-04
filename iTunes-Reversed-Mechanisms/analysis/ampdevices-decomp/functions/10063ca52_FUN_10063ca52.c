// name: FUN_10063ca52
// address: 10063ca52

undefined8 FUN_10063ca52(long param_1,long param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  byte *pbVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_1 + 0x418) = 0;
  uVar7 = *(int *)(param_2 + 4) - 1;
  if (uVar7 < 3) {
    uVar3 = *(undefined4 *)(&DAT_10075fe5c + (ulong)uVar7 * 4);
    lVar9 = *(long *)(param_2 + 8);
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else if ((*(uint *)(param_1 + 0x18) & 8) == 0) {
      if (((*(uint *)(param_1 + 0x18) & 0x10) != 0) &&
         (lVar8 = FUN_1002b390d(*(undefined8 *)(param_1 + 8),lVar9), lVar8 != 0)) {
        if ((*(char *)(param_1 + 0x8a2) == '\x01') &&
           (*(long *)(lVar8 + 8) == *(long *)(param_1 + 0x410))) goto LAB_10063d05e;
LAB_10063caf9:
        lVar9 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
      }
    }
    else {
      lVar8 = FUN_1002b390d(*(undefined8 *)(param_1 + 8),lVar9);
      if (lVar8 != 0) goto LAB_10063caf9;
    }
    lVar9 = FUN_1002ae502(*(undefined8 *)(param_1 + 0x410),uVar3,
                          *(int *)(param_2 + 0x5c) + (uint)(*(int *)(param_2 + 0x5c) == 0),lVar9);
    if (lVar9 == 0) {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "trackInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar10 = 0xffffff94;
      goto LAB_10063d060;
    }
    uVar6 = FUN_100383084(*(undefined2 *)(param_2 + 0x4e));
    *(undefined2 *)(lVar9 + 0x58) = uVar6;
    *(undefined4 *)(lVar9 + 0x5c) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(lVar9 + 100) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined2 *)(lVar9 + 0x54) = *(undefined2 *)(param_2 + 0x58);
    *(undefined4 *)(lVar9 + 0x50) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined2 *)(lVar9 + 0x56) = *(undefined2 *)(param_2 + 0x52);
    *(undefined2 *)(lVar9 + 0x74) = *(undefined2 *)(param_2 + 0x4c);
    *(undefined2 *)(lVar9 + 0x76) = *(undefined2 *)(param_2 + 0x50);
    *(undefined4 *)(lVar9 + 0x78) = *(undefined4 *)(param_2 + 0x54);
    uVar7 = *(uint *)(lVar9 + 0x48);
    uVar13 = (uint)(byte)(*(char *)(param_2 + 0x16) << 7);
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xffffff7f | uVar13;
    uVar11 = (*(byte *)(param_2 + 0x15) & 1) << 10;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xfffffb7f | uVar13 | uVar11;
    *(undefined1 *)(lVar9 + 0x47) = *(undefined1 *)(param_2 + 0x30);
    *(undefined8 *)(lVar9 + 200) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined8 *)(lVar9 + 0xe4) = *(undefined8 *)(param_2 + 0x6c);
    *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)(param_2 + 0x100);
    *(undefined8 *)(lVar9 + 0xd8) = *(undefined8 *)(param_2 + 0x110);
    *(undefined4 *)(lVar9 + 0xe0) = *(undefined4 *)(param_2 + 0x78);
    *(undefined2 *)(lVar9 + 0x5a) = *(undefined2 *)(param_2 + 0x84);
    *(undefined4 *)(lVar9 + 0x70) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)(lVar9 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    uVar12 = (*(byte *)(param_2 + 0x34) & 1) << 0x12;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xfffbfb7f | uVar13 | uVar11 | uVar12;
    uVar7 = (uVar7 & 0xfffbfb7d | uVar13 | uVar11 | uVar12) + (*(byte *)(param_2 + 0x13) & 1) * 2;
    *(uint *)(lVar9 + 0x48) = uVar7;
    *(undefined8 *)(lVar9 + 0x68) = *(undefined8 *)(param_2 + 0x128);
    uVar7 = (uVar7 & 0xfffffff7) + (*(byte *)(param_2 + 0x17) & 1) * 8;
    *(uint *)(lVar9 + 0x48) = uVar7;
    *(undefined1 *)(lVar9 + 0x46) = *(undefined1 *)(param_2 + 0x36);
    *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    uVar13 = (*(byte *)(param_2 + 0x28) & 1) << 0xb;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xfffff7ff | uVar13;
    uVar11 = (*(byte *)(param_2 + 0x1b) & 1) << 0xc;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xffffe7ff | uVar13 | uVar11;
    *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)(param_2 + 0x98);
    uVar12 = (*(byte *)(param_2 + 0x22) & 1) << 0x13;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xfff7e7ff | uVar13 | uVar11 | uVar12;
    uVar14 = (*(byte *)(param_2 + 0x1d) & 1) << 0x14;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xffe7e7ff | uVar13 | uVar11 | uVar12 | uVar14;
    uVar15 = (*(byte *)(param_2 + 0x151) & 1) << 0x15;
    *(uint *)(lVar9 + 0x48) = uVar7 & 0xffc7e7ff | uVar13 | uVar11 | uVar12 | uVar14 | uVar15;
    *(uint *)(lVar9 + 0x48) =
         uVar7 & 0xff47e7ff | uVar13 | uVar11 | uVar12 | uVar14 | uVar15 |
         (*(byte *)(param_2 + 0x152) & 1) << 0x17;
    *(ushort *)(lVar9 + 0xec) = (ushort)*(byte *)(param_2 + 0x150);
    if (*(char *)(param_2 + 0x2c) != '\0') {
      puVar1 = (uint *)(*(long *)(lVar9 + 8) + 0xc2);
      *puVar1 = *puVar1 | 0x2000;
    }
    if (*(char *)(param_2 + 0x2d) != '\0') {
      FUN_1002af0ff(lVar9);
      **(byte **)(lVar9 + 0x10) = **(byte **)(lVar9 + 0x10) & 0x7f | *(char *)(param_2 + 0x1f) << 7;
      pbVar4 = *(byte **)(lVar9 + 0x10);
      *(undefined4 *)(pbVar4 + 0x90) = *(undefined4 *)(param_2 + 0x74);
      *(undefined8 *)(pbVar4 + 0x48) = *(undefined8 *)(param_2 + 0xa8);
      *(undefined8 *)(pbVar4 + 0x58) = *(undefined8 *)(param_2 + 0xa0);
      *(undefined8 *)(pbVar4 + 0x40) = *(undefined8 *)(param_2 + 0x108);
      *(undefined8 *)(pbVar4 + 0x50) = *(undefined8 *)(param_2 + 0xd0);
      *(undefined8 *)(pbVar4 + 0x60) = *(undefined8 *)(param_2 + 0x138);
      *(undefined8 *)(pbVar4 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      *(undefined8 *)(pbVar4 + 0x20) = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(pbVar4 + 8) = *(undefined8 *)(param_2 + 0xf8);
      uVar10 = *(undefined8 *)(param_2 + 0xf0);
      *(undefined8 *)(pbVar4 + 0x10) = *(undefined8 *)(param_2 + 0xe8);
      *(undefined8 *)(pbVar4 + 0x18) = uVar10;
      *(undefined4 *)(pbVar4 + 0x84) = *(undefined4 *)(param_2 + 0x68);
      *(undefined4 *)(pbVar4 + 4) = *(undefined4 *)(param_2 + 100);
      uVar10 = *(undefined8 *)(param_2 + 0xe0);
      *(undefined8 *)(pbVar4 + 0x28) = *(undefined8 *)(param_2 + 0xd8);
      *(undefined8 *)(pbVar4 + 0x30) = uVar10;
      *pbVar4 = *pbVar4 & 0xfd | *(char *)(param_2 + 0x20) * '\x02' & 2U;
      **(byte **)(lVar9 + 0x10) =
           **(byte **)(lVar9 + 0x10) & 0xfb | (*(byte *)(param_2 + 0x21) & 1) << 2;
      **(byte **)(lVar9 + 0x10) =
           **(byte **)(lVar9 + 0x10) & 0xdf | (*(byte *)(param_2 + 0x24) & 1) << 5;
      FUN_1002b772e(lVar9,*(undefined8 *)(param_2 + 0x130));
    }
    if (*(char *)(param_2 + 0x2e) != '\0') {
      FUN_1002af503(lVar9);
      pbVar4 = *(byte **)(lVar9 + 0x18);
      *(ushort *)(pbVar4 + 2) = (ushort)*(byte *)(param_2 + 0x3a);
      *(ushort *)(pbVar4 + 4) = (ushort)*(byte *)(param_2 + 0x39);
      *pbVar4 = *pbVar4 & 0xef | (*(byte *)(param_2 + 0x19) & 1) << 4;
      **(byte **)(lVar9 + 0x18) =
           **(byte **)(lVar9 + 0x18) & 0xfd | *(char *)(param_2 + 0x18) * '\x02' & 2U;
      **(byte **)(lVar9 + 0x18) =
           **(byte **)(lVar9 + 0x18) & 0xfb | (*(byte *)(param_2 + 0x1a) & 1) << 2;
      **(byte **)(lVar9 + 0x18) =
           **(byte **)(lVar9 + 0x18) & 0xf7 | (*(byte *)(param_2 + 0x29) & 1) << 3;
      lVar8 = *(long *)(lVar9 + 0x18);
      *(undefined1 *)(lVar8 + 8) = *(undefined1 *)(param_2 + 0x2a);
      *(undefined1 *)(lVar8 + 10) = *(undefined1 *)(param_2 + 0x1e);
      *(undefined1 *)(lVar8 + 9) = *(undefined1 *)(param_2 + 0x2b);
    }
    if (*(char *)(param_2 + 0x2f) != '\0') {
      FUN_1002af688(lVar9);
      **(byte **)(lVar9 + 0x20) =
           **(byte **)(lVar9 + 0x20) & 0xfd | *(char *)(param_2 + 0x12) * '\x02' & 2U;
      **(byte **)(lVar9 + 0x20) =
           **(byte **)(lVar9 + 0x20) & 0xfb | (*(byte *)(param_2 + 0x1c) & 1) << 2;
      **(byte **)(lVar9 + 0x20) =
           **(byte **)(lVar9 + 0x20) & 0xf7 | (*(byte *)(param_2 + 0x27) & 1) << 3;
      lVar8 = *(long *)(lVar9 + 0x20);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_2 + 0x140);
      auVar2 = *(undefined1 (*) [16])(param_2 + 0x154);
      auVar16._0_8_ = auVar2._8_8_;
      auVar16._8_4_ = auVar2._0_4_;
      auVar16._12_4_ = auVar2._4_4_;
      *(undefined1 (*) [16])(lVar8 + 0x20) = auVar16;
      *(undefined1 *)(lVar8 + 0x18) = *(undefined1 *)(param_2 + 0x38);
      *(undefined1 *)(lVar8 + 0x19) = *(undefined1 *)(param_2 + 0x35);
      *(undefined1 *)(lVar8 + 0x1a) = *(undefined1 *)(param_2 + 0x33);
      *(undefined1 *)(lVar8 + 0x1b) = *(undefined1 *)(param_2 + 0x32);
      if (*(char *)(param_2 + 0x23) != '\0') {
        pbVar4 = (byte *)(*(long *)(param_1 + 0x410) + 0x90);
        *pbVar4 = *pbVar4 | 0x80;
      }
    }
    if (*(int *)(lVar9 + 0x3c) == 0x53485244) {
      *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(param_2 + 0xb8);
      *(undefined8 *)(lVar9 + 0x98) = *(undefined8 *)(param_2 + 0x120);
      *(uint *)(lVar9 + 0xa8) = (uint)*(byte *)(param_2 + 0x37);
      *(undefined4 *)(lVar9 + 0xb0) = *(undefined4 *)(param_2 + 0x94);
      *(undefined4 *)(lVar9 + 0xb4) = *(undefined4 *)(param_2 + 0x90);
      *(undefined1 *)(lVar9 + 0xac) = *(undefined1 *)(param_2 + 0x26);
      *(undefined1 *)(lVar9 + 0xad) = *(undefined1 *)(param_2 + 0x25);
      *(undefined1 *)(lVar9 + 0x44) = 1;
      if (*(char *)(param_2 + 0x14) != '\0') {
        *(undefined1 *)(lVar9 + 0x45) = 1;
      }
    }
    else if (*(int *)(lVar9 + 0x3c) == 0x46494c45) {
      *(undefined4 *)(lVar9 + 0xa4) = *(undefined4 *)(param_2 + 0x44);
      *(undefined2 *)(lVar9 + 0xa8) = *(undefined2 *)(param_2 + 0x48);
      *(undefined2 *)(lVar9 + 0xaa) = *(undefined2 *)(param_2 + 0x4a);
    }
    *(long *)(param_1 + 0x418) = lVar9;
  }
LAB_10063d05e:
  uVar10 = 0;
LAB_10063d060:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

