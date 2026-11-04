// rea decompile_all
// name: _AMDeviceStartHouseArrestService
// address: 0x152aa9
// body: available
// range: 0x152aa9-0x152fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceStartHouseArrestService
              (undefined8 param_1,undefined8 param_2,long param_3,undefined4 *param_4,
              undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  cfstringStruct *pcVar11;
  long lVar12;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar4 = _CFDictionaryCreateMutable
                    (uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar4 == 0) {
    iVar2 = -0x17fffffd;
    goto LAB_00152efd;
  }
  _CFDictionarySetValue(lVar4,&cf_CloseOnInvalidate,*(undefined8 *)PTR__kCFBooleanFalse_00441108);
  _CFDictionarySetValue(lVar4,&cf_UnlockEscrowBag,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
  iVar2 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobile_house_arrest,lVar4,&local_40);
  if (iVar2 == 0) {
    lVar12 = 0;
    lVar5 = _CFDictionaryCreateMutable(uVar10,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
    if (lVar5 == 0) {
      iVar2 = -0x17fffffd;
      lVar5 = 0;
    }
    else {
      if (param_3 == 0) {
        pcVar6 = (cfstringStruct *)0x0;
      }
      else {
        pcVar6 = (cfstringStruct *)_CFDictionaryGetValue(param_3,&cf_Command);
      }
      pcVar11 = &cf_VendContainer;
      if (pcVar6 != (cfstringStruct *)0x0) {
        pcVar11 = pcVar6;
      }
      _CFDictionarySetValue(lVar5,&cf_Command,pcVar11);
      _CFDictionarySetValue(lVar5,&cf_Identifier,param_2);
      iVar2 = _AMDServiceConnectionSendMessage(local_40,lVar5,100);
      if (iVar2 != 0) goto LAB_00152ebc;
      lVar12 = 0;
      iVar2 = _AMDServiceConnectionReceiveMessage(local_40,&local_38,0);
      if (iVar2 == 0) {
        if (local_38 == 0) {
          iVar2 = 0;
          lVar12 = 0;
        }
        else {
          lVar7 = _CFGetTypeID();
          lVar8 = _CFDictionaryGetTypeID();
          lVar12 = local_38;
          iVar2 = 0;
          if (lVar7 != lVar8) goto LAB_00152ebc;
          local_38 = 0;
          lVar7 = _CFDictionaryGetValue(lVar12,&cf_Error);
          if (lVar7 == 0) {
            lVar7 = _CFDictionaryGetValue(lVar12,&cf_Status);
            if (lVar7 == 0) {
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar9 = "Could not get status";
            }
            else {
              cVar1 = _CFEqual(lVar7,&cf_Complete);
              if (cVar1 != '\0') {
                if (param_5 != (undefined8 *)0x0) {
                  if (local_40 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = *(undefined8 *)(local_40 + 0x18);
                  }
                  *param_5 = uVar10;
                }
                if (local_40 == 0) {
                  uVar3 = 0xffffffff;
                }
                else {
                  uVar3 = *(undefined4 *)(local_40 + 0x10);
                }
                *param_4 = uVar3;
                goto LAB_00152ebf;
              }
              if (_md_log_onceToken != -1) {
                _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
              }
              pcVar9 = "Invalid status";
            }
            __os_log_internal(0,_md_log_log,0x10,pcVar9);
            iVar2 = -0x17ffffed;
          }
          else {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            __os_log_internal(0,_md_log_log,0x10,"There was an error from the device: %@",lVar7);
            cVar1 = _CFEqual(lVar7,&cf_MissingCommand);
            iVar2 = -0x17ffff4d;
            if (cVar1 == '\0') {
              cVar1 = _CFEqual(lVar7,&cf_UnknownCommand);
              iVar2 = -0x17ffff4c;
              if (cVar1 == '\0') {
                cVar1 = _CFEqual(lVar7,&cf_MissingIdentifier);
                iVar2 = -0x17ffff4b;
                if (cVar1 == '\0') {
                  cVar1 = _CFEqual(lVar7,&cf_DictionaryFailed);
                  iVar2 = -0x17ffff4a;
                  if (cVar1 == '\0') {
                    cVar1 = _CFEqual(lVar7,&cf_InstallationLookupFailed);
                    iVar2 = -0x17ffff49;
                    if (cVar1 == '\0') {
                      cVar1 = _CFEqual(lVar7,&cf_ApplicationLookupFailed);
                      iVar2 = -0x17ffff48;
                      if (cVar1 == '\0') {
                        cVar1 = _CFEqual(lVar7,&cf_MissingContainer);
                        iVar2 = -0x17ffff47;
                        if (cVar1 == '\0') {
                          cVar1 = _CFEqual(lVar7,&cf_PathConversionFailed);
                          iVar2 = -0x17ffff45;
                          if (cVar1 == '\0') {
                            cVar1 = _CFEqual(lVar7,&cf_PathMissing);
                            iVar2 = -0x17ffff44;
                            if (cVar1 == '\0') {
                              cVar1 = _CFEqual(lVar7,&cf_InvalidPath);
                              iVar2 = -0x17ffff43;
                              if (cVar1 == '\0') {
                                iVar2 = __AddNewAMDError(lVar7);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    lVar5 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Could not start house arrest service: 0x%x",iVar2);
LAB_00152ebc:
    lVar12 = 0;
  }
LAB_00152ebf:
  _CFRelease(lVar4);
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar12 != 0) {
    _CFRelease(lVar12);
  }
LAB_00152efd:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"returned %x for app with ID %@",iVar2,param_2);
  return iVar2;
}

