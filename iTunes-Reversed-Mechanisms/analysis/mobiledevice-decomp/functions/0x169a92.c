// rea decompile_all
// name: ___thr_AMRestorableSetGlobalLogFileURL
// address: 0x169a92
// body: available
// range: 0x169a92-0x169b72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x169b59 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableSetGlobalLogFileURL(long *param_1)

{
  char cVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined1 uVar4;
  
  if (param_1 == (long *)0x0) {
    _AMRSafeLog(3,&cf___,&cf_Can_tsetgloballogwithNULLargs);
    _CFRelease(&cf_Can_tsetgloballogwithNULLargs);
    return;
  }
  if (*(long *)(_gRestorableData + 0xa8) != 0) {
    _CFWriteStreamClose();
    _CFRelease(*(undefined8 *)(_gRestorableData + 0xa8));
    *(undefined8 *)(_gRestorableData + 0xa8) = 0;
  }
  if (*param_1 == 0) {
    uVar4 = 0;
LAB_00169b20:
    pcVar3 = (cfstringStruct *)0x0;
  }
  else {
    lVar2 = _CFWriteStreamCreateWithFile(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8);
    *(long *)(_gRestorableData + 0xa8) = lVar2;
    if (lVar2 == 0) {
      pcVar3 = &cf_Failedtoopenwritestreamforgloballogfile;
    }
    else {
      cVar1 = _CFWriteStreamOpen(lVar2);
      if (cVar1 != '\0') {
        uVar4 = 1;
        goto LAB_00169b20;
      }
      pcVar3 = &cf_Failedtoopenwritestreamtogloballogfile;
    }
    uVar4 = 0;
  }
  _AMRSafeLogAndRelease(3,pcVar3);
  *(undefined1 *)(param_1 + 1) = uVar4;
  return;
}

