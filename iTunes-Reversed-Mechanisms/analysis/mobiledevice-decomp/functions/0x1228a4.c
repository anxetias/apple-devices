// rea decompile_all
// name: _AMDeviceRelayFile
// address: 0x1228a4
// body: available
// range: 0x1228a4-0x122eae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x122d88 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceRelayFile(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  size_t sVar11;
  int *piVar12;
  char *pcVar13;
  size_t sVar14;
  undefined8 uVar15;
  long local_88;
  long local_80;
  char *local_78;
  int local_6c;
  long local_68;
  long local_60;
  void *local_58;
  int local_4c;
  long local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_68 = 0;
  local_60 = 0;
  local_6c = -1;
  local_88 = param_2;
  if (param_3 == 0) {
LAB_001229c0:
    local_4c = -0x17fffff9;
LAB_00122aa8:
    lVar7 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = _CFGetTypeID(param_3);
    lVar6 = _CFDictionaryGetTypeID();
    if (param_2 == 0 || lVar5 != lVar6) {
LAB_00122a99:
      local_4c = -0x17fffff9;
      goto LAB_00122aa8;
    }
    lVar5 = _CFGetTypeID(param_2);
    lVar6 = _CFStringGetTypeID();
    if ((lVar5 != lVar6) || (lVar5 = _CFDictionaryGetValue(param_3,&cf_RelayType), lVar5 == 0))
    goto LAB_00122a99;
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFStringGetTypeID();
    if ((lVar6 != lVar7) || (lVar6 = _CFDictionaryGetValue(param_3,&cf_RelayLocation), lVar6 == 0))
    goto LAB_00122a99;
    cVar3 = _CFEqual(lVar5,&cf_RelayTypeFileDescriptor);
    if (cVar3 == '\0') {
      cVar3 = _CFEqual(lVar5,&cf_RelayTypeData);
      if (cVar3 != '\0') {
        lVar5 = _CFGetTypeID(lVar6);
        lVar7 = _CFDataGetTypeID();
        if (lVar5 == lVar7) goto LAB_00122a01;
      }
      goto LAB_00122a99;
    }
    lVar5 = _CFGetTypeID(lVar6);
    lVar7 = _CFNumberGetTypeID();
    if (lVar5 != lVar7) goto LAB_00122a99;
    cVar3 = _CFNumberGetValue(lVar6,9,&local_6c);
    if (cVar3 == '\0') goto LAB_001229c0;
    lVar6 = 0;
LAB_00122a01:
    uVar15 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar5 = _CFArrayCreate(uVar15,&local_88,1,PTR__kCFTypeArrayCallBacks_004411a8);
    if (lVar5 == 0) {
      local_4c = -0x17fffffd;
      goto LAB_00122aa8;
    }
    local_40 = &cf_Sources;
    local_48 = lVar5;
    lVar7 = _CFDictionaryCreate(uVar15,&local_40,&local_48,1,
                                PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar7 == 0) {
      local_4c = -0x17fffffd;
      lVar7 = 0;
    }
    else {
      lVar8 = _AMDeviceCreateCopy(param_1);
      if (lVar8 != 0) {
        local_4c = _AMDeviceConnect(lVar8);
        if (local_4c != 0) {
          bVar1 = false;
          bVar2 = false;
          goto LAB_00122aae;
        }
        local_4c = _AMDeviceStartSession(lVar8);
        if (local_4c != 0) {
          bVar2 = true;
          bVar1 = false;
          goto LAB_00122aae;
        }
        iVar4 = _AMDeviceSecureStartService(lVar8,&cf_com_apple_mobile_file_relay,0,&local_68);
        if (iVar4 == 0) {
          local_4c = _AMDServiceConnectionSendMessage(local_68,lVar7,100);
          if (local_4c != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar15 = _md_log_log;
            uVar9 = _AMDErrorString(local_4c);
            pcVar13 = "Could not send file relay request: %s";
            goto LAB_00122c53;
          }
          local_80 = lVar6;
          local_4c = _AMDServiceConnectionReceiveMessage(local_68,&local_60,0);
          if (local_4c != 0) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            uVar15 = _md_log_log;
            uVar9 = _AMDErrorString(local_4c);
            pcVar13 = "Could not receive file relay response: %s";
            goto LAB_00122c53;
          }
          local_4c = -0x17ffffed;
          if (local_60 != 0) {
            lVar6 = _CFGetTypeID();
            lVar10 = _CFDictionaryGetTypeID();
            if (lVar6 == lVar10) {
              lVar6 = _CFDictionaryGetValue(local_60,&cf_Error);
              if (lVar6 == 0) {
                lVar6 = _CFDictionaryGetValue(local_60,&cf_Status);
                if (lVar6 == 0) {
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  __os_log_internal(0,_md_log_log,0x10,
                                    "Did not receive an acknowledgement back from the device.\n");
                }
                else {
                  local_58 = _malloc(0x100000);
                  local_78 = "There was an error receiving bytes from file relay: %s\n";
                  do {
                    while (local_4c = _AMDServiceConnectionReceive(local_68,local_58,0x100000),
                          local_4c != -1) {
                      if (local_4c == 0) goto LAB_00122e06;
                      if (local_80 == 0) {
                        sVar14 = (size_t)local_4c;
                        sVar11 = _write(local_6c,local_58,sVar14);
                        if (sVar11 != sVar14) {
                          local_4c = -0x17fffffb;
                          local_78 = "There was an error writing to the handle: %s\n";
                          goto LAB_00122dc8;
                        }
                      }
                      else {
                        _CFDataAppendBytes(local_80,local_58,(long)local_4c);
                      }
                    }
                    piVar12 = ___error();
                  } while (*piVar12 == 0x23);
                  local_4c = -0x17fffffc;
LAB_00122dc8:
                  if (_md_log_onceToken != -1) {
                    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                  }
                  uVar15 = _md_log_log;
                  piVar12 = ___error();
                  pcVar13 = _strerror(*piVar12);
                  __os_log_internal(0,uVar15,0x10,local_78,pcVar13);
LAB_00122e06:
                  if (local_58 != (void *)0x0) {
                    _free(local_58);
                  }
                }
              }
              else {
                if (_md_log_onceToken != -1) {
                  _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                }
                __os_log_internal(0,_md_log_log,0x10,"There was an error talking to file relay: %@",
                                  lVar6);
              }
            }
          }
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar15 = _md_log_log;
          local_4c = iVar4;
          uVar9 = _AMDErrorString(iVar4);
          pcVar13 = "Could not start file relay service: %s";
LAB_00122c53:
          __os_log_internal(0,uVar15,0x10,pcVar13,uVar9);
        }
        bVar1 = true;
        bVar2 = true;
        goto LAB_00122aae;
      }
      local_4c = -0x17fffffd;
    }
  }
  bVar2 = false;
  bVar1 = false;
  lVar8 = 0;
LAB_00122aae:
  if (local_68 != 0) {
    _CFRelease();
  }
  if (bVar1) {
    _AMDeviceStopSession(lVar8);
  }
  if (bVar2) {
    _AMDeviceDisconnect(lVar8);
  }
  iVar4 = local_4c;
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  if (local_60 != 0) {
    _CFRelease();
  }
  if (lVar7 != 0) {
    _CFRelease(lVar7);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

