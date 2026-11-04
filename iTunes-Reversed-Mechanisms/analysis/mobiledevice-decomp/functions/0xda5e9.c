// rea decompile_all
// name: _handleNANDFWDataRequest
// address: 0xda5e9
// body: available
// range: 0xda5e9-0xda706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleNANDFWDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFError**) */

int _handleNANDFWDataRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  int iVar1;
  int iVar2;
  __CFString *p_Var3;
  undefined8 uVar4;
  __CFData *p_Var5;
  __CFError *p_Var6;
  cfstringStruct *pcVar7;
  __CFData *p_Var8;
  int iVar9;
  __CFData *local_38;
  
  p_Var6 = *(__CFError **)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(p_Var6 + 0x10);
  local_38 = (__CFData *)0x0;
  p_Var3 = (__CFString *)_CFDictionaryGetValue(param_2,&cf_FWOverrideKey);
  if (p_Var3 == (__CFString *)0x0) {
    pcVar7 = &cf_FailedtogetFWoverridepathkey;
    iVar9 = 0x3f;
  }
  else {
    iVar1 = _createDataFromFile(p_Var3,&local_38);
    p_Var8 = local_38;
    if (local_38 == (__CFData *)0x0) {
      pcVar7 = &cf_FailedtocreateFWoverridedatafromfile;
      iVar9 = 0xc;
    }
    else {
      uVar4 = _CFGetAllocator(uVar4);
      p_Var6 = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      p_Var5 = (__CFData *)
               _CFDictionaryCreateMutable(uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
      if (p_Var5 == (__CFData *)0x0) {
        pcVar7 = &cf_FailedtocreatemessageDict;
        iVar9 = 0x12;
      }
      else {
        _CFDictionarySetValue(p_Var5,&cf_FWData,p_Var8);
        iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,p_Var5);
        iVar9 = 9;
        if (iVar2 == 0) {
          iVar9 = iVar1;
        }
        _CFRelease(p_Var8);
        pcVar7 = &cf_FailedtohandleFWoverridedatarequest;
        p_Var8 = p_Var5;
      }
      _CFRelease(p_Var8);
    }
  }
  if ((param_3 != (__CFError **)0x0) && (iVar9 != 0)) {
    p_Var6 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)iVar9,(long)pcVar7,(__CFString *)0x0,p_Var6);
    *param_3 = p_Var6;
  }
  return iVar9;
}

