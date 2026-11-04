// rea decompile_all
// name: _AMAuthInstallBundleCopyPersonalizedURLsMatchingType
// address: 0x28cc1a
// body: available
// range: 0x28cc1a-0x28cf0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundleCopyPersonalizedURLsMatchingType
              (long param_1,long param_2,undefined8 param_3,cfstringStruct *param_4,
              undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined8 local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  void *local_48;
  long local_40;
  undefined8 local_38;
  
  local_50 = 0;
  local_70 = 0;
  local_38 = 0;
  pvVar6 = (void *)0x0;
  iVar1 = 1;
  local_68 = param_4;
  local_60 = param_3;
  if (((param_4 != (cfstringStruct *)0x0) && (param_1 != 0)) && (param_2 != 0)) {
    lVar2 = 0;
    pvVar5 = (void *)0x0;
    local_58 = param_1;
    if (param_5 == (undefined8 *)0x0) goto LAB_0028ce20;
    iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,param_2,param_3,&local_50);
    if (iVar1 == 0) {
      iVar1 = _AMAuthInstallBundleCopyReceiptCreateIfNecessary(param_1,param_2,&local_70);
      if (iVar1 == 0) {
        lVar2 = _CFDictionaryGetValue(local_50,&cf_Manifest);
        if (lVar2 == 0) {
          _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPersonalizedURLsMatchingType",
                            "%s: failed to get manifest entries");
          iVar1 = 8;
        }
        else {
          uVar3 = _CFGetAllocator(param_1);
          lVar4 = _CFDictionaryCreateMutable
                            (uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar4 != 0) {
            local_40 = lVar4;
            lVar4 = _CFDictionaryGetCount(lVar2);
            pvVar5 = _malloc(lVar4 * 8);
            pvVar6 = _malloc(lVar4 * 8);
            local_48 = pvVar5;
            _CFDictionaryGetKeysAndValues(lVar2,pvVar5,pvVar6);
            if (0 < lVar4) {
              lVar2 = *(long *)PTR__kCFBooleanTrue_00441110;
              lVar10 = 0;
              do {
                uVar3 = *(undefined8 *)((long)local_48 + lVar10 * 8);
                lVar7 = _CFDictionaryGetValue(*(undefined8 *)((long)pvVar6 + lVar10 * 8),&cf_Info);
                if (lVar7 == 0) {
                  _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPersonalizedURLsMatchingType",
                                    "%s: failed to get info dict");
                  iVar1 = 8;
                  lVar2 = local_40;
                  pvVar5 = local_48;
                  goto LAB_0028ce20;
                }
                lVar8 = _CFDictionaryGetValue(lVar7,local_68);
                if ((lVar8 == lVar2) ||
                   ((local_68 == &cf_IsFirmwarePayload &&
                    (lVar7 = _CFDictionaryGetValue(lVar7,&cf_IsSecondaryFirmwarePayload),
                    lVar7 == lVar2)))) {
                  iVar1 = _AMAuthInstallBundleCopyURLForKey
                                    (local_58,uVar3,local_60,param_2,&local_38);
                  if (iVar1 != 0) {
                    _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPersonalizedURLsMatchingType",
                                      "failed to copy url for %@",uVar3);
                    lVar2 = local_40;
                    pvVar5 = local_48;
                    goto LAB_0028ce20;
                  }
                  _CFDictionarySetValue(local_40,uVar3,local_38);
                  _SafeRelease(local_38);
                  local_38 = 0;
                }
                lVar10 = lVar10 + 1;
              } while (lVar4 != lVar10);
            }
            lVar2 = local_40;
            uVar3 = _CFRetain(local_40);
            *param_5 = uVar3;
            iVar1 = 0;
            pvVar5 = local_48;
            goto LAB_0028ce20;
          }
          iVar1 = 2;
        }
        goto LAB_0028cf02;
      }
      pcVar9 = "%s: failed to copy receipt";
    }
    else {
      pcVar9 = "%s: failed to copy build identity";
    }
    _AMAuthInstallLog(3,"AMAuthInstallBundleCopyPersonalizedURLsMatchingType",pcVar9);
  }
LAB_0028cf02:
  pvVar6 = (void *)0x0;
  lVar2 = 0;
  pvVar5 = (void *)0x0;
LAB_0028ce20:
  _SafeRelease(local_50);
  _SafeRelease(local_70);
  _SafeFree(pvVar5);
  _SafeFree(pvVar6);
  _SafeRelease(local_38);
  _SafeRelease(lVar2);
  return iVar1;
}

