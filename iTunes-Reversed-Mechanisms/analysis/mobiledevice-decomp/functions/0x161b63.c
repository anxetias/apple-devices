// rea decompile_all
// name: __AMRestorableDeviceLogMessage
// address: 0x161b63
// body: available
// range: 0x161b63-0x161c6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x161c1a to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x161c5a to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceLogMessage(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  
  if (param_1 == 0) {
    pcVar5 = &cf_Can_tlogmessagewithNULLdevice;
  }
  else if (param_3 == 0) {
    pcVar5 = &cf_Can_tlogmessagewithNULLtype;
  }
  else {
    lVar2 = _CFStringCreateExternalRepresentation
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,0x8000100,0x3f);
    if (lVar2 != 0) {
      uVar3 = _CFDataGetBytePtr(lVar2);
      uVar1 = _CFDataGetLength(lVar2);
      lVar4 = _AMRCopyFormattedLogDataAndScrub(uVar3,uVar1,10);
      if (lVar4 == 0) {
        pcVar5 = &cf_Failedtoallocatetimestampeddata;
        lVar4 = 0;
      }
      else {
        pcVar5 = (cfstringStruct *)0x0;
        __AMRestorableDeviceLogMessageData(param_1,lVar4,param_3,0);
      }
      _AMRSafeLogAndRelease(6,pcVar5);
      _CFRelease(lVar2);
      if (lVar4 != 0) {
        _CFRelease(lVar4);
        return;
      }
      return;
    }
    pcVar5 = &cf_Failedtoconvertstringintodata;
  }
  _AMRSafeLogAndRelease(6,pcVar5);
  return;
}

