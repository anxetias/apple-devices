// rea decompile_all
// name: AMRLocalUSBDevice::getManufacturerStringIndexForIndexWithReply:
// address: 0xfbe49
// body: available
// range: 0xfbe49-0xfbe91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void AMRLocalUSBDevice::getManufacturerStringIndexForIndexWithReply_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_19;
  
  local_19 = 0;
  uVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x110))(*(long **)(param_1 + 8),&local_19);
  uVar1 = __AMRestoreErrorForIOReturn(uVar1,0x7da);
  (**(code **)(param_3 + 0x10))(param_3,uVar1,local_19,0);
  return;
}

