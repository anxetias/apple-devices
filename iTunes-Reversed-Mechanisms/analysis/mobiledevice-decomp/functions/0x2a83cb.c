// rea decompile_all
// name: _makeCFErrorWithDomain
// address: 0x2a83cb
// body: available
// range: 0x2a83cb-0x2a84ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_makeCFErrorWithDomain(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar5 = 0;
  lVar2 = _CFStringCreateWithFormat(uVar1,0,&cf_____s,param_4,param_1);
  if (lVar2 != 0) {
    uVar5 = 0;
    lVar3 = _CFStringCreateWithFormat(uVar1,0,&cf____InputOptions___,lVar2,param_3);
    lVar4 = lVar2;
    if (lVar3 != 0) {
      lVar4 = _CFDictionaryCreateMutable
                        (uVar1,0,PTR__kCFCopyStringDictionaryKeyCallBacks_00441130,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      _CFDictionaryAddValue
                (lVar4,*(undefined8 *)PTR__kCFErrorLocalizedDescriptionKey_00441148,lVar2);
      uVar5 = _CFErrorCreate(uVar1,param_4,param_2,lVar4);
      _CFRelease(lVar3);
      _CFRelease(lVar2);
      if (lVar4 == 0) {
        return uVar5;
      }
    }
    _CFRelease(lVar4);
  }
  return uVar5;
}

