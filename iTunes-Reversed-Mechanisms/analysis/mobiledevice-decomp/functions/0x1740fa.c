// rea decompile_all
// name: __copyCurrentThreadID
// address: 0x1740fa
// body: available
// range: 0x1740fa-0x17415d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __copyCurrentThreadID(void)

{
  mach_port_t mVar1;
  pthread_t p_Var2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined1 local_14 [4];
  
  p_Var2 = _pthread_self();
  mVar1 = _pthread_mach_thread_np(p_Var2);
  if ((int)mVar1 < 1) {
    pcVar4 = &cf_FailedtogetcurrentthreadID;
  }
  else {
    lVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,9,local_14);
    if (lVar3 != 0) {
      pcVar4 = (cfstringStruct *)0x0;
      goto LAB_00174136;
    }
    pcVar4 = &cf_FailedtocreateCFNumberReffromthreadID;
  }
  lVar3 = 0;
LAB_00174136:
  _AMRSafePrintLogAndRelease(3,pcVar4);
  return lVar3;
}

