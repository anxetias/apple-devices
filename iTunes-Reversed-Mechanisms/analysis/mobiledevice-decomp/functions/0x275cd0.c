// rea decompile_all
// name: _AMAuthInstallApApplyRequestRules
// address: 0x275cd0
// body: available
// range: 0x275cd0-0x275f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApApplyRequestRules(long param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  void *pvVar9;
  void *pvVar10;
  size_t sVar11;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_48 = 0;
  local_38 = 0;
  iVar2 = 1;
  local_40 = param_4;
  if ((param_1 == 0) || (param_3 == 0)) goto LAB_00275f31;
  pvVar9 = (void *)0x0;
  pvVar10 = (void *)0x0;
  if (param_4 == 0) goto LAB_00275eec;
  iVar2 = _AMAuthInstallApCopyDeviceEntryFromDeviceMap(param_1,param_2,&local_48);
  if (iVar2 == 0) {
    uVar3 = _CFGetAllocator(param_1);
    local_38 = _AMAuthInstallApCopyImageTag(uVar3,param_3);
    if (local_38 == 0) {
      iVar2 = 3;
      goto LAB_00275f31;
    }
    lVar4 = _CFDictionaryGetValue(local_48,&cf_Manifest);
    if (lVar4 != 0) {
      sVar5 = _CFDictionaryGetCount(lVar4);
      pvVar9 = _calloc(8,sVar5);
      pvVar10 = _calloc(8,sVar5);
      iVar2 = 2;
      if ((pvVar9 != (void *)0x0) && (pvVar10 != (void *)0x0)) {
        _CFDictionaryGetKeysAndValues(lVar4,pvVar9,pvVar10);
        if (0 < (long)sVar5) {
          sVar11 = 0;
          do {
            lVar4 = _CFDictionaryGetValue(*(undefined8 *)((long)pvVar10 + sVar11 * 8),local_38);
            if (lVar4 != 0) {
              lVar6 = _CFDictionaryGetValue(lVar4,&cf_RequiresPartialDigest);
              if (lVar6 != 0) {
                lVar7 = _CFBooleanGetTypeID();
                lVar8 = _CFGetTypeID(lVar6);
                if ((lVar7 == lVar8) && (cVar1 = _CFBooleanGetValue(lVar6), cVar1 == '\0')) {
                  _CFDictionaryRemoveValue(local_40,&cf_PartialDigest);
                }
              }
              lVar6 = _CFDictionaryGetValue(lVar4,&cf_Trusted);
              if (lVar6 != 0) {
                lVar7 = _CFBooleanGetTypeID();
                lVar8 = _CFGetTypeID(lVar6);
                if (lVar7 == lVar8) {
                  _CFDictionarySetValue(local_40,&cf_Trusted,lVar6);
                }
              }
              lVar4 = _CFDictionaryGetValue(lVar4,&cf_RestoreRequestRules);
              if (lVar4 != 0) {
                iVar2 = _AMAuthInstallBundleProcessRules(param_1,lVar4,local_40);
                goto LAB_00275eec;
              }
            }
            sVar11 = sVar11 + 1;
          } while (sVar5 != sVar11);
        }
        _AMAuthInstallLog(3,"AMAuthInstallApApplyRequestRules",
                          "failed to find RestoreRequestRules property");
        iVar2 = 8;
      }
      goto LAB_00275eec;
    }
    _AMAuthInstallLog(3,"AMAuthInstallApApplyRequestRules","failed to find manifest entry");
    iVar2 = 8;
  }
  else {
LAB_00275f31:
    local_38 = 0;
  }
  pvVar9 = (void *)0x0;
  pvVar10 = (void *)0x0;
LAB_00275eec:
  _SafeRelease(local_48);
  _SafeRelease(local_38);
  _SafeFree(pvVar9);
  _SafeFree(pvVar10);
  return iVar2;
}

