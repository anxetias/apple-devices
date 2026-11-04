// rea decompile_all
// name: _handleBuildIdentityRequest
// address: 0xd845c
// body: available
// range: 0xd845c-0xd8814 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleBuildIdentityRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

int _handleBuildIdentityRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_58;
  __CFURL *local_50;
  __CFString *local_48;
  long local_40;
  bool local_31;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(lVar7 + 0x10);
  local_31 = false;
  local_50 = (__CFURL *)0x0;
  local_48 = (__CFString *)0x0;
  local_40 = 0;
  ppVar1 = (pthread_mutex_t *)(lVar9 + 0x158);
  _pthread_mutex_lock(ppVar1);
  if ((lVar9 == 0) || (*(__CFDictionary **)(lVar7 + 0x18) == (__CFDictionary *)0x0)) {
    _AMRLog(3,&cf__s_badargument,"_handleBuildIdentityRequest");
    iVar6 = 1;
LAB_000d86c2:
    bVar3 = true;
  }
  else {
    iVar6 = _copyBundleURLAndVariantForBootObjectRequest
                      (*(__AMAuthInstall **)(lVar9 + 0x150),*(__CFDictionary **)(lVar7 + 0x18),
                       param_2,&local_31,&local_50,&local_48,(__CFError **)0x0);
    bVar3 = true;
    if (iVar6 == 0) {
      iVar6 = _AMAuthInstallBundleCopyBuildIdentityForVariant
                        (*(undefined8 *)(lVar9 + 0x150),local_50,local_48,&local_40);
      if (iVar6 == 0) {
        if (local_40 == 0) {
          iVar6 = 3000;
          bVar3 = true;
          goto LAB_000d879f;
        }
        lVar7 = _CFDictionaryGetValue(*(undefined8 *)(lVar7 + 0x18),&cf_BundleOverrides);
        cVar5 = _AMSupportCFDictionaryGetBoolean(param_2,&cf_BuildIdentityApplyOverrides,0);
        if (((cVar5 != '\0') && (lVar7 != 0)) &&
           (lVar8 = _CFDictionaryGetCount(lVar7), lVar4 = local_40, 0 < lVar8)) {
          local_58 = 0;
          iVar6 = 1;
          bVar3 = false;
          if (*(long *)(lVar9 + 0x150) == 0) {
LAB_000d87fb:
            lVar9 = 0;
            bVar3 = false;
            lVar11 = 0;
            lVar8 = 0;
          }
          else {
            lVar11 = 0;
            lVar8 = 0;
            lVar9 = 0;
            if (local_40 != 0) {
              lVar9 = _CFDictionaryGetValue(local_40,&cf_Manifest);
              if (lVar9 == 0) {
                iVar6 = 3000;
              }
              else {
                uVar10 = _CFDictionaryGetCount(lVar9);
                uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                lVar8 = _CFDictionaryCreateMutableCopy(uVar2,uVar10,lVar9);
                iVar6 = 0x12;
                if (lVar8 != 0) {
                  _AMRLog(6,&cf_Applyingbundleoverridestobuildidentity___,lVar7);
                  _CFDictionaryApplyFunction(lVar7,__applyBundleOverrideToBuildIdentity);
                  lVar11 = _CFDictionaryCreateMutable
                                     (uVar2,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                      PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                  if (lVar11 == 0) {
                    lVar9 = 0;
                    bVar3 = false;
                    lVar11 = 0;
                  }
                  else {
                    _CFDictionarySetValue(lVar11,&cf_Manifest,lVar8);
                    iVar6 = _AMSupportCreateMergedDictionary(uVar2,lVar4,lVar11,&local_58);
                    if (iVar6 == 0 && local_58 != 0) {
                      iVar6 = 0;
                      bVar3 = true;
                      lVar9 = local_58;
                    }
                    else {
                      _AMRLog(3,&cf_AMSupportCreateMergedDictionary__failed__d,iVar6);
                      iVar6 = -1;
                      bVar3 = false;
                      lVar9 = local_58;
                    }
                  }
                  goto LAB_000d86ee;
                }
              }
              goto LAB_000d87fb;
            }
          }
LAB_000d86ee:
          _AMSupportSafeRelease(lVar8);
          _AMSupportSafeRelease(lVar11);
          if (!bVar3) goto LAB_000d86c2;
          _CFRelease(local_40);
          local_40 = lVar9;
        }
        _pthread_mutex_unlock(ppVar1);
        lVar7 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (lVar7 == 0) {
          iVar6 = 0x12;
        }
        else {
          _CFDictionarySetValue(lVar7,&cf_BuildIdentityDict,local_40);
          _CFDictionarySetValue(lVar7,&cf_Variant,local_48);
          iVar6 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar7);
          _CFRelease(lVar7);
          iVar6 = (uint)(iVar6 != 0) * 9;
        }
        bVar3 = false;
      }
      else {
        iVar6 = _AMAuthInstallToRestoreError(iVar6);
      }
    }
  }
  if (local_40 != 0) {
    _CFRelease();
  }
LAB_000d879f:
  _AMSupportSafeRelease(local_50);
  _AMSupportSafeRelease(local_48);
  if (bVar3) {
    _pthread_mutex_unlock(ppVar1);
  }
  return iVar6;
}

