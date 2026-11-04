// name: FUN_1003d6736
// address: 1003d6736

int FUN_1003d6736(long param_1)

{
  code *pcVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  bool bVar20;
  int local_478;
  undefined4 uStack_474;
  size_t local_470;
  long local_468;
  long local_460;
  ulong local_458;
  uint *local_450;
  uint local_444;
  uint *local_440;
  uint local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1003d1c21(*(undefined8 *)(param_1 + 0x3e0),0);
  uVar10 = *(undefined8 *)(param_1 + 0x3e0);
  local_468 = param_1;
  cVar3 = FUN_100495380(uVar10);
  if (cVar3 == '\0') {
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    for (lVar6 = FUN_100496392(uVar10); lVar6 != 0; lVar6 = FUN_100496449(lVar6)) {
      *(undefined1 *)(lVar6 + 0xc4) = 0;
    }
  }
  lVar6 = *(long *)(local_468 + 0x20);
  if (*(char *)(lVar6 + 0x2b5) == '\x02') {
    if (*(char *)(lVar6 + 0x8d0) == '\0') {
      iVar4 = 0x450;
      goto LAB_1003d72a5;
    }
    local_440 = *(uint **)(local_468 + 0x3e0);
    local_450 = (uint *)CONCAT71(local_450._1_7_,*(undefined1 *)(local_468 + 0x3f0));
    local_470 = CONCAT44(local_470._4_4_,(uint)*(byte *)(lVar6 + 0x374));
    lVar7 = *(long *)(lVar6 + 0xd10) - *(long *)(lVar6 + 0xd08);
    if (lVar7 == 0) {
      local_458 = CONCAT44(local_458._4_4_,100);
      local_460 = lVar6;
    }
    else {
      lVar7 = (lVar7 >> 2) * -0x7f01fc07f01fc07f;
      lVar7 = lVar7 + (ulong)(lVar7 == 0);
      local_458 = CONCAT44(local_458._4_4_,100);
      lVar18 = 6;
      local_460 = lVar6;
      do {
        local_438 = local_438 & 0xffffff00;
        lVar8 = *(long *)(local_460 + 0xd08) + lVar18;
        FUN_1001e73f2(lVar8,*(undefined2 *)(*(long *)(local_460 + 0xd08) + -2 + lVar18),&local_438,
                      0x3ff,&local_478);
        *(undefined1 *)((long)&local_438 + CONCAT44(uStack_474,local_478)) = 0;
        lVar6 = FUN_10049b9b4(local_440,&local_438);
        if ((lVar6 != 0) && (*(char *)(lVar6 + 0xc5) == '\0')) {
          uVar5 = 1;
          iVar4 = (int)local_458;
          if (*(char *)(local_460 + 0x8c8) == '\x01') {
            bVar20 = *(char *)(lVar8 + -6) != '\0';
            uVar5 = (uint)bVar20;
            iVar4 = 0;
            if (bVar20) {
              iVar4 = (int)local_458;
            }
          }
          local_458 = CONCAT44(local_458._4_4_,(int)local_458 + uVar5);
          *(int *)(lVar6 + 0xbc) = iVar4;
        }
        lVar18 = lVar18 + 0x204;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    cVar3 = *(char *)(local_460 + 0x8c8);
    if ((char)local_450 != '\0' && cVar3 == '\x01') {
      if ((uint)local_470 != 0xff) {
        local_450 = (uint *)FUN_10049b02f(local_440);
        if (local_450 == (uint *)0x0) {
          uVar10 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar10,0x10);
          if (cVar3 != '\0') {
            local_438 = 0x8220202;
            local_434 = "Assertion failure";
            local_42c = 0x822;
            local_42a = "albumMostRecentEventPriorityLookupTable != nullptr";
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          if ((byte)local_470 < 0x65) {
            uVar5 = *local_450;
            uVar19 = (uint)local_470;
            if ((uint)local_470 == 0) {
              uVar19 = uVar5;
            }
            local_444 = 0;
          }
          else {
            bVar20 = (uint)local_470 != 0x71;
            iVar17 = FUN_100177d5c(0);
            iVar4 = -0x93a80;
            if (bVar20) {
              iVar4 = (uint)local_470 * -0x2819a0 + 0xfaa0280;
            }
            local_444 = iVar17 + iVar4;
            uVar5 = *local_450;
            uVar19 = (uint)local_470;
          }
          if ((uVar5 != 0) && (100 < (byte)(uint)local_470 || uVar19 != 0)) {
            uVar14 = 0;
            uVar15 = (uint)local_470;
            do {
              lVar6 = *(long *)(local_450 + uVar14 * 2 + 2);
              if (*(char *)(lVar6 + 0x11) == '\x06') {
                if ((100 < (byte)uVar15) && (*(uint *)(lVar6 + 0x90) <= local_444)) break;
                if ((*(int *)(lVar6 + 0xbc) == 0) &&
                   (lVar18 = FUN_100496449(lVar6), lVar7 = lVar6, lVar6 != lVar18)) {
                  do {
                    cVar3 = *(char *)(lVar7 + 0xc4);
                    if (cVar3 != '\0') break;
                    lVar7 = FUN_100496449(lVar7);
                  } while (lVar7 != lVar18);
                  do {
                    if ((cVar3 == '\0') || (*(char *)(lVar6 + 0xc4) != '\0')) {
                      *(int *)(lVar6 + 0xbc) = (int)local_458;
                      local_458 = CONCAT44(local_458._4_4_,(int)local_458 + 1);
                      *(undefined1 *)(lVar6 + 0xc4) = 1;
                    }
                    lVar6 = FUN_100496449(lVar6);
                  } while (lVar6 != lVar18);
                }
                uVar19 = uVar19 - 1;
                uVar5 = *local_450;
                uVar15 = (uint)local_470;
              }
              uVar14 = uVar14 + 1;
              if ((uVar5 <= uVar14) || ((byte)uVar15 < 0x65 && uVar19 == 0)) break;
            } while( true );
          }
          FUN_1001c64c1(local_450);
        }
      }
      cVar3 = *(char *)(local_460 + 0x8c8);
    }
    iVar4 = FUN_1003d8029(local_440,cVar3,local_458 & 0xffffffff,0xff,0,0);
    if (iVar4 != 0) {
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 == '\0') goto LAB_1003d72a5;
      local_42a = (char *)CONCAT44(local_42a._4_4_,iVar4);
      goto LAB_1003d70e1;
    }
  }
  else {
    iVar4 = -0x32;
    if (*(char *)(lVar6 + 0x2b5) != '\x06') goto LAB_1003d72a5;
    local_458 = *(ulong *)(local_468 + 0x3e0);
    cVar3 = *(char *)(lVar6 + 0x14);
    local_478 = 100;
    if ((*(char *)(lVar6 + 0x860) == '\x01') &&
       (lVar7 = *(long *)(lVar6 + 0x878) - *(long *)(lVar6 + 0x870), lVar7 != 0)) {
      local_444 = CONCAT31(local_444._1_3_,cVar3);
      lVar18 = (lVar7 >> 2) * -0x5555555555555555;
      lVar18 = lVar18 + (ulong)(lVar18 == 0);
      lVar7 = 0;
      local_440 = (uint *)0x0;
      puVar13 = (uint *)0x0;
      local_450 = (uint *)0x0;
      local_460 = lVar6;
      do {
        lVar6 = *(long *)(local_460 + 0x870);
        lVar8 = FUN_10049aa6e(local_458,*(undefined8 *)(lVar6 + 4 + lVar7),1);
        pcVar16 = (char *)(lVar6 + lVar7);
        if (lVar8 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar10 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
          puVar9 = local_440;
          if (cVar3 != '\0') {
            local_434 = *(char **)(pcVar16 + 4);
            pcVar16 = "couldn\'t find Photos.app (prefs) album 0x%llX";
LAB_1003d695c:
            local_438 = 0x8000100;
            __os_log_impl(0x100000000,uVar10,2,pcVar16,&local_438,0xc);
            puVar9 = local_440;
          }
        }
        else if (*(char *)(lVar8 + 0xc5) == '\0') {
          puVar9 = local_440;
          if (*pcVar16 != '\0') {
            iVar4 = local_478 + 1;
            *(int *)(lVar8 + 0xbc) = local_478;
            *(undefined1 *)(lVar8 + 0xc4) = 1;
            local_478 = iVar4;
            if (*(char *)(lVar8 + 0x11) == '\x11') {
              if (puVar13 < local_450) {
                *(char **)puVar13 = pcVar16;
                puVar13 = puVar13 + 2;
              }
              else {
                local_470 = (long)puVar13 - (long)local_440;
                lVar6 = (long)local_470 >> 3;
                uVar14 = lVar6 + 1;
                if (0x1fffffffffffffff < uVar14) {
                  FUN_1003d826a();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                uVar12 = (long)local_450 - (long)local_440 >> 2;
                if (uVar12 <= uVar14) {
                  uVar12 = uVar14;
                }
                if (0x7ffffffffffffff7 < (ulong)((long)local_450 - (long)local_440)) {
                  uVar12 = 0x1fffffffffffffff;
                }
                if (uVar12 == 0) {
                  puVar9 = (uint *)0x0;
                }
                else {
                  if (0x1fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_1001082d0();
                  }
                  puVar9 = operator_new(uVar12 * 8);
                }
                puVar2 = local_440;
                local_450 = puVar9 + uVar12 * 2;
                puVar13 = puVar9 + lVar6 * 2 + 2;
                *(char **)(puVar9 + lVar6 * 2) = pcVar16;
                _memcpy(puVar9,local_440,local_470);
                if (puVar2 != (uint *)0x0) {
                  operator_delete(puVar2);
                }
              }
            }
          }
        }
        else {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar10 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
          puVar9 = local_440;
          if (cVar3 != '\0') {
            local_434 = *(char **)(pcVar16 + 4);
            pcVar16 = "Photos.app (prefs) album 0x%llX has been marked for delete";
            goto LAB_1003d695c;
          }
        }
        local_440 = puVar9;
        lVar7 = lVar7 + 0xc;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (local_440 != puVar13) {
        puVar9 = local_440;
        do {
          lVar6 = FUN_10049aa6e(local_458,*(undefined8 *)(*(long *)puVar9 + 4),1);
          if (lVar6 == 0) {
            uVar10 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar10,0x10);
            if (cVar3 != '\0') {
              local_438 = 0x8220202;
              local_434 = "Assertion failure (expected to be not NULL)";
              local_42c = 0x822;
              local_42a = "imageAlbum";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_438,0x16
                                 );
            }
            cVar3 = FUN_1001782e9(0,0);
            if (cVar3 != '\0') goto LAB_1003d6c60;
          }
          else {
LAB_1003d6c60:
            for (lVar7 = FUN_10049b4c9(lVar6); lVar7 != 0; lVar7 = FUN_10049b4c9(lVar7)) {
              if ((*(char *)(lVar7 + 0x11) == '\x11') && (*(char *)(lVar7 + 0xc4) != '\0'))
              goto LAB_1003d6c91;
            }
            FUN_1003d7fd5(lVar6,&local_478);
          }
LAB_1003d6c91:
          puVar9 = puVar9 + 2;
        } while (puVar9 != puVar13);
      }
      lVar6 = local_460;
      puVar13 = local_440;
      cVar3 = (char)local_444;
    }
    else {
      puVar13 = (uint *)0x0;
    }
    iVar17 = local_478;
    if (*(char *)(lVar6 + 0x866) == '\0') {
      uVar11 = 0xff;
    }
    else {
      uVar11 = *(undefined1 *)(lVar6 + 0x861);
    }
    iVar4 = FUN_1003d8029(local_458,*(undefined1 *)(lVar6 + 0x860),local_478,uVar11,
                          *(char *)(lVar6 + 0x864) != '\0',*(char *)(lVar6 + 0x865) != '\0');
    if (cVar3 != '\0') {
      for (lVar6 = FUN_100496392(local_458); lVar6 != 0; lVar6 = FUN_100496449(lVar6)) {
        if ((*(char *)(lVar6 + 0x11) == '\x0f') && (*(int *)(lVar6 + 0xbc) == 0)) {
          *(int *)(lVar6 + 0xbc) = iVar17;
          iVar17 = iVar17 + 1;
        }
      }
    }
    if (puVar13 != (uint *)0x0) {
      operator_delete(puVar13);
    }
    if (iVar4 != 0) {
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 == '\0') goto LAB_1003d72a5;
      local_42a = (char *)CONCAT44(local_42a._4_4_,iVar4);
LAB_1003d70e1:
      local_42c = 0x400;
      local_434 = "Assertion failure";
      local_438 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_438,0x12);
      goto LAB_1003d72a5;
    }
  }
  lVar6 = *(long *)(local_468 + 0x20);
  if ((*(char *)(lVar6 + 0x13) == '\0') || (*(char *)(lVar6 + 0x396) == '\0')) {
    uVar10 = *(undefined8 *)(local_468 + 0x3e0);
    cVar3 = FUN_100495380(uVar10);
    if (cVar3 == '\0') {
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 != '\0') {
        local_438 = 0x8220202;
        local_434 = "Assertion failure";
        local_42c = 0x822;
        local_42a = "ITImageLibraryIsValid(imageLibrary)";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      for (lVar6 = FUN_100496019(uVar10); lVar6 != 0; lVar6 = FUN_1004960d0(lVar6)) {
        if (*(char *)(lVar6 + 0xb2) == '\x01') {
          *(undefined4 *)(lVar6 + 0xa4) = 0;
        }
      }
    }
    if (*(char *)(*(long *)(local_468 + 0x20) + 0x3b1) != '\0') goto LAB_1003d71a6;
  }
  else {
    if (*(char *)(lVar6 + 0x3b1) == '\0') {
      iVar4 = 0;
      goto LAB_1003d72a5;
    }
LAB_1003d71a6:
    uVar10 = *(undefined8 *)(local_468 + 0x3e0);
    cVar3 = FUN_100495380(uVar10);
    if (cVar3 == '\0') {
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 != '\0') {
        local_438 = 0x8220202;
        local_434 = "Assertion failure";
        local_42c = 0x822;
        local_42a = "ITImageLibraryIsValid( imageLibrary )";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      for (lVar6 = FUN_100496019(uVar10); lVar6 != 0; lVar6 = FUN_1004960d0(lVar6)) {
        if (*(char *)(lVar6 + 0xd5) == '\0') {
          *(undefined4 *)(lVar6 + 0xa4) = 0;
        }
      }
    }
  }
  uVar10 = *(undefined8 *)(local_468 + 0x3e0);
  cVar3 = FUN_100495380(uVar10);
  if (cVar3 == '\0') {
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    iVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar6 = FUN_100496392(uVar10);
    iVar4 = 0;
    for (; lVar6 != 0; lVar6 = FUN_100496449(lVar6)) {
      if (((((byte)(*(char *)(lVar6 + 0x11) - 0xbU) < 2) && (*(int *)(lVar6 + 0x94) != 0)) &&
          (lVar7 = FUN_1004983e2(uVar10), lVar7 != 0)) && (*(int *)(lVar7 + 0xa4) == 0)) {
        *(undefined4 *)(lVar6 + 0x94) = 0;
      }
    }
  }
LAB_1003d72a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

