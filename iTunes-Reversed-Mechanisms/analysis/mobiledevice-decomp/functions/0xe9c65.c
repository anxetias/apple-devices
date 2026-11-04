// rea decompile_all
// name: __AMRUSBInterfaceGetDFUInformation
// address: 0xe9c65
// body: available
// range: 0xe9c65-0xe9dab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMRUSBInterfaceGetDFUInformation
          (undefined8 param_1,undefined2 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  local_a0 = &local_a8;
  local_a8 = 0;
  local_98 = 0x2020000000;
  local_90 = 0xe00002bc;
  local_80 = &local_88;
  local_88 = 0;
  local_78 = 0x2020000000;
  local_70 = 0;
  local_60 = &local_68;
  local_68 = 0;
  local_58 = 0x2020000000;
  local_50 = 0;
  local_40 = &local_48;
  local_48 = 0;
  local_38 = 0x2020000000;
  local_30 = 0;
  (*(code *)PTR__objc_msgSend_00441098)(param_1,"getDFUInformationWithReply:");
  *param_2 = *(undefined2 *)(local_80 + 3);
  *param_3 = *(undefined1 *)(local_60 + 3);
  *param_4 = *(undefined1 *)(local_40 + 3);
  uVar1 = *(undefined4 *)(local_a0 + 3);
  __Block_object_dispose(&local_48,8);
  __Block_object_dispose(&local_68,8);
  __Block_object_dispose(&local_88,8);
  __Block_object_dispose(&local_a8,8);
  return uVar1;
}

