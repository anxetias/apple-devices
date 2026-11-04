// rea decompile_all
// name: __InitializeError
// address: 0x1452c0
// body: available
// range: 0x1452c0-0x145308 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x145303 to 0x146a03 __mutex_init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __InitializeError(void)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = 0;
  LOCK();
  bVar2 = __gErrorInitialized == 0;
  if (bVar2) {
    __gErrorInitialized = 1;
  }
  else {
    uVar1 = (ulong)__gErrorInitialized;
  }
  UNLOCK();
  if (bVar2) {
    _gExtraErrorInfo =
         _CFDictionaryCreateMutable
                   (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    uVar1 = __mutex_init(&_gExtraErrorInfoLock);
    return uVar1;
  }
  return uVar1;
}

