// rea decompile_all
// name: _AFCIteratorCreate
// address: 0xb7e87
// body: available
// range: 0xb7e87-0xb8000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AFCIteratorCreate(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  _pthread_once((pthread_once_t *)&_AFCIteratorGetTypeID_typeIDInit,___AFCIteratorRegisterClass);
  lVar1 = __CFRuntimeCreateInstance(param_1,___gAFCIteratorTypeID,0x28,0);
  if ((param_2 == 0) || (lVar1 == 0)) {
    if (lVar1 == 0) goto LAB_000b7fef;
  }
  else {
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    lVar2 = _CFGetTypeID(param_2);
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 == lVar3) {
      lVar2 = _CFDictionaryGetCount();
      if (lVar2 == 0) {
        lVar2 = _CFArrayCreate(param_1,0,0,0);
        *(long *)(lVar1 + 0x18) = lVar2;
      }
      else {
        lVar3 = _CFAllocatorAllocate(0,lVar2 * 8,0);
        if (lVar3 == 0) goto LAB_000b7fe7;
        _CFDictionaryGetKeysAndValues(param_2,lVar3,0);
        uVar4 = _CFArrayCreate(param_1,lVar3,lVar2,PTR__kCFTypeArrayCallBacks_004411a8);
        *(undefined8 *)(lVar1 + 0x18) = uVar4;
        _CFAllocatorDeallocate(0,lVar3);
        lVar2 = *(long *)(lVar1 + 0x18);
      }
      if (lVar2 != 0) {
        plVar5 = (long *)(lVar1 + 0x10);
LAB_000b7f9f:
        *plVar5 = param_2;
        _CFRetain(param_2);
        lVar2 = _CFDataCreateMutable(param_1,0);
        *(long *)(lVar1 + 0x28) = lVar2;
        if (lVar2 != 0) {
          lVar2 = _CFDataCreateMutable(param_1,0);
          *(long *)(lVar1 + 0x30) = lVar2;
          if (lVar2 != 0) {
            return lVar1;
          }
        }
      }
    }
    else {
      lVar2 = _CFGetTypeID(param_2);
      lVar3 = _CFArrayGetTypeID();
      if (lVar2 == lVar3) {
        plVar5 = (long *)(lVar1 + 0x18);
        goto LAB_000b7f9f;
      }
    }
  }
LAB_000b7fe7:
  _AFCIteratorCreate_cold_1(lVar1);
LAB_000b7fef:
  if (param_2 != 0) {
    _CFRelease(param_2);
  }
  return 0;
}

