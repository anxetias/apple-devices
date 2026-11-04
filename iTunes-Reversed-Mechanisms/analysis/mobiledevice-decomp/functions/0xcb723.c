// rea decompile_all
// name: _imageDataRequestUsesStreamedFile
// address: 0xcb723
// body: available
// range: 0xcb723-0xcb7a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _imageDataRequestUsesStreamedFile(__CFDictionary const*, __CFDictionary const*) */

ulong _imageDataRequestUsesStreamedFile(__CFDictionary *param_1,__CFDictionary *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = _CFDictionaryGetValue(param_2,&cf_Arguments);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = _CFDictionaryGetValue(lVar2,&cf_MessageUseStreamedImageFile);
  }
  lVar3 = _CFDictionaryGetValue(param_1,&cf_SystemImageFormat);
  uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),1);
  if (lVar2 != *(long *)PTR__kCFBooleanTrue_00441110) {
    if ((lVar2 != *(long *)PTR__kCFBooleanFalse_00441108) && (lVar3 != 0)) {
      cVar1 = _CFEqual(lVar3,&cf_AEAWrappedDiskImage);
      if (cVar1 != '\0') goto LAB_000cb79e;
    }
    uVar4 = 0;
  }
LAB_000cb79e:
  return uVar4 & 0xffffffff;
}

