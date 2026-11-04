// rea decompile_all
// name: __CFDictionaryGetBoolean
// address: 0x29e8ca
// body: available
// range: 0x29e8ca-0x29e987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x29e92f to 0x2a94a4 _CFBooleanGetValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __CFDictionaryGetBoolean(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = "dict is NULL";
  }
  else if (param_2 == 0) {
    pcVar5 = "key is NULL";
  }
  else {
    lVar1 = _CFDictionaryGetTypeID();
    lVar2 = _CFGetTypeID(param_1);
    if (lVar1 == lVar2) {
      lVar1 = _CFDictionaryGetValue(param_1,param_2);
      if (lVar1 == 0) goto LAB_0029e97c;
      lVar2 = _CFBooleanGetTypeID();
      lVar3 = _CFGetTypeID(lVar1);
      if (lVar2 == lVar3) {
        uVar4 = _CFBooleanGetValue(lVar1);
        return uVar4;
      }
      pcVar5 = "dict value is not CFBoolean";
    }
    else {
      pcVar5 = "dict is not CFDictionary";
    }
  }
  _AMAuthInstallLog(3,"_CFDictionaryGetBoolean",pcVar5);
LAB_0029e97c:
  return param_3 & 0xff;
}

