// rea decompile_all
// name: _AMSupportCopyStringReplacingLastComponent
// address: 0x262442
// body: available
// range: 0x262442-0x262527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMSupportCopyStringReplacingLastComponent
          (undefined8 param_1,long param_2,undefined8 param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  
  uStack_40 = 1;
  if (((param_2 != 0) && (param_4 != 0)) && (param_5 != (undefined8 *)0x0)) {
    lVar1 = _CFStringCreateArrayBySeparatingStrings();
    if (lVar1 == 0) {
      uStack_40 = 3;
    }
    else {
      lVar2 = _CFArrayCreateMutableCopy(param_1,0,lVar1);
      if (lVar2 == 0) {
        uStack_40 = 3;
      }
      else {
        lVar3 = _CFArrayGetCount(lVar2);
        _CFArraySetValueAtIndex(lVar2,lVar3 + -1,param_4);
        lVar3 = _CFStringCreateByCombiningStrings(param_1,lVar2,param_3);
        if (lVar3 == 0) {
          uStack_40 = 3;
        }
        else {
          uVar4 = _CFRetain(lVar3);
          *param_5 = uVar4;
          uStack_40 = 0;
        }
        _CFRelease(lVar1);
        _CFRelease(lVar2);
        lVar1 = lVar3;
        if (lVar3 == 0) {
          return uStack_40;
        }
      }
      _CFRelease(lVar1);
    }
  }
  return uStack_40;
}

