// rea decompile_all
// name: FUN_100013844
// address: 0x100013844
// body: available
// range: 0x100013844-0x1000138af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000138ab to 0x100014809 _DLSetStatus (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100013844(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xe) != 0) {
    __DLRequestWrite(param_1,&cf_SDMessageSyncDataClassWithDevice,5,param_2,param_3,param_4,param_5,
                     param_6);
    __DLRequestRead(param_1);
    *param_1 = 6;
    return 0;
  }
  uVar1 = _DLSetStatus(0xfffffffc,param_7,&cf_SDSyncDataClassWithDevice_Devicecannotcallthismethod);
  return uVar1;
}

