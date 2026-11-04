// name: FUN_100277ada
// address: 100277ada

void FUN_100277ada(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  long *plVar5;
  char cVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0x616c6269) {
      uVar7 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar7,0x10);
      if (cVar6 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      cVar6 = FUN_1001782e9(0,1);
      if (cVar6 == '\0') goto LAB_100277c90;
    }
    lVar1 = *(long *)(param_1 + 0x48);
    if (lVar1 != 0) {
      if (*(int *)(lVar1 + 0x80) != 0x74646174) {
        uVar7 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar7,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7ab58c;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        cVar6 = FUN_1001782e9(0,1);
        if (cVar6 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar7,0x10);
          if (cVar6 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            local_3c = 0x822;
            local_3a = "TrackDataIsValid(trackData)";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_100277e13;
        }
      }
      if (*(int *)(lVar1 + 0xa4) == 0) {
        uVar7 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar7,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          local_3c = 0x822;
          local_3a = "trackData->numAlbums > 0";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar14 = *(long *)(param_1 + 0x50);
      lVar2 = *(long *)(param_1 + 0x58);
      plVar13 = (long *)(lVar2 + 0x50);
      if (lVar2 == 0) {
        plVar13 = (long *)(lVar1 + 0x1b80);
      }
      plVar8 = (long *)(lVar14 + 0x58);
      if (lVar14 == 0) {
        plVar8 = (long *)(lVar1 + 0x1b88);
      }
      *plVar13 = lVar14;
      *plVar8 = lVar2;
      lVar14 = *(long *)(param_1 + 0x20);
      if (lVar14 != 0) {
        plVar13 = (long *)(lVar1 + 0x2678);
        local_48 = (undefined4)lVar14;
        uStack_44 = (undefined4)((ulong)lVar14 >> 0x20);
        plVar8 = (long *)FUN_1002790a8(plVar13);
        if (plVar8 != (long *)0x0) {
          lVar14 = *plVar8;
          uVar11 = plVar8[1];
          uVar3 = *(ulong *)(lVar1 + 0x2680);
          uVar9 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
          uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
          uVar9 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar9 >> 0x38 < 2) {
            uVar11 = uVar11 & uVar3 - 1;
          }
          else if (uVar3 <= uVar11) {
            uVar11 = uVar11 % uVar3;
          }
          plVar5 = *(long **)(*plVar13 + uVar11 * 8);
          do {
            plVar10 = plVar5;
            plVar5 = (long *)*plVar10;
          } while ((long *)*plVar10 != plVar8);
          bVar4 = (byte)(uVar9 >> 0x38);
          if (plVar10 == (long *)(lVar1 + 0x2688)) {
LAB_100277d83:
            if (lVar14 == 0) {
LAB_100277db0:
              *(undefined8 *)(*plVar13 + uVar11 * 8) = 0;
              lVar14 = *plVar8;
              goto LAB_100277dbb;
            }
            uVar9 = *(ulong *)(lVar14 + 8);
            if (bVar4 < 2) {
              uVar12 = uVar3 - 1 & uVar9;
            }
            else {
              uVar12 = uVar9;
              if (uVar3 <= uVar9) {
                uVar12 = uVar9 % uVar3;
              }
            }
            if (uVar12 != uVar11) goto LAB_100277db0;
LAB_100277dc4:
            if (bVar4 < 2) {
              uVar9 = uVar9 & uVar3 - 1;
            }
            else if (uVar3 <= uVar9) {
              uVar9 = uVar9 % uVar3;
            }
            if (uVar9 != uVar11) {
              *(long **)(*plVar13 + uVar9 * 8) = plVar10;
              lVar14 = *plVar8;
            }
          }
          else {
            uVar9 = plVar10[1];
            if (bVar4 < 2) {
              uVar9 = uVar9 & uVar3 - 1;
            }
            else if (uVar3 <= uVar9) {
              uVar9 = uVar9 % uVar3;
            }
            if (uVar9 != uVar11) goto LAB_100277d83;
LAB_100277dbb:
            if (lVar14 != 0) {
              uVar9 = *(ulong *)(lVar14 + 8);
              goto LAB_100277dc4;
            }
            lVar14 = 0;
          }
          *plVar10 = lVar14;
          *plVar8 = 0;
          *(long *)(lVar1 + 0x2690) = *(long *)(lVar1 + 0x2690) + -1;
          operator_delete(plVar8);
        }
      }
      *(int *)(lVar1 + 0xa4) = *(int *)(lVar1 + 0xa4) + -1;
      goto LAB_100277e13;
    }
  }
LAB_100277c90:
  uVar7 = FUN_1001cc310();
  cVar6 = _os_log_type_enabled(uVar7,0x10);
  if (cVar6 != '\0') {
    local_48 = 0x8220202;
    uStack_44 = 0x7a0a90;
    uStack_40 = 1;
    local_3c = 0x822;
    local_3a = "AlbumInfoIsValid(inAlbumInfo)";
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_100277e13:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

