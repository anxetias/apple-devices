// rea decompile_all
// name: _create_command_file
// address: 0xb522f
// body: available
// range: 0xb522f-0xb5ec5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb5ec1 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _create_command_file(char *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  FILE *pFVar14;
  undefined8 uVar15;
  size_t sVar16;
  char *pcVar17;
  int *piVar18;
  void *pvVar19;
  cfstringStruct *pcVar20;
  undefined4 uVar21;
  undefined8 uStack_500;
  char *local_4e8;
  size_t local_4d0;
  long local_4c0;
  long local_4a8;
  void *local_498;
  long local_488;
  long local_480;
  char *local_478;
  undefined1 local_468 [48];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = _CFDictionaryGetValue(param_2[3],&cf_PATCH);
  lVar4 = _CFDictionaryGetValue(param_2[3],&cf_TOUCH);
  lVar5 = _CFDictionaryGetValue(param_2[3],&cf_DELS);
  lVar6 = _CFDictionaryGetValue(param_2[3],&cf_DIFFS);
  if (lVar3 == 0) {
    local_4c0 = 0;
  }
  else {
    local_4c0 = _CFDictionaryGetCount(lVar3);
  }
  if (lVar4 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = _CFDictionaryGetCount(lVar4);
  }
  if (lVar5 == 0) {
    local_4a8 = 0;
  }
  else {
    local_4a8 = _CFDictionaryGetCount(lVar5);
  }
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = _CFDictionaryGetCount();
  }
  lVar7 = lVar7 + local_4c0;
  lVar9 = _CFDictionaryGetValue(param_2[3],&cf_BUNDLE_VERSION);
  lVar10 = _CFDictionaryGetValue(param_2[1],&cf_INFO_PLIST_HASH);
  lVar11 = _CFDictionaryGetValue(param_2[1],&cf_SUPPORTED_DEVICES);
  lVar12 = _CFDictionaryGetValue(*param_2,&cf_SUPPORTED_DEVICES);
  local_4d0 = local_4a8 + lVar7 + lVar8;
  if (local_4d0 == 0) {
    uVar21 = 0xffffffff;
    goto LAB_000b5e45;
  }
  if (lVar5 == 0) {
    local_480 = 0;
  }
  else {
    local_480 = _CFDictionaryCreateMutableCopy(0,0);
  }
  pvVar13 = _malloc(local_4d0 * 8);
  pFVar14 = _fopen(param_1,"w");
  if (pFVar14 == (FILE *)0x0) {
    piVar18 = ___error();
    pcVar17 = _strerror(*piVar18);
    _dmlog("create_command_file",0x3ed,&cf__dunabletocreate_s__s,0x3ed,param_1,pcVar17);
    local_4e8 = (char *)0x0;
LAB_000b5da6:
    local_488 = 0;
    local_498 = (void *)0x0;
    local_478 = (char *)0x0;
LAB_000b5dbc:
    uVar21 = 0xffffffff;
    lVar3 = 0;
  }
  else {
    if (lVar9 == 0) {
      _dmlog("create_command_file",0x401,&cf_unabletogetbundleVersion_usingzero);
      local_4e8 = _strdup("0");
    }
    else {
      uVar15 = _CFStringGetLength(lVar9);
      sVar16 = _CFStringGetMaximumSizeForEncoding(uVar15,0x8000100);
      local_4e8 = _calloc(sVar16,1);
      cVar1 = _CFStringGetCString(lVar9,local_4e8,sVar16,0x8000100);
      if (cVar1 == '\0') {
        _dmlog("create_command_file",0x3f6,&cf_unabletogetcstringfrombundleVersion_usingzero);
        _snprintf(local_4e8,sVar16,"0");
      }
      for (pcVar17 = _index(local_4e8,10); pcVar17 != (char *)0x0; pcVar17 = _index(pcVar17,10)) {
        *pcVar17 = ' ';
      }
    }
    if (*(char *)((long)param_2 + 0x32) == '\x01') {
      pcVar17 = "ipaD\n2\n";
      if (lVar12 != 0 || lVar11 != 0) {
        pcVar17 = "ipaD\n3\n";
      }
      _fwrite(pcVar17,7,1,pFVar14);
      _fprintf(pFVar14,"%s\n",local_4e8);
      if (lVar10 == 0) {
        pcVar20 = &cf_infoPlistHashisNULL;
        uVar15 = 0x416;
      }
      else {
        local_498 = (void *)_copyCStringFromCFString();
        if (local_498 != (void *)0x0) {
          _fprintf(pFVar14,"%s\n",local_498);
          if (lVar12 == 0 && lVar11 == 0) goto LAB_000b56e9;
          if (lVar11 == 0) {
            local_488 = 0;
            local_478 = (char *)0x0;
LAB_000b5e98:
            _fputc(10,pFVar14);
            goto LAB_000b5709;
          }
          local_488 = _CFStringCreateByCombiningStrings(0,lVar11,&cf_space_s_);
          local_478 = (char *)_copyCStringFromCFString(local_488);
          if ((local_478 != (char *)0x0) && (sVar16 = _strlen(local_478), sVar16 < 0x800)) {
            _fputs(local_478,pFVar14);
            goto LAB_000b5e98;
          }
          lVar3 = 0;
          _dmlog("create_command_file",0x427,&cf_supported_deviceisNULLorlongerthan2047bytes);
          uVar21 = 0xffffffff;
          goto LAB_000b5dca;
        }
        pcVar20 = &cf_info_plist_hashisNULL;
        uVar15 = 0x41b;
      }
      _dmlog("create_command_file",uVar15,pcVar20);
      goto LAB_000b5da6;
    }
    _fwrite("ipaD\n1\n",7,1,pFVar14);
    _fprintf(pFVar14,"%s\n",local_4e8);
    local_498 = (void *)0x0;
LAB_000b56e9:
    local_488 = 0;
    local_478 = (char *)0x0;
LAB_000b5709:
    if (lVar3 != 0) {
      _CFDictionaryGetKeysAndValues(lVar3,pvVar13,0);
    }
    if (lVar4 != 0) {
      _CFDictionaryGetKeysAndValues(lVar4,(void *)((long)pvVar13 + local_4c0 * 8),0);
    }
    if (local_480 != 0) {
      if (lVar3 != 0) {
        _CFDictionaryApplyFunction(lVar3,_removeFromDeleteList,local_480);
        local_4a8 = _CFDictionaryGetCount(local_480);
        local_4d0 = lVar8 + lVar7 + local_4a8;
      }
      _CFDictionaryGetKeysAndValues(local_480,(void *)((long)pvVar13 + lVar7 * 8),0);
    }
    if (lVar6 != 0) {
      _CFDictionaryGetKeysAndValues(lVar6,(long)pvVar13 + local_4a8 * 8 + lVar7 * 8,0);
    }
    _qsort(pvVar13,local_4d0,8,(int *)_cfStringCompare);
    if (0 < (long)local_4d0) {
      sVar16 = 0;
      do {
        cVar1 = _CFStringGetFileSystemRepresentation
                          (*(undefined8 *)((long)pvVar13 + sVar16 * 8),local_438,0x400);
        if (cVar1 == '\0') {
          _dmlog("create_command_file",0x454,&cf_unabletogetbytesfromcfstring);
          goto LAB_000b5dbc;
        }
        cVar1 = _CFDictionaryContainsKey(lVar6,*(undefined8 *)((long)pvVar13 + sVar16 * 8));
        if (cVar1 == '\0') {
          cVar1 = _CFDictionaryContainsKey(lVar3,*(undefined8 *)((long)pvVar13 + sVar16 * 8));
          if (cVar1 != '\0') {
            uStack_500 = 0x2b;
            goto LAB_000b5842;
          }
          cVar1 = _CFDictionaryContainsKey(lVar4,*(undefined8 *)((long)pvVar13 + sVar16 * 8));
          if (cVar1 == '\0') {
            cVar1 = _CFDictionaryContainsKey(lVar5,*(undefined8 *)((long)pvVar13 + sVar16 * 8));
            if (cVar1 != '\0') {
              uStack_500 = 0x2d;
              goto LAB_000b5842;
            }
          }
          else {
            uVar15 = _CFDictionaryGetValue(lVar4);
            lVar7 = _CFDataGetBytePtr(uVar15);
            _fprintf(pFVar14,"%c%s\t%llu\n",0x3d,local_438,*(undefined8 *)(lVar7 + 4));
          }
        }
        else {
          uStack_500 = 0x5e;
LAB_000b5842:
          _fprintf(pFVar14,"%c%s\n",uStack_500,local_438);
        }
        sVar16 = sVar16 + 1;
      } while (local_4d0 != sVar16);
    }
    _fprintf(pFVar14,"%cEOF\n",0x78);
    lVar3 = _CFDictionaryGetValue(param_2[4],&cf_COMMAND_LINE_ARGS);
    if (lVar3 != 0) {
      lVar4 = _CFArrayGetCount(lVar3);
      iVar2 = _fprintf(pFVar14,"%c%s",0x23,"Command Line Args:");
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x477,&cf_unabletowritetofile__s,pcVar17);
      }
      if (0 < lVar4) {
        lVar5 = 0;
        do {
          pvVar19 = (void *)_copyCStringForIndex(lVar3,lVar5);
          iVar2 = _fprintf(pFVar14," %s",pvVar19);
          if (iVar2 == -1) {
            piVar18 = ___error();
            pcVar17 = _strerror(*piVar18);
            _dmlog("create_command_file",0x47b,&cf_unabletowritetofile__s,pcVar17);
          }
          if (pvVar19 != (void *)0x0) {
            _free(pvVar19);
          }
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
      iVar2 = _fprintf(pFVar14,"\n");
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x47f,&cf_unabletowritetofile__s,pcVar17);
      }
    }
    iVar2 = _getMainExecutableUUIDString(local_468);
    if (iVar2 == 0) {
      iVar2 = _fprintf(pFVar14,"%c%s %s\n",0x23,"CreateSparseIPA UUID:",local_468);
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x486,&cf_unabletowritetofile__s,pcVar17);
      }
    }
    else {
      _dmlog("create_command_file",0x483,&cf_unabletogettheexecutable_suuid);
    }
    pvVar19 = (void *)_copyCStringForKey(param_2[1],&cf_BUNDLE_ID);
    if (pvVar19 != (void *)0x0) {
      iVar2 = _fprintf(pFVar14,"%c%s %s\n",0x23,"Bundle id:",pvVar19);
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x48b,&cf_unabletowritetofile__s,pcVar17);
      }
      _free(pvVar19);
    }
    pvVar19 = (void *)_copyCStringForKey(param_2[1],&cf_BUNDLE_VERSION);
    if (pvVar19 != (void *)0x0) {
      iVar2 = _fprintf(pFVar14,"%c%s %s\n",0x23,"Old bundle version:",pvVar19);
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x490,&cf_unabletowritetofile__s,pcVar17);
      }
      _free(pvVar19);
    }
    pvVar19 = (void *)_copyCStringForKey(*param_2,&cf_BUNDLE_VERSION);
    if (pvVar19 != (void *)0x0) {
      iVar2 = _fprintf(pFVar14,"%c%s %s\n",0x23,"New bundle version:",pvVar19);
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x495,&cf_unabletowritetofile__s,pcVar17);
      }
      _free(pvVar19);
    }
    pvVar19 = (void *)_copyCStringForKey(param_2[4],&cf_OLD_IPA_HASH);
    if (pvVar19 != (void *)0x0) {
      iVar2 = _fprintf(pFVar14,"%c%s %s\n",0x23,"Old IPA hash (md5):",pvVar19);
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x49a,&cf_unabletowritetofile__s,pcVar17);
      }
      _free(pvVar19);
    }
    pvVar19 = (void *)_copyCStringForKey(param_2[4],&cf_NEW_IPA_HASH);
    if (pvVar19 != (void *)0x0) {
      iVar2 = _fprintf(pFVar14,"%c%s %s\n",0x23,"New IPA hash (md5):",pvVar19);
      if (iVar2 == -1) {
        piVar18 = ___error();
        pcVar17 = _strerror(*piVar18);
        _dmlog("create_command_file",0x49f,&cf_unabletowritetofile__s,pcVar17);
      }
      _free(pvVar19);
    }
    uVar21 = 0;
    lVar3 = _CFStringCreateWithCString(0,param_1,0x8000100);
    if (lVar3 == 0) {
      uVar21 = 0xffffffff;
      lVar3 = 0;
    }
    else {
      _CFDictionarySetValue(param_2[3],&cf_COMMAND_FILE_PATH,lVar3);
    }
  }
LAB_000b5dca:
  if (local_480 != 0) {
    _CFRelease(local_480);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (local_488 != 0) {
    _CFRelease();
  }
  if (local_478 != (char *)0x0) {
    _free(local_478);
  }
  if (local_498 != (void *)0x0) {
    _free(local_498);
  }
  if (local_4e8 != (char *)0x0) {
    _free(local_4e8);
  }
  if (pvVar13 != (void *)0x0) {
    _free(pvVar13);
  }
  if (pFVar14 != (FILE *)0x0) {
    _fclose(pFVar14);
  }
LAB_000b5e45:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

