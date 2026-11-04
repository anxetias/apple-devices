// rea decompile_all
// name: _AMSupportCreateSetFromCFIndexArray
// address: 0x39b0
// body: available
// range: 0x39b0-0x3a68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMSupportCreateSetFromCFIndexArray(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar4 = (ulong)param_2;
  lVar2 = _CFSetCreateMutable(uVar1,uVar4,PTR__kCFTypeSetCallBacks_004411c0);
  if (lVar2 == 0) {
    _AMSupportCreateSetFromCFIndexArray_cold_1();
  }
  else {
    if (param_2 != 0) {
      do {
        lVar3 = _CFNumberCreate(uVar1,10,param_1);
        if (lVar3 == 0) {
          _AMSupportLogInternal
                    (3,"AMSupportCreateSetFromCFIndexArray",
                     "AMSupportCreateSetFromCFIndexArray input contains invalid number.");
          goto LAB_00003a48;
        }
        _CFSetAddValue(lVar2,lVar3);
        _CFRelease(lVar3);
        param_1 = param_1 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    _CFRetain(lVar2);
LAB_00003a48:
    _CFRelease(lVar2);
  }
  return lVar2;
}

