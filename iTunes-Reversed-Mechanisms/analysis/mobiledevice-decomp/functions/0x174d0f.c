// rea decompile_all
// name: __downloadHTTPCallback
// address: 0x174d0f
// body: available
// range: 0x174d0f-0x174eb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x174ea5 to 0x2aa28a _dispatch_semaphore_signal (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __downloadHTTPCallback(undefined4 param_1,long param_2,byte param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((param_2 != 0) && (param_5 != 0)) {
    _dispatch_semaphore_wait((dispatch_semaphore_t)*_gResourceData,0xffffffffffffffff);
    uVar2 = _CFDictionaryGetValue(_gResourceData[2],param_2);
    lVar3 = _CFArrayGetCount(uVar2);
    bVar1 = param_4 == 0 & param_3;
    if (bVar1 == 1) {
      _CFDictionarySetValue(_gResourceData[3],param_2,param_5);
    }
    if (0 < lVar3) {
      lVar3 = 0;
      do {
        puVar4 = (undefined8 *)_CFArrayGetValueAtIndex(uVar2,lVar3);
        if (bVar1 != 0) {
          uVar5 = _CFDictionaryGetValue(_gResourceData[1],param_5);
          __AMRResourceManagerSetIncrementedNumber(uVar5,_gResourceData[1],param_5);
        }
        _dispatch_semaphore_signal((dispatch_semaphore_t)*_gResourceData);
        (*(code *)*puVar4)(param_1,param_2,param_5,param_3,param_4,puVar4[1]);
        _dispatch_semaphore_wait((dispatch_semaphore_t)*_gResourceData,0xffffffffffffffff);
        lVar6 = _CFArrayGetCount(uVar2);
        if (param_3 != 0) {
          _free(puVar4);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar6);
    }
    if (param_3 != 0) {
      _CFDictionaryRemoveValue(_gResourceData[2],param_2);
      if (param_4 != 0) {
        _AMRRecursivelyDeleteContentAtURL(param_5);
      }
    }
    _dispatch_semaphore_signal((dispatch_semaphore_t)*_gResourceData);
    return;
  }
  return;
}

