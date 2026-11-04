// rea decompile_all
// name: __LoadPairingRecord
// address: 0x131441
// body: available
// range: 0x131441-0x13155b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __LoadPairingRecord(undefined8 param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_30;
  
  local_30 = 0;
  lVar1 = _USBMuxCreateDataFromPairingRecord();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = _CFPropertyListCreateWithData(0,lVar1,(param_2 & 0xff) * 2,0,&local_30);
    if (lVar2 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      lVar2 = 0;
      __os_log_internal(0,_md_log_log,0x10,
                        "Could not create plist from data while loading pairing record for %@: %@.",
                        param_1,local_30);
    }
    else {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFDictionaryGetTypeID();
      if (lVar3 != lVar4) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,0x10,"Pairing record for %@ is not a dictionary.",param_1);
        _CFRelease(lVar2);
        lVar2 = 0;
      }
    }
    _CFRelease(lVar1);
  }
  return lVar2;
}

