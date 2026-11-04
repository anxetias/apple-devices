// rea decompile_all
// name: _hardlink_copy_hierarchy
// address: 0xabc30
// body: available
// range: 0xabc30-0xad2b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xad2b0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_hardlink_copy_hierarchy
          (char *param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5,void *param_6,
          undefined8 param_7,undefined8 param_8,long *param_9,long *param_10)

{
  mode_t mVar1;
  char *pcVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  char *pcVar10;
  ulong uVar11;
  ssize_t sVar12;
  long lVar13;
  long *plVar14;
  cfstringStruct *pcVar15;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  int *extraout_RDX_05;
  int *extraout_RDX_06;
  cfstringStruct *pcVar16;
  cfstringStruct *extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 uVar17;
  undefined8 uVar18;
  qword qVar19;
  char *pcVar20;
  long lVar21;
  ulong *puVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  ulong local_13a8 [19];
  long local_1310;
  int *local_1308;
  size_t local_1300;
  int local_12f8;
  undefined2 local_12f4;
  undefined8 local_12f0;
  void *local_12e8;
  long *local_12e0;
  char *local_12d8;
  long local_12d0;
  char *local_12c8;
  undefined8 local_12c0;
  char local_12b8;
  undefined1 local_12b7 [1039];
  undefined1 local_ea8 [1024];
  char local_aa8 [1024];
  long local_6a8 [8];
  undefined1 local_668;
  char local_658 [16];
  ulong local_648 [64];
  cfstringStruct local_448 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_12f0 = param_5;
  local_12e8 = param_6;
  ___bzero(local_aa8,0x400);
  ___bzero(local_ea8,0x400);
  ___bzero(&local_12b8,0x410);
  local_12c0 = 0;
  local_12c8 = param_1;
  lVar8 = _fts_open_b_INODE64(&local_12c8,0x55,&___block_literal_global);
  if (lVar8 != 0) {
    local_12d8 = param_3;
    if (param_3 == (char *)0x0) {
      ___bzero(local_448,0x400);
      auVar24 = ___strlcpy_chk(local_448,param_2,0x400,0x400);
      uVar17 = auVar24._8_8_;
      if (auVar24._0_8_ < 0x400) {
        local_13a8[0] = local_13a8[0] & 0xffffffffffff0000;
        local_648[0] = 0;
        cVar3 = _realpath_parent_no_symlink(local_448,local_ea8);
        if (cVar3 == '\0') {
          lVar13 = __CreateAndLogDMError
                             ("hardlink_copy_hierarchy",0x312,extraout_RDX,
                              &cf_Failedtorealpathparentof_s,local_648[0]);
          uVar11 = local_648[0];
          if (local_648[0] == 0) goto LAB_000ac6b8;
          goto LAB_000ac6b3;
        }
        if (((ushort)local_13a8[0] & 0xf000) == 0x4000 || (ushort)local_13a8[0] == 0) {
          plVar14 = (long *)0x0;
          local_12f0 = (char *)((ulong)local_12f0 & 0xffffffff00000000);
          goto LAB_000abf0e;
        }
        pcVar15 = &cf_Entityexistsat_sbutit_snotadirectory;
        uVar18 = 0x318;
        uVar17 = extraout_RDX;
      }
      else {
        pcVar15 = &cf_Destinationpathwastoolong;
        uVar18 = 0x30b;
      }
      lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",uVar18,uVar17,pcVar15,0);
    }
    else {
      local_12d0 = lVar8;
      lVar8 = _realpath_DARWIN_EXTSN(param_2,local_ea8);
      if (lVar8 != 0) {
        local_13a8[0x10] = 0;
        local_13a8[0x11] = 0;
        local_13a8[0xe] = 0;
        local_13a8[0xf] = 0;
        local_13a8[0xc] = 0;
        local_13a8[0xd] = 0;
        local_13a8[10] = 0;
        local_13a8[0xb] = 0;
        local_13a8[8] = 0;
        local_13a8[9] = 0;
        local_13a8[6] = 0;
        local_13a8[7] = 0;
        local_13a8[4] = 0;
        local_13a8[5] = 0;
        local_13a8[2] = 0;
        local_13a8[3] = 0;
        local_13a8[0] = 0;
        local_13a8[1] = 0;
        iVar5 = _open(local_12d8,0x100);
        if (iVar5 < 0) {
          piVar9 = ___error();
          pcVar10 = _strerror(*piVar9);
          uVar11 = __CreateAndLogDMError
                             ("open_delta_manifest",0x1a0,&cf_Couldnotopen_s__s,pcVar10,0);
          lVar8 = local_12d0;
          goto LAB_000ac684;
        }
        iVar6 = _fstat_INODE64(iVar5,local_13a8);
        if (iVar6 == 0) {
          lVar13 = _mmap(0,local_13a8[0xc],1,0x402,iVar5,0);
          if (lVar13 == -1) {
            piVar9 = ___error();
            pcVar10 = _strerror(*piVar9);
            pcVar15 = &cf_Failedtomapfileat_s_error_s;
            uVar17 = 0x1b3;
            goto LAB_000abd9f;
          }
          iVar6 = _madvise(lVar13,local_13a8[0xc],2);
          if (iVar6 != 0) {
            piVar9 = ___error();
            pcVar10 = _strerror(*piVar9);
            _dmlog("open_delta_manifest",0x1b8,&cf_madvisefailed__s,pcVar10);
          }
          plVar14 = _calloc(1,0x18);
          if (plVar14 != (long *)0x0) {
            local_1300 = CONCAT44(local_1300._4_4_,iVar5);
            *plVar14 = lVar13;
            plVar14[1] = local_13a8[0xc];
            plVar14[2] = 0;
            ___bzero(local_448,0x200);
            ___bzero(local_648);
            local_12f4 = 0;
            local_12f8 = 0;
            local_658[8] = '\0';
            local_658[9] = '\0';
            local_658[0] = '\0';
            local_658[1] = '\0';
            local_658[2] = '\0';
            local_658[3] = '\0';
            local_658[4] = '\0';
            local_658[5] = '\0';
            local_658[6] = '\0';
            local_658[7] = '\0';
            local_12e0 = plVar14;
            cVar3 = _read_string_to_terminator(plVar14,0,&local_12f8,6);
            lVar8 = local_12d0;
            local_1310 = lVar13;
            if (cVar3 == '\0') {
              uVar17 = 299;
              goto LAB_000ac93f;
            }
            if ((char)local_12f4 == '\0' && local_12f8 == 0x44617069) {
              cVar3 = _read_string_to_terminator(local_12e0,0,local_658,10);
              if (cVar3 == '\0') {
                pcVar15 = &cf_Failedtoreadversionfrommanifestheader;
                uVar17 = 0x136;
                piVar9 = extraout_RDX_05;
              }
              else {
                piVar9 = (int *)_strtol(local_658,(char **)0x0,10);
                if (piVar9 + -1 < (int *)0xfffffffffffffffd) {
                  pcVar15 = &cf_Manifesthadinvalidversion__ld_expected1_2_or3;
                  uVar17 = 0x13e;
                }
                else {
                  local_1308 = piVar9;
                  cVar3 = _read_string_to_terminator(local_12e0,0,local_448,0x200);
                  if (cVar3 != '\0') {
                    bVar23 = param_4 != (char *)0x0;
                    if (!bVar23) {
                      local_12f0 = "";
                    }
                    pcVar10 = "0";
                    if (bVar23) {
                      pcVar10 = param_4;
                    }
                    pcVar20 = " ";
                    if (!bVar23) {
                      pcVar20 = "";
                    }
                    if (local_12f0 == (char *)0x0) {
                      local_12f0 = "";
                    }
                    puVar22 = local_648;
                    pcVar2 = local_12f0;
                    local_12f0 = pcVar10;
                    uVar7 = _snprintf((char *)puVar22,0x200,"%s%s%s",pcVar10,pcVar20,pcVar2);
                    if (uVar7 < 0x200) {
                      do {
                        if ((char)*puVar22 == '\n') {
                          *(char *)puVar22 = ' ';
                        }
                        else if ((char)*puVar22 == '\0') goto LAB_000acf86;
                        puVar22 = (ulong *)((long)puVar22 + 1);
                      } while( true );
                    }
                    uVar17 = 0x15e;
                    goto LAB_000acfc7;
                  }
                  pcVar15 = &cf_Failedtoreadmanifestsourceversion;
                  uVar17 = 0x143;
                  piVar9 = extraout_RDX_06;
                }
              }
            }
            else {
              pcVar15 = &cf_Streamhadinvalidmagic__s;
              uVar17 = 0x131;
              piVar9 = &local_12f8;
            }
            auVar24 = __CreateAndLogDMError("validate_stream",uVar17,piVar9,pcVar15,0);
            goto LAB_000acaab;
          }
          uVar11 = __CreateAndLogDMError("open_delta_manifest",0x1be);
          _munmap(lVar13,local_13a8[0xc]);
        }
        else {
          piVar9 = ___error();
          pcVar10 = _strerror(*piVar9);
          pcVar15 = &cf_Couldnotstat_s__s;
          uVar17 = 0x1a5;
LAB_000abd9f:
          uVar11 = __CreateAndLogDMError("open_delta_manifest",uVar17,pcVar15,pcVar10,0);
        }
        _close(iVar5);
        lVar8 = local_12d0;
        goto LAB_000ac684;
      }
      piVar9 = ___error();
      pcVar10 = _strerror(*piVar9);
      lVar13 = __CreateAndLogDMError
                         ("hardlink_copy_hierarchy",0x2f0,&cf_realpathof__s_failedatelement__s___s,
                          pcVar10,0);
      lVar8 = local_12d0;
    }
    goto LAB_000ac6b8;
  }
  piVar9 = ___error();
  pcVar10 = _strerror(*piVar9);
  lVar13 = __CreateAndLogDMError
                     ("hardlink_copy_hierarchy",0x2ea,&cf_fts_openof_sfailed__s,pcVar10,0);
  goto LAB_000ac6c0;
LAB_000acf86:
  iVar5 = _strcmp((char *)local_648,(char *)local_448);
  if (iVar5 == 0) {
    if ((long)local_1308 < 2) {
LAB_000ad1cb:
      _close((int)local_1300);
      local_448[0].field0_0x0 = 0;
      auVar24 = _read_next_manifest_command(local_12e0,&local_12b8);
      if (auVar24[0] != '\0') {
        local_12f0 = (char *)CONCAT44(local_12f0._4_4_,
                                      (int)CONCAT71(auVar24._1_7_,local_12b8 != 'x'));
        plVar14 = local_12e0;
        lVar8 = local_12d0;
LAB_000abf0e:
        local_1300 = _strlen(param_1);
        local_12d0 = lVar8;
        auVar24 = _fts_read_INODE64(lVar8);
        uVar17 = auVar24._8_8_;
        lVar8 = auVar24._0_8_;
        local_12e0 = plVar14;
        if (lVar8 != 0) {
          local_12e8 = (void *)0x0;
LAB_000abf58:
          local_aa8[0] = '\0';
          uVar4 = *(ushort *)(lVar8 + 0x58);
          lVar13 = 0;
          bVar23 = false;
          if ((uVar4 < 0xe) && ((0x314aU >> (uVar4 & 0x1f) & 1) != 0)) {
            lVar13 = (ulong)(*(char *)(*(long *)(lVar8 + 0x30) + local_1300) == '/') +
                     *(long *)(lVar8 + 0x30) + local_1300;
            if (((uVar4 != 6 & (byte)local_12f0) == 1) &&
               (iVar5 = __utf_aware_strcmp(local_12b7,lVar13), iVar5 == 0)) {
              bVar23 = true;
              cVar3 = _verbose();
              if (cVar3 != '\0') {
                _dmlog("hardlink_copy_hierarchy",0x336,&cf_Command__c_withpath_smatchedrelpath_s,
                       local_12b8,local_12b7,lVar13);
              }
            }
            else {
              bVar23 = false;
            }
            uVar4 = *(ushort *)(lVar8 + 0x58);
          }
          switch(uVar4) {
          case 1:
            if ((bVar23) && ((local_12b8 == '-' || (local_12b8 == '+')))) {
              iVar5 = _fts_set_INODE64(local_12d0,lVar8,4);
              if (iVar5 == 0) {
                cVar3 = _verbose();
                if (cVar3 != '\0') {
                  _dmlog("hardlink_copy_hierarchy",0x3f8,&cf_Skippingdirectory_s,lVar13);
                }
                goto LAB_000ac514;
              }
              piVar9 = ___error();
              pcVar10 = _strerror(*piVar9);
              pcVar15 = &cf_Failedtoskipdirectory_s__s;
              uVar17 = 0x3f4;
              goto LAB_000acb33;
            }
            local_648[0] = (ulong)local_648[0]._2_6_ << 0x10;
            local_448[0].field0_0x0 = 0;
            cVar3 = _make_and_check_dest_path(local_ea8,lVar13,local_aa8,local_648,local_448);
            if (cVar3 == '\0') {
              pcVar15 = &cf_Failedtomakedestpathfordirectory_s;
              uVar18 = 0x3ff;
              uVar17 = extraout_RDX_02;
LAB_000acea7:
              lVar13 = __CreateAndLogDMError
                                 ("hardlink_copy_hierarchy",uVar18,uVar17,pcVar15,
                                  local_448[0].field0_0x0);
              qVar19 = local_448[0].field0_0x0;
              goto LAB_000acebf;
            }
            pcVar15 = (cfstringStruct *)(local_648[0] & 0xffff);
            if (((ushort)local_648[0] & 0xf000) == 0x4000 || (ushort)local_648[0] == 0) {
              if ((ushort)local_648[0] == 0) {
                cVar3 = _verbose();
                if (cVar3 != '\0') {
                  _dmlog("hardlink_copy_hierarchy",0x40b,&cf_Makingdirectory_s,local_aa8);
                }
                iVar5 = _mkdir(local_aa8,*(ushort *)(*(long *)(lVar8 + 0x60) + 4) | 0x80);
                if (iVar5 == 0) goto switchD_000abfe5_caseD_2;
                piVar9 = ___error();
                pcVar15 = (cfstringStruct *)_strerror(*piVar9);
                pcVar16 = &cf_mkdirof__s_failed__s;
                uVar17 = 0x40e;
              }
              else {
                uVar4 = (ushort)*(undefined4 *)(*(long *)(lVar8 + 0x60) + 4);
                if (((ushort)local_648[0] == (uVar4 | 0x80)) ||
                   (iVar5 = _chmod(local_aa8,uVar4 | 0x80), iVar5 == 0)) {
switchD_000abfe5_caseD_2:
                  goto LAB_000ac508;
                }
                piVar9 = ___error();
                pcVar15 = (cfstringStruct *)_strerror(*piVar9);
                pcVar16 = &cf_Failedtomakedestinationdirectory__s_writable__s;
                uVar17 = 0x413;
              }
            }
            else {
              pcVar16 = &cf_Non_directoryentitywithmode0_oexistsatdirectorylocationindestpath_s;
              uVar17 = 0x406;
            }
LAB_000acf0b:
            lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",uVar17,pcVar16,pcVar15,0);
            lVar21 = local_12d0;
            break;
          default:
            goto switchD_000abfe5_caseD_2;
          case 3:
          case 8:
            if (!(bool)(local_12b8 == '^' & bVar23)) {
              if ((bVar23) && ((local_12b8 == '-' || (local_12b8 == '+')))) {
                cVar3 = _verbose();
                if (cVar3 != '\0') {
                  _dmlog("hardlink_copy_hierarchy",0x3c9,&cf_Skippinglinkcreationfor_s,lVar13);
                }
                goto LAB_000ac4eb;
              }
              local_648[0] = (ulong)local_648[0]._2_6_ << 0x10;
              local_448[0].field0_0x0 = 0;
              cVar3 = _make_and_check_dest_path(local_ea8,lVar13,local_aa8,local_648,local_448);
              if (cVar3 == '\0') {
                pcVar15 = &cf_Failedtomakedestpathforfile_s;
                uVar18 = 0x3cf;
                uVar17 = extraout_RDX_03;
                goto LAB_000acea7;
              }
              pcVar15 = (cfstringStruct *)(local_648[0] & 0xffff);
              if ((ushort)local_648[0] == 0) {
                cVar3 = _verbose();
                if (cVar3 != '\0') {
                  _dmlog("hardlink_copy_hierarchy",0x3da,&cf_Hardlinking_sto_s,
                         *(undefined8 *)(lVar8 + 0x30));
                }
                iVar5 = _link(*(char **)(lVar8 + 0x30),local_aa8);
                plVar14 = local_12e0;
                if (iVar5 != 0) {
                  uVar17 = *(undefined8 *)(lVar8 + 0x30);
                  piVar9 = ___error();
                  pcVar10 = _strerror(*piVar9);
                  _dmlog("hardlink_copy_hierarchy",0x3dd,&cf_linkof_sto_sfailed__s,uVar17,local_aa8,
                         pcVar10);
                  iVar5 = _copyfile(*(char **)(lVar8 + 0x30),local_aa8,(copyfile_state_t)0x0,0xc000f
                                   );
                  plVar14 = local_12e0;
                  if (iVar5 != 0) {
                    piVar9 = ___error();
                    pcVar15 = (cfstringStruct *)_strerror(*piVar9);
                    pcVar16 = &cf_copyfileof_sto_sfailed__s;
                    uVar17 = 0x3df;
                    goto LAB_000acf0b;
                  }
                }
LAB_000ac4eb:
                local_12e8 = (void *)((long)local_12e8 + *(long *)(*(long *)(lVar8 + 0x60) + 0x68));
                goto switchD_000abfe5_caseD_2;
              }
              pcVar16 = &cf_Entitywithmode0_oexistsatfilelocationindestpath_s;
              uVar17 = 0x3d6;
              goto LAB_000acf0b;
            }
            local_13a8[0] = (ulong)local_13a8[0]._2_6_ << 0x10;
            ___bzero(local_448,0x400);
            local_648[0] = 0;
            cVar3 = _make_and_check_dest_path(local_ea8,lVar13,local_aa8,local_13a8,local_648);
            if (cVar3 == '\0') {
              lVar13 = __CreateAndLogDMError
                                 ("hardlink_copy_hierarchy",0x372,extraout_RDX_00,
                                  &cf_Failedtomakedestpathforfile_s,local_648[0]);
              lVar21 = local_12d0;
              iVar5 = -1;
              if (local_648[0] != 0) {
                _CFRelease();
              }
            }
            else {
              mVar1 = (ushort)local_13a8[0];
              if ((ushort)local_13a8[0] == 0) {
                pcVar15 = &cf_Entitydoesnotexistatfilelocationindestpath_s;
                uVar17 = 0x379;
LAB_000acd4f:
                lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",uVar17,local_aa8,pcVar15,0)
                ;
              }
              else {
                uVar7 = _snprintf((char *)local_448,0x400,"%s.XXXXXX",local_aa8);
                if (0x3ff < uVar7) {
                  pcVar15 = &cf_failedtomakenewfilepath__s_XXXXXXX;
                  uVar17 = 0x37e;
                  goto LAB_000acd4f;
                }
                iVar5 = _mkstemp((char *)local_448);
                if (iVar5 != -1) {
                  iVar6 = _patch_file(*(undefined8 *)(lVar8 + 0x30),local_aa8,iVar5);
                  if (iVar6 == 0) {
                    iVar6 = _fchmod(iVar5,mVar1);
                    if (iVar6 == 0) {
                      _close(iVar5);
                      iVar5 = _rename((char *)local_448,local_aa8);
                      plVar14 = local_12e0;
                      if (iVar5 == 0) goto LAB_000ac4eb;
                      piVar9 = ___error();
                      pcVar10 = _strerror(*piVar9);
                      pcVar15 = &cf_renameof_sto_sfailed__s;
                      uVar17 = 0x3b4;
                      goto LAB_000ace35;
                    }
                    piVar9 = ___error();
                    _strerror(*piVar9);
                    pcVar15 = &cf_chmodfailedfor_s__s;
                    uVar17 = 0x3ab;
                    pcVar16 = local_448;
                  }
                  else {
                    pcVar16 = &cf_patch_filefailedfor__s_s_s;
                    uVar17 = 0x3a6;
                    pcVar15 = local_448;
                  }
                  lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",uVar17,pcVar15,pcVar16,0)
                  ;
                  lVar21 = local_12d0;
                  goto LAB_000acf23;
                }
                piVar9 = ___error();
                pcVar10 = _strerror(*piVar9);
                pcVar15 = &cf_mktempfailedfor_s__s;
                uVar17 = 899;
LAB_000ace35:
                lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",uVar17,pcVar15,pcVar10,0);
              }
              iVar5 = -1;
              lVar21 = local_12d0;
            }
            goto LAB_000acf23;
          case 4:
          case 7:
          case 10:
            pcVar10 = (char *)(ulong)*(uint *)(lVar8 + 0x38);
            pcVar15 = &cf_FTSin_sreturnedanerror_dforpath__s_;
            uVar17 = 0x436;
LAB_000acb33:
            lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",uVar17,pcVar15,pcVar10,0);
            goto LAB_000acb45;
          case 6:
            local_448[0].field0_0x0 = local_448[0].field0_0x0 & 0xffffffffffff0000;
            cVar3 = _make_and_check_dest_path(local_ea8,lVar13,local_aa8,local_448,0);
            qVar19 = local_448[0].field0_0x0;
            plVar14 = local_12e0;
            if (cVar3 != '\0') {
              if ((((ushort)local_448[0].field0_0x0 & 0xf000) == 0x4000) &&
                 (*(ushort *)(*(long *)(lVar8 + 0x60) + 4) != (ushort)local_448[0].field0_0x0)) {
                cVar3 = _verbose();
                if (cVar3 != '\0') {
                  _dmlog("hardlink_copy_hierarchy",0x421,&cf_Settingfinalpermsof_sto0_o,local_aa8);
                }
                iVar5 = _chmod(local_aa8,*(mode_t *)(*(long *)(lVar8 + 0x60) + 4));
                plVar14 = local_12e0;
                if (iVar5 != 0) {
                  piVar9 = ___error();
                  pcVar10 = _strerror(*piVar9);
                  pcVar15 = &cf_chmodof__s_failed__s;
                  uVar17 = 0x424;
                  goto LAB_000acb33;
                }
              }
              else {
                cVar3 = _verbose();
                plVar14 = local_12e0;
                if (cVar3 != '\0') {
                  _dmlog("hardlink_copy_hierarchy",0x428,
                         &cf_Skippingpost_traversaldirectoryfixupforentitytype0_oatpath_s,
                         qVar19 & 0xffff);
                  plVar14 = local_12e0;
                }
              }
            }
LAB_000ac508:
            lVar21 = local_12d0;
            pcVar10 = local_12d8;
            if (bVar23) {
LAB_000ac514:
              lVar21 = local_12d0;
              pcVar10 = local_12d8;
              local_448[0].field0_0x0 = 0;
              cVar3 = _read_next_manifest_command(plVar14,&local_12b8,local_448);
              if (cVar3 == '\0') {
                lVar13 = __CreateAndLogDMError
                                   ("hardlink_copy_hierarchy",0x446,extraout_RDX_04,
                                    &cf_Failedtoreadnextmanifestcommand,local_448[0].field0_0x0);
                if (local_448[0].field0_0x0 == 0) break;
                goto LAB_000acecb;
              }
              if (local_12b8 == 'x') {
                cVar3 = _verbose();
                if (cVar3 == '\0') {
                  local_12f0 = (char *)((ulong)local_12f0._4_4_ << 0x20);
                }
                else {
                  local_12f0 = (char *)((ulong)local_12f0._4_4_ << 0x20);
                  _dmlog("hardlink_copy_hierarchy",0x44f,&cf_HitEOFsoterminatingmanifestprocessing);
                }
              }
            }
            auVar24 = _fts_read_INODE64(lVar21);
            uVar17 = auVar24._8_8_;
            lVar8 = auVar24._0_8_;
            if (lVar8 == 0) goto LAB_000ac9cb;
            goto LAB_000abf58;
          case 0xc:
          case 0xd:
            if ((bVar23) && ((local_12b8 == '+' || (local_12b8 == '-')))) goto LAB_000ac4eb;
            local_13a8[0] = (ulong)local_13a8[0]._2_6_ << 0x10;
            local_648[0] = 0;
            cVar3 = _make_and_check_dest_path(local_ea8,lVar13,local_aa8,local_13a8,local_648);
            if (cVar3 != '\0') {
              pcVar15 = (cfstringStruct *)(local_13a8[0] & 0xffff);
              if ((ushort)local_13a8[0] != 0) {
                pcVar16 = &cf_Entitywithmode0_oexistsatsymlinklocationindestpath_s;
                uVar17 = 0x357;
                goto LAB_000acf0b;
              }
              cVar3 = _verbose();
              if (cVar3 != '\0') {
                _dmlog("hardlink_copy_hierarchy",0x35b,&cf_Copyingsymlink_sto_s,
                       *(undefined8 *)(lVar8 + 0x30),local_aa8);
              }
              pcVar10 = *(char **)(lVar8 + 0x30);
              cVar3 = _verbose();
              if (cVar3 != '\0') {
                _dmlog("_copy_symlink",0x283,&cf_Copyingsymlink_sto_s,pcVar10,local_aa8);
              }
              sVar12 = _readlink(pcVar10,(char *)local_448,0x400);
              if (sVar12 < 0) {
                piVar9 = ___error();
                pcVar20 = _strerror(*piVar9);
                pcVar15 = &cf_Can_treadsymlink_s__s;
                uVar17 = 0x287;
              }
              else {
                *(undefined1 *)((long)&local_448[0].field0_0x0 + sVar12) = 0;
                iVar5 = _symlink((char *)local_448,local_aa8);
                plVar14 = local_12e0;
                if (iVar5 == 0) goto LAB_000ac4eb;
                piVar9 = ___error();
                pcVar20 = _strerror(*piVar9);
                pcVar15 = &cf_Can_tcreatesymlink_s__s;
                pcVar10 = local_aa8;
                uVar17 = 0x28c;
              }
              _dmlog("_copy_symlink",uVar17,pcVar15,pcVar10,pcVar20);
              pcVar15 = &cf_Failedtocopysymlink_sto_s;
              uVar17 = 0x35e;
              pcVar16 = extraout_RDX_07;
              goto LAB_000acf0b;
            }
            lVar13 = __CreateAndLogDMError
                               ("hardlink_copy_hierarchy",0x350,extraout_RDX_01,
                                &cf_Failedtomakedestpathforsymlink_s,local_648[0]);
            qVar19 = local_648[0];
LAB_000acebf:
            lVar21 = local_12d0;
            if (qVar19 != 0) {
LAB_000acecb:
              _CFRelease();
            }
          }
          iVar5 = -1;
LAB_000acf23:
          bVar23 = false;
          goto LAB_000acf26;
        }
        lVar8 = 0;
        pcVar10 = local_12d8;
        goto LAB_000ac9d6;
      }
      lVar13 = __CreateAndLogDMError
                         ("hardlink_copy_hierarchy",0x2fd,auVar24._8_8_,
                          &cf_Failedtoreadfirstmanifestcommand,local_448[0].field0_0x0);
      if (local_448[0].field0_0x0 != 0) {
        _CFRelease();
      }
LAB_000acb45:
      bVar23 = false;
      iVar5 = -1;
      lVar21 = local_12d0;
      goto LAB_000acf26;
    }
    local_6a8[6] = 0;
    local_6a8[7] = 0;
    local_6a8[4] = 0;
    local_6a8[5] = 0;
    local_6a8[2] = 0;
    local_6a8[3] = 0;
    local_6a8[0] = 0;
    local_6a8[1] = 0;
    local_668 = 0;
    cVar3 = _read_string_to_terminator(local_12e0,0,local_6a8,0x41);
    if (cVar3 == '\0') {
      uVar17 = 0x177;
    }
    else if (local_12e8 == (void *)0x0) {
      uVar17 = 0x173;
    }
    else {
      iVar5 = _memcmp(local_12e8,local_6a8,0x41);
      if (iVar5 == 0) {
        if (local_1308 != (int *)((long)&MACH_HEADER.magic + 2)) {
          local_6a8[0] = 0;
          cVar3 = _validate_supported_devices(local_12e0,param_8);
          if (cVar3 == '\0') {
            auVar24 = __CreateAndLogDMError
                                ("validate_stream",0x180,extraout_RDX_08,
                                 &cf_Failedtovalidatesupporteddevices,local_6a8[0]);
            uVar17 = auVar24._0_8_;
            lVar8 = local_12d0;
            if (local_6a8[0] != 0) {
              _CFRelease();
              auVar24._8_8_ = extraout_RDX_09;
              auVar24._0_8_ = uVar17;
              lVar8 = local_12d0;
            }
            goto LAB_000acaab;
          }
        }
        goto LAB_000ad1cb;
      }
      uVar17 = 0x16f;
    }
LAB_000ac93f:
    auVar24 = __CreateAndLogDMError("validate_stream",uVar17);
    lVar8 = local_12d0;
  }
  else {
    uVar17 = 0x165;
LAB_000acfc7:
    auVar24 = __CreateAndLogDMError("validate_stream",uVar17);
  }
LAB_000acaab:
  lVar13 = auVar24._0_8_;
  uVar11 = __CreateAndLogDMError
                     ("open_delta_manifest",0x1c8,auVar24._8_8_,&cf_Invalidmanifestfileat_s,lVar13);
  if (lVar13 != 0) {
    _CFRelease(lVar13);
  }
  _munmap(local_1310,local_13a8[0xc]);
  _free(local_12e0);
  _close((int)local_1300);
LAB_000ac684:
  lVar13 = __CreateAndLogDMError("hardlink_copy_hierarchy",0x2f6);
  if (uVar11 != 0) {
LAB_000ac6b3:
    _CFRelease(uVar11);
  }
LAB_000ac6b8:
  _fts_close_INODE64(lVar8);
  goto LAB_000ac6c0;
LAB_000ac9cb:
  lVar8 = (long)local_12e8 << 9;
LAB_000ac9d6:
  lVar21 = local_12d0;
  if ((pcVar10 == (char *)0x0) || (local_12b8 == 'x')) {
    bVar23 = true;
    iVar5 = -1;
    if (param_9 != (long *)0x0) {
      *param_9 = lVar8;
    }
    lVar13 = 0;
  }
  else {
    bVar23 = false;
    lVar13 = __CreateAndLogDMError
                       ("hardlink_copy_hierarchy",0x456,uVar17,
                        &cf_Gotdoneprocessingbundlebuttherewerestillcommandsremaininginmanifest_,0);
    iVar5 = -1;
  }
LAB_000acf26:
  plVar14 = local_12e0;
  if (local_12e0 != (long *)0x0) {
    _munmap(*local_12e0,local_12e0[1]);
    _free(plVar14);
  }
  _fts_close_INODE64(lVar21);
  if (-1 < iVar5) {
    _close(iVar5);
  }
  uVar17 = 1;
  if (bVar23) goto LAB_000ac6dd;
LAB_000ac6c0:
  if (param_10 == (long *)0x0) {
    if (lVar13 != 0) {
      _CFRelease(lVar13);
    }
  }
  else {
    *param_10 = lVar13;
  }
  uVar17 = 0;
LAB_000ac6dd:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

