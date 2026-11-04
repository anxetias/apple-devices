// rea decompile_all
// name: __AMRUSBInterfaceReadPipe
// address: 0xea0bc
// body: available
// range: 0xea0bc-0xea195 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMRUSBInterfaceReadPipe
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_50 = &local_58;
  local_58 = 0;
  local_48 = 0x2020000000;
  local_40 = 0xe00002bc;
  local_30 = &local_38;
  local_38 = 0;
  local_28 = 0x2020000000;
  local_20 = 0;
  (*(code *)PTR__objc_msgSend_00441098)(param_1,"readPipe:length:withReply:",param_2,*param_4);
  *param_4 = *(undefined4 *)(local_30 + 3);
  uVar1 = *(undefined4 *)(local_50 + 3);
  __Block_object_dispose(&local_38,8);
  __Block_object_dispose(&local_58,8);
  return uVar1;
}

