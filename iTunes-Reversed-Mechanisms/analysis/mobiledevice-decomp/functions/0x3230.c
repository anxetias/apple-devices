// rea decompile_all
// name: _AMSupportCreateURLFromString
// address: 0x3230
// body: available
// range: 0x3230-0x330f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3284 to 0x2a97b6 _CFRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x32d0 to 0x2a99ea _CFURLCreateWithString (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x330b to 0x2a99de _CFURLCreateWithFileSystemPath (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportCreateURLFromString(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_2 == 0) {
    pcVar4 = "%s: theString is NULL";
  }
  else {
    lVar1 = _CFGetTypeID(param_2);
    lVar2 = _CFURLGetTypeID();
    if (lVar1 == lVar2) {
      _AMSupportLogInternal(4,"AMSupportCreateURLFromString","%s: CFURLRef passed, retaining copy");
      uVar3 = _CFRetain(param_2);
      return uVar3;
    }
    lVar1 = _CFGetTypeID(param_2);
    lVar2 = _CFStringGetTypeID();
    if (lVar1 == lVar2) {
      lVar1 = _CFStringFind(param_2,&cf____,0);
      if (lVar1 != -1) {
        uVar3 = _CFURLCreateWithString();
        return uVar3;
      }
      uVar3 = _CFURLCreateWithFileSystemPath(param_1,param_2,0,0);
      return uVar3;
    }
    pcVar4 = "%s: invalid string";
  }
  _AMSupportLogInternal(3,"AMSupportCreateURLFromString",pcVar4);
  return 0;
}

