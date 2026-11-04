// rea decompile_all
// name: _AMAuthInstallBundleCopyReceiptCreateIfNecessary
// address: 0x286b78
// body: available
// range: 0x286b78-0x2870f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyReceiptCreateIfNecessary(long param_1,long param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  char local_31;
  
  local_68 = 0;
  local_50 = 0;
  local_31 = '\0';
  local_60 = 0;
  local_48 = 0;
  _AMAuthInstallLockLock(*(undefined8 *)(param_1 + 0x168));
  iVar2 = 1;
  if (param_3 == (long *)0x0) {
LAB_00286cef:
    local_40 = 0;
  }
  else {
    local_40 = 0;
    if (param_2 != 0) {
      lVar12 = 0;
      lVar10 = 0;
      lVar4 = 0;
      iVar9 = iVar2;
      if (*(long *)(param_1 + 0x80) == 0) goto LAB_00286cff;
      uVar3 = _CFURLGetString(param_2);
      lVar4 = _CFStringFind(uVar3,&cf_RecoveryOS,0);
      puVar5 = (undefined8 *)PTR__kCFBooleanTrue_00441110;
      if (lVar4 == -1) {
        puVar5 = (undefined8 *)PTR__kCFBooleanFalse_00441108;
      }
      uVar3 = *puVar5;
      if (*(long *)(*(long *)(param_1 + 0x80) + 8) != 0) {
        cVar1 = _CFBooleanGetValue(uVar3);
        lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 8);
        if ((((cVar1 == '\0') || (lVar4 = _CFDictionaryGetValue(lVar4,&cf_RecoveryOS), lVar4 != 0))
            && (lVar12 = _CFDictionaryGetValue(lVar4,&cf_Manifest), lVar12 != 0 && lVar4 != 0)) &&
           (lVar12 = _CFDictionaryGetCount(lVar12), 0 < lVar12)) {
          uVar3 = _CFGetAllocator(param_1);
          lVar4 = _CFPropertyListCreateDeepCopy(uVar3,lVar4,2);
          *param_3 = lVar4;
          iVar2 = (uint)(lVar4 == 0) * 2;
          goto LAB_00286cef;
        }
      }
      uVar6 = _CFGetAllocator(param_1);
      iVar2 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                        (uVar6,param_2,&cf_amai_receipt_plist,0,&local_50);
      if (iVar2 != 0) goto LAB_00286cef;
      iVar2 = _AMAuthInstallPlatformFileURLExists(local_50,&local_31);
      cVar1 = local_31;
      if (iVar2 == 0) {
        uVar6 = _CFGetAllocator(param_1);
        if (cVar1 == '\0') {
          local_40 = _CFDictionaryCreateMutable
                               (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          iVar2 = 2;
          iVar9 = 2;
          if (local_40 == 0) {
            local_40 = 0;
LAB_0028705a:
            iVar9 = 2;
            lVar12 = 0;
            lVar10 = 0;
            lVar4 = 0;
            goto LAB_00286cff;
          }
          uVar6 = _CFGetAllocator(param_1);
          lVar4 = _CFArrayCreateMutable(uVar6,0,PTR__kCFTypeArrayCallBacks_004411a8);
          if (lVar4 != 0) {
            local_58 = lVar4;
            uVar6 = _CFGetAllocator(param_1);
            lVar12 = _CFArrayCreateMutable(uVar6,0,PTR__kCFTypeArrayCallBacks_004411a8);
            if (lVar12 == 0) {
              lVar12 = 0;
            }
            else {
              uVar6 = _CFGetAllocator(param_1);
              lVar10 = _CFDictionaryCreateMutable
                                 (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              lVar7 = local_40;
              lVar4 = local_58;
              if (lVar10 != 0) {
                _CFDictionarySetValue(local_40,&cf_Personalized,local_58);
                _CFDictionarySetValue(lVar7,&cf_Linked,lVar12);
                _CFDictionarySetValue(lVar7,&cf_Manifest,lVar10);
                goto LAB_00286fca;
              }
            }
            lVar10 = 0;
            lVar4 = local_58;
            goto LAB_00286cff;
          }
          goto LAB_00286cfc;
        }
        iVar2 = _AMAuthInstallSupportCreateDictionaryFromFileURL(uVar6,&local_68,local_50);
        if (iVar2 == 0) {
          uVar6 = _CFGetAllocator(param_1);
          lVar4 = _CFPropertyListCreateDeepCopy(uVar6,local_68,2);
          iVar9 = 2;
          iVar2 = 2;
          if (lVar4 != 0) {
            lVar12 = _CFDictionaryGetValue(lVar4,&cf_Overrides);
            local_40 = lVar4;
            if (lVar12 == 0) {
              lVar4 = 0;
              lVar12 = 0;
              lVar10 = 0;
            }
            else {
              uVar6 = _CFGetAllocator(param_1);
              local_48 = _CFDictionaryCreateMutable
                                   (uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              if (local_48 == 0) goto LAB_0028705a;
              _CFDictionaryApplyFunction
                        (lVar12,__AMAuthInstallBundleNormalizeOverridePaths,&local_48);
              lVar4 = _CFDictionaryGetCount(**(undefined8 **)(param_1 + 0x80));
              if (0 < lVar4) {
                uVar6 = _CFGetAllocator(param_1);
                iVar2 = _AMAuthInstallSupportCreateMergedDictionary
                                  (uVar6,**(undefined8 **)(param_1 + 0x80),local_48,&local_60);
                if (iVar2 != 0) {
                  _AMAuthInstallLog(3,"AMAuthInstallBundleCopyReceiptCreateIfNecessary",
                                    "failed to merge override dictionaries");
                  goto LAB_00286cfc;
                }
              }
              _SafeRelease(**(undefined8 **)(param_1 + 0x80));
              plVar11 = &local_48;
              if (local_60 != 0) {
                plVar11 = &local_60;
              }
              uVar6 = _CFGetAllocator(param_1);
              lVar7 = _CFDictionaryCreateMutableCopy(uVar6,0,*plVar11);
              lVar4 = 0;
              **(long **)(param_1 + 0x80) = lVar7;
              lVar12 = 0;
              lVar10 = 0;
              if (lVar7 == 0) goto LAB_00286cff;
            }
LAB_00286fca:
            uVar6 = _CFGetAllocator(param_1);
            lVar7 = _CFPropertyListCreateDeepCopy(uVar6,local_40,2);
            *param_3 = lVar7;
            cVar1 = _CFBooleanGetValue(uVar3);
            lVar7 = *(long *)(*(long *)(param_1 + 0x80) + 8);
            if (cVar1 == '\0') {
              if (lVar7 != 0) {
                _CFRelease();
                *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = 0;
              }
              uVar3 = _CFRetain(local_40);
              *(undefined8 *)(*(long *)(param_1 + 0x80) + 8) = uVar3;
            }
            else if (lVar7 != 0) {
              _CFDictionaryReplaceValue(lVar7,&cf_RecoveryOS,local_40);
            }
            iVar9 = 0;
            goto LAB_00286cff;
          }
          goto LAB_00286cef;
        }
        uVar3 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar2);
        pcVar8 = "failed to read receipt: %@";
      }
      else {
        uVar3 = _AMAuthInstallGetLocalizedStatusString(param_1,iVar2);
        pcVar8 = "AMAuthInstallPlatformFileURLExists failed: %@";
      }
      local_40 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBundleCopyReceiptCreateIfNecessary",pcVar8,uVar3);
    }
  }
LAB_00286cfc:
  lVar12 = 0;
  lVar10 = 0;
  lVar4 = 0;
  iVar9 = iVar2;
LAB_00286cff:
  _AMAuthInstallLockUnlock(*(undefined8 *)(param_1 + 0x168));
  _SafeRelease(local_50);
  _SafeRelease(0);
  _SafeRelease(local_40);
  _SafeRelease(lVar4);
  _SafeRelease(lVar12);
  _SafeRelease(local_68);
  _SafeRelease(lVar10);
  _SafeRelease(local_60);
  _SafeRelease(local_48);
  return iVar9;
}

