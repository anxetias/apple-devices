// rea decompile_all
// name: _AMSupportCreateRandomNumber
// address: 0x3db8
// body: available
// range: 0x3db8-0x3e14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMSupportCreateRandomNumber(int param_1)

{
  void *pvVar1;
  long lVar2;
  size_t sVar3;
  
  sVar3 = (size_t)param_1;
  pvVar1 = _calloc(1,sVar3);
  if (pvVar1 == (void *)0x0) {
    _AMSupportCreateRandomNumber_cold_1();
  }
  else {
    _arc4random_buf(pvVar1,sVar3);
    lVar2 = _CFDataCreateWithBytesNoCopy
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,pvVar1,sVar3);
    if (lVar2 != 0) {
      return lVar2;
    }
    _free(pvVar1);
  }
  return 0;
}

