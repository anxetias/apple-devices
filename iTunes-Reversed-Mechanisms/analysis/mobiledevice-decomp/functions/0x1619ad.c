// rea decompile_all
// name: _AMRestorableGetIdentifyingErrorCode
// address: 0x1619ad
// body: available
// range: 0x1619ad-0x161a84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMRestorableGetIdentifyingErrorCode(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  if (param_1 == 0) {
    lVar8 = -1;
  }
  else {
    uVar1 = *(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_00441150;
    lVar8 = -1;
    do {
      lVar4 = _CFErrorGetCode(param_1);
      lVar5 = _CFErrorGetDomain(param_1);
      if (lVar5 != 0) {
        bVar7 = false;
        lVar6 = 0;
        do {
          cVar3 = _CFEqual(lVar5,(&DAT_00449d10)[lVar6]);
          if (cVar3 != '\0') break;
          lVar6 = 1;
          bVar2 = !bVar7;
          bVar7 = true;
        } while (bVar2);
        if (cVar3 != '\0') {
          lVar8 = lVar4;
        }
      }
      lVar5 = _CFErrorCopyUserInfo(param_1);
      if (lVar5 == 0) break;
      param_1 = _CFDictionaryGetValue(lVar5,uVar1);
      _CFRelease(lVar5);
    } while (param_1 != 0);
    if (lVar8 == -1) {
      lVar8 = lVar4;
    }
  }
  return lVar8;
}

