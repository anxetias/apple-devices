// rea decompile_all
// name: _MDMCopyNextDirectoryEntries
// address: 0xb6362
// body: available
// range: 0xb6362-0xb6924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb6920 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _MDMCopyNextDirectoryEntries(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  size_t sVar9;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  char *pcVar16;
  int local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  ushort uStack_44;
  undefined8 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_5c = 0;
  if (param_1 == 0) {
    lVar6 = 0;
    goto LAB_000b67cd;
  }
  lVar6 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar6 == 0) {
    lVar6 = 0;
    uVar8 = 0x1d2;
  }
  else {
    lVar7 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar7 != 0) {
      if (*(char *)(param_1 + 0x19) == '\0') {
        iVar5 = _bundleInfoIntoDict(*(undefined8 *)(param_1 + 0x10),lVar6);
        if (iVar5 == -1) {
          _dmlog("MDMCopyNextDirectoryEntries",0x1d7,&cf_bundleInfoIntoDictfailed);
          local_5c = -1;
        }
        *(undefined1 *)(param_1 + 0x19) = 1;
        cVar4 = _verbose();
        if (cVar4 != '\0') {
          uVar8 = _CFDictionaryGetValue(lVar6,&cf_BUNDLE_ID);
          _dmlog("MDMCopyNextDirectoryEntries",0x1db,&cf_bundleid__,uVar8);
        }
      }
      pcVar16 = *(char **)(param_1 + 0x10);
      sVar9 = _strlen(pcVar16);
      if (pcVar16 == (char *)0x0) {
        _dmlog("fts_get_entries",0xa1,&cf_invalidparameter_path__p_context__p_entries__p_error__p,0,
               param_1,lVar7,&local_5c);
LAB_000b6700:
        local_5c = -1;
        if (*(long *)(param_1 + 0x20) == 0) {
          uVar15 = 0xffffffff;
          bVar3 = false;
        }
        else {
          _fts_close_INODE64();
          uVar15 = 0xffffffff;
LAB_000b6721:
          *(undefined8 *)(param_1 + 0x20) = 0;
          bVar3 = false;
        }
      }
      else {
        plVar1 = (long *)(param_1 + 0x20);
        if (*(long *)(param_1 + 0x20) == 0) {
          local_58 = SUB84(pcVar16,0);
          uStack_54 = (undefined4)((ulong)pcVar16 >> 0x20);
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_4a = 0;
          lVar10 = _fts_open_INODE64(&local_58,0x55,0);
          *plVar1 = lVar10;
          if (lVar10 == 0) {
            piVar12 = ___error();
            pcVar13 = _strerror(*piVar12);
            _dmlog("fts_get_entries",0xa7,&cf_fts_openfailedfor_s__s,pcVar16,pcVar13);
            goto LAB_000b6700;
          }
        }
        lVar10 = _CFDictionaryGetCount(lVar7);
        if (100 < lVar10) {
LAB_000b667d:
          local_5c = 0;
          _fts_close_INODE64(*plVar1);
          uVar15 = 0;
          goto LAB_000b6721;
        }
        do {
          lVar10 = _fts_read_INODE64(*plVar1);
          if (lVar10 == 0) goto LAB_000b667d;
          pcVar13 = *(char **)(lVar10 + 0x30);
          cVar4 = *pcVar13;
          pcVar14 = pcVar13;
          while (cVar4 != '\0') {
            pcVar14 = pcVar14 + 1;
            if ((byte)(cVar4 - 9U) < 2) {
              _dmlog("path_check",0x70,&cf_path_scontainsillegalcharacter_0x_02x,pcVar13,cVar4);
              _dmlog("fts_get_entries",0xb3,&cf_path_checkfailedfor_s,*(undefined8 *)(lVar10 + 0x30)
                    );
              goto LAB_000b6700;
            }
            cVar4 = *pcVar14;
          }
          uStack_42 = 0;
          local_58 = 0;
          lVar2 = *(long *)(lVar10 + 0x60);
          uStack_54 = (undefined4)*(undefined8 *)(lVar2 + 0x30);
          uStack_50 = (undefined4)((ulong)*(undefined8 *)(lVar2 + 0x30) >> 0x20);
          uVar8 = *(undefined8 *)(lVar2 + 0x60);
          uStack_4c = (undefined2)uVar8;
          uStack_4a = (undefined2)((ulong)uVar8 >> 0x10);
          uStack_48 = (undefined4)((ulong)uVar8 >> 0x20);
          uStack_44 = *(ushort *)(lVar2 + 4) & 0xfff;
          if (*(ushort *)(lVar10 + 0x58) - 1 < 0xc) {
            switch((uint)*(ushort *)(lVar10 + 0x58)) {
            case 1:
              local_58 = 4;
              iVar5 = _strcmp(pcVar16,pcVar13);
              if (iVar5 != 0) goto LAB_000b664c;
              cVar4 = _verbose();
              if (cVar4 != '\0') {
                _dmlog("fts_get_entries",0xd7,&cf_SKIPPINGDIR__s_size__lld_modtime__lld,
                       *(undefined8 *)(lVar10 + 0x30),
                       CONCAT44(uStack_48,CONCAT22(uStack_4a,uStack_4c)),
                       CONCAT44(uStack_50,uStack_54));
              }
              break;
            default:
              goto switchD_000b6547_caseD_2;
            case 4:
            case 7:
            case 10:
              _dmlog("fts_get_entries",0xe4,&cf_FTSin_sreturnedanerror_dforpath__s_,
                     "fts_get_entries",*(undefined4 *)(lVar10 + 0x38),pcVar13);
              goto LAB_000b6700;
            case 6:
              break;
            case 8:
              local_58 = 8;
              if (*(char *)(param_1 + 0x18) == '\x01') {
                puVar11 = _malloc(0x3e);
                if (puVar11 == (undefined4 *)0x0) {
                  piVar12 = ___error();
                  pcVar16 = _strerror(*piVar12);
                  _dmlog("add_digest_to_file_info",0x88,&cf_noresourcesfor_s__s,pcVar13,pcVar16);
                }
                else {
                  *(ulong *)((long)puVar11 + 0xe) =
                       CONCAT26(uStack_44,CONCAT42(uStack_48,uStack_4a));
                  *(undefined8 *)((long)puVar11 + 0x16) = uStack_42;
                  *puVar11 = local_58;
                  puVar11[1] = uStack_54;
                  puVar11[2] = uStack_50;
                  puVar11[3] = CONCAT22(uStack_4a,uStack_4c);
                  iVar5 = _copy_file_digest(pcVar13,(long)puVar11 + 0x1e);
                  if (iVar5 != -1) {
                    *(undefined8 *)((long)puVar11 + 0x16) = 0x20;
                    goto LAB_000b6633;
                  }
                  _free(puVar11);
                }
                _dmlog("fts_get_entries",0xcb,&cf_add_digest_to_dir_infofailedfor_s,
                       *(undefined8 *)(lVar10 + 0x30));
                goto LAB_000b6700;
              }
LAB_000b664c:
              _add_entry(lVar7,pcVar13 + sVar9 + 1,&local_58);
              break;
            case 0xc:
              local_58 = 10;
              puVar11 = (undefined4 *)_copy_link_data(pcVar13,&local_58);
              if (puVar11 == (undefined4 *)0x0) {
                _dmlog("fts_get_entries",0xc1,&cf_copy_link_datafailed);
                goto LAB_000b6700;
              }
LAB_000b6633:
              _add_entry(lVar7,pcVar13 + sVar9 + 1,puVar11);
              _free(puVar11);
            }
          }
          else {
switchD_000b6547_caseD_2:
            _dmlog("fts_get_entries",0xeb,&cf_UNEXPECTEDfts_info__d);
          }
          lVar10 = _CFDictionaryGetCount(lVar7);
        } while (lVar10 < 0x65);
        local_5c = 0;
        bVar3 = true;
        uVar15 = 0;
      }
      cVar4 = _verbose();
      if (cVar4 != '\0') {
        pcVar16 = "FALSE";
        if (bVar3) {
          pcVar16 = "TRUE";
        }
        uVar8 = _CFDictionaryGetCount(lVar7);
        _dmlog("fts_get_entries",0x102,&cf__sreturning__s__error__d__ldentriesindictionary,
               "fts_get_entries",pcVar16,uVar15,uVar8);
      }
      if (local_5c == 0) {
        _CFDictionarySetValue(lVar6,&cf_DIR_CONTENTS,lVar7);
        if (!bVar3) {
          _CFDictionarySetValue(lVar6,&cf_LAST_ENTRY,&cf_YES);
        }
      }
      else {
        _CFRelease(lVar6);
        lVar6 = 0;
      }
      _CFRelease(lVar7);
      goto LAB_000b67cd;
    }
    uVar8 = 0x1d3;
  }
  _dmlog("MDMCopyNextDirectoryEntries",uVar8,&cf_unabletocreatedictionary);
LAB_000b67cd:
  if (param_2 != (int *)0x0) {
    *param_2 = local_5c;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

