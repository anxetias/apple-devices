// rea decompile_all
// name: _process_entry_from_new
// address: 0xaf961
// body: available
// range: 0xaf961-0xb01c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb0187 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _process_entry_from_new(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  void *pvVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  size_t sVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 local_cb8;
  undefined8 *local_cb0;
  undefined8 local_ca8;
  undefined1 local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  int *local_c80;
  long local_c78;
  long local_c70;
  undefined8 local_c68;
  undefined8 local_c60;
  long local_c58;
  long local_c50;
  int *local_c48;
  undefined8 local_c40;
  undefined8 local_c38;
  char local_868 [1024];
  char local_468 [4];
  ushort local_464;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *local_50;
  undefined8 *local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (*(char *)(param_3 + 0x58) != '\0') goto LAB_000afe83;
  piVar5 = (int *)_CFDataGetBytePtr(param_2);
  _CFDictionaryGetValue(*(undefined8 *)(param_3 + 0x18),&cf_TOUCH);
  local_c90 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 0x18),&cf_NOXFR);
  if (*piVar5 - 4U < 7) {
    uVar15 = *(undefined8 *)(&DAT_00444870 + (ulong)(*piVar5 - 4U) * 8);
  }
  else {
    uVar15 = 0;
  }
  local_c80 = piVar5;
  local_c98 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 0x18),uVar15);
  lVar6 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 8),uVar15);
  local_c88 = param_1;
  if ((lVar6 == 0) || (local_c78 = _CFDictionaryGetValue(lVar6,param_1), local_c78 == 0)) {
    cVar2 = _verbose();
    if (cVar2 == '\0') {
      local_c78 = 0;
    }
    else {
      local_c78 = 0;
      _dmlog("process_entry_from_new",0x2b5,
             &cf_addingmissing____todeltadict_new_file_info_>type_0x_08x,uVar15,local_c88,*local_c80
            );
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar15 = local_c88;
  cVar2 = _CFStringHasSuffix(local_c88,&cf__appex_Info_plist);
  if ((cVar2 == '\0') && (lVar6 = _CFStringCompare(uVar15,&cf_Info_plist,0), lVar6 != 0)) {
    uVar13 = *(undefined8 *)(param_3 + 0x28);
    uVar7 = _CFArrayGetCount(uVar13);
    cVar2 = _CFArrayContainsValue(uVar13,0,uVar7,uVar15);
    lVar6 = local_c78;
    piVar5 = local_c80;
    if (!bVar1 || cVar2 != '\0') goto LAB_000afe5c;
    lVar8 = _CFDataGetBytePtr(local_c78);
    if (*piVar5 != 10) {
      if (*piVar5 == 8) {
        if (*(long *)(piVar5 + 3) == *(long *)(lVar8 + 0xc)) {
          if (*(char *)(param_3 + 0x30) == '\x01') {
            local_c70 = lVar8;
            cVar2 = _CFStringGetFileSystemRepresentation(uVar15,&local_c68,0x400);
            if (cVar2 == '\0') {
              pcVar11 = &cf_can_tgetcstringfromCFString_;
              uVar13 = 0x123;
            }
            else {
              uVar3 = _snprintf(local_468,0x400,"%s/%s",*(undefined8 *)(param_3 + 0x38),&local_c68);
              if (uVar3 < 0x400) {
                if (*(char *)(param_3 + 0x31) == '\x01') {
                  lVar8 = local_c70;
                  if (*(long *)(local_c70 + 0x16) != 0) {
                    sVar12 = *(size_t *)((long)piVar5 + 0x16);
                    if (sVar12 == 0) {
                      iVar4 = _copy_file_digest(local_468,&local_68);
                      if (iVar4 != 0) {
                        _set_error(param_3,0);
                        pcVar11 = &cf_failedtogetdigestfornewfile;
                        uVar13 = 0x132;
                        goto LAB_000afc33;
                      }
                      sVar12 = *(size_t *)(local_c70 + 0x16);
                      ppuVar14 = &local_68;
                    }
                    else {
                      ppuVar14 = (undefined **)((long)piVar5 + 0x1e);
                    }
                    iVar4 = _memcmp(ppuVar14,(void *)(local_c70 + 0x1e),sVar12);
                    lVar8 = local_c70;
                    goto LAB_000afc03;
                  }
                }
                else {
                  uVar3 = _snprintf(local_868,0x400,"%s/%s",*(undefined8 *)(param_3 + 0x40),
                                    &local_c68);
                  if (0x3ff < uVar3) {
                    pcVar11 = &cf_filenametoolong_;
                    uVar13 = 0x13d;
                    goto LAB_000afc33;
                  }
                  lVar8 = local_c70;
                  if ((*(long *)(local_c70 + 0x16) == 0) &&
                     (cVar2 = _filecmp(local_468,local_868), lVar8 = local_c70, uVar13 = local_c90,
                     cVar2 != '\0')) goto LAB_000afe78;
                }
                goto LAB_000afc41;
              }
              pcVar11 = &cf_filenametoolong_;
              uVar13 = 0x128;
            }
LAB_000afc33:
            _dmlog("new_file_equal_old",uVar13,pcVar11);
            lVar8 = local_c70;
          }
          else {
            uVar13 = local_c90;
            if (*(long *)(piVar5 + 1) == *(long *)(lVar8 + 4)) goto LAB_000afe78;
          }
        }
        goto LAB_000afc41;
      }
LAB_000afc4c:
      if (*(char *)(param_3 + 0x32) == '\x01') {
        if (*(ulong *)(lVar8 + 0xc) < 0x3200000) {
          cVar2 = _verbose();
          if (cVar2 != '\0') {
            _dmlog("process_entry_from_new",0x2d3,&cf_attemptingbinarydiffof____llu_,uVar15,
                   *(undefined8 *)(piVar5 + 3));
          }
          local_c38 = 0;
          cVar2 = _verbose();
          if (cVar2 != '\0') {
            _dmlog("process_entry_from_new",0x2e8,&cf_binarydiffing__,uVar15);
          }
          local_c90 = _CFRetain(param_2);
          local_c60 = local_c90;
          uVar13 = _CFRetain(lVar6);
          local_c68 = uVar13;
          local_c80 = (int *)_createPathForString(uVar15,*(undefined8 *)(param_3 + 0x48));
          local_c48 = local_c80;
          local_c40 = _CFRetain(uVar15);
          lVar6 = _createPathForString(uVar15,*(undefined8 *)(param_3 + 0x38));
          local_c58 = lVar6;
          lVar8 = _createPathForString(uVar15,*(undefined8 *)(param_3 + 0x40));
          local_c50 = lVar8;
          pvVar9 = _calloc(1,0xd00);
          auVar16._0_4_ = -(uint)((int)((ulong)uVar13 >> 0x20) == 0 && (int)uVar13 == 0);
          auVar16._4_4_ = -(uint)((int)local_c90 == 0 && (int)((ulong)local_c90 >> 0x20) == 0);
          auVar16._8_4_ = -(uint)((int)((ulong)lVar6 >> 0x20) == 0 && (int)lVar6 == 0);
          auVar16._12_4_ = -(uint)((int)lVar8 == 0 && (int)((ulong)lVar8 >> 0x20) == 0);
          iVar4 = movmskps((int)pvVar9,auVar16);
          local_c78 = lVar6;
          if (((iVar4 == 0) && (pvVar9 != (void *)0x0)) && (local_c80 != (int *)0x0)) {
            iVar4 = _lstat_INODE64(local_c80,local_868);
            if (iVar4 == 0) {
              _dmlog("binary_diff_func",0x21d,
                     &cf_lstatsucceededfordst_path__s_thisdestinationalreadyexists_,local_c80);
            }
            iVar4 = _lstat_INODE64(lVar8,local_868);
            lVar6 = local_c78;
            uVar15 = local_c88;
            if (iVar4 == 0) {
              iVar4 = _lstat_INODE64(local_c78,local_468);
              if ((iVar4 != 0) || (!SBORROW2(0,local_464 & 0xf000))) {
                piVar5 = ___error();
                pcVar10 = _strerror(*piVar5);
                pcVar11 = &cf_lstatfailedfornew_path__s___s;
                uVar13 = 0x228;
                goto LAB_000aff32;
              }
              iVar4 = _prepare_directories_for_file(local_c80);
              if (iVar4 == 0) {
                lVar6 = _CFDataCreate(0,&local_c68,0x38);
                local_cb0 = &local_cb8;
                local_cb8 = 0;
                local_ca8 = 0x2000000000;
                local_ca0 = 0;
                local_68 = PTR___NSConcreteStackBlock_004412a8;
                local_60 = 0x42000000;
                local_58 = ___enqueue_files_for_diffing_block_invoke;
                local_50 = &___block_descriptor_tmp_254;
                local_48 = local_cb0;
                local_40 = param_3;
                if (*(long *)(param_3 + 0xe0) != -1) {
                  _dispatch_once(param_3 + 0xe0,&local_68);
                }
                if (*(char *)(local_cb0 + 3) == '\0') {
                  _pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x90));
                  _CFArrayAppendValue(*(undefined8 *)(param_3 + 0xf8),lVar6);
                  _pthread_cond_signal((pthread_cond_t *)(param_3 + 0x60));
                  uVar15 = local_c88;
                  _pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x90));
                }
                __Block_object_dispose(&local_cb8,8);
                if (lVar6 != 0) {
                  _CFRelease(lVar6);
                }
                goto LAB_000aff49;
              }
              piVar5 = ___error();
              pcVar10 = _strerror(*piVar5);
              _dmlog("binary_diff_func",0x22e,&cf_prepare_directories_for_filefailed__s,pcVar10);
            }
            else {
              piVar5 = ___error();
              pcVar10 = _strerror(*piVar5);
              pcVar11 = &cf_lstatfailedforold_path__s___s;
              uVar13 = 0x222;
              lVar6 = lVar8;
LAB_000aff32:
              _dmlog("binary_diff_func",uVar13,pcVar11,lVar6,pcVar10);
            }
            _set_error(param_3,0);
          }
          else {
            _dmlog("binary_diff_func",0x219,
                   &
                   cf_invalidparameter_dp_>newFileInfo__p_dp_>oldFileInfo__p_dp_>new_path__p_old_file__p_dst_file__p_cmd__p
                   ,local_c90,uVar13,lVar6,lVar8,local_c80,pvVar9);
            _set_error(param_3,0);
            uVar13 = local_c98;
            uVar15 = local_c88;
            if (pvVar9 == (void *)0x0) goto LAB_000afe78;
          }
LAB_000aff49:
          _free(pvVar9);
          uVar13 = local_c98;
          goto LAB_000afe78;
        }
        _dmlog("process_entry_from_new",0x2d7,&cf______istoobigtobinarydiff__llu__willcopyinstead,
               uVar15,*(undefined8 *)(piVar5 + 3));
      }
      goto LAB_000afe5c;
    }
    if (*(long *)((long)piVar5 + 0x16) != *(long *)(lVar8 + 0x16)) {
LAB_000afc41:
      if (*piVar5 == 10) goto LAB_000afe5c;
      goto LAB_000afc4c;
    }
    local_c78 = lVar6;
    iVar4 = _memcmp((void *)((long)piVar5 + 0x1e),(void *)(lVar8 + 0x1e),*(size_t *)(piVar5 + 3));
    lVar6 = local_c78;
LAB_000afc03:
    uVar13 = local_c90;
    if (iVar4 != 0) goto LAB_000afc41;
  }
  else {
    cVar2 = _verbose();
    if (cVar2 != '\0') {
      _dmlog("process_entry_from_new",699,&cf_includingrelevantInfo_plistaswholefile___,uVar15);
    }
LAB_000afe5c:
    uVar13 = local_c98;
    if (*(long *)(param_3 + 0x48) != 0) {
      _copy_file_func(uVar15,param_2,param_3);
      uVar13 = local_c98;
    }
  }
LAB_000afe78:
  _CFDictionarySetValue(uVar13,uVar15,param_2);
LAB_000afe83:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

