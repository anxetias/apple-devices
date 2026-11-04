// rea decompile_all
// name: _handleStockholmPostFlightDataRequest
// address: 0xda324
// body: available
// range: 0xda324-0xda493 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleStockholmPostFlightDataRequest(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleStockholmPostFlightDataRequest(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  int iVar1;
  int iVar2;
  __CFString *p_Var3;
  long lVar4;
  undefined8 uVar5;
  __CFData *p_Var6;
  __CFError *p_Var7;
  __CFError *in_RCX;
  __CFData *p_Var8;
  cfstringStruct *pcVar9;
  __CFData *local_40;
  __CFError **local_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  local_40 = (__CFData *)0x0;
  _AMRLog(3,&cf_Enterning_s,"_handleStockholmPostFlightDataRequest");
  p_Var3 = (__CFString *)
           _CFDictionaryGetValue(*(undefined8 *)(lVar4 + 0x18),&cf_StockholmPostflightScript);
  if (p_Var3 == (__CFString *)0x0) {
    return 0;
  }
  iVar1 = _createDataFromFile(p_Var3,&local_40);
  p_Var8 = local_40;
  if (local_40 == (__CFData *)0x0) {
    pcVar9 = &cf_failedtocreatestockholmpostflightfiledata;
  }
  else {
    local_38 = param_2;
    lVar4 = _CFURLCopyLastPathComponent(0);
    if (lVar4 == 0) {
      pcVar9 = &cf_failedtocreatefilenamestring;
      iVar1 = 10;
    }
    else {
      uVar5 = _CFGetAllocator(uVar5);
      in_RCX = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      p_Var6 = (__CFData *)
               _CFDictionaryCreateMutable(uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
      if (p_Var6 == (__CFData *)0x0) {
        iVar1 = 0x12;
        pcVar9 = &cf_failedtocreatemessageDict;
      }
      else {
        _CFDictionarySetValue(p_Var6,&cf_StockholmScript,p_Var8);
        _CFDictionarySetValue(p_Var6,&cf_StockholmScriptFilename,lVar4);
        iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,p_Var6);
        if (iVar2 != 0) {
          iVar1 = 9;
        }
        pcVar9 = &cf_Failedtohandlestockholmscriptdatarequest;
      }
      _CFRelease(p_Var8);
      _CFRelease(lVar4);
      p_Var8 = p_Var6;
      param_2 = local_38;
      if (p_Var6 == (__CFData *)0x0) goto LAB_000da467;
    }
    param_2 = local_38;
    _CFRelease(p_Var8);
  }
LAB_000da467:
  if ((param_2 != (__CFError **)0x0) && (iVar1 != 0)) {
    p_Var7 = (__CFError *)
             _AMRCreateErrorWithUnderlyingError
                       ((__CFString *)(long)iVar1,(long)pcVar9,(__CFString *)0x0,in_RCX);
    *param_2 = p_Var7;
  }
  return iVar1;
}

