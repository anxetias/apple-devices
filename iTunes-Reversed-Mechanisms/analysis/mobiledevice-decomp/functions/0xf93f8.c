// rea decompile_all
// name: __AMRAuthInstallCreateLazyBundleFiles
// address: 0xf93f8
// body: available
// range: 0xf93f8-0xf971a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRAuthInstallCreateLazyBundleFiles
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long local_58;
  long local_50;
  void *local_48;
  long local_40;
  char local_31;
  
  local_58 = 0;
  lVar6 = _AMRLazyArchiveOpenFromOptions(param_4);
  if (lVar6 == 0) {
    return 0;
  }
  iVar4 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_2,param_3,&local_58);
  if (iVar4 == 0) {
    if (local_58 == 0) {
      _AMRLog(3,&cf_AMAuthInstallBundleCopyBuildIdentityForVariantreturnedNULL);
      iVar4 = 2;
    }
    else {
      lVar7 = _CFDictionaryGetValue(local_58,&cf_Manifest);
      if (lVar7 != 0) {
        local_50 = _CFDictionaryGetCount(lVar7);
        sVar1 = local_50 * 8;
        pvVar8 = _malloc(sVar1);
        pvVar9 = _malloc(sVar1);
        lVar12 = local_50;
        _CFDictionaryGetKeysAndValues(lVar7,pvVar8,pvVar9);
        local_48 = pvVar8;
        if (lVar12 < 1) {
          _AMRLazyArchiveClose(lVar6);
          lVar7 = 0;
          iVar5 = 0;
          iVar4 = 0;
          if (pvVar8 != (void *)0x0) goto LAB_000f9699;
        }
        else {
          lVar13 = 0;
          lVar7 = 0;
          local_40 = lVar6;
          do {
            uVar2 = *(undefined8 *)((long)pvVar8 + lVar13 * 8);
            cVar3 = _CFEqual(uVar2,&cf_BaseSystem);
            if (cVar3 == '\0') {
              uVar11 = *(undefined8 *)((long)pvVar9 + lVar13 * 8);
              uVar10 = _CFGetAllocator(param_1);
              lVar6 = _AMAuthInstallSupportGetValueForKeyWithFormat
                                (uVar10,uVar11,&cf______,&cf_Info,&cf_Path);
              lVar12 = local_50;
              pvVar8 = local_48;
              if (lVar6 != 0) {
                if (lVar7 != 0) {
                  _CFRelease(lVar7);
                }
                uVar11 = _CFGetAllocator(param_1);
                lVar7 = _CFURLCreateCopyAppendingPathComponent(uVar11,param_2,lVar6,0);
                if (lVar7 == 0) {
                  lVar7 = 0;
                  _AMRLog(3,&cf_CFURLCreateCopyAppendingPathComponentfailed);
                  iVar5 = 1;
                  goto LAB_000f9634;
                }
                cVar3 = _AMRLazyArchiveContainsURL(local_40,lVar7);
                pvVar8 = local_48;
                if (cVar3 != '\0') {
                  local_31 = '\0';
                  iVar5 = _AMAuthInstallSupportFileURLExists(lVar7,&local_31);
                  lVar12 = local_50;
                  if (iVar5 != 0) {
                    _AMRLog(3,&cf_AMAuthInstallSupportFileURLExistsfailed_err__d_,iVar5);
                    goto LAB_000f9634;
                  }
                  pvVar8 = local_48;
                  if ((local_31 == '\0') &&
                     (((cVar3 = _CFStringHasSuffix(uVar2,&cf_OS), cVar3 == '\0' ||
                       (cVar3 = _AMRLazyArchiveURLSupportsRandomAccess(local_40,lVar7),
                       pvVar8 = local_48, cVar3 == '\0')) &&
                      (cVar3 = _AMRLazyArchiveExtractToURL(local_40,lVar7), pvVar8 = local_48,
                      cVar3 == '\0')))) {
                    _AMRLog(3,&cf_failedtoextract______,uVar2,lVar6);
                    iVar5 = 4;
                    goto LAB_000f9634;
                  }
                }
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar12 != lVar13);
          iVar5 = 0;
LAB_000f9634:
          _AMRLazyArchiveClose(local_40);
LAB_000f9699:
          _free(local_48);
          iVar4 = iVar5;
        }
        if (pvVar9 != (void *)0x0) {
          _free(pvVar9);
        }
        goto LAB_000f9463;
      }
      _AMRLog(3,&cf_buildidentityhasnomanifest);
      iVar4 = 1;
    }
  }
  else {
    _AMRLog(3,&cf_AMAuthInstallBundleCopyBuildIdentityForVariantfailed_err__d_,iVar4);
  }
  _AMRLazyArchiveClose(lVar6);
  lVar7 = 0;
LAB_000f9463:
  if (local_58 != 0) {
    _CFRelease();
    local_58 = 0;
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  return iVar4;
}

