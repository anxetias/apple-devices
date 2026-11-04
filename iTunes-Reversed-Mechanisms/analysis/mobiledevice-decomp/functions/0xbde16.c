// rea decompile_all
// name: __MISProfileLoadPayload
// address: 0xbde16
// body: available
// range: 0xbde16-0xbdf1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __MISProfileLoadPayload(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  uVar4 = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar4 = 0xe8008004;
    }
    else {
      lVar2 = _MISCryptoCopyAttachedDataFromCMSSignature();
      if (lVar2 == 0) {
        uVar4 = 0xe800801a;
      }
      else {
        local_38 = 0;
        lVar3 = _CFPropertyListCreateWithData
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2,0,0,&local_38);
        if (local_38 == 0) {
          uVar4 = 0xe8008003;
          if (lVar3 != 0) {
            lVar5 = _CFGetTypeID(lVar3);
            lVar6 = _CFDictionaryGetTypeID();
            if (lVar5 == lVar6) {
              *(long *)(param_1 + 0x10) = lVar3;
              uVar4 = 0;
            }
            else {
              _CFRelease(lVar3);
            }
          }
        }
        else {
          if (lVar3 != 0) {
            _CFRelease(lVar3);
          }
          uVar4 = _MISGetLog();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            __MISProfileLoadPayload_cold_1(&local_38,uVar4);
          }
          _CFRelease(local_38);
          uVar4 = 0xe8008003;
        }
        _CFRelease(lVar2);
      }
    }
  }
  return uVar4;
}

