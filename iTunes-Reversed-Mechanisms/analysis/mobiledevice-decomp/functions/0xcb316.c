// rea decompile_all
// name: _processASRResult
// address: 0xcb316
// body: available
// range: 0xcb316-0xcb3c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _processASRResult(__AMRestoreModeDevice*, __CFDictionary const*, int) */

undefined8 _processASRResult(__AMRestoreModeDevice *param_1,__CFDictionary *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uchar extraout_DL;
  int iVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  
  iVar3 = (int)param_2;
  if (iVar3 == 0) {
    return 0;
  }
  pcVar2 = _strerror(iVar3);
  _AMRLog(3,&cf_ASRServerHandleConnectionfailed__d__s_,(ulong)param_2 & 0xffffffff,pcVar2);
  pcVar4 = &cf_ASRServerHandleConnectionfailureispossibly_recoverablenetworkerror;
  if (iVar3 < 0x36) {
    if (iVar3 == 0x20) goto LAB_000cb382;
    uVar5 = 0x450;
    if (iVar3 != 5) {
      if (iVar3 != 0x16) goto LAB_000cb39f;
      uVar5 = 0x451;
    }
  }
  else {
    if (iVar3 == 0x36) goto LAB_000cb382;
LAB_000cb39f:
    uVar5 = 0x44c;
  }
  cVar1 = _CFDictionaryGetBoolean((__CFDictionary *)param_1,&cf_HostFailsWhenASRFails,extraout_DL);
  if (cVar1 != '\0') {
    return uVar5;
  }
  pcVar4 = &cf_ASRServerHandleConnectionfailuredelegatedtodevice;
LAB_000cb382:
  _AMRLog(4,pcVar4);
  return 0;
}

