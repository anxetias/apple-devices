// rea decompile_all
// name: __AddNewAMDError
// address: 0x14516c
// body: available
// range: 0x14516c-0x1452bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AddNewAMDError(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int local_24;
  
  local_24 = -0x17ffff94;
  if (param_1 == 0) {
    return -0x17ffff94;
  }
  __InitializeError();
  if (_gExtraErrorInfo == 0) {
    return -0x17ffff94;
  }
  _pthread_mutex_lock((pthread_mutex_t *)&_gExtraErrorInfoLock);
  lVar3 = _CFDictionaryGetValue(_gExtraErrorInfo,param_1);
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFNumberGetTypeID();
    if (lVar4 == lVar5) {
      _CFNumberGetValue(lVar3,9,&local_24);
      goto LAB_0014528d;
    }
  }
  iVar2 = __AddNewAMDError_nextError + -1;
  bVar1 = -0x17fffed8 < __AddNewAMDError_nextError;
  __AddNewAMDError_nextError = iVar2;
  if ((bVar1) &&
     (lVar3 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0xb), lVar3 != 0)) {
    _CFDictionarySetValue(_gExtraErrorInfo,param_1,lVar3);
    iVar2 = __AddNewAMDError_nextError;
    local_24 = __AddNewAMDError_nextError;
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "Dynamically allocated AMDError 0x%x corresponds to unknown error message \'%@\'."
                      ,iVar2,param_1);
    _CFRelease(lVar3);
  }
LAB_0014528d:
  _pthread_mutex_unlock((pthread_mutex_t *)&_gExtraErrorInfoLock);
  return local_24;
}

