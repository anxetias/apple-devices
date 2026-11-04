// rea decompile_all
// name: _copy_device_product_name_string
// address: 0x147466
// body: available
// range: 0x147466-0x1474bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_device_product_name_string(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = _copy_string_value_from_device(param_1,&cf_ProductName);
  if (lVar1 == 0) {
    lVar1 = _CFStringCreateCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&cf_iPhoneOS);
    if (lVar1 == 0) {
      uVar2 = 0xe8000003;
      lVar1 = 0;
      goto LAB_001474a7;
    }
  }
  uVar2 = 0;
LAB_001474a7:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar2;
  }
  return lVar1;
}

