// rea decompile_all
// name: __OurErrorStringToAMDError
// address: 0x44747
// body: available
// range: 0x44747-0x44832 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __OurErrorStringToAMDError(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = _CFEqual(param_1,&cf_NoMatchingWatch);
  uVar2 = 0xe8000007;
  if (cVar1 == '\0') {
    cVar1 = _CFEqual(param_1,&cf_UnsupportedCommand);
    if (cVar1 == '\0') {
      cVar1 = _CFEqual(param_1,&cf_NoCommandInMessage);
      if (cVar1 == '\0') {
        cVar1 = _CFEqual(param_1,&cf_NoInitialMessage);
        if (cVar1 == '\0') {
          cVar1 = _CFEqual(param_1,&cf_NoPairedWatches);
          uVar2 = 0xe8000008;
          if (cVar1 == '\0') {
            cVar1 = _CFEqual(param_1,&cf_MalformedCommand);
            uVar2 = 0xe8000006;
            if (cVar1 == '\0') {
              cVar1 = _CFEqual(param_1,&cf_UnsupportedWatchKey);
              uVar2 = 0xe8000007;
              if (cVar1 == '\0') {
                uVar2 = _CFStringGetCStringPtr(param_1,0x8000100);
                __os_log_internal(0,PTR___os_log_default_004412f0,0,"Got unknown error: %s",uVar2);
                uVar2 = 0xe8000001;
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

