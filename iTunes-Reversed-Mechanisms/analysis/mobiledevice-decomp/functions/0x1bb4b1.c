// rea decompile_all
// name: _tss_create_session
// address: 0x1bb4b1
// body: available
// range: 0x1bb4b1-0x1bb5a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * _tss_create_session(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  
  plVar1 = _malloc(0x60);
  pcVar4 = "out of memory";
  if (plVar1 != (long *)0x0) {
    plVar1[10] = 0;
    plVar1[0xb] = 0;
    plVar1[8] = 0;
    plVar1[9] = 0;
    plVar1[6] = 0;
    plVar1[7] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
    if (param_2 == 0) {
      pcVar4 = "signingServerURL is NULL";
    }
    else {
      lVar2 = _CFGetTypeID(param_2);
      lVar3 = _CFURLGetTypeID();
      if (lVar2 == lVar3) {
        lVar2 = _CFRetain(param_2);
        plVar1[1] = lVar2;
        *(undefined2 *)((long)plVar1 + 0x14) = 0x100;
        if (param_1 != 0) {
          _CFRetain(param_1);
        }
        *plVar1 = param_1;
        lVar2 = _CFDictionaryCreateMutable
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                           PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        plVar1[3] = lVar2;
        if (lVar2 != 0) {
          return plVar1;
        }
      }
      else {
        pcVar4 = "signingServerURL is malformed";
      }
    }
  }
  _AMAuthInstallLog(3,"tss_create_session",pcVar4);
  _free(plVar1);
  return (long *)0x0;
}

