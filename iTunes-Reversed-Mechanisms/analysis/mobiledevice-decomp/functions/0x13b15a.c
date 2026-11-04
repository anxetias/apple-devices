// rea decompile_all
// name: __CreateBonjourDeviceDescriptionsIteratorCallback
// address: 0x13b15a
// body: available
// range: 0x13b15a-0x13b271 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __CreateBonjourDeviceDescriptionsIteratorCallback(char *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = __CreateDictFromFileContents();
  if (lVar1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Was unable to load %s. unlinking.",param_1);
    _unlink(param_1);
  }
  else {
    lVar2 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar2 != 0) {
      lVar3 = _CFDictionaryGetValue(lVar1,&cf_WiFiMACAddress);
      if (lVar3 != 0) {
        lVar4 = __CreateUDIDStringFromFileName(param_1);
        if (lVar4 != 0) {
          _CFDictionarySetValue(lVar2,&cf_WiFiMACAddress,lVar3);
          _CFDictionarySetValue(lVar2,&cf_UniqueDeviceID,lVar4);
          _CFArrayAppendValue(param_2,lVar2);
          _CFRelease(lVar4);
        }
      }
      _CFRelease(lVar2);
    }
    _CFRelease(lVar1);
  }
  return 1;
}

