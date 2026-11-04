// rea decompile_all
// name: _copy_lockdown_valuecu
// address: 0x175ee4
// body: available
// range: 0x175ee4-0x1760ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _copy_lockdown_valuecu(long param_1,long param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long local_38;
  
  local_38 = 0;
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  lVar4 = 0;
  __os_log_internal(0,_md_log_log,1,"copy_lockdown_valuecu");
  if (*(long *)(param_1 + 0x38) == 0) {
    iVar1 = -0x17fffff5;
    goto LAB_00176055;
  }
  lVar2 = __CreateMessageDict_5150(&cf_GetValueCU);
  if (lVar2 == 0) {
    iVar1 = -0x17fffffd;
    lVar4 = 0;
    goto LAB_00176055;
  }
  lVar4 = 0;
  lVar3 = _CFDictionaryCreateMutable
                    (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    iVar1 = -0x17fffffd;
  }
  else {
    if (param_2 != 0) {
      _CFDictionarySetValue(lVar3,&cf_Key,param_2);
    }
    iVar1 = _doCryptoSendReceive(param_1,lVar2,lVar3,&local_38);
    if (iVar1 == 0) {
      if (local_38 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar5 = "NULL response from doCryptoSendReceive";
      }
      else {
        lVar4 = _CFDictionaryGetValue(local_38,&cf_Value);
        if (lVar4 != 0) {
          _CFRetain(lVar4);
          iVar1 = 0;
          goto LAB_00176041;
        }
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        pcVar5 = "No value in response from doCryptoSendReceive";
      }
      lVar4 = 0;
      __os_log_internal(0,_md_log_log,0x10,pcVar5);
      iVar1 = -0x17ffffee;
    }
    else {
      lVar4 = 0;
    }
LAB_00176041:
    _CFRelease(lVar3);
  }
  _CFRelease(lVar2);
LAB_00176055:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar1;
  }
  return lVar4;
}

