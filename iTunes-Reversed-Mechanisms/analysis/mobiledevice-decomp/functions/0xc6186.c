// rea decompile_all
// name: _USBMuxDeletePairingRecord
// address: 0xc6186
// body: available
// range: 0xc6186-0xc62ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _USBMuxDeletePairingRecord(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int local_38;
  int local_34;
  long local_30;
  undefined4 local_28;
  int local_24;
  
  local_28 = 0x16;
  local_24 = -1;
  local_30 = 0;
  if ((param_1 == 0) || (iVar2 = _USBMuxIntNewSocket(&local_24), iVar2 != 0)) {
    lVar4 = 0;
  }
  else {
    lVar3 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    lVar4 = 0;
    if (lVar3 != 0) {
      _CFDictionaryAddValue(lVar3,_kUSBMuxParam_MessageType,_kUSBMuxMessageType_DeletePairRecord);
      _CFDictionaryAddValue(lVar3,_kUSBMuxParam_PairRecordID,param_1);
      iVar2 = _USBMuxSendDictionaryWithTimeout
                        (local_24,&local_38,lVar3,&_kMessageSendTimeoutTimespec);
      lVar4 = lVar3;
      if ((((iVar2 == 0) &&
           (iVar2 = _USBMuxReceiveDictionaryWithTimeout
                              (local_24,&local_34,&local_30,&_kMessageReceiveTimespec), iVar2 == 0))
          && (local_34 == local_38)) &&
         ((lVar3 = _CFDictionaryGetValue(local_30,_kUSBMuxParam_ResultNum), lVar3 != 0 &&
          (cVar1 = _CFNumberGetValue(lVar3,9,&local_28), cVar1 == '\0')))) {
        local_28 = 0x16;
      }
    }
  }
  if (local_24 != -1) {
    _close(local_24);
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_30 != 0) {
    _CFRelease();
  }
  return local_28;
}

