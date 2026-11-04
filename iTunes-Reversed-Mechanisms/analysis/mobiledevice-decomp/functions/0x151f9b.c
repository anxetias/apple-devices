// rea decompile_all
// name: _fire_transfer_callback
// address: 0x151f9b
// body: available
// range: 0x151f9b-0x1523ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fire_transfer_callback(code *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 != 0 && param_1 != (code *)0x0) {
    uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFDictionaryCreateMutable
                      (uVar1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar2 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"Could not create the status dictionary");
    }
    else {
      _CFDictionarySetValue(lVar2,&cf_Status,&cf_CopyingFile);
      lVar3 = _CFNumberCreate(uVar1,4,param_3);
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not create total files number");
      }
      else {
        _CFDictionarySetValue(lVar2,&cf_TotalFiles,lVar3);
        _CFRelease(lVar3);
      }
      lVar3 = _CFNumberCreate(uVar1,4);
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not create total bytes number");
      }
      else {
        _CFDictionarySetValue(lVar2,&cf_TotalBytes,lVar3);
        _CFRelease(lVar3);
      }
      lVar3 = _CFNumberCreate(uVar1,4,param_3 + 0x10);
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not create num files number");
      }
      else {
        _CFDictionarySetValue(lVar2,&cf_NumFiles,lVar3);
        _CFRelease(lVar3);
      }
      lVar3 = _CFNumberCreate(uVar1,4);
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not create num bytes number");
      }
      else {
        _CFDictionarySetValue(lVar2,&cf_NumBytes,lVar3);
        _CFRelease(lVar3);
      }
      lVar3 = _CFStringCreateWithCString(uVar1,param_4,0x8000100);
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not create path string");
      }
      else {
        _CFDictionarySetValue(lVar2,&cf_Path,lVar3);
        _CFRelease(lVar3);
      }
      lVar3 = _CFNumberCreate(uVar1,9);
      if (lVar3 == 0) {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        __os_log_internal(0,_md_log_log,1,"Could not create percent complete");
      }
      else {
        _CFDictionarySetValue(lVar2,&cf_PercentComplete,lVar3);
        _CFRelease(lVar3);
      }
      (*param_1)(lVar2,param_2);
    }
  }
  return;
}

