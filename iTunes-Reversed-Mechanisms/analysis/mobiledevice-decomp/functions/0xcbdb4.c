// rea decompile_all
// name: _AMRCreateErrorWithUnderlyingError
// address: 0xcbdb4
// body: available
// range: 0xcbdb4-0xcbe8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRCreateErrorWithUnderlyingError(__CFString const*, long, __CFString const*, __CFError*) */

long _AMRCreateErrorWithUnderlyingError
               (__CFString *param_1,long param_2,__CFString *param_3,__CFError *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar2 = _CFDictionaryCreateMutable
                    (uVar1,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar2 == 0) {
    lVar3 = 0;
    _AMRLog(3,&cf_FailedtocreateuserinfodictionaryforCFError);
  }
  else {
    if (param_2 != 0) {
      _CFDictionarySetValue(lVar2,*(undefined8 *)PTR__kCFErrorDescriptionKey_00441138,param_2);
    }
    if (param_3 != (__CFString *)0x0) {
      _CFDictionarySetValue(lVar2,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_00441150,param_3);
    }
    lVar3 = _CFErrorCreate(uVar1,&cf_AMRestoreErrorDomain,param_1,lVar2);
    if (lVar3 == 0) {
      _AMRLog(3,&cf_FailedtocreateCFError);
    }
    _CFRelease(lVar2);
  }
  return lVar3;
}

