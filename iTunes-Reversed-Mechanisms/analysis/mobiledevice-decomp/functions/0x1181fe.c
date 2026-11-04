// rea decompile_all
// name: _copy_image_digest
// address: 0x1181fe
// body: available
// range: 0x1181fe-0x1185e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _copy_image_digest(long param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0 || param_3 == (long *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Invalid input(s).");
    return -0x17fffff9;
  }
  *param_3 = 0;
  lVar3 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create dictionary.");
    return -0x17fffffd;
  }
  _CFDictionarySetValue(lVar3,&cf_Command,&cf_LookupImage);
  _CFDictionarySetValue(lVar3,&cf_ImageType,param_2);
  iVar2 = _AMDServiceConnectionSendMessage(param_1,lVar3,100);
  if (iVar2 == 0) {
    iVar2 = _AMDServiceConnectionReceiveMessage(param_1,&local_38,0);
    if (iVar2 == 0) {
      if (local_38 != 0) {
        lVar5 = _CFGetTypeID();
        lVar6 = _CFDictionaryGetTypeID();
        if (lVar5 == lVar6) {
          lVar5 = _CFDictionaryGetValue(local_38,&cf_Error);
          if (lVar5 == 0) {
            lVar5 = _CFDictionaryGetValue(local_38,&cf_ImagePresent);
            iVar2 = 0;
            if ((lVar5 != 0) &&
               (cVar1 = _CFEqual(lVar5,*(undefined8 *)PTR__kCFBooleanTrue_00441110), cVar1 != '\0'))
            {
              lVar5 = _CFDictionaryGetValue(local_38,&cf_ImageSignature);
              if (lVar5 != 0) {
                lVar6 = _CFGetTypeID(lVar5);
                lVar8 = _CFDataGetTypeID();
                if (lVar6 == lVar8) {
                  _CFRetain(lVar5);
                  *param_3 = lVar5;
                  iVar2 = 0;
                  goto LAB_0011839c;
                }
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              __os_log_internal(0,_md_log_log,0x10,"Invalid value for %@.",&cf_ImageSignature);
              iVar2 = -0x17ffffcc;
            }
          }
          else {
            uVar7 = _CFDictionaryGetValue(local_38,&cf_DetailedError);
            iVar2 = _MobileDevelopmentConvertError(lVar5);
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"An error occurred while sending message: %@ (%@)",
                              lVar5,uVar7);
          }
          goto LAB_0011839c;
        }
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Invalid response message.");
      iVar2 = -0x17fffffc;
      goto LAB_0011839c;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar7 = _md_log_log;
    uVar4 = _AMDErrorString(iVar2);
    pcVar9 = "Failed to receive message: 0x%08x (%s)";
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar7 = _md_log_log;
    uVar4 = _AMDErrorString(iVar2);
    pcVar9 = "Failed to send message: 0x%08x (%s)";
  }
  __os_log_internal(0,uVar7,0x10,pcVar9,iVar2,uVar4);
LAB_0011839c:
  _CFRelease(lVar3);
  if (local_38 != 0) {
    _CFRelease();
  }
  return iVar2;
}

