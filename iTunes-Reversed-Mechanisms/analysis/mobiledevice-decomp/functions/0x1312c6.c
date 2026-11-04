// rea decompile_all
// name: __SavePairingRecordWithDeviceID
// address: 0x1312c6
// body: available
// range: 0x1312c6-0x131440 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __SavePairingRecordWithDeviceID(long param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = _CFGetTypeID();
    lVar4 = _CFStringGetTypeID();
    uVar6 = 0;
    if ((param_2 != 0) && (lVar3 == lVar4)) {
      lVar3 = _CFGetTypeID(param_2);
      lVar4 = _CFDictionaryGetTypeID();
      if (lVar3 == lVar4) {
        lVar4 = _CFPropertyListCreateData(0,param_2,100,0,&local_38);
        if (lVar4 == 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar6 = 0;
          __os_log_internal(0,_md_log_log,0x10,
                            "Could not create data while storing pairing record for %@: %@.",param_1
                            ,local_38);
        }
        else {
          iVar2 = _USBMuxSavePairingRecordWithDeviceID(param_1,lVar4,param_3);
          uVar6 = CONCAT71((int7)((ulong)lVar3 >> 8),iVar2 == 0);
          if (iVar2 != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar1 = _md_log_log;
            pcVar5 = _strerror(iVar2);
            __os_log_internal(0,uVar1,0x10,"USBMuxSavePairingRecord failed for device %d, %@: %s.",
                              param_3,param_1,pcVar5);
          }
          _CFRelease(lVar4);
        }
      }
      else {
        uVar6 = 0;
      }
    }
    if (local_38 != 0) {
      _CFRelease();
    }
  }
  return uVar6 & 0xffffffff;
}

