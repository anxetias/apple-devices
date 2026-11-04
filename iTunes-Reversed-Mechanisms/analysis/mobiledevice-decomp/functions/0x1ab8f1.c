// rea decompile_all
// name: _AMAuthInstallHttpMessageSendSyncNew
// address: 0x1ab8f1
// body: available
// range: 0x1ab8f1-0x1abab1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallHttpMessageSendSyncNew
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
          undefined4 *param_5,long param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  local_40 = 0xffffffffffffffff;
  local_50 = param_1;
  if (param_6 == 0) {
    lVar3 = _CFDictionaryCreateMutable
                      (param_2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  }
  else {
    uVar2 = _CFDictionaryGetCount(param_6);
    lVar3 = _CFDictionaryCreateMutableCopy(param_2,uVar2,param_6);
    cVar1 = _CFDictionaryContainsKey(lVar3,&cf_SocksProxySettings);
    if (cVar1 != '\0') {
      _AMAuthInstallLog(7,"AMAuthInstallHttpMessageSendSyncNew",
                        "Options dictionary contains proxy information. Will attempt to use a proxy."
                       );
    }
    cVar1 = _CFDictionaryContainsKey(lVar3,&cf_TrustedServerCAs);
    if (cVar1 != '\0') {
      _AMAuthInstallLog(7,"AMAuthInstallHttpMessageSendSyncNew",
                        "Options dictionary contains trusted server CAs. Will authenticate SSL against CAs."
                       );
    }
  }
  if (lVar3 == 0) {
    _AMAuthInstallHttpMessageSendSyncNew_cold_3();
  }
  else {
    lVar4 = _CFNumberCreate(param_2,0xd,&local_50);
    if (lVar4 != 0) {
      _CFDictionarySetValue(lVar3,&cf_Timeout,lVar4);
      _AMSupportHttpSendSync(param_3,lVar3,&local_38,0,&local_40,&local_48);
      if (local_48 == 0) {
        if (local_38 != 0) {
          if (param_4 != (undefined8 *)0x0) {
            uVar2 = _CFRetain();
            *param_4 = uVar2;
          }
          uVar2 = 0;
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = (undefined4)local_40;
          }
          goto LAB_001aba47;
        }
        _AMAuthInstallHttpMessageSendSyncNew_cold_1();
      }
      else {
        _AMAuthInstallLog(3,"AMAuthInstallHttpMessageSendSyncNew",
                          "HTTP request failed with error %@");
      }
      uVar2 = 0x10;
      goto LAB_001aba47;
    }
    _AMAuthInstallHttpMessageSendSyncNew_cold_2();
  }
  uVar2 = 2;
  lVar4 = 0;
LAB_001aba47:
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeRelease(lVar3);
  _AMSupportSafeRelease(lVar4);
  return uVar2;
}

