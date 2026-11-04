// rea decompile_all
// name: _MDMDirectoryDiff
// address: 0x2665f9
// body: available
// range: 0x2665f9-0x2676a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2676a2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_MDMDirectoryDiff(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  size_t sVar2;
  dispatch_object_t dVar3;
  dispatch_object_t dVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  char *pcVar11;
  void *pvVar12;
  char *pcVar13;
  long lVar14;
  size_t sVar15;
  cfstringStruct *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  cfstringStruct *local_4a0 [12];
  size_t local_440;
  undefined8 local_410;
  undefined8 *local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  int local_3ec;
  dispatch_object_t local_3e8;
  long local_3e0;
  long local_3d8;
  undefined4 local_3cc;
  void *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined *local_3b8;
  undefined8 local_3b0;
  code *local_3a8;
  undefined *local_3a0;
  void *local_398;
  undefined1 local_390 [272];
  undefined *local_280;
  undefined8 local_278;
  code *local_270;
  undefined *local_268;
  undefined8 *local_260;
  undefined1 local_258 [272];
  long local_148;
  long local_140;
  long local_130;
  undefined8 local_128;
  long local_120;
  undefined1 local_118;
  undefined1 local_117;
  undefined1 local_116;
  byte local_115;
  long local_110;
  long lStack_108;
  long local_100;
  long local_f8;
  char local_f0;
  pthread_cond_t local_e8;
  pthread_mutex_t local_b8;
  dispatch_object_t local_78;
  dispatch_object_t local_70;
  long local_58;
  long local_50;
  undefined1 local_40;
  long local_38;
  
  local_3c8 = (void *)CONCAT44(local_3c8._4_4_,param_4);
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_3bc = param_6;
  ___bzero();
  local_118 = SUB81(local_3c8,0);
  local_3e8._0_4_ = param_3;
  local_110 = *param_1;
  lStack_108 = param_1[1];
  local_100 = param_1[4];
  local_f8 = param_1[2];
  local_128 = param_2;
  local_117 = (char)param_3;
  local_116 = (char)param_5;
  local_78._os_obj = (_os_object_s *)_dispatch_group_create();
  local_70._os_obj = (_os_object_s *)_dispatch_get_global_queue(0,0);
  lVar8 = _CFDictionaryGetValue(param_2,&cf_ALWAYS_XFER_LIST);
  lVar9 = _CFDictionaryGetValue(param_2);
  local_410 = 0;
  local_400 = 0x2000000000;
  local_3f8 = 0;
  local_408 = &local_410;
  local_3ec = _pthread_mutex_init(&local_b8,(pthread_mutexattr_t *)0x0);
  local_3cc = 0xffffffff;
  if (local_3ec == 0) {
    local_3c0 = param_5;
    iVar6 = _pthread_cond_init(&local_e8,(pthread_condattr_t *)0x0);
    if (iVar6 != 0) {
      piVar10 = ___error();
      pcVar11 = _strerror(*piVar10);
      pcVar16 = &cf_pthread_cond_initfailed__s;
      uVar17 = 0x5a4;
      goto LAB_0026677e;
    }
    cVar5 = _verbose();
    if (cVar5 != '\0') {
      _dmlog("MDMDirectoryDiff",0x5a9,&cf_packagetype___,lVar9);
    }
    if ((lVar9 == 0) || (cVar5 = _CFEqual(&cf_Developer,lVar9), cVar5 == '\0')) {
      pvVar12 = (void *)0x0;
      pcVar11 = (char *)0x0;
    }
    else {
      local_115 = 1;
      pvVar12 = (void *)_create_path_str(param_1[2],"ManifestCache.plist",0);
      pcVar11 = (char *)_create_path_str(param_1[7],"ManifestCache.plist",0);
    }
    cVar5 = _verbose();
    if (cVar5 != '\0') {
      _dmlog("MDMDirectoryDiff",0x5af,&cf_manifest_cache_path__s,pvVar12);
    }
    cVar5 = _verbose();
    if (cVar5 != '\0') {
      _dmlog("MDMDirectoryDiff",0x5b0,&cf_old_manifest_cache_path__s,pcVar11);
    }
    local_3c8 = pvVar12;
    if ((lStack_108 == 0) || (local_110 == 0)) {
      _dmlog("MDMDirectoryDiff",0x5b2,&cf_oneofthedirectorystringsisNULL);
    }
    else {
      local_4a0[0] = &cf_Info_plist;
      if (lVar8 == 0) {
        lVar9 = _CFArrayCreate(0,local_4a0,1,PTR__kCFTypeArrayCallBacks_004411a8);
      }
      else {
        lVar9 = _CFArrayCreateMutableCopy(0,0,lVar8);
        uVar17 = _CFArrayGetCount(lVar8);
        cVar5 = _CFArrayContainsValue(lVar9,0,uVar17,&cf_Info_plist);
        if (cVar5 == '\0') {
          _CFArrayAppendValue(lVar9,&cf_Info_plist);
        }
      }
      dVar4 = local_70;
      dVar3 = local_78;
      local_120 = lVar9;
      if (lVar9 != 0) {
        local_280 = PTR___NSConcreteStackBlock_004412a8;
        local_278 = 0x42000000;
        local_270 = ___MDMDirectoryDiff_block_invoke;
        local_268 = &___block_descriptor_tmp;
        local_260 = &local_410;
        _memcpy(local_258,&local_148,0x110);
        _dispatch_group_async(dVar3._os_obj,dVar4._os_obj,&local_280);
        uVar19 = local_3c0;
        if (pcVar11 == (char *)0x0) {
LAB_00266b84:
          cVar5 = _verbose();
          if (cVar5 != '\0') {
            _dmlog("MDMDirectoryDiff",0x5bf,&cf_NOMANIFESTCACHE_traversingoldbundle);
          }
          lVar9 = _CreateDirectoryManifestDictionary(lStack_108,(ulong)local_3e8._os_obj & 0xff);
        }
        else {
          local_3e0 = 0;
          iVar6 = _open(pcVar11,0x100);
          if (iVar6 == -1) {
            cVar5 = _verbose();
            if (cVar5 != '\0') {
              piVar10 = ___error();
              pcVar13 = _strerror(*piVar10);
              pcVar16 = &cf_openfailedfor_s__s;
              uVar17 = 0x532;
LAB_00266b35:
              _dmlog("createDictFromFile",uVar17,pcVar16,pcVar11,pcVar13);
            }
LAB_00266b47:
            lVar9 = 0;
            pvVar12 = (void *)0x0;
            lVar8 = 0;
          }
          else {
            iVar7 = _fstat_INODE64(iVar6,local_4a0);
            sVar2 = local_440;
            if (iVar7 != 0) {
              cVar5 = _verbose();
              if (cVar5 != '\0') {
                piVar10 = ___error();
                pcVar13 = _strerror(*piVar10);
                pcVar16 = &cf_statfailedfor_s__s;
                uVar17 = 0x537;
                goto LAB_00266b35;
              }
              goto LAB_00266b47;
            }
            pvVar12 = _malloc(local_440);
            if (pvVar12 == (void *)0x0) {
              _dmlog("createDictFromFile",0x53b,&cf_mallocfailedfor_lld,sVar2);
              lVar9 = 0;
              pvVar12 = (void *)0x0;
              lVar8 = 0;
              uVar19 = local_3c0;
            }
            else {
              sVar15 = _read(iVar6,pvVar12,sVar2);
              if (sVar2 == sVar15) {
                lVar8 = _CFDataCreateWithBytesNoCopy
                                  (0,pvVar12,local_440,*(undefined8 *)PTR__kCFAllocatorNull_004410f8
                                  );
                uVar19 = local_3c0;
                if (lVar8 == 0) {
                  cVar5 = _verbose();
                  if (cVar5 != '\0') {
                    _dmlog("createDictFromFile",0x543,&cf_CFDataCreateWithBytesNoCopyfailed);
                  }
                  lVar9 = 0;
                  lVar8 = 0;
                  uVar19 = local_3c0;
                }
                else {
                  local_3d8 = lVar8;
                  lVar9 = _CFPropertyListCreateWithData(0,lVar8,0,0,&local_3e0);
                  cVar5 = _verbose();
                  if (lVar9 == 0) {
                    if (cVar5 != '\0') {
                      _dmlog("createDictFromFile",0x546,&cf_CFPropertyListCreateWithDatafailed___,
                             local_3e0);
                    }
                    lVar9 = 0;
                    lVar8 = local_3d8;
                    uVar19 = local_3c0;
                  }
                  else {
                    lVar8 = local_3d8;
                    if (cVar5 != '\0') {
                      _dmlog("createDictFromFile",0x548,&cf_____SuccessfullyreadManifestcacheat_s,
                             pcVar11);
                      lVar8 = local_3d8;
                    }
                  }
                }
              }
              else {
                cVar5 = _verbose();
                uVar19 = local_3c0;
                if (cVar5 != '\0') {
                  piVar10 = ___error();
                  pcVar13 = _strerror(*piVar10);
                  _dmlog("createDictFromFile",0x53e,&cf_readfailedfor_s__s,pcVar11,pcVar13);
                }
                lVar9 = 0;
                lVar8 = 0;
              }
            }
          }
          if (local_3e0 != 0) {
            _CFRelease();
          }
          local_3e0 = 0;
          if (lVar8 != 0) {
            _CFRelease(lVar8);
          }
          if (pvVar12 != (void *)0x0) {
            _free(pvVar12);
          }
          if (lVar9 == 0) goto LAB_00266b84;
        }
        _dispatch_group_wait((dispatch_group_t)local_78._os_obj,0xffffffffffffffff);
        if ((local_408[3] == 0) || (lVar9 == 0)) {
          _dmlog("MDMDirectoryDiff",0x5c6,&cf_unabletocreateamanifest_oldManifest__p_newManifest__p,
                 lVar9);
LAB_00267285:
          lVar8 = 0;
        }
        else {
          lVar8 = _CFDictionaryGetValue(lVar9,&cf_SUPPORTED_DEVICES);
          lVar14 = _CFDictionaryGetValue(local_408[3],&cf_SUPPORTED_DEVICES);
          if ((char)uVar19 != '\0') {
            if ((lVar8 == 0) ||
               (cVar5 = _arrayHasOnlyStringsWithoutSpacesOrNewlines(lVar8), cVar5 != '\0')) {
              if ((lVar14 == 0) ||
                 (cVar5 = _arrayHasOnlyStringsWithoutSpacesOrNewlines(lVar14), cVar5 != '\0'))
              goto LAB_00266c77;
              pcVar16 = &
                        cf_Newversion_sSupportedDevicesInfo_plistkey_sarrayvaluehasinvalidvalues_nonstringvaluesorstringswithwhitespaceornewline_
              ;
              uVar17 = 0x5d5;
            }
            else {
              pcVar16 = &
                        cf_Oldversion_sSupportedDevicesInfo_plistkey_sarrayvaluehasinvalidvalues_nonstringvaluesorstringswithwhitespaceornewline_
              ;
              uVar17 = 0x5d0;
            }
LAB_0026727e:
            _dmlog("MDMDirectoryDiff",uVar17,pcVar16);
            goto LAB_00267285;
          }
          if (lVar8 != 0 || lVar14 != 0) {
            pcVar16 = &cf_Binarydiffsarerequiredwhengeneratingdeltasforthinnedapps;
            uVar17 = 0x5cb;
            goto LAB_0026727e;
          }
LAB_00266c77:
          dVar3 = local_78;
          local_148 = local_408[3];
          local_140 = lVar9;
          if ((local_3c8 != (void *)0x0 & local_115) == 1) {
            local_3e8 = local_70;
            local_3b8 = PTR___NSConcreteStackBlock_004412a8;
            local_3b0 = 0x40000000;
            local_3a8 = ___MDMDirectoryDiff_block_invoke_37;
            local_3a0 = &___block_descriptor_tmp_42;
            local_398 = local_3c8;
            _memcpy(local_390,&local_148,0x110);
            _dispatch_group_async(dVar3._os_obj,local_3e8._os_obj,&local_3b8);
            if (local_140 != 0) goto LAB_00266d2e;
            pcVar16 = &cf_nooldmanifest;
            uVar17 = 0x32b;
LAB_002675a8:
            _dmlog("create_delta_manifest",uVar17,pcVar16);
            uVar20 = local_3bc;
          }
          else {
LAB_00266d2e:
            if (local_148 == 0) {
              pcVar16 = &cf_nonewmanifest;
              uVar17 = 0x32c;
              goto LAB_002675a8;
            }
            local_130 = _CFDictionaryCreateMutable
                                  (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            if (local_130 == 0) {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x333;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_FILES);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x335;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_LINKS);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x336;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_DIRS);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x337;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_TOUCH);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x338;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_PATCH);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x339;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_NOXFR);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x33a;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_DELS);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x33b;
              goto LAB_002675a8;
            }
            cVar5 = _createSubDictionary(local_130,&cf_DIFFS);
            if (cVar5 == '\0') {
              pcVar16 = &cf_failedtocreatemutabledictionary;
              uVar17 = 0x33c;
              goto LAB_002675a8;
            }
            pcVar16 = (cfstringStruct *)_CFDictionaryGetValue(local_140,&cf_BUNDLE_VERSION);
            if (pcVar16 == (cfstringStruct *)0x0) {
              _dmlog("create_delta_manifest",0x343,&cf_nobundleversioninoldmanifest_usingzero);
              pcVar16 = &cf_0;
            }
            _CFDictionarySetValue(local_130,&cf_BUNDLE_VERSION,pcVar16);
            lVar8 = _CFDictionaryGetValue(local_148,&cf_DIRS);
            lVar14 = _CFDictionaryGetValue(local_140,&cf_DIRS);
            if (lVar8 == 0) {
              pcVar16 = &cf_newDIRSdictionaryisNULL;
              uVar17 = 0x34e;
              goto LAB_002675a8;
            }
            _CFDictionarySetValue(local_130,&cf_DIRS,lVar8);
            if ((lVar14 == 0) ||
               (_CFDictionaryApplyFunction(lVar14,_process_entry_from_old,&local_148),
               uVar19 = local_3c0, local_f0 != '\x01')) {
              _CFDictionaryApplyFunction(lVar8,_makeDirInDst,&local_148);
              if (local_f0 == '\x01') {
                piVar10 = ___error();
                pcVar13 = _strerror(*piVar10);
                pcVar16 = &cf_ERROR_makeDirInDstfailed_line_d__s;
                uVar18 = 0x35c;
                uVar17 = 0x35c;
                goto LAB_00266f69;
              }
              lVar8 = _CFDictionaryGetValue(local_148,&cf_FILES);
              lVar14 = _CFDictionaryGetValue(local_140,&cf_FILES);
              if (lVar8 == 0) {
                pcVar16 = &cf_newFILESdictionaryisNULL;
                uVar17 = 0x366;
LAB_00267688:
                _dmlog("create_delta_manifest",uVar17,pcVar16);
                uVar19 = local_3c0;
                uVar20 = local_3bc;
              }
              else {
                _CFDictionaryApplyFunction(lVar8,_process_entry_from_new,&local_148);
                uVar19 = local_3c0;
                if (local_f0 == '\x01') {
                  uVar18 = 0x36a;
                  uVar17 = 0x36a;
LAB_002671cf:
                  _dmlog("create_delta_manifest",uVar18,&cf_process_entry_from_newfailed_line_d,
                         uVar17);
                  uVar19 = local_3c0;
                  uVar20 = local_3bc;
                }
                else if ((lVar14 == 0) ||
                        (_CFDictionaryApplyFunction(lVar14,_process_entry_from_old,&local_148),
                        local_f0 != '\x01')) {
                  lVar8 = _CFDictionaryGetValue(local_148,&cf_LINKS);
                  lVar14 = _CFDictionaryGetValue(local_140,&cf_LINKS);
                  if (lVar8 == 0) {
                    pcVar16 = &cf_newLINKSdictionaryisNULL;
                    uVar17 = 0x37a;
                    goto LAB_00267688;
                  }
                  _CFDictionaryApplyFunction(lVar8,_process_entry_from_new,&local_148);
                  uVar19 = local_3c0;
                  if (local_f0 == '\x01') {
                    uVar18 = 0x37e;
                    uVar17 = 0x37e;
                    goto LAB_002671cf;
                  }
                  if ((lVar14 != 0) &&
                     (_CFDictionaryApplyFunction(lVar14,_process_entry_from_old,&local_148),
                     local_f0 == '\x01')) {
                    uVar18 = 900;
                    uVar17 = 900;
                    goto LAB_002673ec;
                  }
                  cVar5 = _verbose();
                  uVar20 = local_3bc;
                  if (cVar5 != '\0') {
                    _dmlog("create_delta_manifest",0x389,&cf_success_line_d,0x389);
                  }
                }
                else {
                  uVar18 = 0x370;
                  uVar17 = 0x370;
LAB_002673ec:
                  _dmlog("create_delta_manifest",uVar18,&cf_process_entry_from_oldfailed_line_d,
                         uVar17);
                  uVar20 = local_3bc;
                }
              }
            }
            else {
              piVar10 = ___error();
              pcVar13 = _strerror(*piVar10);
              pcVar16 = &cf_ERROR_process_entry_from_oldfailed_line_d__s;
              uVar18 = 0x356;
              uVar17 = 0x356;
LAB_00266f69:
              _dmlog("create_delta_manifest",uVar18,pcVar16,uVar17,pcVar13);
              uVar20 = local_3bc;
            }
          }
          _pthread_mutex_lock(&local_b8);
          local_40 = 1;
          _pthread_cond_broadcast(&local_e8);
          _pthread_mutex_unlock(&local_b8);
          if ((local_130 != 0) && (lVar8 = _CFDictionaryGetCount(), lVar8 == 0)) {
            _CFRelease(local_130);
            local_130 = 0;
            _dmlog("create_delta_manifest",0x397,&cf__semptydelta_manifest);
          }
          _dispatch_group_wait((dispatch_group_t)local_78._os_obj,0xffffffffffffffff);
          if (local_f0 == '\x01') {
            pcVar16 = &cf_create_delta_manifestfailed_;
            uVar17 = 0x5ea;
            goto LAB_0026727e;
          }
          if (local_58 != 0) {
            _CFDictionaryApplyFunction(local_58,_copy_file_func,&local_148);
          }
          if (((char)uVar20 == '\x01' && (char)uVar19 == '\0') &&
             (_prune_dir(&local_148), local_f0 == '\x01')) {
            pcVar16 = &cf_prune_dirfailed;
            uVar17 = 0x5f5;
            goto LAB_0026727e;
          }
          lVar8 = _copyBundleIdForPath(local_110);
          if (lVar8 == 0) {
            pcVar16 = &cf_copyBundleIdForPathfailed;
            uVar17 = 0x5fa;
            goto LAB_0026727e;
          }
          pvVar12 = (void *)_create_cmd_filename(local_f8,lVar8);
          bVar1 = true;
          if (pvVar12 != (void *)0x0) {
            iVar6 = _create_command_file(pvVar12,&local_148);
            if (iVar6 == 0) {
              local_3cc = 0;
              cVar5 = _verbose();
              if (cVar5 != '\0') {
                local_3cc = 0;
                _dmlog("MDMDirectoryDiff",0x603,&cf_createdcommandfileat_s,pvVar12);
              }
            }
            else {
              _dmlog("MDMDirectoryDiff",0x5ff,&cf_unabletocreatecommandfile);
              _set_error(&local_148,0);
            }
            goto LAB_00266796;
          }
        }
        bVar1 = true;
        pvVar12 = (void *)0x0;
        goto LAB_00266796;
      }
      _dmlog("MDMDirectoryDiff",0x5b4,&cf__s_unabletoensureInfo_plisttransfer);
    }
    bVar1 = true;
  }
  else {
    piVar10 = ___error();
    pcVar11 = _strerror(*piVar10);
    pcVar16 = &cf_pthread_mutex_initfailed__s;
    uVar17 = 0x59e;
LAB_0026677e:
    local_3c8 = (void *)0x0;
    _dmlog("MDMDirectoryDiff",uVar17,pcVar16,pcVar11);
    pcVar11 = (char *)0x0;
    bVar1 = false;
  }
  pvVar12 = (void *)0x0;
  lVar8 = 0;
  lVar9 = 0;
LAB_00266796:
  if (local_78._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(local_78);
  }
  if (local_70._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(local_70);
  }
  if (bVar1) {
    _pthread_cond_destroy(&local_e8);
  }
  if (local_3ec == 0) {
    _pthread_mutex_destroy(&local_b8);
  }
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_130 != 0) {
    _CFRelease();
  }
  local_130 = 0;
  if (local_408[3] != 0) {
    _CFRelease();
  }
  local_408[3] = 0;
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  if (local_120 != 0) {
    _CFRelease();
  }
  local_120 = 0;
  if (local_58 != 0) {
    _CFRelease();
  }
  local_58 = 0;
  if (local_50 != 0) {
    _CFRelease();
  }
  local_50 = 0;
  if (pvVar12 != (void *)0x0) {
    _free(pvVar12);
  }
  if (local_3c8 != (void *)0x0) {
    _free(local_3c8);
  }
  if (pcVar11 != (char *)0x0) {
    _free(pcVar11);
  }
  __Block_object_dispose(&local_410,8);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_3cc;
}

