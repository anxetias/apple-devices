// rea decompile_all
// name: _handleOverlayRootDataRequest
// address: 0xd8d78
// body: available
// range: 0xd8d78-0xd9b42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xd9b3e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleOverlayRootDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFString
   const*, long, __CFError**) */

uint _handleOverlayRootDataRequest
               (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFString *param_3,
               long param_4,__CFError **param_5)

{
  qword *pqVar1;
  __AMRestoreModeDevice *p_Var2;
  __CFDictionary *p_Var3;
  bool bVar4;
  __CFDictionary *p_Var5;
  undefined8 uVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  pid_t pVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long *plVar18;
  __CFError *p_Var19;
  cfstringStruct *pcVar20;
  cfstringStruct *pcVar21;
  long *plVar22;
  off_t oVar23;
  archive *paVar24;
  int *piVar25;
  ssize_t sVar26;
  __CFDictionary *extraout_RDX;
  __CFDictionary *extraout_RDX_00;
  long *plVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  __CFError **pp_Var31;
  cfstringStruct *pcVar32;
  ulong uVar33;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  __CFDictionary *local_900;
  cfstringStruct local_8f8;
  cfstringStruct *local_8d8;
  cfstringStruct *local_8d0;
  uint local_8c4;
  cfstringStruct *local_8c0;
  undefined8 local_8b8;
  uint local_8ac;
  long local_8a8;
  cfstringStruct *local_8a0;
  pid_t local_898;
  char local_892;
  byte local_891;
  long *local_890;
  __CFError **local_888;
  int local_880;
  int local_87c;
  __CFDictionary local_878 [1023];
  char cStack_479;
  uint local_478 [258];
  undefined8 local_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  char *local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar17 = *(long *)(param_1 + 0x10);
  p_Var2 = *(__AMRestoreModeDevice **)(lVar17 + 0x10);
  local_8f8.field2_0x10 = (undefined *)0x0;
  pcVar32 = (cfstringStruct *)0x0;
  pcVar20 = (cfstringStruct *)param_3;
  local_900 = param_2;
  local_8f8.field3_0x18 = (long)param_1;
  local_8c0 = (cfstringStruct *)param_4;
  local_888 = param_5;
  local_8a0 = (cfstringStruct *)
              _CFStringCreateWithFormat(0,0,&cf_Failedtohandleoverlayrootsdatarequestfor__);
  uVar11 = 10;
  if (param_3 == (__CFString *)0x0) {
LAB_000d8e6a:
    plVar18 = (long *)0x0;
    pp_Var31 = local_888;
  }
  else {
    lVar14 = _CFGetTypeID(param_3);
    lVar15 = _CFStringGetTypeID();
    if (lVar14 != lVar15) {
      pcVar32 = (cfstringStruct *)0x0;
      goto LAB_000d8e6a;
    }
    puVar16 = (undefined *)_CFDictionaryGetValue(*(undefined8 *)(lVar17 + 0x18),param_3);
    pcVar32 = &cf_Receivedoverlayrootdatarequestbuthavenooverlayroottoinstall;
    local_8f8.field2_0x10 = puVar16;
    if (puVar16 == (undefined *)0x0) goto LAB_000d8e6a;
    lVar17 = _CFGetTypeID(puVar16);
    lVar14 = _CFStringGetTypeID();
    if (lVar17 == lVar14) {
      pcVar20 = (cfstringStruct *)PTR__kCFTypeArrayCallBacks_004411a8;
      plVar18 = (long *)_CFArrayCreate(0,&local_8f8.field2_0x10,1);
    }
    else {
      lVar17 = _CFGetTypeID(puVar16);
      lVar14 = _CFArrayGetTypeID();
      if (lVar17 != lVar14) goto LAB_000d8e6a;
      plVar18 = (long *)_CFRetain(puVar16);
    }
    pp_Var31 = local_888;
    if (plVar18 == (long *)0x0) {
      plVar18 = (long *)0x0;
    }
    else {
      lVar17 = _CFDictionaryGetValue(*(undefined8 *)(local_8f8.field3_0x18 + 8),&cf_DataPort);
      if (lVar17 != 0) {
        local_478[0] = 0;
        _CFNumberGetValue(lVar17,9,local_478);
        uVar29 = local_478[0];
        _AMRestoreModeDeviceProgressAsync(p_Var2,0x1a,-1,(__CFString *)0x0);
        pcVar20 = (cfstringStruct *)_CFArrayGetCount(plVar18);
        if (local_8c0 == (cfstringStruct *)0xffffffffffffffff) {
          if ((long)pcVar20 < 1) {
            uVar11 = 0;
            pcVar21 = local_8a0;
            goto LAB_000d8eb3;
          }
          pcVar32 = (cfstringStruct *)0x0;
          local_8d0 = pcVar20;
        }
        else {
          pcVar32 = &cf_Receivedoverlayrootdatarequestfornon_existentindex;
          pp_Var31 = local_888;
          if (((long)local_8c0 < 0) || ((long)pcVar20 <= (long)local_8c0)) goto LAB_000d8e7b;
          pcVar32 = local_8c0;
          local_8d0 = (cfstringStruct *)((long)&local_8c0->field0_0x0 + 1);
        }
        local_8b8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        local_892 = PTR_LAB_00441000 == (undefined *)0x0 ||
                    (PTR_LAB_00441008 == (undefined *)0x0 ||
                    PTR__AAFileStreamOpenWithFD_00441010 == (undefined *)0x0);
        local_8c4 = uVar29 & 0xffff;
        local_8d8 = pcVar20;
        do {
          pcVar21 = (cfstringStruct *)_CFArrayGetValueAtIndex(plVar18,pcVar32);
          local_8c0 = (cfstringStruct *)((long)&pcVar32->field0_0x0 + 1);
          pcVar20 = local_8d8;
          _AMRLog(6,&cf_Examiningoverlayroot_ldof_ldatpath__,local_8c0,local_8d8,pcVar21);
          plVar27 = *(long **)(local_8f8.field3_0x18 + 0x10);
          p_Var2 = (__AMRestoreModeDevice *)plVar27[2];
          ___bzero(local_878,0x400);
          local_918 = 0;
          uStack_910 = 0;
          local_928 = 0;
          uStack_920 = 0;
          local_938 = 0;
          uStack_930 = 0;
          local_948 = 0;
          uStack_940 = 0;
          local_958 = 0;
          uStack_950 = 0;
          local_968 = 0;
          uStack_960 = 0;
          local_978 = 0;
          uStack_970 = 0;
          local_988 = 0;
          uStack_980 = 0;
          local_998 = 0;
          uStack_990 = 0;
          iVar10 = _AMRestoreModeDeviceConnectToPortInternal(p_Var2,(ushort)local_8c4,0.0,9);
          if (iVar10 < 0) {
            local_880 = -1;
            pcVar32 = &cf_Failedtoconnecttoportondevicetosendoverlayrootdata;
            uVar11 = 2;
            pp_Var31 = local_888;
LAB_000d91fa:
            if (iVar10 != -1) goto LAB_000d966c;
          }
          else {
            pcVar20 = pcVar21;
            local_87c = iVar10;
            _AMRLog(6,&cf_sock_3d_attemptingtosend__,iVar10);
            cVar7 = _AMRestoreGetFileSystemRepresentation(pcVar21,local_878,0x400);
            if (cVar7 == '\0') {
              _AMRLog(3,&cf_Failedtofindoverlayrootatpath__s,local_878);
              local_880 = -1;
              uVar11 = 0x11;
              pcVar32 = &cf_Failedtogetfilesystempathtooverlayroot_;
              pp_Var31 = local_888;
              iVar10 = local_87c;
            }
            else {
              iVar10 = _open((char *)local_878,0);
              pp_Var31 = local_888;
              if (iVar10 == -1) {
                piVar25 = ___error();
                pcVar20 = (cfstringStruct *)_strerror(*piVar25);
                _AMRLog(3,&cf_Failedtoopen_s__s,local_878);
                local_880 = -1;
                uVar11 = 0xb;
                pcVar32 = &cf_Rootsetinrestoreoptionsdoesnotexist;
                iVar10 = local_87c;
              }
              else {
                local_880 = iVar10;
                _fstat_INODE64(iVar10,&local_998);
                (**(code **)(*plVar27 + 0x10))(plVar27);
                iVar10 = local_87c;
                if ((local_998._4_2_ & 0xf000) == 0x8000) {
                  cVar7 = _AMRestoreIsDiskImageDmg(local_878);
                  p_Var5 = local_900;
                  p_Var3 = (__CFDictionary *)plVar27[3];
                  if (cVar7 == '\0') {
                    local_890 = plVar18;
                    uVar8 = _acceptArchiveType(p_Var3,(__CFString *)
                                                      &cf_OverlayRootsDoNotSendLibarchive,local_900,
                                               (__CFString *)&cf_MessageOverlayRootAcceptLibarchive)
                    ;
                    local_8a8 = CONCAT71(local_8a8._1_7_,uVar8);
                    pcVar20 = &cf_MessageOverlayRootAcceptAppleArchive;
                    bVar9 = _acceptArchiveType(p_Var3,(__CFString *)
                                                      &cf_OverlayRootsDoNotSendAppleArchive,p_Var5,
                                               (__CFString *)
                                               &cf_MessageOverlayRootAcceptAppleArchive);
                    iVar10 = local_880;
                    oVar23 = _lseek(local_880,0,1);
                    if (oVar23 == -1) {
                      piVar25 = ___error();
                      iVar28 = *piVar25;
                      pcVar20 = (cfstringStruct *)_strerror(iVar28);
                      iVar10 = local_87c;
                      _AMRLog(3,&cf_sock_3d_failedtolseek__file__s__d_,local_87c,pcVar20,iVar28);
                      uVar11 = 0xb;
                      pcVar32 = &cf_Failedtosendarchiveroottodevice;
                      plVar18 = local_890;
                      goto LAB_000d966c;
                    }
                    local_891 = bVar9;
                    paVar24 = (archive *)_archive_read_new();
                    _archive_read_support_compression_gzip(paVar24);
                    _archive_read_support_compression_bzip2(paVar24);
                    _archive_read_support_compression_none(paVar24);
                    _archive_read_support_format_cpio(paVar24);
                    cVar7 = _canOpenWithArchiveReader(iVar10,oVar23,paVar24);
                    iVar28 = local_87c;
                    if (cVar7 == '\0') {
                      paVar24 = (archive *)_archive_read_new();
                      _archive_read_support_compression_all(paVar24);
                      _archive_read_support_format_all(paVar24);
                      cVar7 = _canOpenWithArchiveReader(iVar10,oVar23,paVar24);
                      iVar28 = local_87c;
                      if (cVar7 == '\0') {
                        if ((local_892 == '\0') &&
                           (lVar17 = _AAFileStreamOpenWithFD(local_880,0), lVar17 != 0)) {
                          lVar14 = _AADecompressionInputStreamOpen(lVar17,0,1);
                          if (lVar14 == 0) {
                            bVar4 = true;
                          }
                          else {
                            local_478[0] = 0;
                            uVar33 = _AAByteStreamRead(lVar14,local_478,4);
                            cVar7 = _hasMagicPrefix(local_478,uVar33,"YAA1");
                            if (cVar7 == '\0') {
                              cVar7 = _hasMagicPrefix(local_478,uVar33,"AA01");
                              bVar4 = true;
                              if (cVar7 != '\0') goto LAB_000d962e;
                            }
                            else {
LAB_000d962e:
                              bVar4 = false;
                            }
                            _AAByteStreamClose(lVar14);
                          }
                          plVar18 = local_890;
                          _AAByteStreamClose(lVar17);
                          _lseek(local_880,oVar23,0);
                          iVar10 = local_87c;
                          pp_Var31 = local_888;
                          if ((!bVar4) && (local_891 = local_891 ^ 1, local_891 == 0)) {
                            _AMRLog(6,&cf_sock_3d_sendingfile_deviceacceptsAppleArchiveroots,
                                    local_87c);
                            uVar11 = _sendFileDescriptor(iVar10,local_880);
                            goto LAB_000d9483;
                          }
                        }
                        else {
                          _lseek(local_880,oVar23,0);
                          plVar18 = local_890;
                        }
                        iVar10 = local_87c;
                        _AMRLog(3,&cf_sock_3d_failedtosendfile_formatnotsupported,local_87c);
                        uVar11 = 0xb;
                        pcVar32 = &cf_Failedtosendarchiveroottodevice;
                        goto LAB_000d966c;
                      }
                      if ((char)local_8a8 != '\0') {
                        _AMRLog(6,&cf_sock_3d_sendingfile_deviceacceptslibarchiveroots,local_87c);
                        iVar10 = local_880;
                        goto LAB_000d9474;
                      }
                      _AMRLog(6,&cf_sock_3d_sendingconvertedlibarchiverootasCPIO,local_87c);
                      local_48 = "@-";
                      uStack_40 = 0;
                      local_58 = "--format";
                      pcStack_50 = "cpio";
                      local_68 = "/usr/bin/tar";
                      pcStack_60 = "-czf-";
                      local_70 = 0;
                      iVar10 = _pipe((int)&local_70);
                      plVar18 = local_890;
                      uVar11 = 0xd;
                      if (iVar10 == 0) {
                        local_8a8 = CONCAT44(local_8a8._4_4_,(undefined4)local_70);
                        ___bzero(local_478,0x400);
                        local_898 = 0;
                        local_8f8.field0_0x0 = 0;
                        local_8f8.field1_0x8 = 0;
                        local_8ac = 0;
                        pcVar20 = &local_8f8;
                        _posix_spawnattr_init((posix_spawnattr_t *)pcVar20);
                        _posix_spawnattr_setflags((posix_spawnattr_t *)pcVar20,0x4000);
                        pqVar1 = &local_8f8.field1_0x8;
                        _posix_spawn_file_actions_init((posix_spawn_file_actions_t *)pqVar1);
                        _posix_spawn_file_actions_adddup2
                                  ((posix_spawn_file_actions_t *)pqVar1,local_880,0);
                        _posix_spawn_file_actions_adddup2
                                  ((posix_spawn_file_actions_t *)pqVar1,local_87c,1);
                        _posix_spawn_file_actions_adddup2
                                  ((posix_spawn_file_actions_t *)pqVar1,local_70._4_4_,2);
                        _AMRLog(6,&cf_Convertingroottocpioarchive);
                        iVar10 = _posix_spawn(&local_898,"/usr/bin/tar",
                                              (posix_spawn_file_actions_t *)pqVar1,
                                              (posix_spawnattr_t *)pcVar20,&local_68,(char **)0x0);
                        _close(local_70._4_4_);
                        if (iVar10 == 0) {
                          uVar11 = 0;
                          iVar10 = (int)local_8a8;
                          do {
                            uVar33 = (ulong)uVar11;
                            sVar26 = _read(iVar10,(void *)((long)local_478 + uVar33),uVar33 ^ 0x3ff)
                            ;
                            if (sVar26 < 1) goto LAB_000d998b;
                            uVar11 = uVar11 + (int)sVar26;
                          } while (uVar11 < 0x3ff);
                          uVar33 = (ulong)uVar11;
LAB_000d998b:
                          uVar29 = (int)uVar33 + 1;
                          do {
                            uVar30 = (int)uVar11 >> 0x1f & uVar11;
                            if ((int)uVar33 < 1) break;
                            cVar7 = (&cStack_479)[uVar33];
                            if (cVar7 < '\0') {
                              uVar12 = ___maskrune((int)cVar7,0x4000);
                            }
                            else {
                              pcVar20 = (cfstringStruct *)0x4000;
                              uVar12 = *(uint *)(PTR___DefaultRuneLocale_004412a0 +
                                                (ulong)(uint)(int)cVar7 * 4 + 0x3c) & 0x4000;
                            }
                            uVar29 = uVar29 - 1;
                            uVar33 = uVar33 - 1;
                            uVar30 = uVar29;
                          } while (uVar12 != 0);
                          *(undefined1 *)((long)local_478 + (long)(int)uVar30) = 0;
                          pVar13 = _waitpid(local_898,(int *)&local_8ac,0);
                          if (pVar13 == local_898) {
                            local_898 = 0;
                            if ((uVar30 != 0) &&
                               (lVar17 = _CFStringCreateWithCString(local_8b8,local_478,0x8000100),
                               lVar17 != 0)) {
                              _AMRLog(4,&cf_Messagefromarchiveconversion___,lVar17);
                              _CFRelease(lVar17);
                            }
                            if ((local_8ac & 0xff7f) == 0) {
                              uVar11 = 0;
                              pp_Var31 = local_888;
                              plVar18 = local_890;
                            }
                            else {
                              uVar11 = local_8ac & 0x7f;
                              if (uVar11 == 0) {
                                uVar11 = local_8ac >> 8 & 0xff;
                                if (uVar11 == 0) goto LAB_000d9ac0;
                                pcVar32 = &cf_Archiveconversionexitedwithstatus_d;
                              }
                              else if (uVar11 == 0x7f) {
LAB_000d9ac0:
                                pcVar32 = &cf_Archiveconversionexitedwithcode_d;
                                uVar11 = local_8ac;
                              }
                              else {
                                pcVar32 = &cf_Archiveconversionexitedwithsignal_d;
                              }
                              _AMRLog(3,pcVar32,uVar11);
                              uVar11 = 0xb;
                              pp_Var31 = local_888;
                              plVar18 = local_890;
                            }
                          }
                          else {
                            piVar25 = ___error();
                            _AMRLog(3,&cf_Error_dwaitingforarchiveconversionprocess,*piVar25);
                            uVar11 = 0xffffffff;
                            pp_Var31 = local_888;
                          }
                        }
                        else {
                          piVar25 = ___error();
                          _AMRLog(3,&cf_Spawnof_usr_bin_tarfailedwitherrno_d,*piVar25);
                          local_898 = 0;
                          uVar11 = 0xc;
                        }
                        _posix_spawnattr_destroy((posix_spawnattr_t *)&local_8f8);
                        _posix_spawn_file_actions_destroy
                                  ((posix_spawn_file_actions_t *)&local_8f8.field1_0x8);
                        if (-1 < (int)local_8a8) {
                          _close((int)local_8a8);
                        }
                        if (local_898 != 0) {
                          _waitpid(local_898,(int *)0x0,0);
                        }
                      }
                    }
                    else {
                      _AMRLog(6,&cf_sock_3d_sendingfile_deviceacceptsCPIOroots,local_87c);
LAB_000d9474:
                      uVar11 = _sendFileDescriptor(iVar28,iVar10);
                      plVar18 = local_890;
                    }
LAB_000d9483:
                    pcVar32 = &cf_Failedtosendarchiveroottodevice;
                    iVar10 = local_87c;
                    if (uVar11 == 0) {
                      pcVar32 = (cfstringStruct *)0x0;
                    }
                    goto LAB_000d91fa;
                  }
                  lVar17 = _CFStringCreateWithCString(local_8b8,local_878,0x8000100);
                  ___bzero(local_478,0x400);
                  local_478[0] = CONCAT22(local_478[0]._2_2_,0x302f);
                  if (lVar17 == 0) {
                    pcVar32 = &cf_FailedtoconvertpathtoCFStringRef;
LAB_000d94bb:
                    _AMRLog(3,pcVar32);
                    uVar11 = 10;
                  }
                  else {
                    lVar14 = _CFDictionaryGetValue(p_Var3,&cf_PersonalizedRestoreBundlePath);
                    uVar6 = local_8b8;
                    if (lVar14 == 0) {
                      pcVar32 = &
                                cf_Nopersonalizeddirectorypathfound_usedasparentfoldertomounteddmgvolume_
                      ;
                      goto LAB_000d94bb;
                    }
                    plVar22 = (long *)_CFURLCreateWithString(local_8b8,lVar14,0);
                    if (plVar22 == (long *)0x0) {
                      _AMRLog(3,&cf_FailedtranslatepersonalizePathpathtoURL);
                    }
                    else {
                      pcVar20 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1);
                      lVar14 = _CFURLCreateCopyAppendingPathComponent(uVar6,plVar22,&cf_tempVol);
                      if (lVar14 != 0) {
                        pcVar20 = (cfstringStruct *)&section_000003d8.size;
                        local_8a8 = lVar14;
                        local_890 = plVar22;
                        cVar7 = _CFURLGetFileSystemRepresentation
                                          (lVar14,1,(__CFDictionary *)local_478);
                        lVar14 = local_8a8;
                        if (cVar7 == '\0') {
                          _AMRLog(3,&cf_FailedtoCFURLGetFileSystemRepresentationof__,local_8a8);
                          uVar11 = 6;
                        }
                        else {
                          uVar11 = _AMRestoreAttachDiskImage(lVar17,(__CFDictionary *)local_478);
                          lVar14 = local_8a8;
                          if (uVar11 == 0) {
                            uVar11 = _sendDirectoryRoot(local_87c,(__CFDictionary *)local_478,
                                                        extraout_RDX_00,(char *)pcVar20);
                            _AMRestoreDetachDiskImage((__CFDictionary *)local_478);
                            lVar14 = local_8a8;
                          }
                          else {
                            pcVar20 = (cfstringStruct *)(ulong)uVar11;
                            _AMRLog(3,&cf_Failedtoattach__withresult_d,local_8a8);
                          }
                        }
                        _CFRelease(local_890);
                        _CFRelease(lVar14);
                        pcVar32 = &cf_Failedtosenddiskimageroottodevice;
                        iVar10 = local_87c;
                        if (uVar11 == 0) {
                          pcVar32 = (cfstringStruct *)0x0;
                        }
                        goto LAB_000d966c;
                      }
                      _AMRLog(3,&cf_FailedtranslatedstpathtoURL);
                      _CFRelease(plVar22);
                    }
                    uVar11 = 1;
                  }
                  pcVar32 = &cf_Failedtosenddiskimageroottodevice;
                  iVar10 = local_87c;
                }
                else {
                  uVar11 = 1;
                  if ((local_998._4_2_ & 0xf000) == 0x4000) {
                    local_890 = plVar27;
                    uVar11 = _sendDirectoryRoot(local_87c,local_878,extraout_RDX,(char *)pcVar20);
                    pcVar32 = &cf_Failedtosenddirectoryroottodevice;
                    plVar27 = local_890;
                    if (uVar11 == 0) {
                      pcVar32 = (cfstringStruct *)0x0;
                    }
                  }
                  else {
                    pcVar32 = &cf_Roottoinstallisnotafileordirectory;
                  }
                }
              }
            }
LAB_000d966c:
            _AMRestoreCloseTransferSocket(iVar10,uVar11);
          }
          if (local_880 != -1) {
            _close(local_880);
          }
          (**(code **)(*plVar27 + 0x18))(plVar27);
          if (uVar11 != 0) goto LAB_000d8e7b;
          uVar11 = 0;
          pcVar21 = local_8a0;
          pcVar32 = local_8c0;
        } while (local_8c0 != local_8d0);
        goto LAB_000d8eb3;
      }
      pcVar32 = &cf_Noportprovidedinoverlayrootdatarequestmessage;
    }
  }
LAB_000d8e7b:
  pcVar21 = local_8a0;
  if (pp_Var31 != (__CFError **)0x0) {
    if (pcVar32 == (cfstringStruct *)0x0) {
      pcVar32 = local_8a0;
    }
    p_Var19 = (__CFError *)
              _AMRCreateErrorWithUnderlyingError
                        ((__CFString *)(long)(int)uVar11,(long)pcVar32,(__CFString *)0x0,
                         (__CFError *)pcVar20);
    *pp_Var31 = p_Var19;
  }
  if (pcVar32 != (cfstringStruct *)0x0) {
    _AMRLog(3,&cf___,pcVar32);
  }
LAB_000d8eb3:
  _AMSupportSafeRelease(plVar18);
  _AMSupportSafeRelease(pcVar21);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}

