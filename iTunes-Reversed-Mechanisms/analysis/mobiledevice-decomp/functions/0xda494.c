// rea decompile_all
// name: _handleFWDataRequest
// address: 0xda494
// body: available
// range: 0xda494-0xda5e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleFWDataRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFError**) */

int _handleFWDataRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  __CFString *p_Var5;
  undefined8 uVar6;
  __CFData *p_Var7;
  __CFError *p_Var8;
  __CFError *in_RCX;
  __CFData *p_Var9;
  cfstringStruct *pcVar10;
  __CFData *local_40;
  int local_34;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  local_40 = (__CFData *)0x0;
  _AMRLog(3,&cf_Entering_handleFWDataRequest);
  lVar4 = _CFDictionaryGetValue(param_2,&cf_FWOverrideKey);
  iVar2 = 0x3f;
  if (lVar4 == 0) {
    pcVar10 = &cf_failedtogetFWoverridepathkey;
  }
  else {
    p_Var5 = (__CFString *)_CFDictionaryGetValue(*(undefined8 *)(lVar1 + 0x18),lVar4);
    if (p_Var5 == (__CFString *)0x0) {
      pcVar10 = &cf_failedtocreateFWoverridepath;
    }
    else {
      iVar2 = _createDataFromFile(p_Var5,&local_40);
      p_Var9 = local_40;
      if (local_40 == (__CFData *)0x0) {
        pcVar10 = &cf_failedtocreateFWdatafromfile;
        iVar2 = 0xc;
      }
      else {
        local_34 = iVar2;
        uVar6 = _CFGetAllocator(uVar6);
        in_RCX = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
        p_Var7 = (__CFData *)
                 _CFDictionaryCreateMutable(uVar6,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
        if (p_Var7 == (__CFData *)0x0) {
          pcVar10 = &cf_failedtocreatemessageDict;
          iVar2 = 0x12;
        }
        else {
          _CFDictionarySetValue(p_Var7,&cf_FWData,p_Var9);
          iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,p_Var7);
          iVar2 = 9;
          if (iVar3 == 0) {
            iVar2 = local_34;
          }
          _CFRelease(p_Var9);
          pcVar10 = &cf_FailedtohandleFWdatarequest;
          p_Var9 = p_Var7;
        }
        _CFRelease(p_Var9);
      }
    }
  }
  if ((param_3 != (__CFError **)0x0) && (iVar2 != 0)) {
    p_Var8 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)iVar2,(long)pcVar10,(__CFString *)0x0,in_RCX);
    *param_3 = p_Var8;
  }
  return iVar2;
}

