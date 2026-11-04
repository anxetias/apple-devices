// rea decompile_all
// name: __AMAuthInstallBundleCopyEntryURLs
// address: 0x28db9f
// body: available
// range: 0x28db9f-0x28e005 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallBundleCopyEntryURLs
              (long param_1,long param_2,undefined8 param_3,long param_4,long param_5,char param_6,
              char param_7,long *param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_50 = 0;
  local_40 = 0;
  local_60 = 0;
  local_48 = 0;
  local_58 = 0;
  iVar1 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
     (((param_5 != 0 && (param_8 != (long *)0x0)) &&
      ((*(long **)(param_1 + 0x80) != (long *)0x0 && (**(long **)(param_1 + 0x80) != 0)))))) {
    local_38 = param_5;
    lVar3 = _CFDictionaryGetValue(param_3,&cf_Info);
    if (lVar3 == 0) {
      pcVar7 = "build manifest lacks info for \"%@\"";
    }
    else {
      lVar3 = _CFDictionaryGetValue(lVar3,&cf_Path);
      if (lVar3 != 0) {
        if (param_7 == '\0') {
          lVar5 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),param_2);
        }
        else {
          uVar4 = _CFGetAllocator(param_1);
          uVar4 = _CFStringCreateWithFormat(uVar4,0,&cf_RecoveryOS__,param_2);
          lVar5 = _CFDictionaryGetValue(**(undefined8 **)(param_1 + 0x80),uVar4);
          _SafeRelease(uVar4);
        }
        local_50 = lVar5;
        if (lVar5 == 0) {
          uVar4 = _CFGetAllocator(param_1);
          iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                            (uVar4,param_4,lVar3,0,&local_50);
          if (iVar1 == 0) goto LAB_0028dd14;
LAB_0028df14:
          lVar3 = _AMAuthInstallGetLocalizedStatusString(0,iVar1);
          pcVar7 = "failed to construct working URL: %@";
        }
        else {
          _CFRetain(lVar5);
          _AMAuthInstallLog(8,"_AMAuthInstallBundleCopyEntryURLs","using override: %@ = %@",param_2,
                            lVar5);
LAB_0028dd14:
          uVar4 = _CFGetAllocator(param_1);
          iVar1 = _AMAuthInstallSupportCreatePrependedFilePath(uVar4,param_2,lVar3,&local_60);
          if (iVar1 == 0) {
            uVar4 = _CFGetAllocator(param_1);
            iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                              (uVar4,local_38,local_60,0,&local_40);
            if (iVar1 == 0) {
              iVar1 = 2;
              if (param_6 == '\0') {
                local_38 = 0;
                lVar5 = 0;
              }
              else {
                lVar5 = _CFURLCopyFileSystemPath(local_40,0);
                if (lVar5 == 0) {
                  pcVar7 = "could not copy path from %@";
                  lVar3 = local_40;
                  goto LAB_0028dfa9;
                }
                local_38 = lVar5;
                iVar2 = _AMAuthInstallBundleCreatePersonalizedPathWithKey(param_1,0,lVar5,&local_48)
                ;
                if (iVar2 != 0) {
                  lVar5 = 0;
                  uVar4 = _AMAuthInstallGetLocalizedStatusString(0,iVar2);
                  _AMAuthInstallLog(3,"_AMAuthInstallBundleCopyEntryURLs",
                                    "failed to construct working URL: %@",uVar4);
                  lVar8 = 0;
                  lVar9 = local_38;
                  goto LAB_0028deb5;
                }
                if (local_48 == 0) {
                  lVar5 = 0;
                  lVar8 = 0;
                  lVar9 = local_38;
                  iVar2 = 0xe;
                  goto LAB_0028deb5;
                }
                uVar4 = _CFGetAllocator(param_1);
                lVar5 = _CFURLCreateWithFileSystemPath(uVar4,local_48,0,0);
                if (lVar5 == 0) {
                  lVar5 = 0;
                  lVar8 = 0;
                  lVar9 = local_38;
                  iVar2 = iVar1;
                  goto LAB_0028deb5;
                }
                _SafeRelease(local_40);
                local_40 = _CFRetain(lVar5);
              }
              lVar8 = 0;
              iVar2 = _AMAuthInstallBundleCreatePersonalizedPathWithKey(param_1,0,lVar3,&local_58);
              lVar9 = local_38;
              if (iVar2 == 0) {
                uVar4 = _CFGetAllocator(param_1);
                lVar6 = _CFDictionaryCreateMutable
                                  (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                lVar8 = 0;
                lVar9 = local_38;
                iVar2 = iVar1;
                if (lVar6 != 0) {
                  _CFDictionarySetValue(lVar6,&cf_SourceURL,local_50);
                  _CFDictionarySetValue(lVar6,&cf_DestURL,local_40);
                  _CFDictionarySetValue(lVar6,&cf_RelativeSrcPath,lVar3);
                  _CFDictionarySetValue(lVar6,&cf_RelativeDestPath,local_58);
                  lVar3 = _CFRetain(lVar6);
                  *param_8 = lVar3;
                  iVar2 = (uint)(lVar3 == 0) * 2;
                  lVar8 = lVar6;
                  lVar9 = local_38;
                }
              }
              goto LAB_0028deb5;
            }
            goto LAB_0028df14;
          }
          pcVar7 = "could not prepend entryName to destination path : %@";
        }
LAB_0028dfa9:
        _AMAuthInstallLog(3,"_AMAuthInstallBundleCopyEntryURLs",pcVar7,lVar3);
        goto LAB_0028dfb0;
      }
      pcVar7 = "build manifest lacks relative path for \"%@\"";
    }
    _AMAuthInstallLog(3,"_AMAuthInstallBundleCopyEntryURLs",pcVar7,param_2);
    iVar1 = 7;
  }
LAB_0028dfb0:
  lVar5 = 0;
  lVar8 = 0;
  lVar9 = 0;
  iVar2 = iVar1;
LAB_0028deb5:
  _SafeRelease(local_50);
  _SafeRelease(local_40);
  _SafeRelease(lVar9);
  _SafeRelease(local_48);
  _SafeRelease(lVar5);
  _SafeRelease(local_58);
  _SafeRelease(lVar8);
  _SafeRelease(local_60);
  return iVar2;
}

