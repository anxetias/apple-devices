// rea decompile_all
// name: _AMRAuthInstallRequestAbbreviatedSendSync
// address: 0xf9b34
// body: available
// range: 0xf9b34-0xf9cc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMRAuthInstallRequestAbbreviatedSendSync
          (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  
  lVar3 = param_1;
  if ((param_1 == 0) &&
     (lVar3 = _AMAuthInstallCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8), lVar3 == 0)) {
    _AMRLog(3,&cf__s_failedtoallocateamai,"AMRAuthInstallRequestAbbreviatedSendSync");
    return 0x12;
  }
  lVar4 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar4 == 0) {
    uVar2 = 2;
  }
  else {
    _AMAuthInstallSupportDictionarySetInteger64(lVar4,&cf_ECID,param_2);
    _AMAuthInstallSupportDictionarySetInteger32(lVar4,&cf_ApChipID,param_3);
    _AMAuthInstallSupportDictionarySetInteger32(lVar4,&cf_ApBoardID,param_4);
    _AMAuthInstallSupportDictionarySetInteger32(lVar4,&cf_ApSecurityDomain,param_5);
    _AMAuthInstallSupportDictionarySetBoolean(lVar4,&cf_ApProductionMode,param_6);
    iVar1 = _AMAuthInstallApSetParameters(lVar3,lVar4);
    if (iVar1 == 0) {
      iVar1 = _AMAuthInstallRequestAbbreviatedSendSync(lVar3,param_7,param_8);
      if (iVar1 == 0) {
        uVar2 = 0xffffffff;
        goto LAB_000f9c6b;
      }
      pcVar5 = &cf__s_failedtosendabbreviatedrequest;
    }
    else {
      pcVar5 = &cf__s_failedtosetApfusings;
    }
    _AMRLog(3,pcVar5,"AMRAuthInstallRequestAbbreviatedSendSync");
    uVar2 = _AMAuthInstallToRestoreError(iVar1);
  }
LAB_000f9c6b:
  if (param_1 == 0) {
    _CFRelease(lVar3);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  return uVar2;
}

