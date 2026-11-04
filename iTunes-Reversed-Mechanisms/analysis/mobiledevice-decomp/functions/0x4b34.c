// rea decompile_all
// name: _AMSupportHttpUriUnescapeString
// address: 0x4b34
// body: available
// range: 0x4b34-0x4bfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportHttpUriUnescapeString(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_2 == 0) {
    _AMSupportHttpUriUnescapeString_cold_3();
LAB_00004be4:
    uVar4 = 1;
  }
  else {
    if (param_3 == (undefined8 *)0x0) {
      _AMSupportHttpUriUnescapeString_cold_2();
      goto LAB_00004be4;
    }
    lVar2 = _CFStringCreateMutableCopy(param_1,0,param_2);
    if (lVar2 != 0) {
      lVar5 = 0x210;
      do {
        uVar4 = *(undefined8 *)(&_kAMSupportErrorDomain + lVar5);
        uVar1 = *(undefined8 *)(&UNK_00441448 + lVar5);
        uVar3 = _CFStringGetLength(lVar2);
        _CFStringFindAndReplace(lVar2,uVar1,uVar4,0,uVar3,0);
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      uVar4 = _CFRetain(lVar2);
      *param_3 = uVar4;
      uVar4 = 0;
      goto LAB_00004bbe;
    }
    _AMSupportHttpUriUnescapeString_cold_1();
    uVar4 = 3;
  }
  lVar2 = 0;
LAB_00004bbe:
  _AMSupportSafeRelease(lVar2);
  return uVar4;
}

