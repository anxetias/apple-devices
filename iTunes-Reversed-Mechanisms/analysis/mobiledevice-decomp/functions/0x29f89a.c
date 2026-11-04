// rea decompile_all
// name: _AMAuthInstallSupportCreatePrependedFilePath
// address: 0x29f89a
// body: available
// range: 0x29f89a-0x29f9b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
_AMAuthInstallSupportCreatePrependedFilePath
          (long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_34;
  
  local_34 = 1;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) && (param_4 != (undefined8 *)0x0)) {
    lVar1 = _CFStringCreateArrayBySeparatingStrings(param_1,param_3,&cf__);
    lVar2 = _CFArrayGetCount(lVar1);
    lVar3 = _CFArrayGetValueAtIndex(lVar1);
    local_34 = 2;
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar4 = _CFStringCreateWithFormat(param_1,0,&cf______,param_2,lVar3);
      lVar3 = 0;
      if (lVar4 != 0) {
        if (lVar2 < 2) {
          uVar5 = _CFRetain(lVar4);
        }
        else {
          _CFArraySetValueAtIndex(lVar1,lVar2 + -1,lVar4);
          uVar5 = _CFStringCreateByCombiningStrings(param_1,lVar1,&cf__);
        }
        *param_4 = uVar5;
        local_34 = 0;
        lVar3 = lVar4;
      }
    }
    if (lVar1 != 0) {
      _CFRelease(lVar1);
    }
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
  }
  return local_34;
}

