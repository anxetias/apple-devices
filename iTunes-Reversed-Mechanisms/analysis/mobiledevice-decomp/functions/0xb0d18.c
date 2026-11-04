// rea decompile_all
// name: _process_entries
// address: 0xb0d18
// body: available
// range: 0xb0d18-0xb0e3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xb0dd0 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xb0dfd to 0x2a9606 _CFDictionarySetValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xb0e3a to 0x2a983a _CFShow (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _process_entries(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  
  lVar2 = _CFGetTypeID(param_2);
  lVar3 = _CFDataGetTypeID();
  if (lVar2 != lVar3) {
    lVar2 = _CFGetTypeID(param_2);
    lVar3 = _CFStringGetTypeID();
    if (lVar2 != lVar3) {
      uVar5 = _CFGetTypeID(param_2);
      lVar2 = _CFCopyTypeIDDescription(uVar5);
      _dmlog("process_entries",0x152,&cf__sunsupportedtype____key____value___,"process_entries",
             lVar2,param_1,param_2);
      if (lVar2 != 0) {
        _CFRelease(lVar2);
        return;
      }
    }
    return;
  }
  piVar4 = (int *)_CFDataGetBytePtr();
  iVar1 = *piVar4;
  if (iVar1 == 4) {
    uVar5 = param_3[2];
  }
  else if (iVar1 == 10) {
    uVar5 = *param_3;
  }
  else {
    if (iVar1 != 8) {
      _dmlog("process_entries",0x14b,&cf_didn_tstashakeyfortype_d_);
      _fflush(*(FILE **)PTR____stdoutp_004412c8);
      _CFShow(param_1);
      return;
    }
    uVar5 = param_3[1];
  }
  _CFDictionarySetValue(uVar5,param_1,param_2);
  return;
}

