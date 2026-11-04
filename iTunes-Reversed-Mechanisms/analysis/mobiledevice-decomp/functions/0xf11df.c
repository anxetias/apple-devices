// rea decompile_all
// name: __membootDevice
// address: 0xf11df
// body: available
// range: 0xf11df-0xf1242 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf123e to 0xf17b3 __sendCommandToDeviceWithTimeout (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __membootDevice(long param_1)

{
  int iVar1;
  
  iVar1 = __setArgs();
  if (iVar1 != 0) {
    return;
  }
  __AMRecoveryModeDeviceProgress(param_1,9);
  __loadFirmwareInfo(param_1);
  __sendCommandToDeviceWithTimeout
            (*(undefined8 *)
              (&DAT_0032ca70 + (ulong)((*(uint *)(param_1 + 0x5c) & 0xfffffff0) == 0xf0) * 8),
             param_1,&cf_memboot,1);
  return;
}

