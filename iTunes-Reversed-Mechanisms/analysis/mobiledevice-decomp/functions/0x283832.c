// rea decompile_all
// name: __VinylPopulateDstEntry
// address: 0x283832
// body: available
// range: 0x283832-0x2838f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__VinylPopulateDstEntry
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  
  lVar1 = _CFDictionaryGetValue(param_3,param_4);
  if (lVar1 == 0) {
    uStack_40 = 0;
  }
  else {
    lVar2 = _CFDataGetTypeID();
    lVar3 = _CFGetTypeID(lVar1);
    if (lVar2 == lVar3) {
      lVar2 = 0;
      lVar3 = _CFStringCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
      if (lVar3 == 0) {
        uStack_40 = 2;
      }
      else {
        _CFStringAppend(lVar3,param_1);
        _CFStringAppend(lVar3,param_2);
        _CFDictionarySetValue(param_5,lVar3,lVar1);
        _SavageSafeRetain(lVar1);
        uStack_40 = 0;
        lVar2 = lVar3;
      }
      goto LAB_002838cc;
    }
    uStack_40 = 0x11;
  }
  lVar2 = 0;
LAB_002838cc:
  _SafeRelease(lVar2);
  _SafeRelease(lVar1);
  return uStack_40;
}

