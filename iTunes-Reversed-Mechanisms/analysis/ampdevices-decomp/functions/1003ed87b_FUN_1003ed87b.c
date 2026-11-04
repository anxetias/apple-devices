// name: FUN_1003ed87b
// address: 1003ed87b

int FUN_1003ed87b(int *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int *piVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  long local_98;
  undefined4 local_8c;
  uint local_88;
  undefined4 local_84;
  int *local_80;
  long *local_78;
  long *plStack_70;
  long *local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_1 == (int *)0x0) {
LAB_1003edad1:
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "PlaylistIsValid(inPlaylist)";
LAB_1003edcce:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    local_80 = param_1;
    if (*param_1 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1003edad1;
    }
    if (param_2 != 0) {
      local_59 = '\0';
      local_8c = FUN_10049273a(local_80);
      iVar10 = 0;
      local_88 = 0;
      local_84 = 0;
      iVar16 = *(int *)(*(long *)(local_80 + 0x1e) + 0x18);
      piVar14 = local_80;
      while (iVar16 != 0) {
        iVar16 = iVar16 + -1;
        iVar1 = iVar16;
        if (local_59 == '\0') {
          iVar1 = iVar10;
        }
        lVar6 = FUN_10037ddf6(*(undefined8 *)(piVar14 + 0xf0),local_8c,0,iVar1);
        if (lVar6 == 0) {
          uVar5 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar5,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "playlistItem != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (plStack_70 < local_68) {
          *plStack_70 = lVar6;
          plStack_70 = plStack_70 + 1;
        }
        else {
          lVar11 = (long)plStack_70 - (long)local_78 >> 3;
          uVar15 = lVar11 + 1;
          if (0x1fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_100382d90(&local_78);
          }
          uVar9 = (long)local_68 - (long)local_78 >> 2;
          if (uVar9 <= uVar15) {
            uVar9 = uVar15;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_68 - (long)local_78)) {
            uVar9 = 0x1fffffffffffffff;
          }
          if (uVar9 == 0) {
            auVar19 = ZEXT816(0);
          }
          else {
            auVar19 = FUN_100249b6c(&local_68);
          }
          lVar7 = auVar19._0_8_;
          plVar13 = (long *)(lVar7 + lVar11 * 8);
          plVar17 = (long *)(lVar7 + auVar19._8_8_ * 8);
          *plVar13 = lVar6;
          plVar12 = (long *)(lVar7 + lVar11 * 8 + 8);
          plVar13 = (long *)((long)plVar13 - ((long)plStack_70 - (long)local_78));
          _memcpy(plVar13,local_78,(long)plStack_70 - (long)local_78);
          plVar3 = local_78;
          bVar18 = local_78 != (long *)0x0;
          piVar14 = local_80;
          local_78 = plVar13;
          plStack_70 = plVar12;
          local_68 = plVar17;
          if (bVar18) {
            operator_delete(plVar3);
            piVar14 = local_80;
            plStack_70 = plVar12;
          }
        }
        iVar10 = iVar10 + 1;
      }
      local_98 = ((ulong)((long)plStack_70 - (long)local_78) >> 1 & 0x3fffffffc) + 0x2c;
      puVar8 = (undefined4 *)FUN_1001c6429();
      plVar13 = plStack_70;
      if (puVar8 == (undefined4 *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar5,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "dbPlaylist != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar16 = -0x6c;
        FUN_1001782e9(0,0);
      }
      else {
        if (local_78 != plStack_70) {
          plVar17 = local_78;
          do {
            FUN_1003f99ce(*plVar17,puVar8,&local_88,&local_84);
            plVar17 = plVar17 + 1;
          } while (plVar17 != plVar13);
        }
        uVar2 = local_88;
        uVar15 = (ulong)local_88;
        if (uVar15 == 0) {
          uVar5 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar5,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "numSavedTracks != 0";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        local_98 = uVar15 * 4 + 0x2c;
        *puVar8 = 0x7368706c;
        *(long *)(puVar8 + 4) = param_2;
        puVar8[1] = (int)local_98;
        puVar8[2] = uVar2;
        puVar8[3] = local_84;
        if ((short)local_80[4] == 0xb) {
          *(undefined1 *)(puVar8 + 6) = 3;
        }
        iVar16 = FUN_100160255(param_3,param_4);
        if (iVar16 != -0x80) {
          if (iVar16 == 0) {
            iVar16 = FUN_100160894(param_3,&local_98,puVar8);
            if ((iVar16 != -0x80) && (iVar16 != 0)) {
              uVar5 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar5,0x10);
              if (cVar4 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar16);
                goto LAB_1003edeab;
              }
            }
          }
          else {
            uVar5 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar5,0x10);
            if (cVar4 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar16);
LAB_1003edeab:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
      }
      FUN_1001c64c1(puVar8);
      goto LAB_1003edd57;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "inPodcastChannelID != 0";
      goto LAB_1003edcce;
    }
  }
  iVar16 = -0x32;
  FUN_1001782e9(0,0);
LAB_1003edd57:
  if (local_78 != (long *)0x0) {
    plStack_70 = local_78;
    operator_delete(local_78);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar16;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

