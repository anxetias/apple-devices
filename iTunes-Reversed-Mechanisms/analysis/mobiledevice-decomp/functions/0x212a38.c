// rea decompile_all
// name: ACFURestoreHost::getPathFromBuildID
// address: 0x212a38
// body: available
// range: 0x212a38-0x212ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::getPathFromBuildID(__CFDictionary const*, __CFString const*) */

__CFDictionary * ACFURestoreHost::getPathFromBuildID(__CFDictionary *param_1,__CFString *param_2)

{
  long lVar1;
  __CFDictionary *p_Var2;
  long lVar3;
  long lVar4;
  __CFString *p_Var5;
  __CFDictionary *p_Var6;
  
  p_Var6 = *(__CFDictionary **)PTR__kCFAllocatorDefault_004410e8;
  p_Var5 = (__CFString *)0x0;
  p_Var2 = p_Var6;
  lVar1 = _CFStringCreateWithFormat
                    (p_Var6,0,&cf____________,&cf_BuildIdentity,param_2,&cf_Info,&cf_Path);
  if (lVar1 == 0) {
    getPathFromBuildID(p_Var2,p_Var5);
    p_Var2 = (__CFDictionary *)0x0;
  }
  else {
    p_Var2 = (__CFDictionary *)_AMSupportGetValueForKeyPathInDict(p_Var6,param_1,lVar1);
    if (p_Var2 == (__CFDictionary *)0x0) {
      getPathFromBuildID(p_Var6,(__CFString *)param_1);
    }
    else {
      lVar3 = _CFStringGetTypeID();
      lVar4 = _CFGetTypeID(p_Var2);
      if (lVar3 != lVar4) {
        getPathFromBuildID(p_Var2,(__CFString *)param_1);
      }
    }
    _CFRelease(lVar1);
  }
  return p_Var2;
}

