// rea decompile_all
// name: _AMDeviceWakeupOperationCreateWithToken
// address: 0x10d158
// body: available
// range: 0x10d158-0x10d607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10d603 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMDeviceWakeupOperationCreateWithToken(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_3 != 0) {
    lVar2 = _CFGetTypeID(param_3);
    lVar3 = _CFDictionaryGetTypeID();
    if ((lVar2 == lVar3) && (lVar2 = _CFDictionaryGetValue(param_3,&cf_TokenVersionKey), lVar2 != 0)
       ) {
      lVar3 = _CFGetTypeID(lVar2);
      lVar4 = _CFNumberGetTypeID();
      if ((lVar3 == lVar4) && (cVar1 = _CFNumberGetValue(lVar2,4,&local_50), cVar1 == '\x01')) {
        if (5 < local_50) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar2 = 0;
          __os_log_internal(0,_md_log_log,0x10,
                            "Input token has version %lld. This version of MobileDevice only knows about %d"
                            ,local_50,5);
          goto LAB_0010d575;
        }
        uVar6 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        _pthread_once((pthread_once_t *)&_AMDeviceWakeupOperationGetTypeID_registerOnce,
                      __registerWakeupOperationClass);
        lVar2 = 0;
        local_58 = uVar6;
        lVar3 = __CFRuntimeCreateInstance(uVar6,__AMDeviceWakeupOperationTypeID,0x3a8,0);
        if (lVar3 == 0) goto LAB_0010d575;
        ___bzero(lVar3 + 0x10,0x398);
        *(undefined8 *)(lVar3 + 0x3a8) = param_1;
        *(undefined8 *)(lVar3 + 0x3b0) = param_2;
        lVar2 = _CFDictionaryGetValue(param_3,&cf_RemotePairingTokenDataKey);
        if (lVar2 == 0) {
          lVar2 = _CFDictionaryGetValue(param_3,&cf_InterfaceIndexKey);
          if (lVar2 != 0) {
            lVar4 = _CFGetTypeID(lVar2);
            lVar5 = _CFNumberGetTypeID();
            if (((lVar4 == lVar5) &&
                (cVar1 = _CFNumberGetValue(lVar2,4,&local_60), uVar6 = local_58, cVar1 == '\x01'))
               && (local_60 < 0xffffffff)) {
              *(int *)(lVar3 + 0x58) = (int)local_60;
              lVar2 = _CFDictionaryGetValue(param_3,&cf_FullServiceNameKey);
              if (lVar2 != 0) {
                lVar4 = _CFGetTypeID(lVar2);
                lVar5 = _CFStringGetTypeID();
                if (lVar4 == lVar5) {
                  lVar4 = _CFStringFind(lVar2,&cf___apple_mobdev__tcp_,0);
                  if (lVar4 == -1) {
                    lVar4 = 0;
                    lVar5 = _CFStringFind(lVar2,&cf___apple_mobdev2__tcp_,0);
                    if (lVar5 == -1) goto LAB_0010d421;
                    lVar4 = _CFStringCreateArrayBySeparatingStrings
                                      (uVar6,lVar2,&cf___apple_mobdev2__tcp_);
                    if (lVar4 != 0) {
                      pcVar7 = "_apple-mobdev2._tcp";
                      goto LAB_0010d473;
                    }
                  }
                  else {
                    lVar4 = _CFStringCreateArrayBySeparatingStrings
                                      (uVar6,lVar2,&cf___apple_mobdev__tcp_);
                    if (lVar4 != 0) {
                      pcVar7 = "_apple-mobdev._tcp";
LAB_0010d473:
                      *(char **)(lVar3 + 0x60) = pcVar7;
                      lVar2 = _CFArrayGetCount(lVar4);
                      if (lVar2 == 2) {
                        uVar8 = _CFArrayGetCount(lVar4);
                        _CFArrayGetValues(lVar4,0,uVar8,&local_48);
                        lVar5 = _CFStringCreateMutableCopy(uVar6,0,local_40);
                        if (lVar5 != 0) {
                          lVar2 = _CFStringGetLength(lVar5);
                          _CFStringDelete(lVar5,lVar2 + -1,1);
                          _CFStringGetCString(local_48,lVar3 + 0x68,100,0x8000100);
                          _CFStringGetCString(lVar5,lVar3 + 0xcc,100,0x8000100);
                          if (_md_log_onceToken != -1) {
                            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
                          }
                          __os_log_internal(0,_md_log_log,2,
                                            "Created wakeup operation for instance %s; interface %u; domain %s"
                                            ,lVar3 + 0x68,*(undefined4 *)(lVar3 + 0x58),lVar3 + 0xcc
                                           );
                          goto LAB_0010d544;
                        }
                      }
                      goto LAB_0010d421;
                    }
                  }
                }
              }
            }
          }
          lVar4 = 0;
LAB_0010d421:
          _CFRelease(lVar3);
          lVar2 = 0;
          lVar5 = 0;
        }
        else {
          lVar4 = _CFGetTypeID(lVar2);
          lVar5 = _CFDataGetTypeID();
          if (lVar4 != lVar5) {
            if (_md_log_onceToken != -1) {
              _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
            }
            lVar4 = 0;
            __os_log_internal(0,_md_log_log,0x10,
                              "RemotePairing token data is in an unexpected format.");
            goto LAB_0010d421;
          }
          uVar6 = _CFRetain(lVar2);
          *(undefined8 *)(lVar3 + 0x130) = uVar6;
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          lVar5 = 0;
          __os_log_internal(0,_md_log_log,2,
                            "Created wakeup operation with RemotePairing token data.");
          lVar4 = 0;
LAB_0010d544:
          __mutex_init(lVar3 + 0x18);
          *(undefined4 *)(lVar3 + 0x10) = 0x656b6177;
          lVar2 = lVar3;
        }
        if (lVar4 != 0) {
          _CFRelease(lVar4);
        }
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
        goto LAB_0010d575;
      }
    }
  }
  lVar2 = 0;
LAB_0010d575:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar2;
}

