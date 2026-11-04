// rea decompile_all
// name: _AMAuthInstallHttpSetBase64EncodedValue
// address: 0x291669
// body: available
// range: 0x291669-0x291709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallHttpSetBase64EncodedValue
              (undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  char *pcVar2;
  long local_30;
  
  local_30 = 0;
  iVar1 = 1;
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    iVar1 = _AMAuthInstallSupportBase64Encode(param_1,param_4,&local_30);
    if (iVar1 == 0) {
      if (local_30 != 0) {
        iVar1 = _AMAuthInstallHttpSetUriEscapedValue(param_1,param_2,param_3);
        goto LAB_002916c1;
      }
      pcVar2 = "encodedValue is NULL";
      iVar1 = 3;
    }
    else {
      pcVar2 = "Base64Encode failed";
    }
    _AMAuthInstallLog(3,"AMAuthInstallHttpSetBase64EncodedValue",pcVar2);
  }
LAB_002916c1:
  _SafeRelease(local_30);
  return iVar1;
}

