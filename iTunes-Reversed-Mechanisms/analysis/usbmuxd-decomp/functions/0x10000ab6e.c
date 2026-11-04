// rea decompile_all
// name: FUN_10000ab6e
// address: 0x10000ab6e
// body: available
// range: 0x10000ab6e-0x10000abcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000abc9 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000ab6e(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if ((param_2 != 0) && (3 < DAT_100021030)) {
    if (param_1 == (undefined8 *)0x0) {
      pcVar1 = "(none)";
    }
    else {
      pcVar1 = (char *)FUN_100008d22(*param_1);
    }
    uVar2 = FUN_100000d8c(param_2);
    FUN_1000008d2(4,0,&cf__sdevice_ssendfailed__s,"MuxInterfaceZLPSent",pcVar1,uVar2);
    return;
  }
  return;
}

