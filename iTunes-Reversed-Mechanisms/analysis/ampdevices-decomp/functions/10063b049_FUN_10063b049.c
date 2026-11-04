// name: FUN_10063b049
// address: 10063b049

undefined1 FUN_10063b049(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  char **ppcVar16;
  long local_ba0;
  ulong local_b98;
  long local_b90;
  undefined1 local_b88 [16];
  long local_b78;
  long local_b70;
  int *local_b68;
  long local_b60;
  undefined4 local_b58;
  char *local_b54;
  undefined2 local_b4c;
  undefined2 local_b4a;
  undefined6 uStack_b48;
  undefined2 uStack_b42;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_ba0 = 0;
  local_b68 = param_1;
  FUN_1001b7a44(&local_b58);
  local_b38 = 0;
  uStack_b30 = 0;
  uStack_b48 = 0;
  uStack_b42 = 0;
  uStack_b40 = 0;
  if (local_b68 == (int *)0x0) {
LAB_10063b113:
    uVar10 = FUN_1001cc310(local_b68);
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_1001b7a44(local_b88);
  }
  else {
    if (*local_b68 != 0x706c7374) {
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_10063b113;
    }
    iVar7 = FUN_100483f95(local_b68,0x706c4944,&local_b58);
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        FUN_1001b7a5c(local_b88,&local_b58);
        goto LAB_10063b170;
      }
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    FUN_1001b7a44(local_b88);
  }
LAB_10063b170:
  FUN_1001b7a50(&local_b58);
  cVar3 = FUN_1001b8428(local_b88);
  if (cVar3 == '\0') {
    cVar3 = FUN_100482222(local_b68,1);
    if (cVar3 == '\x02') {
      lVar11 = FUN_100279402();
    }
    else {
      if (cVar3 != '\x01') goto LAB_10063b1e6;
      lVar11 = FUN_10027934f();
    }
    if (lVar11 == 0) goto LAB_10063b1e6;
    uVar10 = FUN_1001b83ae(local_b88);
    iVar7 = FUN_1001ce12d(lVar11,0x50507234,0,uVar10,&local_ba0);
    lVar11 = local_ba0;
    if (iVar7 != 0) goto LAB_10063b1e6;
    FUN_1001b7a50(local_b88);
    if (lVar11 != 0) {
      uVar4 = FUN_100167c17(lVar11,&cf_viewMode);
      piVar2 = local_b68;
      *(undefined1 *)(local_b68 + 0xcd) = uVar4;
      uVar4 = FUN_100167c17(lVar11,&cf_browserViewMode);
      *(undefined1 *)((long)piVar2 + 0x441) = uVar4;
      uVar6 = FUN_100167c71(lVar11,&cf_windowHPos);
      *(undefined2 *)(piVar2 + 0xcf) = uVar6;
      uVar6 = FUN_100167c71(lVar11,&cf_windowVPos);
      *(undefined2 *)((long)piVar2 + 0x33e) = uVar6;
      uVar6 = FUN_100167cc9(lVar11,&cf_windowWidth);
      *(undefined2 *)(piVar2 + 0xd0) = uVar6;
      uVar6 = FUN_100167cc9(lVar11,&cf_windowHeight);
      *(undefined2 *)((long)piVar2 + 0x342) = uVar6;
      bVar5 = FUN_100167dd2(lVar11,&cf_maximized,0);
      piVar2[0xcc] = piVar2[0xcc] & 0xfffdffffU | (uint)(bVar5 & 1) << 0x11;
      bVar5 = FUN_100167dd2(lVar11,&cf_zoomed,0);
      piVar2[0xcc] = piVar2[0xcc] & 0xfffbffffU | (uint)(bVar5 & 1) << 0x12;
      bVar5 = FUN_100167dd2(lVar11,&cf_browseVisible,0);
      piVar2[0xcc] = piVar2[0xcc] & 0xffefffffU | (uint)(bVar5 & 1) << 0x14;
      uVar6 = FUN_100167cc9(lVar11,&cf_browseHeight);
      *(undefined2 *)(piVar2 + 0xd1) = uVar6;
      bVar5 = FUN_100167dd2(lVar11,&cf_showOnlyFavorites,0);
      piVar2[0x90] = piVar2[0x90] & 0xfeffffffU | (uint)(bVar5 & 1) << 0x18;
      uVar6 = FUN_100167cc9(lVar11,&cf_artworkSplitWidth);
      *(undefined2 *)((long)piVar2 + 0x346) = uVar6;
      uVar6 = FUN_100167cc9(lVar11,&cf_genreSplitWidth);
      *(undefined2 *)(piVar2 + 0xd2) = uVar6;
      uVar6 = FUN_100167cc9(lVar11,&cf_unwatchedSplitWidth);
      *(undefined2 *)((long)piVar2 + 0x34a) = uVar6;
      uVar6 = FUN_100167cc9(lVar11,&cf_composersSplitWidth);
      *(undefined2 *)(piVar2 + 0xd3) = uVar6;
      uVar4 = FUN_100167c17(lVar11,&cf_artworkSize);
      *(undefined1 *)(piVar2 + 0x110) = uVar4;
      bVar5 = FUN_100167dd2(lVar11,&cf_textArtworkVisible,0);
      piVar2[0xcc] = piVar2[0xcc] & 0xffdfffffU | (uint)(bVar5 & 1) << 0x15;
      bVar5 = FUN_100167dd2(lVar11,&cf_thumbArtworkVisible,0);
      piVar2[0xcc] = piVar2[0xcc] & 0xffbfffffU | (uint)(bVar5 & 1) << 0x16;
      uVar4 = FUN_100167c17(lVar11,&cf_viewModeForPlaylist);
      *(undefined1 *)((long)piVar2 + 0x442) = uVar4;
      puVar1 = (uint *)(piVar2 + 0xfc);
      FUN_1001c62d9(puVar1,0x1c);
      local_b90 = lVar11;
      lVar11 = FUN_100166844(lVar11,&cf_browseColumns);
      if (lVar11 != 0) {
        uVar8 = FUN_10017076e(lVar11);
        *puVar1 = uVar8;
        if (uVar8 < 7) {
          if (uVar8 == 0) goto LAB_10063b5be;
        }
        else {
          uVar10 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar10,0x10);
          if (cVar3 != '\0') {
            local_b58 = 0x8220202;
            local_b54 = "Assertion failure";
            local_b4c = 0x822;
            local_b4a = 0x6f23;
            uStack_b48 = 0x1007f;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_b58,0x16);
          }
          FUN_1001782e9(0,0);
          *puVar1 = 6;
        }
        uVar14 = 0;
        do {
          iVar7 = FUN_100165148(lVar11,uVar14);
          local_b68[uVar14 + 0xfd] = iVar7;
          uVar14 = uVar14 + 1;
        } while (uVar14 < (uint)local_b68[0xfc]);
      }
LAB_10063b5be:
      local_b78 = FUN_100166844(local_b90);
      if (local_b78 != 0) {
        local_b98 = FUN_10017076e(local_b78);
        local_b98 = local_b98 & 0xffffffff;
        if (local_b98 != 0) {
          uVar14 = 0;
          do {
            local_b60 = FUN_10016499b(local_b78);
            if (local_b60 != 0) {
              FUN_1001c62d9(&local_58,2);
              uVar4 = FUN_100167c17(local_b60,&cf_viewMode);
              local_58 = CONCAT31(local_58._1_3_,uVar4);
              uVar4 = FUN_100167c17(local_b60,&cf_viewGrouping);
              local_58._0_2_ = CONCAT11(uVar4,(undefined1)local_58);
              local_b70 = FUN_100352c96(local_b68,&local_58,2);
              if (local_b70 != 0) {
                uVar4 = FUN_100167dd2(local_b60,&cf_reversed,0);
                *(undefined1 *)(local_b70 + 0x1c) = uVar4;
                uVar9 = FUN_100167d66(local_b60,&cf_order);
                *(undefined4 *)(local_b70 + 0x18) = uVar9;
                uVar4 = FUN_100167dd2(local_b60,&cf_artwork,0);
                *(undefined1 *)(local_b70 + 0x1d) = uVar4;
                FUN_1001c62d9(&local_b58,0xaf4);
                lVar11 = FUN_100166844(local_b60,&cf_columns);
                if (lVar11 != 0) {
                  uVar12 = FUN_10017076e(lVar11);
                  uVar6 = FUN_100167c71(local_b60,&cf_sortColumn);
                  local_b58 = CONCAT22(uVar6,(short)local_b58);
                  if ((uVar12 & 0xffffffff) != 0) {
                    uVar15 = 0;
                    ppcVar16 = &local_b54;
                    do {
                      lVar13 = FUN_10016499b(lVar11,uVar15);
                      if (lVar13 != 0) {
                        uVar9 = FUN_100167d66(lVar13,&cf_field);
                        *(undefined4 *)ppcVar16 = uVar9;
                        uVar6 = FUN_100167c71(lVar13,&cf_width);
                        *(undefined2 *)(ppcVar16 + 1) = uVar6;
                        uVar4 = FUN_100167dd2(lVar13,&cf_resizeable,0);
                        *(undefined1 *)((long)ppcVar16 + 4) = uVar4;
                        uVar4 = FUN_100167dd2(lVar13,&cf_moveable,0);
                        *(undefined1 *)((long)ppcVar16 + 5) = uVar4;
                        uVar4 = FUN_100167dd2(lVar13,&cf_sortable,0);
                        *(undefined1 *)((long)ppcVar16 + 6) = uVar4;
                        uVar4 = FUN_100167dd2(lVar13,&cf_reversed,0);
                        *(undefined1 *)((long)ppcVar16 + 7) = uVar4;
                        local_b58 = CONCAT22(local_b58._2_2_,(short)local_b58 + 1);
                        ppcVar16 = (char **)((long)ppcVar16 + 0x1c);
                      }
                      uVar15 = uVar15 + 1;
                    } while ((uVar12 & 0xffffffff) != uVar15);
                  }
                }
                lVar11 = local_b70;
                _memcpy((void *)(local_b70 + 0x20),&local_b58,0xaf4);
                FUN_100352490(local_b68,lVar11,0);
                uVar4 = FUN_100167dd2(local_b60,&cf_reversed,0);
                *(undefined1 *)(local_b70 + 0x1c) = uVar4;
                FUN_100352999();
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 != local_b98);
        }
      }
      FUN_10017060f(local_b90);
      uVar4 = 1;
      goto LAB_10063b1f4;
    }
  }
  else {
LAB_10063b1e6:
    FUN_1001b7a50(local_b88);
  }
  uVar4 = 0;
LAB_10063b1f4:
  if ((short)local_b68[4] == 0x3d) {
    FUN_100586196(local_b68,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

