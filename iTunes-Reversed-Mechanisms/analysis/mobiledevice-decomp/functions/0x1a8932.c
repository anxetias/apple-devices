// rea decompile_all
// name: __AMRAuthInstallBundleAppendFirmwareEntriesToArrays
// address: 0x1a8932
// body: available
// range: 0x1a8932-0x1a8cf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRAuthInstallBundleAppendFirmwareEntriesToArrays
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_58;
  long local_48;
  
  local_58 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
  lVar11 = _CFDictionaryGetValue(param_2,&cf_Info);
  if ((((lVar11 != 0) && (lVar11 = _CFDictionaryGetValue(lVar11,&cf_Variant), lVar11 != 0)) &&
      (*(long *)(param_1 + 0x1f0) != 0)) &&
     (lVar11 = _CFStringCompare(lVar11,*(long *)(param_1 + 0x1f0),0), lVar11 == 0)) {
    local_58 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
  }
  lVar11 = _CFDictionaryGetValue(param_2,&cf_Manifest);
  uVar18 = 0;
  if (lVar11 == 0) {
    uVar18 = 7;
    uVar17 = 0;
    pvVar14 = (void *)0x0;
    pvVar13 = (void *)0x0;
    local_48 = 0;
  }
  else {
    lVar12 = _CFDictionaryGetCount(lVar11);
    pvVar13 = _malloc(lVar12 * 8);
    pvVar14 = _malloc(lVar12 * 8);
    _CFDictionaryGetKeysAndValues(lVar11,pvVar13,pvVar14);
    if (lVar12 < 1) {
      uVar17 = 0;
      local_48 = 0;
    }
    else {
      uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      local_48 = 0;
      lVar11 = 0;
      uVar17 = 0;
      do {
        uVar18 = *(undefined8 *)((long)pvVar13 + lVar11 * 8);
        uVar2 = *(undefined8 *)((long)pvVar14 + lVar11 * 8);
        lVar15 = _CFGetTypeID(uVar2);
        lVar16 = _CFDictionaryGetTypeID();
        if (lVar15 != lVar16) {
          __AMRAuthInstallBundleAppendFirmwareEntriesToArrays_cold_1();
          uVar18 = 99;
          goto LAB_001a8ca7;
        }
        lVar15 = _CFDictionaryGetValue(uVar2,&cf_Info);
        if (lVar15 != 0) {
          cVar3 = __CFDictionaryGetBoolean(lVar15,&cf_IsFirmwarePayload,0);
          cVar4 = __CFDictionaryGetBoolean(lVar15,&cf_IsSecondaryFirmwarePayload,0);
          cVar5 = __CFDictionaryGetBoolean(lVar15,&cf_IsFUDFirmware,0);
          cVar6 = __CFDictionaryGetBoolean(lVar15,&cf_IsLoadedByiBoot,0);
          cVar7 = __CFDictionaryGetBoolean(lVar15,&cf_IsEarlyAccessFirmware,0);
          cVar8 = __CFDictionaryGetBoolean(lVar15,&cf_IsiBootEANFirmware,0);
          cVar9 = __CFDictionaryGetBoolean(lVar15,&cf_IsiBootNonEssentialFirmware,0);
          cVar10 = __CFDictionaryGetBoolean(*(undefined8 *)(param_1 + 0x210),uVar18,0);
          if (cVar10 != '\0' ||
              ((cVar9 != '\0' || (cVar8 != '\0' || cVar7 != '\0')) ||
              ((cVar6 != '\0' || cVar5 != '\0') || (cVar4 != '\0' || cVar3 != '\0')))) {
            _SafeRelease(uVar17);
            cVar3 = _CFBooleanGetValue(local_58);
            if (cVar3 == '\0') {
              uVar17 = _CFStringCreateCopy(uVar1,uVar18);
            }
            else {
              uVar17 = _CFStringCreateWithFormat(uVar1,0,&cf_RecoveryOS__,uVar18);
            }
            uVar18 = _CFArrayGetCount(param_3);
            cVar3 = _CFArrayContainsValue(param_3,0,uVar18,uVar17);
            if (cVar3 == '\0') {
              _CFArrayAppendValue(param_3,uVar17);
            }
            if (local_48 == 0) {
              lVar15 = _CFDictionaryGetValue(lVar15,&cf_Path);
              if (lVar15 != 0) {
                lVar15 = __AMAuthInstallBundleComponentCreateCopyByDeletingLastComponent
                                   (uVar1,lVar15);
                uVar18 = 2;
                if (lVar15 != 0) {
                  local_48 = _CFStringCreateWithFormat(uVar1,0,&cf____manifest,lVar15);
                  _CFRelease(lVar15);
                  if (local_48 != 0) {
                    if (param_4 != 0) {
                      _CFArrayAppendValue(param_4,local_48);
                    }
                    goto LAB_001a8c5c;
                  }
                }
                local_48 = 0;
                goto LAB_001a8ca7;
              }
              local_48 = 0;
            }
          }
        }
LAB_001a8c5c:
        lVar11 = lVar11 + 1;
      } while (lVar12 != lVar11);
      uVar18 = 0;
    }
  }
LAB_001a8ca7:
  _SafeFree(pvVar13);
  _SafeFree(pvVar14);
  _SafeRelease(local_48);
  _SafeRelease(uVar17);
  return uVar18;
}

