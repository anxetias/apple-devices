// rea decompile_all
// name: __AMAuthInstallFusingProgramCopyResponseParameters
// address: 0x2903ff
// body: available
// range: 0x2903ff-0x290592 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMAuthInstallFusingProgramCopyResponseParameters
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  long local_38;
  
  local_38 = 0;
  local_50 = param_5;
  lVar3 = _CFPropertyListCreateFromXMLData(param_1,param_2,0,&local_38);
  puVar1 = local_50;
  if (local_38 == 0) {
    local_48 = param_3;
    local_40 = param_4;
    if (lVar3 == 0) {
      uVar4 = _CFDataGetLength(param_2);
      uStack_60 = 3;
      _AMAuthInstallLog(3,"_AMAuthInstallFusingProgramCopyResponseParameters",
                        "can\'t parse response (%u bytes of apparent garbage)",uVar4);
    }
    else {
      lVar5 = _CFDictionaryGetValue(lVar3,&cf_Status);
      if (lVar5 == 0) {
        uStack_60 = 0x11;
      }
      else {
        uVar4 = _CFDictionaryGetValue(lVar3,&cf_Message);
        uVar6 = _CFDictionaryGetValue(lVar3,&cf_Data);
        cVar2 = _CFNumberGetValue(lVar5,9,local_48);
        if (cVar2 == '\0') {
          uStack_60 = 3;
        }
        else {
          uVar4 = _SavageSafeRetain(uVar4);
          *local_40 = uVar4;
          uVar4 = _SavageSafeRetain(uVar6);
          *puVar1 = uVar4;
          uStack_60 = 0;
        }
      }
    }
  }
  else {
    uStack_60 = 3;
    _AMAuthInstallLog(3,"_AMAuthInstallFusingProgramCopyResponseParameters",
                      "CFPropertyListCreateFromXMLData() error: %@");
    local_58 = 0;
    uVar4 = _AMAuthInstallSupportGetURLForTempDirectoryRoot();
    _AMAuthInstallSupportCopyURLWithAppendedComponent(param_1,uVar4,&cf_badresponse_bin,0,&local_58)
    ;
    _AMAuthInstallSupportWriteDataToFileURL(param_1,param_2,local_58,1);
    _SafeRelease(local_58);
    _CFRelease(local_38);
    local_38 = 0;
  }
  _SafeRelease(lVar3);
  _SafeRelease(local_38);
  return uStack_60;
}

