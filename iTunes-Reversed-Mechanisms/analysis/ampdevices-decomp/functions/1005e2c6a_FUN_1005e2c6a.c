// name: FUN_1005e2c6a
// address: 1005e2c6a

void FUN_1005e2c6a(long *param_1)

{
  short sVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  long *plVar6;
  char cVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar14 = (long *)param_1[1];
  (**(code **)(*param_1 + 0x80))();
  if (param_1[0x19] != 0) {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "mFirstTrackPrivate == nullptr";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar2 = param_1[0x19];
    while (lVar2 != 0) {
      lVar15 = *(long *)(lVar2 + 0x48);
      *(undefined8 *)(lVar2 + 0x40) = 0;
      *(undefined8 *)(lVar2 + 0x48) = 0;
      lVar2 = lVar15;
    }
  }
  sVar1 = *(short *)((long)param_1 + 0x62);
  if (sVar1 == 0x3e9) {
    (**(code **)(*plVar14 + 0x10))(plVar14,0x74327261,plVar14,param_1,0);
    goto LAB_1005e307a;
  }
  if (sVar1 == 1000) {
    if ((long *)plVar14[0x373] != param_1) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "trackData->compilationsArtistInfo == this";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    plVar14[0x373] = 0;
    goto LAB_1005e307a;
  }
  if (sVar1 == 1) {
    if ((long *)plVar14[0x372] != param_1) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "trackData->unassignedArtistInfo == this";
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    plVar14[0x372] = 0;
    goto LAB_1005e307a;
  }
  (**(code **)(*plVar14 + 0x10))(plVar14,0x74327261,plVar14,param_1,0);
  lVar2 = param_1[1];
  if (lVar2 == 0) {
LAB_1005e2f1e:
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1005e307a;
  }
  if (*(int *)(lVar2 + 0x80) != 0x74646174) {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7ab58c;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar7 = FUN_1001782e9(0,1);
    if (cVar7 == '\0') goto LAB_1005e2f1e;
  }
  if (*(int *)(lVar2 + 0xa8) == 0) {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "trackData->numArtistInfos > 0";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar15 = param_1[0x1b];
  lVar3 = param_1[0x1c];
  plVar14 = (long *)(lVar3 + 0xd8);
  if (lVar3 == 0) {
    plVar14 = (long *)(lVar2 + 0x1ba0);
  }
  plVar9 = (long *)(lVar15 + 0xe0);
  if (lVar15 == 0) {
    plVar9 = (long *)(lVar2 + 0x1ba8);
  }
  *plVar14 = lVar15;
  *plVar9 = lVar3;
  lVar15 = param_1[3];
  if (lVar15 != 0) {
    plVar14 = (long *)(lVar2 + 0x2650);
    local_48 = (undefined4)lVar15;
    uStack_44 = (undefined4)((ulong)lVar15 >> 0x20);
    plVar9 = (long *)FUN_1002790a8(plVar14);
    if (plVar9 != (long *)0x0) {
      lVar15 = *plVar9;
      uVar12 = plVar9[1];
      uVar4 = *(ulong *)(lVar2 + 0x2658);
      uVar10 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
      uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
      if (uVar10 >> 0x38 < 2) {
        uVar12 = uVar12 & uVar4 - 1;
      }
      else if (uVar4 <= uVar12) {
        uVar12 = uVar12 % uVar4;
      }
      plVar6 = *(long **)(*plVar14 + uVar12 * 8);
      do {
        plVar11 = plVar6;
        plVar6 = (long *)*plVar11;
      } while ((long *)*plVar11 != plVar9);
      bVar5 = (byte)(uVar10 >> 0x38);
      if (plVar11 == (long *)(lVar2 + 0x2660)) {
LAB_1005e2fea:
        if (lVar15 == 0) {
LAB_1005e3017:
          *(undefined8 *)(*plVar14 + uVar12 * 8) = 0;
          lVar15 = *plVar9;
          goto LAB_1005e3022;
        }
        uVar10 = *(ulong *)(lVar15 + 8);
        if (bVar5 < 2) {
          uVar13 = uVar4 - 1 & uVar10;
        }
        else {
          uVar13 = uVar10;
          if (uVar4 <= uVar10) {
            uVar13 = uVar10 % uVar4;
          }
        }
        if (uVar13 != uVar12) goto LAB_1005e3017;
LAB_1005e302b:
        if (bVar5 < 2) {
          uVar10 = uVar10 & uVar4 - 1;
        }
        else if (uVar4 <= uVar10) {
          uVar10 = uVar10 % uVar4;
        }
        if (uVar10 != uVar12) {
          *(long **)(*plVar14 + uVar10 * 8) = plVar11;
          lVar15 = *plVar9;
        }
      }
      else {
        uVar10 = plVar11[1];
        if (bVar5 < 2) {
          uVar10 = uVar10 & uVar4 - 1;
        }
        else if (uVar4 <= uVar10) {
          uVar10 = uVar10 % uVar4;
        }
        if (uVar10 != uVar12) goto LAB_1005e2fea;
LAB_1005e3022:
        if (lVar15 != 0) {
          uVar10 = *(ulong *)(lVar15 + 8);
          goto LAB_1005e302b;
        }
        lVar15 = 0;
      }
      *plVar11 = lVar15;
      *plVar9 = 0;
      *(long *)(lVar2 + 0x2668) = *(long *)(lVar2 + 0x2668) + -1;
      operator_delete(plVar9);
    }
  }
  *(int *)(lVar2 + 0xa8) = *(int *)(lVar2 + 0xa8) + -1;
LAB_1005e307a:
  if ((1 < *(ushort *)((long)param_1 + 0x62) - 1) && (1 < *(ushort *)((long)param_1 + 0x62) - 1000))
  {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      uStack_40 = 1;
      local_3c = 0x822;
      local_3a = "false";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

