// name: FUN_1002f8673
// address: 1002f8673

void FUN_1002f8673(int *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long *plVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1002f8744:
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002f8c4e;
  }
  if (*param_1 != 0x706c7374) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar6 = FUN_1001782e9(0,1);
    if (cVar6 == '\0') goto LAB_1002f8744;
  }
  lVar2 = *(long *)(param_1 + 2);
  if (lVar2 == 0) {
LAB_1002f876f:
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002f8c4e;
  }
  if (*(int *)(lVar2 + 0x80) != 0x74646174) {
    uVar7 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar7,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar6 = FUN_1001782e9(0,1);
    if (cVar6 == '\0') goto LAB_1002f876f;
  }
  lVar9 = *(long *)(param_1 + 10);
  lVar13 = *(long *)(param_1 + 0xe);
  if (lVar9 == 0) {
    lVar9 = *(long *)(param_1 + 0xc);
    if (lVar13 == 0) {
      if (lVar9 == 0) {
        if ((*(int **)(lVar2 + 7000) != param_1) || (*(int **)(lVar2 + 0x1b60) != param_1)) {
          uVar7 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar7,0x10);
          if (cVar6 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = 
            "parent != nullptr || playlist->prevSibling != nullptr || playlist->nextSibling != nullptr || (trackData->firstPlaylistPrivate == playlist && trackData->lastPlaylistPrivate == playlist)"
            ;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1002f8c4e;
        }
        *(undefined8 *)(lVar2 + 7000) = 0;
        goto LAB_1002f87b4;
      }
      if (*(int **)(lVar2 + 7000) == param_1) {
        *(long *)(lVar2 + 7000) = lVar9;
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar7,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "trackData->firstPlaylistPrivate == playlist";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        lVar9 = *(long *)(param_1 + 0xc);
        *(long *)(lVar2 + 7000) = lVar9;
        if (lVar9 == 0) goto LAB_1002f87b4;
      }
      lVar13 = *(long *)(param_1 + 0xe);
LAB_1002f8a69:
      *(long *)(lVar9 + 0x38) = lVar13;
    }
    else {
      *(long *)(lVar13 + 0x30) = lVar9;
      if (lVar9 != 0) goto LAB_1002f8a69;
LAB_1002f87b4:
      if (*(int **)(lVar2 + 0x1b60) != param_1) {
        uVar7 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar7,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "trackData->lastPlaylistPrivate == playlist";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(lVar2 + 0x1b60) = *(undefined8 *)(param_1 + 0xe);
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  else {
    if (lVar13 == 0) {
      if (*(int **)(lVar9 + 0x48) != param_1) {
        uVar7 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar7,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "parent->firstChild == playlist";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar8 = *(long *)(param_1 + 0xc);
      *(long *)(lVar9 + 0x48) = lVar8;
      if (lVar8 == 0) goto LAB_1002f8838;
      lVar13 = *(long *)(param_1 + 0xe);
LAB_1002f8832:
      *(long *)(lVar8 + 0x38) = lVar13;
    }
    else {
      lVar8 = *(long *)(param_1 + 0xc);
      *(long *)(lVar13 + 0x30) = lVar8;
      if (lVar8 != 0) goto LAB_1002f8832;
LAB_1002f8838:
      if (*(int **)(lVar9 + 0x50) != param_1) {
        uVar7 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar7,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "parent->lastChild == playlist";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined8 *)(lVar9 + 0x50) = *(undefined8 *)(param_1 + 0xe);
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    do {
      *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + -1;
      lVar9 = *(long *)(lVar9 + 0x28);
    } while (lVar9 != 0);
  }
  if (param_1[0x16] != 0) {
    plVar1 = (long *)(lVar2 + 0x26a0);
    local_48 = param_1[0x16];
    plVar10 = (long *)FUN_1002b7f7c(plVar1);
    if (plVar10 != (long *)0x0) {
      lVar9 = *plVar10;
      uVar14 = plVar10[1];
      uVar3 = *(ulong *)(lVar2 + 0x26a8);
      uVar11 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
      uVar11 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar11 >> 0x38 < 2) {
        uVar14 = uVar14 & uVar3 - 1;
      }
      else if (uVar3 <= uVar14) {
        uVar14 = uVar14 % uVar3;
      }
      plVar5 = *(long **)(*plVar1 + uVar14 * 8);
      do {
        plVar12 = plVar5;
        plVar5 = (long *)*plVar12;
      } while ((long *)*plVar12 != plVar10);
      bVar4 = (byte)(uVar11 >> 0x38);
      if (plVar12 == (long *)(lVar2 + 0x26b0)) {
LAB_1002f8b77:
        if (lVar9 == 0) {
LAB_1002f8ba4:
          *(undefined8 *)(*plVar1 + uVar14 * 8) = 0;
          lVar9 = *plVar10;
          goto LAB_1002f8baf;
        }
        uVar11 = *(ulong *)(lVar9 + 8);
        if (bVar4 < 2) {
          uVar15 = uVar3 - 1 & uVar11;
        }
        else {
          uVar15 = uVar11;
          if (uVar3 <= uVar11) {
            uVar15 = uVar11 % uVar3;
          }
        }
        if (uVar15 != uVar14) goto LAB_1002f8ba4;
LAB_1002f8bb8:
        if (bVar4 < 2) {
          uVar11 = uVar11 & uVar3 - 1;
        }
        else if (uVar3 <= uVar11) {
          uVar11 = uVar11 % uVar3;
        }
        if (uVar11 != uVar14) {
          *(long **)(*plVar1 + uVar11 * 8) = plVar12;
          lVar9 = *plVar10;
        }
      }
      else {
        uVar11 = plVar12[1];
        if (bVar4 < 2) {
          uVar11 = uVar11 & uVar3 - 1;
        }
        else if (uVar3 <= uVar11) {
          uVar11 = uVar11 % uVar3;
        }
        if (uVar11 != uVar14) goto LAB_1002f8b77;
LAB_1002f8baf:
        if (lVar9 != 0) {
          uVar11 = *(ulong *)(lVar9 + 8);
          goto LAB_1002f8bb8;
        }
        lVar9 = 0;
      }
      *plVar12 = lVar9;
      *plVar10 = 0;
      *(long *)(lVar2 + 0x26b8) = *(long *)(lVar2 + 0x26b8) + -1;
      operator_delete(plVar10);
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_1002f8e0e(lVar2 + 0x26c8);
  }
  if ((*(long *)(lVar2 + 0x26f0) != 0) && (*(long *)(param_1 + 0x76) - 1U < 0xfffffffffffffffc)) {
    FUN_1002f8e0e();
  }
  *(int *)(lVar2 + 0x98) = *(int *)(lVar2 + 0x98) + -1;
  *(byte *)(lVar2 + 0x1bb1) = *(byte *)(lVar2 + 0x1bb1) | 2;
  FUN_1002dd7e7(lVar2);
LAB_1002f8c4e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

