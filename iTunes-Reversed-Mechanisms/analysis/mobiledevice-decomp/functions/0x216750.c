// rea decompile_all
// name: ACFULogging::initLog
// address: 0x216750
// body: available
// range: 0x216750-0x2168f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFULogging::initLog(__CFDictionary const*, void (*)(void*, char const*), void*) */

int __thiscall
ACFULogging::initLog
          (ACFULogging *this,__CFDictionary *param_1,_func_void_void_ptr_char_ptr *param_2,
          void *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint local_48;
  int local_44;
  void *local_40;
  uint local_34;
  
  if (param_1 == (__CFDictionary *)0x0) {
    *(_func_void_void_ptr_char_ptr **)(this + 0x48) = param_2;
    *(void **)(this + 0x50) = param_3;
    local_48 = 2;
  }
  else {
    lVar2 = _CFDictionaryGetValue(param_1,&cf_Options);
    local_34 = 2;
    if (lVar2 != 0) {
      local_40 = param_3;
      lVar3 = _CFDictionaryGetTypeID();
      lVar4 = _CFGetTypeID(lVar2);
      param_3 = local_40;
      if ((lVar3 == lVar4) &&
         (lVar2 = _CFDictionaryGetValue(lVar2,&cf_RestoreInternal), param_3 = local_40, lVar2 != 0))
      {
        lVar3 = _CFGetTypeID(lVar2);
        lVar4 = _CFBooleanGetTypeID();
        param_3 = local_40;
        if (lVar3 == lVar4) {
          cVar1 = _CFBooleanGetValue(lVar2);
          local_34 = cVar1 == '\x01' | 2;
        }
      }
    }
    *(_func_void_void_ptr_char_ptr **)(this + 0x48) = param_2;
    *(void **)(this + 0x50) = param_3;
    ACFUCommon::parseDebugArgs((ACFUCommon *)&local_48,param_1,"logLevel");
    if (local_44 == 0xfa6) {
      getLogInstance();
      handleMessage(&getLogInstance()::inst,3,
                    "%s::%s: Key: %s not found while parsing debugArgs, but this is not error\n",
                    "ACFULogging","initLog","logLevel");
      local_48 = local_34;
    }
    else {
      if (local_44 != 0) {
        getLogInstance();
        handleMessage(&getLogInstance()::inst,0,"%s::%s: Failed to parse debugArgs\n","ACFULogging",
                      "initLog");
        return local_44;
      }
      if (4 < local_48) {
        getLogInstance();
        handleMessage(&getLogInstance()::inst,3,"%s::%s: Unexpected value: %u for Key: %s\n",
                      "ACFULogging","initLog",local_48,"logLevel");
        local_48 = local_34;
      }
    }
  }
  *(uint *)(this + 0x58) = local_48;
  return 0;
}

