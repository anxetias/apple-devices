// rea decompile_all
// name: _CreatePairingGoo
// address: 0x170f0e
// body: available
// range: 0x170f0e-0x1711a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _CreatePairingGoo(long param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "goo is NULL.";
  }
  else {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar1 != 0) {
      lVar2 = _CreateDataFromX509Certificate(*(undefined8 *)(param_1 + 0x30));
      if (lVar2 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Failed to create data from root cert.");
      }
      _CFDictionarySetValue(lVar1,&cf_RootCertificate,lVar2);
      _CFRelease(lVar2);
      lVar2 = _CreateDataFromX509Certificate(*(undefined8 *)(param_1 + 0x38));
      if (lVar2 == 0) {
        pcVar3 = "Failed to create data from host cert.";
      }
      else {
        _CFDictionarySetValue(lVar1,&cf_HostCertificate,lVar2);
        _CFRelease(lVar2);
        lVar2 = _CreateDataFromX509Certificate(*(undefined8 *)(param_1 + 0x40));
        if (lVar2 == 0) {
          pcVar3 = "Failed to create data from device cert.";
        }
        else {
          _CFDictionarySetValue(lVar1,&cf_DeviceCertificate,lVar2);
          _CFRelease(lVar2);
          lVar2 = _CreateDataFromPrivateKey(*(undefined8 *)(param_1 + 0x18));
          if (lVar2 == 0) {
            pcVar3 = "Failed to create data from root key.";
          }
          else {
            _CFDictionarySetValue(lVar1,&cf_RootPrivateKey,lVar2);
            _CFRelease(lVar2);
            lVar2 = _CreateDataFromPrivateKey(*(undefined8 *)(param_1 + 0x20));
            if (lVar2 == 0) {
              pcVar3 = "Failed to create data from host key.";
            }
            else {
              _CFDictionarySetValue(lVar1,&cf_HostPrivateKey,lVar2);
              _CFRelease(lVar2);
              lVar2 = _CreateUUID();
              if (lVar2 != 0) {
                _CFDictionarySetValue(lVar1,&cf_HostID,lVar2);
                _CFRelease(lVar2);
                return lVar1;
              }
              pcVar3 = "Failed to create UUID.";
            }
          }
        }
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,pcVar3);
      _CFRelease(lVar1);
      return 0;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar3 = "Failed to allocate dictionary.";
  }
  __os_log_internal(0,_md_log_log,1,pcVar3);
  return 0;
}

