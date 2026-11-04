// rea decompile_all
// name: _CFDictionaryGetBoolean
// address: 0x26b9ba
// body: available
// range: 0x26b9ba-0x26ba5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26ba1e to 0x2a94a4 _CFBooleanGetValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _CFDictionaryGetBoolean(__CFDictionary const*, void const*, unsigned char) */

undefined8 _CFDictionaryGetBoolean(__CFDictionary *param_1,void *param_2,uchar param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uchar extraout_DL;
  uchar extraout_DL_00;
  cfstringStruct *pcVar5;
  
  if (param_1 == (__CFDictionary *)0x0) {
    pcVar5 = &cf_dictisNULL;
  }
  else if (param_2 == (void *)0x0) {
    pcVar5 = &cf_keyisNULL;
  }
  else {
    lVar1 = _CFDictionaryGetTypeID();
    lVar2 = _CFGetTypeID(param_1);
    if (lVar1 == lVar2) {
      lVar1 = _CFDictionaryGetValue(param_1,param_2);
      if (lVar1 == 0) {
        return 0;
      }
      lVar2 = _CFBooleanGetTypeID();
      lVar3 = _CFGetTypeID(lVar1);
      if (lVar2 == lVar3) {
        uVar4 = _CFBooleanGetValue(lVar1);
        return uVar4;
      }
      pcVar5 = &cf_dictvalueisnotCFBoolean;
      param_3 = extraout_DL_00;
    }
    else {
      pcVar5 = &cf_dictisnotCFDictionary;
      param_3 = extraout_DL;
    }
  }
  _AMRLog(3,pcVar5,param_3);
  return 0;
}

