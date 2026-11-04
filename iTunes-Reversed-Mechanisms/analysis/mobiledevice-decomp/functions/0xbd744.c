// rea decompile_all
// name: _MISEntitlementDictionaryAllowsEntitlementValue
// address: 0xbd744
// body: available
// range: 0xbd744-0xbd8e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _MISEntitlementDictionaryAllowsEntitlementValue
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long local_40;
  long local_38;
  
  if ((param_3 != 0) && (lVar2 = _CFDictionaryGetValue(), lVar2 != 0)) {
    local_40 = lVar2;
    cVar1 = _CFEqual(lVar2,&cf__);
    if (cVar1 == '\x01') {
      return '\x01';
    }
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFEqual(lVar2,param_3);
      return cVar1;
    }
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFStringGetTypeID();
    if (lVar3 == lVar4) {
      lVar2 = _CFGetTypeID(param_3);
      lVar3 = _CFStringGetTypeID();
      if (lVar2 == lVar3) {
        uVar5 = _CFArrayCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_40,1,
                               PTR__kCFTypeArrayCallBacks_004411a8);
        cVar1 = _MISArrayAllowsEntitlementValue(uVar5,param_3);
        _CFRelease(uVar5);
        return cVar1;
      }
    }
    else {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFArrayGetTypeID();
      if (lVar3 == lVar4) {
        lVar3 = _CFGetTypeID(param_3);
        lVar4 = _CFStringGetTypeID();
        if (lVar3 == lVar4) {
          cVar1 = _MISArrayAllowsEntitlementValue(lVar2,param_3);
          return cVar1;
        }
        lVar3 = _CFGetTypeID(param_3);
        lVar4 = _CFArrayGetTypeID();
        if (lVar3 == lVar4) {
          local_38 = _CFArrayGetCount(param_3);
          if (local_38 < 1) {
            return '\x01';
          }
          lVar3 = 1;
          while( true ) {
            uVar5 = _CFArrayGetValueAtIndex(param_3,lVar3 + -1);
            lVar4 = _CFGetTypeID(uVar5);
            lVar6 = _CFStringGetTypeID();
            if (lVar4 != lVar6) break;
            cVar1 = _MISArrayAllowsEntitlementValue(lVar2,uVar5);
            if (local_38 <= lVar3) {
              return cVar1;
            }
            lVar3 = lVar3 + 1;
            if (cVar1 != '\x01') {
              return cVar1;
            }
          }
        }
      }
    }
  }
  return '\0';
}

