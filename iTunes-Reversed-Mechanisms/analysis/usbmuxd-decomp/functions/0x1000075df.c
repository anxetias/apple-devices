// rea decompile_all
// name: FUN_1000075df
// address: 0x1000075df
// body: available
// range: 0x1000075df-0x1000076be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007698 to 0x100013239 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000076ba to 0x100005497 FUN_100005497 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000075df(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_24 [4];
  
  if (param_1 == 0) {
    return;
  }
  lVar1 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                     PTR__kCFTypeDictionaryValueCallBacks_10001c060);
  if (lVar1 != 0) {
    lVar2 = FUN_100004398(local_24);
    if (lVar2 != 0) {
      if (5 < DAT_100021030) {
        FUN_1000008d2(6,0,&cf_returnBUID__,lVar2);
      }
      _CFDictionaryAddValue(lVar1,PTR_cf_BUID_1000211e8,lVar2);
      _CFRelease(lVar2);
    }
    FUN_100002e00(param_1,*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x20) + 0xc),lVar1);
    _CFRelease(lVar1);
    return;
  }
  FUN_100005497(param_1,0xc);
  return;
}

