// rea decompile_all
// name: _ramrod_message_plist_create
// address: 0xe87fb
// body: available
// range: 0xe87fb-0xe88ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ramrod_message_plist_create(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_30;
  
  uVar1 = _objc_alloc(&objc::class_t::RamrodHostMessagePlist);
  local_30 = 0;
  lVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar1,"initWithPropertyList:error:",param_1,&local_30);
  lVar3 = (*(code *)PTR__objc_retain_004410a8)(local_30);
  if (lVar2 != 0 && param_2 != (undefined8 *)0x0) {
    uVar1 = (*(code *)PTR__objc_msgSend_00441098)(lVar2,"length");
    *param_2 = uVar1;
  }
  if (lVar3 != 0 && param_3 != (undefined8 *)0x0) {
    uVar1 = (*(code *)PTR__objc_retain_004410a8)(lVar3);
    *param_3 = uVar1;
  }
  (*(code *)PTR__objc_release_004410a0)(lVar3);
  return lVar2;
}

