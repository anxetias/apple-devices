// rea decompile_all
// name: _AMAuthInstallBundleCreatePreManifest
// address: 0x28a454
// body: available
// range: 0x28a454-0x28a8a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBundleCreatePreManifest
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  undefined8 uVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  ulong uVar12;
  long *plVar13;
  undefined8 local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  uVar14 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  if (param_1 == 0) {
    pcVar10 = &cf__s_amaiisNULL;
LAB_0028a759:
    iVar5 = 1;
LAB_0028a7b6:
    local_38 = 0;
    _AMSupportCreateErrorInternal
              (param_5,&cf_AuthInstallErrorDomain,iVar5,0,pcVar10,
               "AMAuthInstallBundleCreatePreManifest");
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
      pcVar10 = &cf__s_amai_>apParametersisNULL;
      goto LAB_0028a759;
    }
    iVar5 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_2,param_4,&local_60);
    if (iVar5 != 0) {
      pcVar10 = &cf__s_AMAuthInstallBundleCopyBuildIdentityForVariant__failed__d;
      goto LAB_0028a7b6;
    }
    if (local_60 == 0) {
      pcVar10 = &cf__s_AMAuthInstallBundleCopyBuildIdentityForVariant__returnedaNULLsrcBuildIdentity
      ;
      iVar5 = 0xe;
      goto LAB_0028a7b6;
    }
    local_50 = param_3;
    local_48 = param_5;
    uVar7 = _CFGetAllocator(param_1);
    local_38 = 0;
    local_40 = _CFDictionaryCreateMutableCopy(uVar7,0,local_60);
    uVar7 = 0;
    uVar11 = 0;
    lVar8 = 0;
    if (local_40 == 0) goto LAB_0028a6cf;
    cVar4 = _AMAuthInstallApPersonalizationEnabled(param_1);
    uVar12 = CONCAT44(uVar14,1);
    uVar6 = __AMAuthInstallGeneratePersonalizationEntries
                      (param_1,param_2,param_4,0,0,&local_58,uVar12);
    if (uVar6 == 0) {
      if (local_58 == 0) {
        pcVar10 = &
                  cf__s__AMAuthInstallGeneratePersonalizationEntries__returnedaNULLentriesToPersonalize
        ;
        uVar6 = 0xe;
        goto LAB_0028a800;
      }
      uVar7 = _CFGetAllocator(param_1);
      lVar8 = _CFArrayCreateMutableCopy(uVar7,0,local_58);
      if (lVar8 != 0) {
        if ((cVar4 == '\0') ||
           (uVar6 = __AMRAuthInstallBundleAppendFirmwareEntriesToArrays(param_1,local_40,lVar8,0),
           uVar6 == 0)) {
          lVar3 = local_50;
          if ((*(long **)(param_1 + 0x80) == (long *)0x0) ||
             (((**(long **)(param_1 + 0x80) == 0 || (lVar9 = _CFDictionaryGetCount(), lVar3 != 0))
              || (lVar9 < 1)))) {
            if (lVar3 != 0) {
              uVar6 = __AMAuthInstallBundleCopyOverrideBuildIdentity
                                (param_1,lVar8,param_2,lVar3,local_40,0,0);
              if (uVar6 != 0) {
                uVar12 = (ulong)uVar6;
                pcVar10 = &cf__s__AMAuthInstallBundleCopyOverrideBuildIdentity__failed__d;
                goto LAB_0028a886;
              }
            }
            uVar7 = _CFGetAllocator(param_1);
            puVar2 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
            puVar1 = PTR__kCFTypeDictionaryKeyCallBacks_004411b0;
            local_50 = lVar8;
            uVar7 = _CFDictionaryCreateMutable
                              (uVar7,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            uVar11 = _CFGetAllocator(param_1);
            lVar8 = local_50;
            uVar11 = _CFDictionaryCreate(uVar11,0,0,0,puVar1,puVar2);
            _CFDictionarySetValue(uVar7,&cf_Personalized,uVar11);
            _CFDictionarySetValue(uVar7,&cf_Manifest,uVar11);
            plVar13 = &local_68;
            iVar5 = __AMAuthInstallBundleCreateServerRequestDictionary
                              (param_1,lVar8,local_40,uVar7,param_2,0,plVar13,0);
            uVar14 = (undefined4)((ulong)plVar13 >> 0x20);
            if ((iVar5 == 0) && (local_68 != 0)) {
              iVar5 = _AMAuthInstallApImg4LocalCreatePreManifest(param_1,local_68,&local_70);
              if (iVar5 != 0) {
                _AMSupportCreateErrorInternal
                          (local_48,&cf_AuthInstallErrorDomain,iVar5,0,
                           &cf__s_AMAUthInstallApImg4LocalCreatePreManifest__failed__d,
                           "AMAuthInstallBundleCreatePreManifest",CONCAT44(uVar14,iVar5));
              }
              local_38 = local_40;
              lVar8 = local_50;
            }
            else {
              local_38 = local_40;
            }
            goto LAB_0028a6cf;
          }
          pcVar10 = &
                    cf__s_AMAuthInstallBundleCreatePreManifestfailedbecauseoverridesfoundbutdstBundleURLisNULL
          ;
          uVar6 = 1;
        }
        else {
          uVar12 = (ulong)uVar6;
          pcVar10 = &cf__s__AMRAuthInstallBundleAppendFirmwareEntriesToArrays__failed__d;
        }
LAB_0028a886:
        uVar7 = 0;
        _AMSupportCreateErrorInternal
                  (local_48,&cf_AuthInstallErrorDomain,uVar6,0,pcVar10,
                   "AMAuthInstallBundleCreatePreManifest",uVar12);
        local_38 = local_40;
        uVar11 = 0;
        goto LAB_0028a6cf;
      }
      local_38 = local_40;
    }
    else {
      uVar12 = (ulong)uVar6;
      pcVar10 = &cf__s__AMAuthInstallGeneratePersonalizationEntries__failed__d;
LAB_0028a800:
      _AMSupportCreateErrorInternal
                (local_48,&cf_AuthInstallErrorDomain,uVar6,0,pcVar10,
                 "AMAuthInstallBundleCreatePreManifest",uVar12);
      local_38 = local_40;
    }
  }
  lVar8 = 0;
  uVar7 = 0;
  uVar11 = 0;
LAB_0028a6cf:
  _SafeRelease(local_60);
  _SafeRelease(local_38);
  _SafeRelease(local_58);
  _SafeRelease(lVar8);
  _SafeRelease(local_68);
  _SafeRelease(0);
  _SafeRelease(uVar7);
  _SafeRelease(uVar11);
  return local_70;
}

