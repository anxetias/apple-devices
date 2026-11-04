// name: FUN_1005da1cc
// address: 1005da1cc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1005da1cc(long param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  byte bVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_2);
  if (*(uint **)(param_1 + 8) == (uint *)0x0) {
LAB_1005da255:
    if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
      uVar6 = **(uint **)(param_1 + 0x10);
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      puVar8 = (uint *)FUN_1001c63e1((long)(int)uVar6);
      *(uint **)(param_2 + 0x10) = puVar8;
      if (puVar8 == (uint *)0x0) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_3a = "native->timeToSampleNumAtom != nullptr";
          goto LAB_1005da76b;
        }
        goto LAB_1005da790;
      }
      *puVar8 = uVar6;
      puVar8[1] = 0x73747473;
      lVar7 = *(long *)(param_1 + 0x10);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = *(ulong *)(lVar7 + 8);
      auVar14 = pshufb(auVar15,_DAT_100718a70);
      *(long *)(puVar8 + 2) = auVar14._0_8_;
      if (0 < (int)auVar14._4_4_) {
        uVar11 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = DAT_10070e4b0;
        do {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulong *)(lVar7 + 0x10 + uVar11 * 8);
          auVar13 = pshufb(auVar21,auVar16);
          *(long *)(puVar8 + uVar11 * 2 + 4) = auVar13._0_8_;
          uVar11 = uVar11 + 1;
        } while (auVar14._4_4_ != uVar11);
      }
    }
    if (*(uint **)(param_1 + 0x18) != (uint *)0x0) {
      uVar6 = **(uint **)(param_1 + 0x18);
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      puVar8 = (uint *)FUN_1001c63e1((long)(int)uVar6);
      *(uint **)(param_2 + 0x18) = puVar8;
      if (puVar8 == (uint *)0x0) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_3a = "native->sampleToChunkAtom != nullptr";
          goto LAB_1005da76b;
        }
        goto LAB_1005da790;
      }
      *puVar8 = uVar6;
      puVar8[1] = 0x73747363;
      lVar7 = *(long *)(param_1 + 0x18);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = *(ulong *)(lVar7 + 8);
      auVar14 = pshufb(auVar17,_DAT_100718a70);
      *(long *)(puVar8 + 2) = auVar14._0_8_;
      if (0 < (int)auVar14._4_4_) {
        lVar12 = 0;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = DAT_10070e4b0;
        do {
          auVar22._8_8_ = 0;
          auVar22._0_8_ = *(ulong *)(lVar7 + 0x10 + lVar12);
          auVar13 = pshufb(auVar22,auVar18);
          *(long *)((long)puVar8 + lVar12 + 0x10) = auVar13._0_8_;
          uVar6 = *(uint *)(lVar7 + 0x18 + lVar12);
          *(uint *)((long)puVar8 + lVar12 + 0x18) =
               uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
          lVar12 = lVar12 + 0xc;
        } while ((ulong)auVar14._4_4_ * 0xc != lVar12);
      }
    }
    if (*(uint **)(param_1 + 0x20) == (uint *)0x0) goto LAB_1005da57f;
    uVar6 = **(uint **)(param_1 + 0x20);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    puVar8 = (uint *)FUN_1001c63e1((long)(int)uVar6);
    *(uint **)(param_2 + 0x20) = puVar8;
    if (puVar8 == (uint *)0x0) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_3a = "native->sampleSizeAtom != nullptr";
        goto LAB_1005da76b;
      }
      goto LAB_1005da790;
    }
    *puVar8 = uVar6;
    lVar7 = *(long *)(param_1 + 0x20);
    auVar14 = pshufb(*(undefined1 (*) [16])(lVar7 + 4),_DAT_100718a70);
    *(undefined1 (*) [16])(puVar8 + 1) = auVar14;
    if (uVar6 < 0x18) {
LAB_1005da57f:
      if (*(uint **)(param_1 + 0x28) != (uint *)0x0) {
        uVar6 = **(uint **)(param_1 + 0x28);
        uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        puVar8 = (uint *)FUN_1001c63e1((long)(int)uVar6);
        *(uint **)(param_2 + 0x28) = puVar8;
        if (puVar8 == (uint *)0x0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 == '\0') goto LAB_1005da790;
          local_3a = "native->chunkOffsetAtom != nullptr";
          goto LAB_1005da76b;
        }
        *puVar8 = uVar6;
        puVar8[1] = 0x7374636f;
        lVar7 = *(long *)(param_1 + 0x28);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = *(ulong *)(lVar7 + 8);
        auVar14 = pshufb(auVar19,_DAT_100718a70);
        *(long *)(puVar8 + 2) = auVar14._0_8_;
        if (0 < (int)auVar14._4_4_) {
          uVar11 = 0;
          do {
            uVar6 = *(uint *)(lVar7 + 0x10 + uVar11 * 4);
            puVar8[uVar11 + 4] =
                 uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
            uVar11 = uVar11 + 1;
          } while (auVar14._4_4_ != uVar11);
        }
      }
      uVar9 = 0;
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) goto LAB_1005da7b4;
      uVar6 = **(uint **)(param_1 + 0x30);
      uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
      puVar8 = (uint *)FUN_1001c63e1((long)(int)uVar6);
      *(uint **)(param_2 + 0x30) = puVar8;
      if (puVar8 != (uint *)0x0) {
        *puVar8 = uVar6;
        puVar8[1] = 0x636f3634;
        lVar7 = *(long *)(param_1 + 0x30);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulong *)(lVar7 + 8);
        auVar14 = pshufb(auVar20,_DAT_100718a70);
        *(long *)(puVar8 + 2) = auVar14._0_8_;
        if (0 < (int)auVar14._4_4_) {
          uVar9 = 0;
          uVar11 = 0;
          do {
            uVar4 = *(ulong *)(lVar7 + 0x10 + uVar11 * 8);
            *(ulong *)(puVar8 + uVar11 * 2 + 4) =
                 uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                 (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                 (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                 uVar4 << 0x38;
            uVar11 = uVar11 + 1;
          } while (auVar14._4_4_ != uVar11);
        }
        goto LAB_1005da7b4;
      }
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 == '\0') goto LAB_1005da790;
      local_3a = "native->chunkOffset64Atom != nullptr";
    }
    else {
      uVar6 = auVar14._12_4_;
      if (auVar14._0_4_ == 0x73747a32) {
        if ((0x10 < auVar14._8_4_) || ((0x10110U >> (auVar14._8_4_ & 0x1f) & 1) == 0)) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_3a = 
            "(native->sampleSizeAtom->sampleSize == 4) || (native->sampleSizeAtom->sampleSize == 8) || (native->sampleSizeAtom->sampleSize == 16)"
            ;
            goto LAB_1005da76b;
          }
          goto LAB_1005da790;
        }
        if (0 < (int)uVar6) {
          uVar11 = 0;
          do {
            lVar7 = *(long *)(param_1 + 0x20);
            if (puVar8[3] == 8) {
              *(undefined1 *)((long)puVar8 + uVar11 + 0x14) = *(undefined1 *)(lVar7 + 0x14 + uVar11)
              ;
            }
            else if (puVar8[3] == 4) {
              bVar1 = *(byte *)(lVar7 + 0x14 + (uVar11 >> 1 & 0x7fffffff));
              bVar10 = bVar1 & 0xf;
              if ((uVar11 & 1) == 0) {
                bVar10 = bVar1 >> 4;
              }
              *(byte *)((long)puVar8 + uVar11 + 0x14) = bVar10;
            }
            else {
              uVar2 = *(ushort *)(lVar7 + 0x14 + uVar11 * 2);
              *(ushort *)((long)puVar8 + uVar11 * 2 + 0x14) = uVar2 << 8 | uVar2 >> 8;
            }
            uVar11 = uVar11 + 1;
            puVar8 = *(uint **)(param_2 + 0x20);
          } while ((long)uVar11 < (long)(int)puVar8[4]);
        }
        goto LAB_1005da57f;
      }
      if (auVar14._0_4_ == 0x7374737a) {
        if (0 < (int)uVar6) {
          uVar11 = 0;
          do {
            uVar3 = *(uint *)(lVar7 + 0x14 + uVar11 * 4);
            puVar8[uVar11 + 5] =
                 uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
            uVar11 = uVar11 + 1;
          } while (uVar6 != uVar11);
        }
        goto LAB_1005da57f;
      }
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 == '\0') goto LAB_1005da790;
      local_3a = 
      "(native->sampleSizeAtom->atomType == STSampleSizeAID) || (native->sampleSizeAtom->atomType == STSampleSize2AID)"
      ;
    }
LAB_1005da76b:
    local_3c = 0x822;
    local_44 = "Assertion failure";
    local_48 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  else {
    uVar6 = **(uint **)(param_1 + 8);
    uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    lVar7 = FUN_1001c63e1((long)(int)uVar6);
    *(long *)(param_2 + 8) = lVar7;
    if (lVar7 != 0) {
      FUN_1001c631b(*(undefined8 *)(param_1 + 8),lVar7,(long)(int)uVar6);
      puVar8 = *(uint **)(param_2 + 8);
      *puVar8 = uVar6;
      puVar8[1] = 0x73747364;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = *(ulong *)(*(long *)(param_1 + 8) + 8);
      auVar14._8_8_ = _UNK_10070e4b8;
      auVar14._0_8_ = DAT_10070e4b0;
      auVar14 = pshufb(auVar13,auVar14);
      *(long *)(puVar8 + 2) = auVar14._0_8_;
      goto LAB_1005da255;
    }
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_3a = "native->sampleDescriptionAtom != nullptr";
      goto LAB_1005da76b;
    }
  }
LAB_1005da790:
  FUN_1001782e9(0,0);
  FUN_1005da7d9(param_2);
  FUN_1001c62d9(param_2,0x48);
  uVar9 = 0xffffff94;
LAB_1005da7b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

