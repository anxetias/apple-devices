// rea decompile_all
// name: _soft_MGGetStringAnswer
// address: 0x101a4b
// body: available
// range: 0x101a4b-0x101ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _soft_MGGetStringAnswer(undefined8 param_1)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  UNRECOVERED_JUMPTABLE = (code *)_getMGGetStringAnswerSymbolLoc();
  puVar1 = PTR__objc_msgSend_00441098;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101a6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1);
    return;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSAssertionHandler,"currentHandler");
  uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                            "CFStringRef soft_MGGetStringAnswer(CFStringRef)");
  uVar4 = _dlerror();
  (*(code *)puVar1)(uVar2,"handleFailureInFunction:file:lineNumber:description:",uVar3,
                    &cf_MobileGestaltSupport_m,0x14,&cf__s,uVar4);
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
  (*UNRECOVERED_JUMPTABLE)();
}

