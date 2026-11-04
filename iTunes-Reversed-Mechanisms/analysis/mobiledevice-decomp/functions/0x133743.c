// rea decompile_all
// name: __TurnOnSSLOverSocket
// address: 0x133743
// body: available
// range: 0x133743-0x1338ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __TurnOnSSLOverSocket(long param_1,int param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_38;
  
  local_38 = 0;
  iVar1 = -0x17fffff9;
  if (param_3 != (long *)0x0 && param_2 != -1) {
    if (*(char *)(param_1 + 0x94) == '\x01') {
      iVar1 = __CreatePairingRecordFromRecordOnDiskForIdentifier
                        (*(undefined8 *)(param_1 + 0x20),&local_38);
      lVar3 = local_38;
      if (iVar1 == 0) {
        lVar2 = _CFDataGetTypeID();
        lVar3 = _CFDictionaryGetValue(lVar3,&cf_RootCertificate);
        iVar1 = -0x17ffffdb;
        if ((lVar3 != 0) && (lVar4 = _CFGetTypeID(lVar3), lVar5 = local_38, lVar4 == lVar2)) {
          lVar2 = _CFDataGetTypeID();
          lVar5 = _CFDictionaryGetValue(lVar5,&cf_DeviceCertificate);
          if ((lVar5 != 0) && (lVar6 = _CFGetTypeID(lVar5), lVar4 = local_38, lVar6 == lVar2)) {
            lVar2 = _CFDataGetTypeID();
            lVar4 = _CFDictionaryGetValue(lVar4,&cf_RootPrivateKey);
            if ((lVar4 != 0) && (lVar6 = _CFGetTypeID(lVar4), lVar6 == lVar2)) {
              lVar3 = _lockssl_handshake(param_1,param_2,lVar3,lVar5,lVar4);
              if (lVar3 == 0) {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"Could not perform SSL handshake.");
                iVar1 = -0x17ffffee;
              }
              else {
                *param_3 = lVar3;
                iVar1 = 0;
              }
            }
          }
        }
      }
    }
    else {
      iVar1 = -0x17ffff7c;
    }
    if (local_38 != 0) {
      _CFRelease();
    }
  }
  return iVar1;
}

