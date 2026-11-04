// rea decompile_all
// name: _restored_get_supported_async_data_types
// address: 0xf4018
// body: available
// range: 0xf4018-0xf40b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf40b5 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _restored_get_supported_async_data_types(void)

{
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  cfstringStruct *local_38;
  cfstringStruct *pcStack_30;
  cfstringStruct *local_28;
  cfstringStruct *pcStack_20;
  cfstringStruct *local_18;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_004412b8;
  local_18 = &cf_URLAsset;
  local_28 = &cf_BasebandData;
  pcStack_20 = &cf_StreamedImageDecryptionKey;
  local_38 = &cf_SystemImageData;
  pcStack_30 = &cf_RecoveryOSASRImage;
  local_68 = *(undefined4 *)PTR__kCFBooleanFalse_00441108;
  uStack_64 = *(undefined4 *)(PTR__kCFBooleanFalse_00441108 + 4);
  local_48 = *(undefined8 *)PTR__kCFBooleanTrue_00441110;
  uStack_60 = local_68;
  uStack_5c = uStack_64;
  local_58 = local_68;
  uStack_54 = uStack_64;
  uStack_50 = local_68;
  uStack_4c = uStack_64;
  _CFDictionaryCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_38,&local_68,5,
                      PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                      PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

