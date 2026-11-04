// name: FUN_100614502
// address: 100614502

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100614502(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  double dVar15;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  char *local_a0;
  uint local_98;
  uint local_94;
  long *local_90;
  int *local_88;
  long local_80;
  ulong local_78;
  long local_70;
  char *local_68;
  char local_59;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  lVar9 = *(long *)(param_1 + 0x20);
  lVar2 = *(long *)(lVar1 + 0x30);
  local_c0 = FUN_10048604a(lVar2);
  local_b0 = lVar9;
  if ((*(char *)(lVar1 + 0x38d) == '\0') &&
     (((*(char *)(lVar9 + 0x379) == '\0' || (*(char *)(lVar1 + 0x38b) == '\0')) ||
      ((*(char *)(lVar1 + 0x38c) != '\0' && (cVar4 = FUN_100537ef0(0), cVar4 == '\0')))))) {
    local_78 = 0;
    local_70 = 0;
  }
  else {
    local_70 = *(long *)(lVar1 + 0x16640);
    local_78 = CONCAT71((int7)((ulong)local_70 >> 8),1);
  }
  local_68 = (char *)0x0;
  local_88 = (int *)0x0;
  local_c8 = (double)FUN_1001ebd46();
  if (lVar8 == 0) {
LAB_1006148ad:
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(sourceTrackData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar8 + 0x80) != 0x74646174) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_1006148ad;
    }
    local_a8 = lVar8;
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x80) != 0x74646174) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar4 = FUN_1001782e9(0,1);
        if (cVar4 == '\0') goto LAB_1006148d5;
      }
      FUN_100313e0b(lVar2);
      if (local_70 != 0) {
        FUN_1005a44e2(local_70);
      }
      iVar5 = FUN_100601cd5(param_1,&local_68);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_58 = 0x8000100;
            local_54 = local_68;
            __os_log_impl(0x100000000,uVar6,1,"sync> autofill available free bytes = %lld",&local_58
                          ,0xc);
          }
          if ((*(byte *)(lVar2 + 0x2be0) & 0x20) != 0) {
            uVar10 = *(uint *)(lVar2 + 0x2c08);
            if (uVar10 == 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "copyVolumeBlockSize != 0";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              uVar10 = 0x200;
            }
            uVar11 = *(ulong *)(lVar2 + 0x2bf0);
            uVar7 = *(ulong *)(lVar2 + 0x2bf8);
            if (uVar11 < uVar7) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "destTrackData->totalCopyBlocks >= destTrackData->completedCopyBlocks";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              uVar11 = *(ulong *)(lVar2 + 0x2bf0);
              uVar7 = *(ulong *)(lVar2 + 0x2bf8);
            }
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar6 = DAT_1008c75b8;
            pcVar13 = (char *)((uVar11 - uVar7) * (ulong)uVar10);
            cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar4 != '\0') {
              local_58 = 0x8000100;
              local_54 = pcVar13;
              __os_log_impl(0x100000000,uVar6,1,"sync> autofill remaining copy bytes = %llu",
                            &local_58,0xc);
            }
            if (local_68 < pcVar13) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "availableFreeBytes >= remainingCopyBytes";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            local_68 = local_68 + -(long)pcVar13;
          }
          pcVar13 = (char *)FUN_1006019f0(lVar1);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 == '\0') {
            local_68 = local_68 + (-0x100000 - (long)pcVar13);
          }
          else {
            local_58 = 0x8000100;
            local_54 = pcVar13;
            __os_log_impl(0x100000000,uVar6,1,"sync> autofill minimum free bytes = %llu",&local_58,
                          0xc);
            local_68 = local_68 + (-0x100000 - (long)pcVar13);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
          }
          uVar6 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar4 != '\0') {
            local_58 = 0x8000100;
            local_54 = local_68;
            __os_log_impl(0x100000000,uVar6,1,"sync> autofill remaining free bytes = %lld",&local_58
                          ,0xc);
          }
          iVar12 = 0;
          iVar5 = 0;
          if ((0 < (long)local_68) &&
             (iVar5 = FUN_10061fc8e(param_1,local_68,&local_88), iVar5 != -0x80)) {
            if (iVar5 == 0) {
              iVar5 = FUN_100603b3e(param_1);
              if (iVar5 != -0x80) {
                if (iVar5 == 0) {
                  FUN_10031c15f(local_a8);
                  iVar5 = 0;
                  if ((((local_88 != (int *)0x0) && (iVar5 = iVar12, *local_88 == 0x4f4c5354)) &&
                      (local_88[1] != 0)) &&
                     (local_98 = (int)((ulong)(*(long *)(local_88 + 4) - *(long *)(local_88 + 2)) >>
                                      3) * -0x49249249, local_98 != 0)) {
                    local_b8 = local_b0 + 0x280;
                    uVar11 = 0;
                    local_94 = (uint)(byte)local_78;
                    do {
                      local_78 = uVar11;
                      lVar8 = FUN_100596915(local_88,uVar11,0);
                      if (lVar8 == 0) {
                        uVar6 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar4 != '\0') {
                          local_4a = "sourceTrackInstance != nullptr";
LAB_100614e0f:
                          local_4c = 0x822;
                          local_54 = "Assertion failure";
                          local_58 = 0x8220202;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
LAB_100614e38:
                        FUN_1001782e9(0,0);
                      }
                      else {
                        if (*(long **)(lVar8 + 8) == (long *)0x0) {
                          uVar6 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar4 != '\0') {
                            local_4a = "sourceTrackInfo != nullptr";
                            goto LAB_100614e0f;
                          }
                          goto LAB_100614e38;
                        }
                        local_90 = *(long **)(lVar8 + 8);
                        local_80 = FUN_10048a4b3();
                        if (local_80 == 0) {
                          uVar6 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar4 != '\0') {
                            local_4a = "sourcePlaylistTrack != nullptr";
                            goto LAB_100614e0f;
                          }
                          goto LAB_100614e38;
                        }
                        local_59 = FUN_1004eb61a(lVar1,lVar8,local_b8);
                        local_a0 = (char *)FUN_1004eb21f(lVar1,lVar8,
                                                         *(undefined1 *)(local_b0 + 0x2b0),local_59,
                                                         *(undefined2 *)(local_b0 + 0x3a6),local_94,
                                                         0,0,0);
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar6 = DAT_1008c75b8;
                        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar4 != '\0') {
                          FUN_100476ac1(local_d8,local_90);
                          local_54 = (char *)FUN_1001b83ae(local_d8);
                          local_58 = 0x8220202;
                          local_4c = 0x800;
                          local_4a = local_a0;
                          __os_log_impl(0x100000000,uVar6,1,
                                        "sync> copying track \"%{public}s\", size = %llu",&local_58,
                                        0x16);
                          FUN_1001b7a50(local_d8);
                        }
                        lVar9 = FUN_1003a790f(local_80,lVar8,local_c0,0,
                                              0x21 - (uint)(local_59 == '\0'));
                        if (lVar9 != 0) {
                          plVar3 = *(long **)(lVar9 + 8);
                          if (plVar3 == (long *)0x0) {
                            uVar6 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar4 != '\0') {
                              local_4a = "destTrackInfo != nullptr";
                              goto LAB_100614e0f;
                            }
                          }
                          else {
                            local_80 = plVar3[0xb];
                            if (local_80 != 0) {
                              if ((*(ushort *)((long)plVar3 + 0xc6) & 4) == 0) {
                                *(ushort *)((long)plVar3 + 0xc6) =
                                     *(ushort *)((long)plVar3 + 0xc6) | 4;
                                FUN_1004729c1(plVar3,0x83);
                              }
                              if ((*plVar3 != *local_90) &&
                                 (FUN_100472be7(plVar3), -1 < *(int *)((long)plVar3 + 0xc2))) {
                                FUN_100472588(plVar3,*local_90,1);
                              }
                              if ((*(char *)(local_80 + 0x45) != '\0') &&
                                 (*(char *)(lVar1 + 0x3a2) != '\0')) {
                                *(long *)(param_1 + 0x3d0) =
                                     (long)(local_a0 + *(long *)(param_1 + 0x3d0));
                              }
                              FUN_1002fe59d(lVar8,local_80);
                              goto LAB_100614d81;
                            }
                            uVar6 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar4 != '\0') {
                              local_4a = "destTrackInstance != nullptr";
                              goto LAB_100614e0f;
                            }
                          }
                          goto LAB_100614e38;
                        }
                        if ((*(byte *)(lVar2 + 0x2be1) & 0x80) != 0) {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar6 = DAT_1008c75b8;
                          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
                          iVar5 = 0;
                          if (cVar4 != '\0') {
                            local_58 = local_58 & 0xffff0000;
                            __os_log_impl(0x100000000,uVar6,1,"sync> copying exceeded free bytes",
                                          &local_58,2);
                          }
                          break;
                        }
LAB_100614d81:
                        iVar5 = FUN_1006020dd(param_1);
                        if (iVar5 != 0) {
                          if (iVar5 != -0x80) {
                            uVar6 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar4 != '\0') {
                              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                              goto LAB_100614976;
                            }
                          }
                          break;
                        }
                      }
                      uVar10 = (int)local_78 + 1;
                      uVar11 = (ulong)uVar10;
                      iVar5 = 0;
                    } while (local_98 != uVar10);
                  }
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar4 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                    goto LAB_1006151ef;
                  }
                }
              }
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1006151ef:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_100614976:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      bVar14 = local_70 != 0;
      FUN_10031c15f(local_a8);
      FUN_10031c2c9(lVar2);
      FUN_100595344(local_88);
      FUN_1002fbbfc(lVar2);
      FUN_100321e5c(lVar2);
      if (bVar14) {
        FUN_1005a47d0(local_70);
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar4 != '\0') {
        dVar15 = (double)FUN_1001ebd46();
        local_54 = (char *)((dVar15 - local_c8) * _DAT_100708b48);
        local_58 = 0x8000100;
        __os_log_impl(0x100000000,uVar6,1,"perf> AutoFillIPodTracks() took %.2f ms",&local_58,0xc);
      }
      goto LAB_100614901;
    }
LAB_1006148d5:
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(destTrackData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar5 = -0x80;
LAB_100614901:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

