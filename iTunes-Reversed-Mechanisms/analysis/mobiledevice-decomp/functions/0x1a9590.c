// rea decompile_all
// name: __AMAuthInstallBundleGetDefaultResult
// address: 0x1a9590
// body: available
// range: 0x1a9590-0x1a965b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMAuthInstallBundleGetDefaultResult(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int local_1c;
  
  lVar1 = _CFGetTypeID();
  lVar2 = _CFBooleanGetTypeID();
  if (lVar1 == lVar2) {
    if (*(long *)PTR__kCFBooleanFalse_00441108 != param_1) {
      return *(long *)PTR__kCFBooleanFalse_00441108;
    }
  }
  else {
    lVar1 = _CFGetTypeID(param_1);
    lVar2 = _CFStringGetTypeID();
    if (lVar1 == lVar2) {
      lVar1 = _CFStringCompare(param_1,&cf___,0);
    }
    else {
      lVar1 = _CFGetTypeID(param_1);
      lVar2 = _CFNumberGetTypeID();
      if (lVar1 == lVar2) {
        _CFNumberGetValue(param_1,9,&local_1c);
        plVar3 = (long *)PTR__kCFBooleanFalse_00441108;
        if (local_1c != 0) goto LAB_001a9650;
        goto LAB_001a9621;
      }
      lVar1 = _CFGetTypeID(param_1);
      lVar2 = _CFDataGetTypeID();
      plVar3 = (long *)PTR__kCFBooleanFalse_00441108;
      if (lVar1 != lVar2) goto LAB_001a9650;
      lVar1 = _CFDataGetLength(param_1);
    }
    plVar3 = (long *)PTR__kCFBooleanFalse_00441108;
    if (lVar1 != 0) goto LAB_001a9650;
  }
LAB_001a9621:
  plVar3 = (long *)PTR__kCFBooleanTrue_00441110;
LAB_001a9650:
  return *plVar3;
}

