// rea decompile_all
// name: __AMRecoveryModeDeviceWriteBulk
// address: 0xee2c2
// body: available
// range: 0xee2c2-0xee321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xee302 to 0xe9f46 __AMRUSBInterfaceWritePipe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRecoveryModeDeviceWriteBulk(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    iVar1 = __AMRecoveryModeDeviceOpen(param_1);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x30);
  }
  __AMRUSBInterfaceWritePipe
            (lVar2,*(undefined1 *)(param_1 + (0x3d - (ulong)(param_2 == 0))),param_3,param_4);
  return;
}

