// rea decompile_all
// name: __LoadUpdater
// address: 0x1b4bd1
// body: available
// range: 0x1b4bd1-0x1b4d06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __LoadUpdater(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 0x1c8),param_1);
  if (lVar1 == 0) {
    lVar1 = _AMAuthInstallUpdater(param_3,param_1,0,0);
    if (lVar1 != 0) {
      lVar2 = _CFDictionaryGetValue(param_2,&cf_RequestTags);
      if (lVar2 != 0) {
        if (*(long *)(lVar1 + 0x10) != 0) {
          _CFRelease();
          *(undefined8 *)(lVar1 + 0x10) = 0;
        }
        uVar3 = _CFRetain(lVar2);
        *(undefined8 *)(lVar1 + 0x10) = uVar3;
      }
      lVar2 = _CFDictionaryGetValue(param_2,&cf_ResponseTags);
      if (lVar2 != 0) {
        if (*(long *)(lVar1 + 0x28) != 0) {
          _CFRelease();
          *(undefined8 *)(lVar1 + 0x28) = 0;
        }
        uVar3 = _CFRetain(lVar2);
        *(undefined8 *)(lVar1 + 0x28) = uVar3;
      }
      lVar2 = _CFDictionaryGetValue(param_2,&cf_BuildIdentityTags);
      if (lVar2 != 0) {
        if (*(long *)(lVar1 + 0x20) != 0) {
          _CFRelease();
          *(undefined8 *)(lVar1 + 0x20) = 0;
        }
        uVar3 = _CFRetain(lVar2);
        *(undefined8 *)(lVar1 + 0x20) = uVar3;
      }
      lVar2 = _CFDictionaryGetValue(param_2,&cf_LoopInstance);
      if (lVar2 != 0) {
        if (*(long *)(lVar1 + 0x30) != 0) {
          _CFRelease();
          *(undefined8 *)(lVar1 + 0x30) = 0;
        }
        uVar3 = _CFRetain(lVar2);
        *(undefined8 *)(lVar1 + 0x30) = uVar3;
      }
    }
  }
  return;
}

