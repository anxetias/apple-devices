// name: FUN_100359f5a
// address: 100359f5a

undefined1 * FUN_100359f5a(int param_1,long param_2,long param_3,int *param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  int local_9c;
  int local_8c;
  uint local_78;
  uint local_74;
  long *local_70;
  ulong local_68;
  char *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_4 = param_1;
  piVar1 = param_4 + 2;
  *(undefined1 *)(param_4 + 2) = 0;
  *(undefined2 *)(param_4 + 0x42) = 0;
  param_4[0x44] = 0;
  param_4[0x45] = 0;
  local_70 = (long *)0x0;
  local_74 = 0;
  uVar20 = 0;
  local_9c = 0;
  local_8c = 0;
  local_78 = 0;
  bVar3 = false;
  bVar2 = false;
LAB_100359fe8:
  lVar7 = FUN_1001e1f69(param_2,param_3,&local_60,&local_68);
  if (param_1 == 4) {
    if ((local_68 < 0x11) ||
       (cVar4 = FUN_1001df8db(local_60,0x10,"numberofentries=",0x10,1), cVar4 == '\0')) {
      uVar14 = local_68;
      pcVar11 = local_60;
      if (4 < local_68) {
        cVar4 = FUN_1001df8db(local_60,4,"File",4,1);
        pcVar11 = local_60;
        uVar14 = local_68;
        if (cVar4 == '\0') {
          if (5 < local_68) {
            cVar4 = FUN_1001df8db(local_60,5,"Title",5,1);
            if (cVar4 == '\0') {
              uVar14 = local_68;
              pcVar11 = local_60;
              if ((6 < local_68) &&
                 (cVar4 = FUN_1001df8db(local_60,6,"Length",6,1), uVar14 = local_68,
                 pcVar11 = local_60, cVar4 != '\0')) {
                uVar14 = local_68 - 6;
                pcVar11 = local_60 + 6;
                if (uVar14 != 0) {
                  pcVar9 = local_60 + 8;
                  uVar19 = local_68 - 8;
                  uVar18 = local_68 - 7;
                  local_68 = uVar14;
                  local_60 = local_60 + 6;
                  do {
                    uVar16 = uVar18;
                    if (9 < (byte)(pcVar9[-2] - 0x30U)) {
                      uVar14 = local_68;
                      pcVar11 = local_60;
                      if ((uVar16 != 0) && (pcVar9[-2] == '=')) {
                        local_60 = pcVar9 + -1;
                        if ((uVar16 < 2) || ((*local_60 != '-' || (*pcVar9 != '1')))) {
                          iVar13 = 0;
                          local_68 = uVar16;
                          goto LAB_10035a83c;
                        }
                        local_8c = local_8c + 1;
                        iVar13 = -1;
                        local_68 = uVar16;
                        goto LAB_10035a863;
                      }
                      break;
                    }
                    local_60 = pcVar9 + -1;
                    pcVar9 = pcVar9 + 1;
                    uVar19 = uVar19 - 1;
                    uVar18 = uVar16 - 1;
                    uVar14 = uVar16;
                    local_68 = uVar16;
                    pcVar11 = local_60;
                  } while (uVar16 != 0);
                }
              }
            }
            else {
              uVar14 = local_68 - 5;
              pcVar11 = local_60 + 5;
              if (uVar14 != 0) {
                uVar19 = local_68 - 6;
                pcVar9 = local_60 + 6;
                local_68 = uVar14;
                local_60 = local_60 + 5;
                do {
                  pcVar8 = pcVar9;
                  uVar18 = uVar19;
                  if (9 < (byte)(pcVar8[-1] - 0x30U)) {
                    uVar14 = local_68;
                    pcVar11 = local_60;
                    if ((uVar18 != 0) && (pcVar8[-1] == '=')) {
                      if (local_70 == (long *)0x0) {
                        local_68 = uVar18;
                        local_60 = pcVar8;
                        uVar12 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar12,0x10);
                        if (cVar4 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = "externalPlaylistEntry != nullptr";
                          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      else {
                        local_68 = uVar18;
                        local_60 = pcVar8;
                        FUN_1001e59e6(pcVar8,uVar18,(long)local_70 + 0x407,0x100);
                      }
                      uVar14 = local_68;
                      pcVar11 = local_60;
                      if ((char)*piVar1 == '\0') {
                        FUN_1001e59e6(local_60,local_68,piVar1,0x100);
                        uVar14 = local_68;
                        pcVar11 = local_60;
                      }
                    }
                    break;
                  }
                  uVar19 = uVar18 - 1;
                  pcVar9 = pcVar8 + 1;
                  uVar14 = uVar18;
                  local_68 = uVar18;
                  pcVar11 = pcVar8;
                  local_60 = pcVar8;
                } while (uVar18 != 0);
              }
            }
          }
        }
        else {
          local_60 = local_60 + 4;
          uVar19 = local_68 - 4;
          local_68 = uVar19;
          if (uVar19 != 0) {
            lVar15 = -5;
            uVar18 = 0;
            do {
              if (9 < (byte)(pcVar11[uVar18 + 4] - 0x30U)) {
                if (uVar14 - 5 != uVar18) {
                  if (pcVar11[uVar18 + 4] == '=') {
                    local_60 = pcVar11 + uVar18 + 5;
                    uVar14 = uVar14 + lVar15;
                    local_68 = uVar14;
                  }
                  else {
                    uVar14 = (uVar14 - uVar18) - 4;
                  }
                  if (0x3fd < uVar14) goto LAB_10035abef;
                }
                break;
              }
              local_60 = pcVar11 + uVar18 + 5;
              local_68 = uVar14 + lVar15;
              uVar18 = uVar18 + 1;
              lVar15 = lVar15 + -1;
            } while (uVar19 != uVar18);
          }
          plVar10 = (long *)FUN_1001c6429(0x510);
          if (plVar10 == (long *)0x0) goto LAB_10035aba7;
          FUN_1001dfaed(local_60,local_68,plVar10 + 1,0x3ff);
          bVar5 = FUN_10035ad73(plVar10);
          if (local_70 != (long *)0x0) {
            *local_70 = (long)plVar10;
          }
          if (*(long *)(param_4 + 0x44) == 0) {
            *(long **)(param_4 + 0x44) = plVar10;
          }
          *(short *)(param_4 + 0x42) = (short)param_4[0x42] + 1;
          local_78 = local_78 + bVar5;
          local_74 = local_74 + 1;
          local_70 = plVar10;
          uVar14 = local_68;
          pcVar11 = local_60;
        }
      }
    }
    else {
      uVar14 = local_68 - 0x10;
      if (uVar14 == 0) {
        uVar20 = 0;
        pcVar11 = local_60 + 0x10;
      }
      else {
        uVar20 = 0;
        pcVar9 = local_60 + 0x11;
        uVar19 = local_68 - 0x11;
        local_68 = uVar14;
        local_60 = local_60 + 0x10;
        do {
          uVar18 = uVar19;
          pcVar8 = pcVar9;
          uVar14 = local_68;
          pcVar11 = local_60;
          if (9 < (byte)(pcVar8[-1] - 0x30U)) break;
          uVar20 = ((uint)(byte)pcVar8[-1] + uVar20 * 10) - 0x30;
          pcVar9 = pcVar8 + 1;
          uVar19 = uVar18 - 1;
          uVar14 = uVar18;
          local_68 = uVar18;
          pcVar11 = pcVar8;
          local_60 = pcVar8;
        } while (uVar18 != 0);
      }
    }
  }
  else {
    if ((local_68 == 7) && (cVar4 = FUN_1001df8db(local_60,7,"#EXTM3U",7,1), cVar4 != '\0')) {
      bVar3 = true;
      uVar14 = local_68;
      pcVar11 = local_60;
      goto LAB_10035a6a5;
    }
    if ((local_68 < 9) || (cVar4 = FUN_1001df8db(local_60,8,"#EXTINF:",8,1), cVar4 == '\0')) {
      uVar14 = local_68;
      pcVar11 = local_60;
      if ((1 < local_68) && (*local_60 != '#')) {
        if (local_70 == (long *)0x0 && bVar2) {
          uVar12 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar12,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(justProcessedEXTINF == false) || (externalPlaylistEntry != nullptr)";
            __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
LAB_10035a542:
          if (local_68 < 0x3fe) {
            FUN_1001dfaed(local_60,local_68,local_70 + 1,0x3ff);
            bVar5 = FUN_10035ad73(local_70);
LAB_10035a573:
            local_78 = local_78 + bVar5;
            bVar2 = false;
            uVar14 = local_68;
            pcVar11 = local_60;
            goto LAB_10035a6a5;
          }
        }
        else {
          if (bVar2) goto LAB_10035a542;
          if (bVar3) {
            uVar12 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar12,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "isExtendedM3U == false";
              __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if (local_68 < 0x3fe) {
            plVar10 = (long *)FUN_1001c6429(0x510);
            if (plVar10 == (long *)0x0) goto LAB_10035aba7;
            FUN_1001dfaed(local_60,local_68,plVar10 + 1,0x3ff);
            bVar5 = FUN_10035ad73(plVar10);
            if (local_70 != (long *)0x0) {
              *local_70 = (long)plVar10;
            }
            if (*(long *)(param_4 + 0x44) == 0) {
              *(long **)(param_4 + 0x44) = plVar10;
            }
            *(short *)(param_4 + 0x42) = (short)param_4[0x42] + 1;
            local_74 = local_74 + 1;
            local_70 = plVar10;
            goto LAB_10035a573;
          }
        }
LAB_10035abef:
        uVar12 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar12,0x10);
        puVar17 = &DAT_ffffff30;
        if (cVar4 == '\0') goto LAB_10035ac56;
        local_4a = "lineLength < (sizeof(externalPlaylistEntry->path) - 1)";
        goto LAB_10035ac31;
      }
    }
    else {
      if (!bVar3) {
        uVar12 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar12,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "isExtendedM3U";
          __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      pcVar9 = local_60;
      uVar19 = local_68;
      pcVar11 = local_60 + 8;
      uVar14 = local_68 - 8;
      if (uVar14 < 2) {
        local_68 = uVar14;
        local_60 = pcVar11;
        if (uVar14 != 0) goto LAB_10035a3be;
      }
      else if ((*pcVar11 == '-') && (local_60[9] == '1')) {
        pcVar9 = local_60 + 10;
        uVar14 = local_68 - 10;
        local_8c = local_8c + 1;
        iVar13 = -1;
        local_68 = uVar14;
        local_60 = pcVar9;
LAB_10035a419:
        if ((1 < uVar14) && (*pcVar9 == ',')) {
          local_60 = pcVar9 + 1;
          local_68 = uVar14 - 1;
          plVar10 = (long *)FUN_1001c6429(0x510);
          if (plVar10 != (long *)0x0) {
            FUN_1001e59e6(local_60,local_68,(long)plVar10 + 0x407,0x100);
            if (((char)*piVar1 == '\0') || (iVar13 == -1)) {
              FUN_1001e59e6(local_60,local_68,piVar1,0x100);
            }
            *(int *)(plVar10 + 0xa1) = iVar13;
            if (local_70 != (long *)0x0) {
              *local_70 = (long)plVar10;
            }
            if (*(long *)(param_4 + 0x44) == 0) {
              *(long **)(param_4 + 0x44) = plVar10;
            }
            *(short *)(param_4 + 0x42) = (short)param_4[0x42] + 1;
            local_9c = local_9c + 1;
            local_74 = local_74 + 1;
            bVar3 = true;
            bVar2 = true;
            local_70 = plVar10;
            uVar14 = local_68;
            pcVar11 = local_60;
            goto LAB_10035a6a5;
          }
LAB_10035aba7:
          uVar12 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar12,0x10);
          puVar17 = (undefined1 *)0xffffff94;
          if (cVar4 == '\0') goto LAB_10035ac56;
          local_4a = "externalPlaylistEntry != nullptr";
          goto LAB_10035ac31;
        }
      }
      else {
LAB_10035a3be:
        uVar18 = 0;
        lVar15 = -9;
        iVar13 = 0;
        local_68 = uVar14;
        local_60 = pcVar11;
        do {
          if (9 < (byte)(pcVar9[uVar18 + 8] - 0x30U)) {
            uVar14 = (uVar19 - uVar18) - 8;
            pcVar9 = pcVar9 + uVar18 + 8;
            goto LAB_10035a419;
          }
          iVar13 = (uint)(byte)pcVar9[uVar18 + 8] + iVar13 * 10 + -0x30;
          local_60 = pcVar9 + uVar18 + 9;
          local_68 = uVar19 + lVar15;
          uVar18 = uVar18 + 1;
          lVar15 = lVar15 + -1;
        } while (uVar14 != uVar18);
      }
      bVar3 = true;
      uVar14 = local_68;
      pcVar11 = local_60;
    }
  }
LAB_10035a6a5:
  local_60 = pcVar11;
  local_68 = uVar14;
  if ((lVar7 == 0) || (param_3 = param_3 + (param_2 - lVar7), param_2 = lVar7, param_3 == 0))
  goto LAB_10035a9da;
  goto LAB_100359fe8;
  while( true ) {
    iVar13 = (uint)(byte)pcVar11[-1] + iVar13 * 10 + -0x30;
    pcVar9 = pcVar11 + 1;
    uVar19 = uVar14 - 1;
    local_68 = uVar14;
    local_60 = pcVar11;
    if (uVar14 == 0) break;
LAB_10035a83c:
    uVar14 = uVar19;
    pcVar11 = pcVar9;
    if (9 < (byte)(pcVar11[-1] - 0x30U)) break;
  }
LAB_10035a863:
  if (local_70 == (long *)0x0) {
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "externalPlaylistEntry != nullptr";
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *(int *)(local_70 + 0xa1) = iVar13;
    if ((local_74 == local_78) && (iVar13 == -1)) {
      FUN_1001dfbb3((long)local_70 + 0x407,piVar1,0x100);
    }
  }
  local_9c = local_9c + 1;
  uVar14 = local_68;
  pcVar11 = local_60;
  goto LAB_10035a6a5;
LAB_10035a9da:
  if (uVar20 != local_74 && uVar20 != 0) {
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "(numberOfEntriesValue == 0) || (numberOfEntriesValue == numberOfEntries)";
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if ((int)local_78 < 1) {
    if (local_8c != 0) {
      uVar12 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar12,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "numberOfMinusOneLengthAttributes == 0";
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    uVar20 = (uint)(1 < local_9c);
  }
  else {
    if (bVar3 || param_1 == 4) {
      param_4[1] = local_9c < 2 ^ 3;
      if ((1 < (int)local_74) && (uVar20 = 4, local_9c == local_8c || local_9c == 0))
      goto LAB_10035aacc;
    }
    else {
      uVar20 = (int)local_74 < 2 ^ 3;
LAB_10035aacc:
      param_4[1] = uVar20;
    }
    uVar20 = 5;
    if (local_78 == local_74) goto LAB_10035aadc;
  }
  param_4[1] = uVar20;
LAB_10035aadc:
  uVar6 = *(ushort *)(param_4 + 0x42);
  if (1 < uVar6 && (char)param_4[2] == '\0') {
    if (bVar3) {
      uVar12 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar12,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "isExtendedM3U == false";
        __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001dfbb3(*(long *)(param_4 + 0x44) + 8,piVar1,0x100);
    uVar6 = *(ushort *)(param_4 + 0x42);
  }
  puVar17 = (undefined1 *)0x0;
  if (local_74 != uVar6) {
    uVar12 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar12,0x10);
    puVar17 = (undefined1 *)0x0;
    if (cVar4 != '\0') {
      local_4a = "parsedExternalPlaylist->numEntries == numberOfEntries";
LAB_10035ac31:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar12,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_10035ac56:
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar17;
}

