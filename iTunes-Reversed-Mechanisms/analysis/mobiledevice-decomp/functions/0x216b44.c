// rea decompile_all
// name: ACFULogging::shouldLog
// address: 0x216b44
// body: available
// range: 0x216b44-0x216b98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x216b90 to 0x2aa632 _os_log_type_enabled (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFULogging::shouldLog(ACFULogLevel) */

bool __thiscall ACFULogging::shouldLog(ACFULogging *this,uint param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (*(long *)(this + 0x48) == 0) {
    iVar3 = ___isPlatformVersionAtLeast(1,10,0xc,0);
    if (iVar3 != 0) {
      uVar2 = _os_log_type_enabled(*(undefined8 *)(this + 0xc60),this[param_2]);
      return (bool)uVar2;
    }
    bVar1 = true;
  }
  else {
    bVar1 = (int)param_2 <= *(int *)(this + 0x58);
  }
  return bVar1;
}

