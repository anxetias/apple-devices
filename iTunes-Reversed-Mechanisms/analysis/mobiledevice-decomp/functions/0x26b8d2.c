// rea decompile_all
// name: _AMRestoreModeDeviceReboot
// address: 0x26b8d2
// body: available
// range: 0x26b8d2-0x26b9aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char _AMRestoreModeDeviceReboot(__AMRestoreModeDevice *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  
  iVar1 = _AMRestoreModeDeviceConnectToPortInternal(param_1,0xf27e,0.0,4);
  if (iVar1 < 0) {
    _AMRLog(3,&cf__s_unabletoconnecttodevice,"AMRestoreModeDeviceReboot");
    cVar4 = '\x02';
  }
  else {
    lVar3 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 == 0) {
      cVar4 = '\x12';
    }
    else {
      _CFDictionarySetValue(lVar3,&cf_Request,&cf_Reboot);
      iVar2 = _ramrod_send_message(iVar1,lVar3);
      cVar4 = (iVar2 != 0) * '\t';
      _AMRLog(6,&cf_sock_3d__s,iVar1,"closed");
      _close(iVar1);
      _CFRelease(lVar3);
    }
  }
  return cVar4;
}

