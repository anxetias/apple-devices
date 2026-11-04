// rea decompile_all
// name: _DLDeviceGetWithUDID
// address: 0xe5f0
// body: available
// range: 0xe5f0-0xe6ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _DLDeviceGetWithUDID(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if ((param_1 == 0 || param_2 == 0) || (*(long *)(param_1 + 0x28) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar2 = _CFArrayCreateCopy(0);
    if (lVar2 != 0) {
      uVar1 = _CFArrayGetCount(lVar2);
      if ((int)uVar1 < 1) {
        uVar5 = 0;
      }
      else {
        uVar6 = 0;
        uVar5 = 0;
        do {
          plVar3 = (long *)_CFArrayGetValueAtIndex(lVar2,uVar6);
          if ((((plVar3 != (long *)0x0) && (*plVar3 != 0)) &&
              (lVar4 = _CFDictionaryGetValue(*plVar3,&cf_DLDeviceUDIDKey), lVar4 != 0)) &&
             (lVar4 = _CFStringCompare(lVar4,param_2,0), lVar4 == 0)) {
            uVar5 = __deviceWithBetterEndpoint(uVar5,plVar3);
          }
          uVar6 = uVar6 + 1;
        } while ((uVar1 & 0x7fffffff) != uVar6);
      }
      _CFRelease(lVar2);
    }
  }
  return uVar5;
}

