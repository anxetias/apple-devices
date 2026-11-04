// rea decompile_all
// name: _AMRestoreOptionsApplyMacOSChangesIfNeeded
// address: 0xe4ad2
// body: available
// range: 0xe4ad2-0xe5071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreOptionsApplyMacOSChangesIfNeeded(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar3 = _CFDictionaryGetValue(param_1,&cf_MacOSVariantPresent);
  lVar1 = *(long *)PTR__kCFBooleanTrue_00441110;
  if (lVar3 == lVar1 && lVar3 != 0) {
    lVar4 = _CFDictionaryGetValue(param_1,&cf_MacOSSwapPerformed);
    lVar2 = *(long *)PTR__kCFBooleanFalse_00441108;
    if (lVar4 == lVar2 || lVar4 == 0) {
      _AMRLog(6,&cf_PerformingMacOSrestorechanges_);
      lVar4 = _CFDictionaryGetValue(param_1,&cf_BundleOverrides);
      if (lVar4 != 0) {
        lVar10 = 0;
        do {
          uVar7 = *(undefined8 *)((long)&DAT_004464d0 + lVar10);
          lVar5 = _CFDictionaryGetValue(lVar4);
          uVar8 = *(undefined8 *)((long)&DAT_00446570 + lVar10);
          lVar6 = _CFDictionaryGetValue(lVar4,uVar8);
          if (lVar5 == 0) {
            if (lVar6 != 0) {
              _CFRetain(lVar6);
              _CFDictionaryRemoveValue(lVar4,uVar8);
              _AMRLog(6,&cf_Removed__fromoverides____,lVar6,uVar8);
              goto LAB_000e4c3f;
            }
          }
          else {
            _CFRetain(lVar5);
            if (lVar6 == 0) {
              _CFDictionarySetValue(lVar4,uVar8,lVar5);
              _AMRLog(6,&cf_Added__tooverides___fromoverrides____,lVar5,uVar8,uVar7);
              _CFDictionaryRemoveValue(lVar4,uVar7);
              _AMRLog(6,&cf_Removed__fromoverides____,lVar5,uVar7);
              lVar6 = lVar5;
            }
            else {
              _CFRetain(lVar6);
              _CFDictionarySetValue(lVar4,uVar8,lVar5);
              _AMRLog(6,&cf_Added__tooverides___fromoverrides____,lVar5,uVar8,uVar7);
LAB_000e4c3f:
              _CFDictionarySetValue(lVar4,uVar7,lVar6);
              _AMRLog(6,&cf_Added__tooverides___fromoverrides____,lVar6,uVar7,uVar8);
              if (lVar5 != 0) {
                _CFRelease(lVar5);
              }
            }
            _CFRelease(lVar6);
          }
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0xa0);
        lVar10 = _CFDictionaryGetValue(lVar4,&cf_RecoveryOSBundlePath);
        if (lVar10 != 0) {
          uVar7 = _CFDictionaryGetValue(param_1,&cf_RestoreBundlePath);
          _CFRetain(lVar10);
          _CFRetain(uVar7);
          _CFDictionarySetValue(lVar4,&cf_RecoveryOSBundlePath,uVar7);
          _CFDictionarySetValue(param_1,&cf_RestoreBundlePath,lVar10);
          _CFRelease(lVar10);
          _CFRelease(uVar7);
          _AMRLog(6,&cf_Swapedpaths__>to_____and______,&cf_RecoveryOSBundlePath,uVar7,
                  &cf_RestoreBundlePath,lVar10);
        }
      }
      lVar4 = _CFDictionaryGetValue(param_1,&cf_RootToInstall);
      lVar10 = _CFDictionaryGetValue(param_1,&cf_OverlayRootsToInstall);
      lVar6 = _CFDictionaryGetValue(param_1,&cf_RecoveryOSOverlayRootsToInstall);
      uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      uVar8 = _CFArrayCreateMutable(uVar7,0,PTR__kCFTypeArrayCallBacks_004411a8);
      if (lVar4 != 0) {
        _CFArrayAppendValue(uVar8,lVar4);
      }
      if ((lVar10 != 0) && (lVar4 = _CFArrayGetCount(lVar10), 0 < lVar4)) {
        uVar9 = _CFArrayGetCount(lVar10);
        _CFArrayAppendArray(uVar8,lVar10,0,uVar9);
      }
      _CFDictionaryRemoveValue(param_1,&cf_RootToInstall);
      _CFDictionaryRemoveValue(param_1,&cf_OverlayRootsToInstall);
      _CFDictionaryRemoveValue(param_1,&cf_RecoveryOSOverlayRootsToInstall);
      if ((lVar6 == 0) || (lVar4 = _CFArrayGetCount(lVar6), lVar4 < 1)) {
        _AMRLog(6,&cf_No__added_,&cf_RootToInstall);
        _AMRLog(6,&cf_No__added_,&cf_OverlayRootsToInstall);
      }
      else {
        uVar7 = _CFArrayCreateMutable(uVar7,0,PTR__kCFTypeArrayCallBacks_004411a8);
        uVar9 = _CFArrayGetValueAtIndex(lVar6,0);
        _CFDictionaryAddValue(param_1,&cf_RootToInstall,uVar9);
        uVar9 = _CFArrayGetValueAtIndex(lVar6,0);
        _AMRLog(6,&cf_Addedto______,&cf_RootToInstall,uVar9);
        lVar4 = _CFArrayGetCount(lVar6);
        _CFArrayAppendArray(uVar7,lVar6,1,lVar4 + -1);
        lVar4 = _CFArrayGetCount(uVar7);
        if (lVar4 < 1) {
          _AMRLog(6,&cf_No__toinsert_,&cf_OverlayRootsToInstall);
        }
        else {
          _CFDictionarySetValue(param_1,&cf_OverlayRootsToInstall,uVar7);
          lVar4 = _CFArrayGetCount(uVar7);
          _AMRLog(6,&cf_Updated__with_ldoverlayroots_,&cf_OverlayRootsToInstall,lVar4 + -1);
        }
        _CFRelease(uVar7);
      }
      lVar4 = _CFArrayGetCount(uVar8);
      if (lVar4 < 1) {
        _AMRLog(6,&cf_No__added_,&cf_RecoveryOSOverlayRootsToInstall);
      }
      else {
        _CFDictionarySetValue(param_1,&cf_RecoveryOSOverlayRootsToInstall,uVar8);
        uVar7 = _CFArrayGetCount(uVar8);
        _AMRLog(6,&cf_Updated__with_ldoverlayroots_,&cf_RecoveryOSOverlayRootsToInstall,uVar7);
      }
      _CFRelease(uVar8);
      lVar4 = _CFDictionaryGetValue(param_1,&cf_RecoveryOSOnly);
      if (lVar4 == lVar3) {
        _CFDictionarySetValue(param_1,&cf_InstallRecoveryOS,lVar2);
        _AMRLog(6,&cf_Setting__tofalse_,&cf_InstallRecoveryOS);
      }
      _CFDictionarySetValue(param_1,&cf_RecoveryOSUnpack,lVar1);
      _CFDictionarySetValue(param_1,&cf_MacOSSwapPerformed,lVar1);
      _AMRLog(6,&cf_Setting__totrue_,&cf_MacOSSwapPerformed);
    }
  }
  return 0;
}

