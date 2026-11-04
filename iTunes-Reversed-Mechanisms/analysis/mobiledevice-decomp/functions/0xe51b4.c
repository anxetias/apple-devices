// rea decompile_all
// name: _AMRestoreInsertRootsToDmgAndCreatePath
// address: 0xe51b4
// body: available
// range: 0xe51b4-0xe5c9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xe5c99 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMRestoreInsertRootsToDmgAndCreatePath
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  void *pvVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  char **ppcVar5;
  void *pvVar6;
  char **ppcVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  char **ppcVar13;
  long lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined8 local_29a8;
  undefined8 uStack_29a0;
  undefined8 local_2998;
  undefined8 uStack_2990;
  undefined8 local_2988;
  undefined8 uStack_2980;
  undefined8 local_2978;
  undefined8 uStack_2970;
  undefined8 local_2968;
  undefined8 uStack_2960;
  undefined8 local_2958;
  undefined8 uStack_2950;
  long local_2948;
  undefined8 uStack_2940;
  undefined8 local_2938;
  undefined8 uStack_2930;
  undefined8 local_2928;
  undefined8 uStack_2920;
  undefined8 local_2910;
  undefined8 local_2908;
  long local_2900;
  undefined8 local_28f8;
  ulong local_28f0;
  long local_28e8;
  long local_28e0;
  long local_28d8;
  void *local_28d0;
  undefined8 local_28c8;
  char *pcStack_28c0;
  char **local_28b8;
  char *pcStack_28b0;
  char **local_28a8;
  undefined8 uStack_28a0;
  undefined8 local_2898;
  undefined8 uStack_2890;
  undefined8 local_2888;
  undefined8 uStack_2880;
  undefined8 local_2878;
  undefined8 uStack_2870;
  undefined8 local_2868;
  undefined8 uStack_2860;
  undefined8 local_2858;
  undefined8 uStack_2850;
  undefined8 local_2848;
  undefined8 uStack_2840;
  char *local_2838 [128];
  char *local_2438;
  char *local_2430;
  char *local_2428;
  char *local_2420;
  char *local_2418;
  char *local_2410;
  char *local_2408;
  undefined8 local_2400;
  char local_2038 [1024];
  undefined1 local_1c38 [1024];
  char local_1838 [1024];
  char local_1438 [1024];
  char local_1038 [1024];
  char local_c38 [1024];
  undefined1 local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  ___bzero(local_c38,0x400);
  ___bzero(local_1038,0x400);
  ___bzero(local_1438,0x400);
  ___bzero(local_1838,0x400);
  ___bzero(local_1c38,0x400);
  ___bzero(local_2038,0x400);
  local_28f0 = 0;
  local_28e8 = 0;
  cVar3 = _CFStringGetCString(param_1,local_438,0x400,0x8000100);
  if (cVar3 == '\0') {
    pcVar12 = &cf_FailedongettingthesrcdmgUTF8path_;
  }
  else {
    cVar3 = _CFStringGetCString(param_3,local_838,0x400,0x8000100);
    if (cVar3 == '\0') {
      pcVar12 = &cf_FailedongettingthedestinationfolderUTF8path_;
    }
    else {
      local_28e0 = param_4;
      iVar4 = _snprintf(local_c38,0x400,"%s/tmpOS.dmg",local_838);
      if (-1 < iVar4) {
        local_2438 = "/usr/bin/hdiutil";
        local_2430 = "convert";
        local_2428 = "-format";
        local_2420 = "UDRW";
        local_2410 = "-o";
        local_2400 = 0;
        local_2418 = local_438;
        local_2408 = local_c38;
        iVar4 = __AMRestoreExecuteCmd(&local_2438,0,0);
        if (iVar4 != 0) {
          uVar11 = 0;
          _AMRLog(3,&cf_Failedtoconverttheimagein_stoUDRW_status_d_,local_c38,iVar4);
          goto LAB_000e5394;
        }
        local_2908 = param_2;
        local_28f8 = param_3;
        ppcVar5 = (char **)_CFArrayGetCount(param_2);
        if ((long)ppcVar5 < 1) {
          lVar9 = 0;
          pvVar6 = (void *)0x0;
LAB_000e56fc:
          if (local_28e0 == 0) {
            iVar4 = __AMRestoreMountOSImage(local_c38,local_1438,local_1838);
            if (iVar4 == 0) {
LAB_000e585b:
              local_28d8 = lVar9;
              local_28d0 = pvVar6;
              if (0 < (long)ppcVar5) {
                ppcVar13 = (char **)0x0;
                do {
                  iVar4 = _copyfile(*(char **)((long)pvVar6 + (long)ppcVar13 * 8),local_1438,
                                    (copyfile_state_t)0x0,0xc800f);
                  uVar11 = *(undefined8 *)((long)pvVar6 + (long)ppcVar13 * 8);
                  if (iVar4 < 0) {
                    _AMRLog(3,&cf_Failedtocopytheroot_stothemountedpath_status_d_,uVar11,iVar4);
                    local_2438 = "/usr/bin/hdiutil";
                    local_2430 = "detach";
                    local_2428 = local_1838;
                    local_2420 = (char *)0x0;
                    iVar4 = __AMRestoreExecuteCmd(&local_2438,0,0);
                    if (iVar4 != 0) {
                      _AMRLog(4,&cf_Failedinthelastchancetodetachtheimagein_s_status_d_,local_c38,
                              iVar4);
                    }
                    uVar11 = 0;
                    lVar9 = local_28d8;
                    pvVar6 = local_28d0;
                    goto LAB_000e5c00;
                  }
                  _AMRLog(6,&cf_Copiedtheroot_stothemountedpath_s_,uVar11,local_1438);
                  ppcVar13 = (char **)((long)ppcVar13 + 1);
                } while (ppcVar5 != ppcVar13);
              }
              local_2438 = "/usr/bin/hdiutil";
              local_2430 = "detach";
              local_2428 = local_1838;
              local_2420 = (char *)0x0;
              iVar4 = __AMRestoreExecuteCmd(&local_2438,0,0);
              if (iVar4 != 0) {
                _AMRLog(4,&cf_Failedtodetachtheimagein_s_status_d_,local_c38,iVar4);
              }
              iVar4 = _snprintf(local_1038,0x400,"%s/finalOS.dmg",local_838);
              pvVar6 = local_28d0;
              lVar9 = local_28d8;
              if (iVar4 < 0) {
                pcVar12 = &cf_Failedcreatingcompressedtargetfilepath;
                goto LAB_000e5ab1;
              }
              if (local_28e0 == 0) {
                pcVar8 = (char *)0x0;
              }
              else {
                pcVar8 = local_2038;
              }
              iVar4 = __AMRestoreConvertDmgToUDZO(local_c38,local_1038,pcVar8);
              if (iVar4 == 0) {
                uVar11 = _CFStringCreateWithFormat
                                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf__s,
                                    local_1038);
                goto LAB_000e5bfb;
              }
              pcVar12 = &cf_Failedtoconverttheimagein_stoUDZO_status_d_;
              pcVar8 = local_1038;
            }
            else {
              pcVar12 = &cf_Mountingthewritableimagein_sfailed_status_d_;
              pcVar8 = local_c38;
            }
            uVar11 = 0;
            _AMRLog(3,pcVar12,pcVar8,iVar4);
          }
          else {
            _CFStringGetCString(local_28e0,local_1c38,0x400,0x8000100);
            iVar4 = _snprintf(local_2038,0x400,"%s/tmpOS.shadow.dmg",local_838);
            if (iVar4 < 0) {
              pcVar12 = &cf_Failedcreatingtargetshadowfilepath;
            }
            else {
              iVar4 = __AMRestoreMountBaseSystemImage(local_c38,local_838,local_2038,local_1838);
              if (iVar4 != 0) {
                uVar11 = 0;
                _AMRLog(3,&cf_Mountingthewritableimagein_sfailedforvolume_s_status_d_,local_c38,
                        local_1c38,iVar4);
                goto LAB_000e5bfb;
              }
              iVar4 = _snprintf(local_1438,0x400,"%s/%s",local_838,local_1c38);
              if (-1 < iVar4) goto LAB_000e585b;
              pcVar12 = &cf_Failedcreatingtargetmountpath;
            }
LAB_000e5ab1:
            uVar11 = 0;
            _AMRLog(3,pcVar12);
          }
LAB_000e5bfb:
          if (pvVar6 != (void *)0x0) goto LAB_000e5c00;
        }
        else {
          pvVar6 = _calloc((size_t)ppcVar5,8);
          if (pvVar6 == (void *)0x0) {
            pcVar12 = &cf_Failedtocreaterootpatharray;
            goto LAB_000e5385;
          }
          ppcVar13 = (char **)0x0;
          lVar14 = 0;
          local_28d0 = pvVar6;
          do {
            ___bzero(&local_2438,0x400);
            ___bzero(local_2838,0x400);
            local_2928 = 0;
            uStack_2920 = 0;
            local_2938 = 0;
            uStack_2930 = 0;
            local_2948 = 0;
            uStack_2940 = 0;
            local_2958 = 0;
            uStack_2950 = 0;
            local_2968 = 0;
            uStack_2960 = 0;
            local_2978 = 0;
            uStack_2970 = 0;
            local_2988 = 0;
            uStack_2980 = 0;
            local_2998 = 0;
            uStack_2990 = 0;
            local_29a8 = 0;
            uStack_29a0 = 0;
            ppcVar7 = (char **)_CFArrayGetValueAtIndex(local_2908,ppcVar13);
            if (ppcVar7 == (char **)0x0) {
              pcVar12 = &cf_Failedtogettherootoverlaypathforroot_ld_;
              ppcVar7 = ppcVar13;
LAB_000e599c:
              _AMRLog(3,pcVar12,ppcVar7);
LAB_000e59a6:
              uVar11 = 0;
              lVar9 = 0;
              pvVar6 = local_28d0;
              goto LAB_000e5bfb;
            }
            cVar3 = _AMRestoreGetFileSystemRepresentation(ppcVar7,&local_2438,0x400);
            if (cVar3 == '\0') {
              pcVar12 = &cf_failedtotranslatetherootpath__toUTF8_;
              goto LAB_000e599c;
            }
            _stat_INODE64(&local_2438,&local_29a8);
            local_28d8 = local_2948;
            if (SBORROW2(0,local_29a8._4_2_ & 0xf000)) {
              local_2900 = lVar14;
              iVar4 = _snprintf((char *)local_2838,0x400,"%s/overlayRoot%ld/",local_838,ppcVar13);
              if (iVar4 < 0) {
                pcVar12 = &cf_Failedcreatingoverlayroot__unarchivedpath_;
              }
              else {
                iVar4 = _mkdir((char *)local_2838,0x1ff);
                if (iVar4 == 0) {
                  local_28c8 = "/usr/bin/tar";
                  pcStack_28c0 = "-vxf";
                  pcStack_28b0 = "-C";
                  uStack_28a0 = 0;
                  local_28b8 = &local_2438;
                  local_28a8 = local_2838;
                  iVar4 = __AMRestoreExecuteCmd(&local_28c8,0,0);
                  if (iVar4 == 0) {
                    _AMRLog(6,&cf_unarchived_sto_s,&local_2438,local_2838);
                    _strncpy((char *)&local_2438,(char *)local_2838,0x400);
                    local_2848 = 0;
                    uStack_2840 = 0;
                    local_2858 = 0;
                    uStack_2850 = 0;
                    local_2868 = 0;
                    uStack_2860 = 0;
                    local_2878 = 0;
                    uStack_2870 = 0;
                    local_2888 = 0;
                    uStack_2880 = 0;
                    local_2898 = 0;
                    uStack_2890 = 0;
                    local_28a8 = (char **)0x0;
                    uStack_28a0 = 0;
                    local_28b8 = (char **)0x0;
                    pcStack_28b0 = (char *)0x0;
                    local_28c8 = (char *)0x0;
                    pcStack_28c0 = (char *)0x0;
                    _stat_INODE64(local_2838,&local_28c8);
                    lVar14 = local_2900;
                    if ((local_28c8._4_2_ & 0xf000) == 0x4000) {
                      local_2910 = 0;
                      local_28d8 = _get_directory_size(local_2838,&local_2910,0);
                      lVar14 = local_2900;
                    }
                    goto LAB_000e5646;
                  }
                  _AMRLog(3,&cf_Failedtoun_tarthefile_s__d_,&local_2438,iVar4);
                  _AMRLog(3,&cf_Failedtountarthefile_sto_s,&local_2438,local_2838);
                  goto LAB_000e59a6;
                }
                pcVar12 = &cf_mkdirof_sfailed_;
                ppcVar7 = local_2838;
              }
              goto LAB_000e599c;
            }
LAB_000e5646:
            pcVar8 = _malloc(0x400);
            *(char **)((long)local_28d0 + (long)ppcVar13 * 8) = pcVar8;
            if (pcVar8 == (char *)0x0) {
              _AMRLog(3,&cf_Failedtocreaterootpath);
              goto LAB_000e59a6;
            }
            _strncpy(pcVar8,(char *)&local_2438,0x400);
            lVar14 = lVar14 + local_28d8;
            ppcVar13 = (char **)((long)ppcVar13 + 1);
          } while (ppcVar5 != ppcVar13);
          lVar9 = _CFStringCreateWithFormat
                            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,&cf____tmpOS_dmg,
                             local_28f8);
          if (lVar9 == 0) {
            pcVar12 = &cf_Failedtocreatefilestringpath;
            lVar9 = 0;
LAB_000e5a86:
            _AMRLog(3,pcVar12);
LAB_000e5a92:
            uVar11 = 0;
            pvVar6 = local_28d0;
          }
          else {
            iVar4 = __AMRestoreGetDiskImageFileSizeUsingDiskutil(lVar9,&local_28f0,0,&local_28e8);
            pvVar6 = local_28d0;
            uVar2 = local_28f0;
            if (iVar4 == 0) {
              lVar14 = lVar14 + local_28e8;
              auVar16._8_4_ = (int)((ulong)lVar14 >> 0x20);
              auVar16._0_8_ = lVar14;
              auVar16._12_4_ = 0x45300000;
              dVar15 = (((double)CONCAT44(0x43300000,(int)lVar14) - 4503599627370496.0) +
                       (auVar16._8_8_ - 1.9342813113834067e+25)) * 1.25;
              uVar10 = (ulong)dVar15;
              uVar10 = (long)(dVar15 - 9.223372036854776e+18) & (long)uVar10 >> 0x3f | uVar10;
              if (local_28f0 < uVar10) {
                local_2838[0] = (char *)0x0;
                _asprintf(local_2838,"%llu",uVar10);
                if (local_2838[0] == (char *)0x0) {
                  pcVar12 = &cf_Failedtocreatetherequiredsizestring;
                  goto LAB_000e5a86;
                }
                local_2438 = "/usr/bin/hdiutil";
                local_2430 = "resize";
                local_2428 = "-size";
                local_2420 = local_2838[0];
                local_2418 = local_c38;
                local_2410 = (char *)0x0;
                iVar4 = __AMRestoreExecuteCmd(&local_2438,0,0);
                _free(local_2838[0]);
                if (iVar4 != 0) {
                  _AMRLog(3,&cf_Failedtoresizetheimage_sto_lluwithresult_u,local_c38,uVar10,iVar4);
                  goto LAB_000e5a92;
                }
              }
              _AMRLog(4,&cf_Thedmgoriginalfilesizeis_lluwithused_lluandresizedto_llu,uVar2,
                      local_28e8,uVar10);
              pvVar6 = local_28d0;
              goto LAB_000e56fc;
            }
            uVar11 = 0;
            _AMRLog(3,&cf_Failedtogetimagefilesize);
          }
LAB_000e5c00:
          if (0 < (long)ppcVar5) {
            ppcVar13 = (char **)0x0;
            do {
              pvVar1 = *(void **)((long)pvVar6 + (long)ppcVar13 * 8);
              if (pvVar1 != (void *)0x0) {
                _free(pvVar1);
              }
              ppcVar13 = (char **)((long)ppcVar13 + 1);
            } while (ppcVar5 != ppcVar13);
          }
          _free(pvVar6);
        }
        if (lVar9 != 0) {
          _CFRelease(lVar9);
        }
        goto LAB_000e5394;
      }
      pcVar12 = &cf_Failedcreatingtargetfilepath;
    }
  }
LAB_000e5385:
  uVar11 = 0;
  _AMRLog(3,pcVar12);
LAB_000e5394:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

