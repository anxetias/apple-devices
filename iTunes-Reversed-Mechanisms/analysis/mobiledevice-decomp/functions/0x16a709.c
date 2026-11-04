// rea decompile_all
// name: ___thr_AMRestorableBuildCreate
// address: 0x16a709
// body: available
// range: 0x16a709-0x16a7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableBuildCreate(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  long local_20;
  
  local_20 = 0;
  if (param_1 == (long *)0x0) {
    pcVar3 = &cf_Can_tcreatemetadatawithNULLargs;
  }
  else {
    if (*param_1 == 0) {
      uVar2 = 0xfa1;
      pcVar3 = &cf_Can_tcreatemetadatawithNULLURL;
    }
    else {
      lVar1 = __AMRestorableBuildCreateFromURLForType(*param_1,1,&local_20);
      if (lVar1 != 0) {
        _CFRetain(lVar1);
        param_1[2] = lVar1;
        _AMRSafeLogAndRelease(3,0);
        _CFRelease(lVar1);
        goto LAB_0016a762;
      }
      uVar2 = 4000;
      pcVar3 = &cf_Failedtocreatemetadataobject;
    }
    if (param_1[1] != 0) {
      uVar2 = _AMRCreateErrorWithDomain
                        (pcVar3,uVar2,&cf_com_apple_MobileDevice_MobileRestore,local_20);
      *(undefined8 *)param_1[1] = uVar2;
    }
  }
  _AMRSafeLogAndRelease(3,pcVar3);
LAB_0016a762:
  if (local_20 != 0) {
    _CFRelease();
  }
  return;
}

