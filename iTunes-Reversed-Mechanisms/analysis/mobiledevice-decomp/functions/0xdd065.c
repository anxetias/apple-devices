// rea decompile_all
// name: _copyBundleURLAndVariantForBootObjectRequest
// address: 0xdd065
// body: available
// range: 0xdd065-0xdd1b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _copyBundleURLAndVariantForBootObjectRequest(__AMAuthInstall*, __CFDictionary const*,
   __CFDictionary const*, bool*, __CFURL const**, __CFString const**, __CFError**) */

undefined8
_copyBundleURLAndVariantForBootObjectRequest
          (__AMAuthInstall *param_1,__CFDictionary *param_2,__CFDictionary *param_3,bool *param_4,
          __CFURL **param_5,__CFString **param_6,__CFError **param_7)

{
  __CFError *p_Var1;
  __CFError *p_Var2;
  long lVar3;
  __CFURL *p_Var4;
  __CFString *p_Var5;
  __CFError *p_Var6;
  cfstringStruct *pcVar7;
  
  if (param_3 == (__CFDictionary *)0x0) {
    p_Var2 = (__CFError *)0x0;
  }
  else {
    p_Var2 = (__CFError *)_CFDictionaryGetValue(param_3,&cf_IsRecoveryOS);
  }
  p_Var1 = *(__CFError **)PTR__kCFBooleanTrue_00441110;
  if (param_4 != (bool *)0x0) {
    *param_4 = p_Var2 == p_Var1;
  }
  if (param_5 != (__CFURL **)0x0) {
    pcVar7 = &cf_SourceRestoreBundlePath;
    if (p_Var2 == p_Var1) {
      pcVar7 = &cf_RecoveryOSSourceBundlePath;
    }
    p_Var6 = p_Var2;
    lVar3 = _CFDictionaryGetValue(param_2,pcVar7);
    if (lVar3 == 0) {
      pcVar7 = &cf_couldn_tfindsourcebundlepathforsourcebootobjectrequest;
      goto LAB_000dd16d;
    }
    p_Var4 = (__CFURL *)_CFURLCreateWithFileSystemPath(0,lVar3,0,1);
    *param_5 = p_Var4;
  }
  if (param_6 == (__CFString **)0x0) {
    return 0;
  }
  if ((param_3 == (__CFDictionary *)0x0) ||
     (lVar3 = _CFDictionaryGetValue(param_3,&cf_Variant), lVar3 == 0)) {
    if (p_Var2 == p_Var1) {
      p_Var5 = (__CFString *)_AMRAuthInstallCopyRecoveryOSVariant(param_1,param_2);
    }
    else {
      p_Var5 = (__CFString *)_AMRAuthInstallCopyVariant(param_1,param_2);
    }
  }
  else {
    p_Var5 = (__CFString *)_CFRetain(lVar3);
  }
  if (p_Var5 != (__CFString *)0x0) {
    *param_6 = p_Var5;
    return 0;
  }
  pcVar7 = &cf_couldn_tfindvariantforsourcebootobjectrequest;
  p_Var6 = p_Var2;
LAB_000dd16d:
  _AMRLog(3,&cf___,pcVar7);
  if (param_7 != (__CFError **)0x0) {
    p_Var2 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)((long)&MACH_HEADER.magic + 1),(long)pcVar7,(__CFString *)0x0,
                        p_Var6);
    *param_7 = p_Var2;
  }
  return 1;
}

