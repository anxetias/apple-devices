// rea decompile_all
// name: FUN_10000510f
// address: 0x10000510f
// body: available
// range: 0x10000510f-0x100005173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005130 to 0x1000049e8 FUN_1000049e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000516f to 0x10001346d _close (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000510f(undefined8 param_1,long param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  
  if (param_2 != 2) {
    return;
  }
  iVar1 = *param_4;
  cVar2 = FUN_10000df56(iVar1);
  if (cVar2 != '\0') {
    FUN_1000049e8(iVar1);
    return;
  }
  if (3 < DAT_100021030) {
    FUN_1000008d2(4,0,&cf__sclientalreadydisconnectedonfd_d,"HandleNewClientWrapper",iVar1);
  }
  _close(iVar1);
  return;
}

