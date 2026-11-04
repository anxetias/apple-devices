// rea decompile_all
// name: _AFCErrorInfoCreateWithArgs
// address: 0x26a109
// body: available
// range: 0x26a109-0x26a384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26a380 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AFCErrorInfoCreateWithArgs
          (long *param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
          undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_c4 = param_2;
  local_c0 = param_5;
  local_bc = _AFCErrnoToAFCDomainError(param_2,param_3);
  lVar1 = _CFDictionaryCreateMutable
                    (0,7,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar1 != 0) {
    lVar2 = _CFNumberCreate(0,9,&local_bc);
    if (lVar2 != 0) {
      _CFDictionarySetValue(lVar1,&cf_AFCCode,lVar2);
      _CFRelease(lVar2);
    }
    if (param_2 != -1) {
      _strerror_r(param_2,local_b8,0x80);
      lVar2 = _CFStringCreateWithCString(0,local_b8,0x8000100);
      if (lVar2 != 0) {
        _CFDictionarySetValue(lVar1,&cf_NSDebugDescription,lVar2);
        _CFRelease(lVar2);
      }
      lVar2 = _CFNumberCreate(0,9,&local_c4);
      if (lVar2 != 0) {
        _CFDictionarySetValue(lVar1,&cf_NSUnderlyingError,lVar2);
        _CFRelease(lVar2);
      }
    }
    lVar2 = _CFStringCreateWithCStringNoCopy
                      (0,param_6,0x8000100,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
    if (lVar2 != 0) {
      lVar3 = _CFStringCreateWithFormatAndArguments(0,0,lVar2,param_7);
      if (lVar3 != 0) {
        _CFDictionarySetValue(lVar1,&cf_NSDescription,lVar3);
        _CFRelease(lVar3);
      }
      _CFRelease(lVar2);
    }
    if (param_4 != (char *)0x0) {
      sVar4 = _strlen(param_4);
      lVar2 = _CFURLCreateFromFileSystemRepresentation(0,param_4,sVar4,0);
      if (lVar2 != 0) {
        lVar3 = _CFURLCopyLastPathComponent(lVar2);
        if (lVar3 != 0) {
          _CFDictionarySetValue(lVar1,&cf_AFCFileName,lVar3);
          _CFRelease(lVar3);
        }
        lVar3 = _CFNumberCreate(0,9,&local_c0);
        if (lVar3 != 0) {
          _CFDictionarySetValue(lVar1,&cf_AFCFileLine,lVar3);
          _CFRelease(lVar3);
        }
        _CFRelease(lVar2);
      }
    }
    if (___gAFCVersion != 0) {
      _CFDictionarySetValue(lVar1,&cf_AFCVersion);
    }
  }
  *param_1 = lVar1;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return local_bc;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

