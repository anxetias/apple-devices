// rea decompile_all
// name: __AMRestoreWKMSCopyDecryptionKeyFromLocalStorage
// address: 0x26aa2a
// body: available
// range: 0x26aa2a-0x26abdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRestoreWKMSCopyDecryptionKeyFromLocalStorage(cfstringStruct *param_1,undefined8 param_2)

{
  int iVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  long local_38;
  
  local_38 = 0;
  pcVar2 = (cfstringStruct *)__copyRestoreOptionOrPreferences(param_2,&cf_ImageDecryptionKeysPath);
  if (pcVar2 != (cfstringStruct *)0x0) {
    lVar3 = _CFGetTypeID(pcVar2);
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      iVar1 = __AMRestoreCreateCFArrayWithContentsOfFile(pcVar2,&local_38);
      if (iVar1 == 0) {
        lVar4 = _CFDictionaryGetValue(local_38,&cf_IsKeyPlist);
        lVar3 = local_38;
        if (lVar4 == *(long *)PTR__kCFBooleanTrue_00441110) {
          lVar3 = _CFDictionaryGetValue(local_38,&cf_EncryptionKeys);
          if (lVar3 == 0) {
            pcVar8 = &cf_WKMS_restoreoption__presentbutkeysmissingfromfileat__;
            goto LAB_0026ab93;
          }
          _CFRetain(lVar3);
          lVar4 = _CFGetTypeID(lVar3);
          lVar5 = _CFDictionaryGetTypeID();
          if (lVar4 == lVar5) goto LAB_0026aab4;
          pcVar9 = &cf_WKMS_restoreoption__presentbutkeysareinvalidtypeinfileat__;
          param_1 = pcVar2;
          pcVar8 = &cf_ImageDecryptionKeysPath;
        }
        else {
          local_38 = 0;
LAB_0026aab4:
          lVar4 = _CFDictionaryGetValue(lVar3,param_1);
          pcVar8 = pcVar2;
          if (lVar4 == 0) {
            pcVar9 = &cf_WKMS_nokeyfoundin__forarchive__;
          }
          else {
            lVar5 = _CFGetTypeID(lVar4);
            lVar6 = _CFDataGetTypeID();
            if (lVar5 == lVar6) {
              _AMRLog(6,&cf_WKMS_keyfoundin__forarchive___,pcVar2,param_1);
              uVar7 = _CFRetain(lVar4);
              goto LAB_0026ab06;
            }
            pcVar9 = &cf_WKMS_incorrectly_formattedkeyfoundin__forarchive___ignoring;
          }
        }
        uVar7 = 0;
        _AMRLog(4,pcVar9,pcVar8,param_1);
        goto LAB_0026ab06;
      }
      pcVar8 = &cf_WKMS_restoreoption__presentbutnokeysfoundat__;
LAB_0026ab93:
      _AMRLog(4,pcVar8,&cf_ImageDecryptionKeysPath,pcVar2);
    }
  }
  lVar3 = 0;
  uVar7 = 0;
LAB_0026ab06:
  _AMSupportSafeRelease(pcVar2);
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(local_38);
  return uVar7;
}

