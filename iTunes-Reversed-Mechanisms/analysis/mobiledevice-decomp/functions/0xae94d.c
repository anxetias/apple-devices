// rea decompile_all
// name: _MDMPatchBundle
// address: 0xae94d
// body: available
// range: 0xae94d-0xaf03e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xaf03a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MDMPatchBundle(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  char *pcVar13;
  cfstringStruct *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 local_cf0 [144];
  undefined8 local_c60;
  long local_c58;
  long local_c50;
  void *local_c48;
  void *local_c40;
  char local_c38 [1024];
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c58 = 0;
  ___bzero(local_438,0x400);
  if (param_1 == (undefined8 *)0x0) {
    _MDMPatchBundle_cold_6();
    goto LAB_000aef7b;
  }
  iVar4 = _lstat_INODE64(param_1[1],local_cf0);
  if (iVar4 == 0) {
    puVar1 = param_1 + 4;
    iVar4 = _lstat_INODE64(param_1[4],local_cf0);
    if (iVar4 != 0) {
      uVar16 = *puVar1;
      piVar6 = ___error();
      pcVar7 = _strerror(*piVar6);
      uVar15 = 0x6bd;
      goto LAB_000aea24;
    }
    cVar3 = _validate_bundle(param_1[1]);
    if (cVar3 == '\0') {
      uVar16 = 0;
      iVar4 = _copyfile((char *)*param_1,(char *)param_1[7],(copyfile_state_t)0x0,0xc800f);
      if (iVar4 != 0) {
        _MDMPatchBundle_cold_1(*param_1,param_1[7]);
        goto LAB_000aef7b;
      }
      _dmlog("MDMPatchBundle",0x6c5,&cf_copied__s__to___s);
LAB_000aebfb:
      local_c50 = 0;
      goto LAB_000aea37;
    }
    puVar2 = param_1 + 6;
    pvVar8 = (void *)_create_name_for_mkdtemp(param_1[6],"MDMStagingDir_");
    if (pvVar8 == (void *)0x0) {
      _MDMPatchBundle_cold_5(puVar2);
LAB_000aef7b:
      uVar16 = 0xffffffff;
      goto LAB_000aebfb;
    }
    uVar5 = _snprintf(local_438,0x400,"%s/%s",param_1[7],pvVar8);
    if (uVar5 < 0x400) {
      local_c48 = pvVar8;
      pcVar7 = _mkdtemp(local_438);
      if (pcVar7 == (char *)0x0) {
        _MDMPatchBundle_cold_4(local_438);
LAB_000aefba:
        local_c50 = 0;
      }
      else {
        iVar4 = _copyfile((char *)*puVar1,local_438,(copyfile_state_t)0x0,0xc800f);
        if (iVar4 != 0) {
          _MDMPatchBundle_cold_2(puVar1,local_438);
          goto LAB_000aefba;
        }
        pvVar9 = (void *)_create_path_str(local_438,*puVar2,0);
        if (pvVar9 != (void *)0x0) {
          lVar10 = _CFDictionaryCreateMutable
                             (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          iVar4 = _bundleInfoIntoDict(param_1[1],lVar10);
          local_c50 = lVar10;
          if (iVar4 == 0) {
            local_c40 = (void *)_copyCStringForKey(lVar10,*(undefined8 *)
                                                           PTR__kCFBundleVersionKey_00441128);
            pvVar11 = (void *)_copyCStringForKey(lVar10,*(undefined8 *)
                                                                                                                  
                                                  PTR___kCFBundleShortVersionStringKey_004410d8);
            local_c60 = _CFDictionaryGetValue(lVar10,&cf_SUPPORTED_DEVICES);
            pvVar12 = (void *)_copyCStringForKey(lVar10,&cf_INFO_PLIST_HASH);
            if (pvVar12 == (void *)0x0) {
              pvVar12 = (void *)0x0;
              _dmlog("MDMPatchBundle",0x6e7,&cf_info_plist_hashisnotpresentininfoDict___,lVar10);
            }
            else {
              cVar3 = _verbose();
              uVar16 = local_c60;
              if (cVar3 != '\0') {
                _dmlog("MDMPatchBundle",0x6ec,
                       &
                       cf_callinghardlink_copy_hierarchywith_source__sdest__scmd_filename__s_expected_cfbundleversion__sexpected_cfbundleshortversion__s_infoPlistHash__s_supportedDevices___
                       ,param_1[1],pvVar9,param_1[5],local_c40,pvVar11,pvVar12,local_c60);
              }
              cVar3 = _hardlink_copy_hierarchy
                                (param_1[1],pvVar9,param_1[5],local_c40,pvVar11,pvVar12,0,uVar16,0,
                                 &local_c58);
              if (cVar3 == '\0') {
                piVar6 = ___error();
                pcVar7 = _strerror(*piVar6);
                _dmlog("MDMPatchBundle",0x6f0,&cf_hardlink_copy_hierarchyfailed__s___,pcVar7,
                       local_c58);
                if (local_c58 != 0) {
                  _CFRelease();
                }
                local_c58 = 0;
                iVar4 = _rm_dir(param_1[1]);
                uVar16 = 0xffffffff;
                pvVar8 = local_c48;
                if ((iVar4 == 0) && (cVar3 = _verbose(), pvVar8 = local_c48, cVar3 != '\0')) {
                  _dmlog("MDMPatchBundle",0x6f4,&cf_rm_dir_ed_s,param_1[1]);
                  pvVar8 = local_c48;
                }
                goto LAB_000aea4d;
              }
              ___bzero(local_838,0x400);
              lVar10 = _realpath_DARWIN_EXTSN(param_1[1],local_838);
              pvVar8 = (void *)param_1[1];
              if (lVar10 == 0) {
                piVar6 = ___error();
                pcVar13 = _strerror(*piVar6);
                pcVar14 = &cf_unabletorealpath__s__result___s___s;
                pcVar7 = local_838;
                uVar16 = 0x6fc;
              }
              else {
                iVar4 = _rm_dir(pvVar8);
                if ((iVar4 == 0) && (cVar3 = _verbose(), cVar3 != '\0')) {
                  _dmlog("MDMPatchBundle",0x702,&cf_rm_dir_ed_s,param_1[1]);
                }
                ___bzero(local_c38,0x400);
                lVar10 = _realpath_DARWIN_EXTSN(pvVar9,local_c38);
                if (lVar10 != 0) {
                  iVar4 = _rename(local_c38,local_838);
                  if (iVar4 != 0) {
                    uVar16 = param_1[1];
                    piVar6 = ___error();
                    pcVar7 = _strerror(*piVar6);
                    _dmlog("MDMPatchBundle",0x70e,&cf_renamefailedtomove__s__to___sERROR__s,
                           local_438,uVar16,pcVar7);
                  }
                  uVar16 = 0;
                  pvVar8 = local_c48;
                  goto LAB_000aea4d;
                }
                piVar6 = ___error();
                pcVar13 = _strerror(*piVar6);
                pcVar14 = &cf_unabletorealpath__s__result___s___s;
                pcVar7 = local_c38;
                uVar16 = 0x708;
                pvVar8 = pvVar9;
              }
              _dmlog("MDMPatchBundle",uVar16,pcVar14,pvVar8,pcVar7,pcVar13);
            }
            uVar16 = 0xffffffff;
            pvVar8 = local_c48;
          }
          else {
            _MDMPatchBundle_cold_3();
            uVar16 = 0xffffffff;
            local_c40 = (void *)0x0;
            pvVar11 = (void *)0x0;
            pvVar12 = (void *)0x0;
            pvVar8 = local_c48;
          }
          goto LAB_000aea4d;
        }
        local_c50 = 0;
        _dmlog("MDMPatchBundle",0x6da,&cf_create_path_stringfailedtocreate_s__s,local_438,*puVar2);
      }
      uVar16 = 0xffffffff;
      local_c40 = (void *)0x0;
      pvVar11 = (void *)0x0;
      pvVar12 = (void *)0x0;
      pvVar9 = (void *)0x0;
      pvVar8 = local_c48;
      goto LAB_000aea4d;
    }
    local_c50 = 0;
    _dmlog("MDMPatchBundle",0x6cf,&cf_pathtoolong__s__s,param_1[7],pvVar8);
    uVar16 = 0xffffffff;
  }
  else {
    uVar16 = param_1[1];
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    uVar15 = 0x6b8;
LAB_000aea24:
    local_c50 = 0;
    _dmlog("MDMPatchBundle",uVar15,&cf_statfailedfor_s__s,uVar16,pcVar7);
    uVar16 = 0xffffffff;
LAB_000aea37:
    pvVar8 = (void *)0x0;
  }
  local_c40 = (void *)0x0;
  pvVar11 = (void *)0x0;
  pvVar12 = (void *)0x0;
  pvVar9 = (void *)0x0;
LAB_000aea4d:
  if ((local_438[0] != '\0') && (iVar4 = _rm_dir(local_438), iVar4 != 0)) {
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    _dmlog("MDMPatchBundle",0x719,&cf_rm_dirfailedfor_s__s,local_438,pcVar7);
  }
  if (pvVar8 != (void *)0x0) {
    _free(pvVar8);
  }
  if (pvVar9 != (void *)0x0) {
    _free(pvVar9);
  }
  if (local_c50 != 0) {
    _CFRelease();
  }
  if (local_c40 != (void *)0x0) {
    _free(local_c40);
  }
  if (pvVar11 != (void *)0x0) {
    _free(pvVar11);
  }
  if (pvVar12 != (void *)0x0) {
    _free(pvVar12);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

