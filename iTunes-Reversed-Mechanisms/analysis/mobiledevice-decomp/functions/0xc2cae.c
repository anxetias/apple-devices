// rea decompile_all
// name: _AMSSetCalendarDayLimit
// address: 0xc2cae
// body: available
// range: 0xc2cae-0xc2d69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSSetCalendarDayLimit(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  int local_2c;
  
  uVar4 = 3;
  if (param_1 != 0) {
    if (_sMainProcessLink == 0) {
      uVar4 = 2;
    }
    else {
      local_2c = param_2;
      if (param_2 < 1) {
        local_2c = 0;
      }
      uVar1 = _CFNumberCreate(0,9,&local_2c);
      uVar2 = __createDictionaryWithRequestAndArgKeysAndValues
                        (&cf_AMSSetCalendarDayLimitRequest,2,&cf_AMSTargetIdentifierKey,param_1,
                         &cf_AMSCalendarDayLimitKey,uVar1);
      _CFRelease(uVar1);
      lVar3 = _AMSProcessLinkSendMessageLock(_sMainProcessLink,uVar2);
      _CFRelease(uVar2);
      if (lVar3 != 0) {
        _CFRelease(lVar3);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

