// rea decompile_all
// name: _get_u32_from_edt_prop
// address: 0x19aa22
// body: available
// range: 0x19aa22-0x19aa8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _get_u32_from_edt_prop(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _IORegistryEntryCreateCFProperty
                    (param_1,param_2,*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
  if (lVar1 == 0) {
    uVar3 = 0xe00002f0;
  }
  else {
    lVar2 = _CFDataGetLength(lVar1);
    if (lVar2 < 4) {
      uVar3 = 0xe00002bc;
    }
    else {
      uVar3 = 0;
      _CFDataGetBytes(lVar1,0,4,param_3);
    }
    _CFRelease(lVar1);
  }
  return uVar3;
}

