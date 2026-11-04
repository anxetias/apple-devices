// rea decompile_all
// name: _AMAuthInstallApImg4PersonalizeFile
// address: 0x278aeb
// body: available
// range: 0x278aeb-0x278e8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4PersonalizeFile(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_50 = 0;
  local_58 = 0;
  local_68 = 0;
  local_48 = 0;
  iVar2 = 1;
  if (((param_1 == 0) || (param_3 == 0)) || (param_2 == 0)) {
LAB_00278d6e:
    lVar3 = 0;
    lVar5 = 0;
    goto LAB_00278d1c;
  }
  lVar3 = 0;
  lVar5 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_00278d1c;
  lVar3 = _CFURLCopyFileSystemPath(param_2,0);
  iVar2 = 2;
  if (lVar3 == 0) goto LAB_00278d6e;
  uVar4 = _CFGetAllocator(param_1);
  local_38 = lVar3;
  iVar1 = _AMAuthInstallApImg4CreateRequestTagFromFileURL(uVar4,lVar3,&cf__,&local_40,&local_50);
  lVar3 = local_38;
  if (iVar1 != 0) {
    _AMAuthInstallLog(3,"AMAuthInstallApImg4PersonalizeFile",
                      "could not get request tag from path %@",local_38);
    lVar5 = 0;
    iVar2 = iVar1;
    goto LAB_00278d1c;
  }
  lVar5 = 0;
  if ((local_40 == 0) || (local_50 == 0)) {
    iVar2 = 0xe;
    goto LAB_00278d1c;
  }
  if (param_4 == 0) {
    lVar3 = _AMAuthInstallApImg4GetTypeForEntryName();
    if (lVar3 != 0) {
      uVar4 = _CFGetAllocator(param_1);
      iVar1 = _AMAuthInstallApImg4CreateMeasurementsWithTag
                        (uVar4,local_50,lVar3,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x70),
                         &local_58);
      lVar3 = local_38;
      if (iVar1 != 0) {
        _AMAuthInstallLog(3,"AMAuthInstallApImg4PersonalizeFile","could not measure %@",local_38);
        lVar5 = 0;
        iVar2 = iVar1;
        goto LAB_00278d1c;
      }
      goto LAB_00278c15;
    }
    lVar5 = 0;
LAB_00278e53:
    iVar2 = 8;
    lVar3 = local_38;
  }
  else {
    local_58 = _CFRetain(param_4);
LAB_00278c15:
    uVar4 = _CFGetAllocator(param_1);
    lVar5 = _CFDictionaryCreateMutable
                      (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar5 == 0) {
      pcVar6 = "failed to create mutable dict measurementDict";
      lVar5 = 0;
    }
    else {
      _CFDictionaryAddValue(lVar5,local_40,local_58);
      iVar2 = _AMAuthInstallApImg4CreateServerRequestDictionary(param_1,lVar5,&local_68);
      if (iVar2 == 0) {
        iVar2 = _AMAuthInstallApCreatePersonalizedResponse(param_1,local_68,&local_48);
        if ((iVar2 == 0) && (local_48 != 0)) {
          lVar3 = _CFDictionaryGetValue(local_48,*(undefined8 *)(param_1 + 0x58));
          if (lVar3 == 0) {
            _AMAuthInstallLog(3,"AMAuthInstallApImg4PersonalizeFile",
                              "Ap ticket not found in response");
          }
          else {
            lVar3 = _AMAuthInstallApImg4GetTypeForEntryName(local_40);
            if (lVar3 != 0) {
              local_60 = lVar5;
              lVar5 = _CFStringCompare(lVar3,local_40,0);
              if (lVar5 == 0) {
                lVar3 = 0;
              }
              iVar2 = _AMAuthInstallApImg4StitchData(param_1,lVar3,local_50,param_3,local_48,0);
              if (iVar2 == 0) {
                iVar1 = _AMAuthInstallApImg4StitchRestoreInfoWithAMAI
                                  (lVar3,param_3,local_48,0,param_1);
                lVar3 = local_38;
                lVar5 = local_60;
                iVar2 = 0;
                if (iVar1 != 0) {
                  _AMAuthInstallLog(3,"AMAuthInstallApImg4PersonalizeFile",
                                    "failed to stitch restore info to %@",param_3);
                  lVar3 = local_38;
                  lVar5 = local_60;
                  iVar2 = iVar1;
                }
              }
              else {
                _AMAuthInstallLog(3,"AMAuthInstallApImg4PersonalizeFile",
                                  "failed to stitch ticket to %@",param_3);
                lVar3 = local_38;
                lVar5 = local_60;
              }
              goto LAB_00278d1c;
            }
          }
          goto LAB_00278e53;
        }
        pcVar6 = "failed to create response dict";
      }
      else {
        pcVar6 = "failed to create request dict";
      }
    }
    _AMAuthInstallLog(3,"AMAuthInstallApImg4PersonalizeFile",pcVar6);
    lVar3 = local_38;
  }
LAB_00278d1c:
  _SafeRelease(lVar3);
  _SafeRelease(local_40);
  _SafeRelease(local_50);
  _SafeRelease(local_58);
  _SafeRelease(lVar5);
  _SafeRelease(local_68);
  _SafeRelease(local_48);
  return iVar2;
}

