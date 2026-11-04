// rea decompile_all
// name: __AMRUSBInterfaceGetPipes
// address: 0xe98f4
// body: available
// range: 0xe98f4-0xe9a8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__AMRUSBInterfaceGetPipes
          (undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
          undefined1 *param_5,undefined1 *param_6)

{
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 *local_38;
  
  local_d0 = &local_d8;
  local_d8 = 0;
  local_c8 = 0x2020000000;
  local_b0 = &local_b8;
  local_b8 = 0;
  local_a8 = 0x2020000000;
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x2020000000;
  local_70 = &local_78;
  local_78 = 0;
  local_68 = 0x2020000000;
  local_50 = &local_58;
  local_58 = 0;
  local_48 = 0x2020000000;
  local_c0 = 0xff;
  local_a0 = 0xff;
  local_80 = 0xff;
  local_60 = 0xff;
  local_40 = 0xff;
  local_38 = param_6;
  (*(code *)PTR__objc_msgSend_00441098)(param_1,"getPipesWithReply:");
  *param_2 = *(undefined1 *)(local_d0 + 3);
  *param_3 = *(undefined1 *)(local_b0 + 3);
  *param_4 = *(undefined1 *)(local_90 + 3);
  *param_5 = *(undefined1 *)(local_70 + 3);
  *local_38 = *(undefined1 *)(local_50 + 3);
  __Block_object_dispose(&local_58,8);
  __Block_object_dispose(&local_78,8);
  __Block_object_dispose(&local_98,8);
  __Block_object_dispose(&local_b8,8);
  __Block_object_dispose(&local_d8,8);
  return 0xe00002bc;
}

