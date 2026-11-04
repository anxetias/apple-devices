// rea decompile_all
// name: _AMAuthInstallApCopyParameters
// address: 0x2749f7
// body: available
// range: 0x2749f7-0x274dc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallApCopyParameters(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  
  uStack_40 = 1;
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if ((param_2 != (undefined8 *)0x0) && (*(long *)(param_1 + 0x10) != 0)) {
      uVar1 = _CFGetAllocator(param_1);
      lVar2 = _CFDictionaryCreateMutable
                        (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar2 == 0) {
        lVar2 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallApCopyParameters","failed to allocate parameters dict");
        uStack_40 = 2;
      }
      else {
        uVar1 = _CFGetAllocator(param_1);
        lVar3 = _CFNumberCreate(uVar1,4,*(undefined8 *)(param_1 + 0x10));
        if (lVar3 == 0) {
          pcVar5 = "failed to convert ecid";
        }
        else {
          _CFDictionarySetValue(lVar2,&cf_ECID,lVar3);
          _CFRelease(lVar3);
          uVar1 = _CFGetAllocator(param_1);
          lVar3 = _CFNumberCreate(uVar1,3,*(long *)(param_1 + 0x10) + 8);
          if (lVar3 == 0) {
            pcVar5 = "failed to convert chipID";
          }
          else {
            _CFDictionarySetValue(lVar2,&cf_ApChipID,lVar3);
            _CFRelease(lVar3);
            uVar1 = _CFGetAllocator(param_1);
            lVar3 = _CFNumberCreate(uVar1,3,*(long *)(param_1 + 0x10) + 0xc);
            if (lVar3 == 0) {
              pcVar5 = "failed to convert boardID";
            }
            else {
              _CFDictionarySetValue(lVar2,&cf_ApBoardID,lVar3);
              _CFRelease(lVar3);
              uVar1 = _CFGetAllocator(param_1);
              lVar3 = _CFNumberCreate(uVar1,3,*(long *)(param_1 + 0x10) + 0x10);
              if (lVar3 != 0) {
                _CFDictionarySetValue(lVar2,&cf_ApSecurityDomain,lVar3);
                _CFRelease(lVar3);
                uVar1 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
                uVar6 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
                uVar4 = uVar1;
                if (*(char *)(*(long *)(param_1 + 0x10) + 0x14) == '\0') {
                  uVar4 = uVar6;
                }
                _CFDictionarySetValue(lVar2,&cf_ApProductionMode,uVar4);
                uVar4 = uVar1;
                if (*(char *)(*(long *)(param_1 + 0x10) + 0x60) == '\0') {
                  uVar4 = uVar6;
                }
                _CFDictionarySetValue(lVar2,&cf_ApSupportsImg4,uVar4);
                lVar3 = *(long *)(param_1 + 0x10);
                if (*(long *)(lVar3 + 0x18) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_ApNonce);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                if (*(long *)(lVar3 + 0x30) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_SepNonce);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                if (*(long *)(lVar3 + 0x28) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_Ap_SoftwareNonceForUpdateFreshness);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                uVar4 = uVar1;
                if (*(char *)(lVar3 + 0x48) == '\0') {
                  uVar4 = uVar6;
                }
                _CFDictionarySetValue(lVar2,&cf_ApSecurityMode,uVar4);
                uVar4 = uVar1;
                if (*(char *)(*(long *)(param_1 + 0x10) + 0x50) == '\0') {
                  uVar4 = uVar6;
                }
                _CFDictionarySetValue(lVar2,&cf_ApInRomDFU,uVar4);
                uVar4 = uVar1;
                if (*(char *)(*(long *)(param_1 + 0x10) + 0x52) == '\0') {
                  uVar4 = uVar6;
                }
                _CFDictionarySetValue(lVar2,&cf_ApEffectiveSecurityMode,uVar4);
                uVar4 = uVar1;
                if (*(char *)(*(long *)(param_1 + 0x10) + 0x51) == '\0') {
                  uVar4 = uVar6;
                }
                _CFDictionarySetValue(lVar2,&cf_ApEffectiveProductionMode,uVar4);
                if (*(char *)(*(long *)(param_1 + 0x10) + 0x4b) != '\0') {
                  uVar6 = uVar1;
                }
                _CFDictionarySetValue(lVar2,&cf_Ap_InternalUseOnlySW,uVar6);
                lVar3 = *(long *)(param_1 + 0x10);
                if (*(long *)(lVar3 + 0xb8) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_Ap_EphemeralDataMode);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                if (*(long *)(lVar3 + 0xc0) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_Ap_DisablePlatformOnlyCode);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                if (*(char *)(lVar3 + 0x74) != '\0') {
                  _CFDictionarySetValue(lVar2,&cf_ApX86,uVar1);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                if (*(long *)(lVar3 + 0x58) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_DemotionPolicy);
                  lVar3 = *(long *)(param_1 + 0x10);
                }
                if (*(long *)(lVar3 + 0x68) != 0) {
                  _CFDictionarySetValue(lVar2,&cf_HardwareModel);
                }
                uVar1 = _CFRetain(lVar2);
                *param_2 = uVar1;
                uStack_40 = 0;
                goto LAB_00274d34;
              }
              pcVar5 = "failed to convert securityDomain";
            }
          }
        }
        uStack_40 = 3;
        _AMAuthInstallLog(3,"AMAuthInstallApCopyParameters",pcVar5);
      }
    }
  }
LAB_00274d34:
  _SafeRelease(lVar2);
  return uStack_40;
}

