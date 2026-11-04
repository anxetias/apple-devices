// rea decompile_all
// name: __IsOrderedEarly
// address: 0xaad9c
// body: available
// range: 0xaad9c-0xaaeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __IsOrderedEarly(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = _CFStringCreateWithFileSystemRepresentation
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_1);
    uVar4 = _CFArrayGetCount(param_2);
    uVar5 = 0;
    cVar1 = _CFArrayContainsValue(param_2,0,uVar4,uVar3);
    _CFRelease(uVar3);
    if (cVar1 != '\0') {
      bVar6 = _gSZLogToSyslog ^ 1;
      if (_gSZLogToSyslog == 1) {
        iVar2 = ___isPlatformVersionAtLeast(1,10,0xc,0);
        if (iVar2 == 0) {
          bVar6 = 1;
        }
        else {
          if (_SZGetLoggingHandle_onceToken != -1) {
            _dispatch_once(&_SZGetLoggingHandle_onceToken,&___block_literal_global);
          }
          __os_log_internal(0,_SZGetLoggingHandle_logHandle,2,"Path %s was ordered early",param_1);
        }
      }
      uVar5 = 1;
      if ((bVar6 != 0) && (6 < _gSZDefaultLogLevel)) {
        __SZLog(7,"_IsOrderedEarly",0x43,&cf_Path_swasorderedearly,param_1);
      }
    }
  }
  return uVar5;
}

