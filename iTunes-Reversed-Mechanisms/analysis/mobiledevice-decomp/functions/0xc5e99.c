// rea decompile_all
// name: _USBMuxCreateDataFromPairingRecord
// address: 0xc5e99
// body: available
// range: 0xc5e99-0xc5fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _USBMuxCreateDataFromPairingRecord(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int local_40;
  int local_3c;
  long local_38;
  int local_2c;
  
  local_2c = -1;
  local_38 = 0;
  if ((param_1 == 0) || (iVar1 = _USBMuxIntNewSocket(&local_2c), iVar1 != 0)) {
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    lVar3 = 0;
    lVar2 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    lVar4 = 0;
    if (lVar2 != 0) {
      _CFDictionaryAddValue(lVar2,_kUSBMuxParam_MessageType,_kUSBMuxMessageType_ReadPairRecord);
      _CFDictionaryAddValue(lVar2,_kUSBMuxParam_PairRecordID,param_1);
      iVar1 = _USBMuxSendDictionaryWithTimeout
                        (local_2c,&local_40,lVar2,&_kMessageSendTimeoutTimespec);
      lVar4 = lVar2;
      if ((((iVar1 == 0) &&
           (iVar1 = _USBMuxReceiveDictionaryWithTimeout
                              (local_2c,&local_3c,&local_38,&_kMessageReceiveTimespec), iVar1 == 0))
          && (local_3c == local_40)) &&
         (lVar3 = _CFDictionaryGetValue(local_38,_kUSBMuxParam_PairRecordData), lVar3 != 0)) {
        _CFRetain(lVar3);
      }
      else {
        lVar3 = 0;
      }
    }
  }
  if (local_2c != -1) {
    _close(local_2c);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  return lVar3;
}

