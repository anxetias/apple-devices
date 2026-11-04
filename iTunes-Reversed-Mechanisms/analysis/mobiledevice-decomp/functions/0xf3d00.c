// rea decompile_all
// name: _restored_get_supported_message_types
// address: 0xf3d00
// body: available
// range: 0xf3d00-0xf3de0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf3ddc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _restored_get_supported_message_types(void)

{
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [144];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  _memcpy(local_a8,&DAT_00447020,0x90);
  local_138 = *(undefined8 *)PTR__kCFBooleanFalse_00441108;
  local_120 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
  local_130 = local_138;
  local_128 = local_138;
  local_118 = local_138;
  local_110 = local_138;
  local_108 = local_138;
  local_100 = local_138;
  local_f8 = local_138;
  local_f0 = local_138;
  local_e8 = local_120;
  local_e0 = local_138;
  local_d8 = local_120;
  local_d0 = local_120;
  local_c8 = local_120;
  local_c0 = local_120;
  local_b8 = local_120;
  local_b0 = local_120;
  _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_a8,&local_138,0x12,
                      PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                      PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

