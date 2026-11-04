// rea decompile_all
// name: __AMRestoreInitGlobalData
// address: 0x156c10
// body: available
// range: 0x156c10-0x15778f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x15777f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestoreInitGlobalData(void)

{
  undefined *puVar1;
  void *pvVar2;
  dispatch_queue_t pdVar3;
  long lVar4;
  dispatch_semaphore_t pdVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  cfstringStruct *pcVar12;
  long lVar13;
  undefined8 unaff_R14;
  ulong uVar14;
  long local_2f0;
  undefined1 local_2e8 [656];
  cfstringStruct *local_58;
  cfstringStruct *pcStack_50;
  cfstringStruct *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (__initSemaphoreOnce != -1) {
    _dispatch_once_f(&__initSemaphoreOnce,(void *)0x0,___thr_AMRestoreInitStartupLock);
  }
  _dispatch_semaphore_wait(__initSemaphore,0xffffffffffffffff);
  uVar14 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (_gRestorableData != (void *)0x0) goto LAB_00157546;
  _gRestorableData = _calloc(1,0xc0);
  if (_gRestorableData == (void *)0x0) {
    pcVar12 = &cf_Failedtoinitilizerestorableglobaldata_;
    goto LAB_00157742;
  }
  uVar14 = 0;
  pdVar3 = _dispatch_queue_create
                     ("com.apple.mobiledevice.restore.events",(dispatch_queue_attr_t)0x0);
  *(dispatch_queue_t *)((long)_gRestorableData + 0x18) = pdVar3;
  if (pdVar3 == (dispatch_queue_t)0x0) {
    pcVar12 = &cf_Failedtocreatedispatchqueuefordeviceevents;
  }
  else {
    uVar14 = 0;
    _dispatch_queue_set_specific
              (pdVar3,__AMRestorableRunningOnEventQueue,*(void **)PTR__kCFBooleanTrue_00441110,
               (dispatch_function_t)0x0);
    uVar11 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = _CFArrayCreateMutable(uVar11,1,PTR__kCFTypeArrayCallBacks_004411a8);
    pvVar2 = _gRestorableData;
    *(long *)((long)_gRestorableData + 0x30) = lVar4;
    if (lVar4 == 0) {
      pcVar12 = &cf_Failedtocreatearrayforrestorablelisteners_;
    }
    else {
      *(undefined4 *)((long)pvVar2 + 0x60) = 1;
      lVar4 = _CFDictionaryCreateMutable
                        (uVar11,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      *(long *)((long)_gRestorableData + 0x50) = lVar4;
      if (lVar4 == 0) {
        pcVar12 = &cf_Failedtocreatedictionaryforper_devicelogtracking;
      }
      else {
        lVar4 = _CFDictionaryCreateMutable
                          (uVar11,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        *(long *)((long)_gRestorableData + 0x38) = lVar4;
        if (lVar4 == 0) {
          pcVar12 = &cf_Failedtocreatedictionaryfordevices;
        }
        else {
          lVar4 = _CFDictionaryCreateMutable
                            (uVar11,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          *(long *)((long)_gRestorableData + 0x40) = lVar4;
          if (lVar4 == 0) {
            pcVar12 = &cf_FailedtocreatedictionaryforPortDFUdevices;
          }
          else {
            lVar4 = _CFDictionaryCreateMutable
                              (uVar11,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            *(long *)((long)_gRestorableData + 0x48) = lVar4;
            if (lVar4 == 0) {
              pcVar12 = &cf_FailedtocreatedictionaryforPortDFUECID;
            }
            else {
              lVar4 = _CFDictionaryCreateMutable
                                (uVar11,10,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              *(long *)((long)_gRestorableData + 0x58) = lVar4;
              if (lVar4 == 0) {
                pcVar12 = &cf_Failedtocreatedictionaryformuxmappings;
              }
              else {
                pdVar5 = _dispatch_semaphore_create(1);
                *(dispatch_semaphore_t *)((long)_gRestorableData + 0x20) = pdVar5;
                if (pdVar5 == (dispatch_semaphore_t)0x0) {
                  pcVar12 = &cf_Failedtocreatelockforglobaldata;
                }
                else {
                  pdVar5 = _dispatch_semaphore_create(1);
                  *(dispatch_semaphore_t *)((long)_gRestorableData + 0x28) = pdVar5;
                  if (pdVar5 == (dispatch_semaphore_t)0x0) {
                    pcVar12 = &cf_Failedtocreateeventdeliverylock;
                  }
                  else {
                    uVar14 = 0;
                    lVar4 = _CFArrayCreateMutable(uVar11,0,PTR__kCFTypeArrayCallBacks_004411a8);
                    *(long *)((long)_gRestorableData + 0xb0) = lVar4;
                    if (lVar4 == 0) {
                      pcVar12 = &cf_Failedtoallocatearrayforpendingrestores;
                      goto LAB_001573e5;
                    }
                    local_2f0 = 0;
                    lVar4 = _CFDataCreateWithBytesNoCopy
                                      (uVar11,&___device_map,0x38b3,
                                       *(undefined8 *)PTR__kCFAllocatorNull_004410f8);
                    lVar6 = _CFPropertyListCreateWithData(uVar11,lVar4,0,0,&local_2f0);
                    if (lVar6 == 0) {
                      _AMRSafePrintLog(3,&
                                         cf_Couldn_tloadourprivatedevicemap_Deviceidentificationwillbelimited___
                                       ,local_2f0);
                      local_48 = &cf_ProductType;
                      local_58 = &cf_BoardID;
                      pcStack_50 = &cf_ChipID;
                      _memcpy(local_2e8,&DAT_00449d40,0x288);
                      _AMRSafePrintLog(3,&
                                         cf_DeviceMapargumentisempty_Skippingappendingofdeprecateddevices_
                                      );
                      *(undefined8 *)((long)_gRestorableData + 0xb8) = 0;
                    }
                    else {
                      local_48 = &cf_ProductType;
                      local_58 = &cf_BoardID;
                      pcStack_50 = &cf_ChipID;
                      _memcpy(local_2e8,&DAT_00449d40,0x288);
                      lVar13 = 0;
                      uVar7 = _CFArrayCreateMutableCopy(0,0,lVar6);
                      puVar1 = PTR__kCFTypeDictionaryValueCallBacks_004411b8;
                      do {
                        uVar8 = _CFDictionaryCreate(uVar11,&local_58,local_2e8 + lVar13,3,
                                                    PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                                    puVar1);
                        _CFArrayAppendValue(uVar7,uVar8);
                        _CFRelease(uVar8);
                        lVar13 = lVar13 + 0x18;
                      } while (lVar13 != 0x288);
                      uVar8 = _CFArrayCreateCopy(0,uVar7);
                      _CFRelease(uVar7);
                      *(undefined8 *)((long)_gRestorableData + 0xb8) = uVar8;
                      _CFRelease(lVar6);
                    }
                    if (lVar4 != 0) {
                      _CFRelease(lVar4);
                    }
                    if (local_2f0 != 0) {
                      _CFRelease();
                    }
                    if (___AMRestoreAllocateAndInitGlobalData_cfTypesRegistered == '\0') {
                      __AMRestorableDeviceTypeID =
                           __CFRuntimeRegisterClass(&__AMRegisterCustomCFTypes_deviceClass);
                      if (__AMRestorableDeviceTypeID == 0) {
                        pcVar12 = &cf_FailedtoregisterAMRestorableDevicewithCFRuntime;
                      }
                      else {
                        __AMRestorableClientTypeID =
                             __CFRuntimeRegisterClass(&__AMRegisterCustomCFTypes_clientClass);
                        if (__AMRestorableClientTypeID == 0) {
                          pcVar12 = &cf_Failedtoregister_AMRestorableClientwithCFRuntime;
                        }
                        else {
                          __AMRestorableAPIChangesClientTypeID =
                               __CFRuntimeRegisterClass
                                         (&__AMRegisterCustomCFTypes_apiChangesClientClass);
                          if (__AMRestorableAPIChangesClientTypeID == 0) {
                            pcVar12 = &cf_Failedtoregister_AMRestorableAPIChangesClientwithCFRuntime
                            ;
                          }
                          else {
                            __AMRestorableEventDataTypeID =
                                 __CFRuntimeRegisterClass(&__AMRegisterCustomCFTypes_eventClass);
                            if (__AMRestorableEventDataTypeID != 0) {
                              lVar4 = __CFRuntimeRegisterClass
                                                (&__AMRegisterCustomCFTypes_personalizedClass);
                              uVar14 = 0;
                              pcVar12 = (cfstringStruct *)0x0;
                              if (lVar4 == 0) {
                                pcVar12 = &cf_Failedtoregister_AMRestorablePersonalizedwithCFRuntime
                                ;
                              }
                              __AMRestorablePersonalizedTypeID = lVar4;
                              _AMRSafePrintLogAndRelease(3,pcVar12);
                              ___AMRestoreAllocateAndInitGlobalData_cfTypesRegistered = lVar4 != 0;
                              if (lVar4 == 0) {
                                pcVar12 = &cf_FailedtoregistercustomtypeswithCFruntime;
                                goto LAB_001573e5;
                              }
                              goto LAB_001570e5;
                            }
                            pcVar12 = &cf_Failedtoregister_AMRestorableEventDatawithCFRuntime;
                          }
                        }
                      }
                      _AMRSafePrintLogAndRelease(3,pcVar12);
                      ___AMRestoreAllocateAndInitGlobalData_cfTypesRegistered = '\0';
                      pcVar12 = &cf_FailedtoregistercustomtypeswithCFruntime;
                      goto LAB_00157742;
                    }
                    _AMRSafePrintLog(6,&cf_SkippingCFTyperegistrationbecausewe_vealreadyregistered_)
                    ;
LAB_001570e5:
                    puVar9 = __gHostLogManager;
                    if (__gHostLogManager == (undefined8 *)0x0) {
                      puVar9 = _malloc(0x20);
                      if (puVar9 == (undefined8 *)0x0) {
                        pcVar12 = &cf_Failedtoallocate_AMRHostLogManagerCreate;
                      }
                      else {
                        puVar9[2] = 0;
                        puVar9[3] = 0;
                        *puVar9 = 0;
                        puVar9[1] = 0;
                        lVar4 = _CFDictionaryCreateMutable
                                          (uVar11,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                        puVar9[1] = lVar4;
                        if (lVar4 == 0) {
                          pcVar12 = &cf_Failedtocreatethreadmappingdictionary;
                        }
                        else {
                          lVar4 = _CFDictionaryCreateMutable
                                            (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                          puVar9[2] = lVar4;
                          if (lVar4 != 0) {
                            puVar9[3] = __AMRestorableDeviceLogCallbackHandler;
                            pdVar5 = _dispatch_semaphore_create(1);
                            *puVar9 = pdVar5;
                            __gHostLogManager = puVar9;
                            _AMRLogSetCallbackHandler(__handleLogEvent);
                            goto LAB_0015718d;
                          }
                          pcVar12 = &cf_Failedtoallocatenewlinetrackingdict;
                        }
                        _free(puVar9);
                      }
                      puVar9 = (undefined8 *)0x0;
                    }
                    else {
LAB_0015718d:
                      pcVar12 = (cfstringStruct *)0x0;
                    }
                    _AMRSafePrintLogAndRelease(3,pcVar12);
                    *(undefined8 **)((long)_gRestorableData + 0x78) = puVar9;
                    if (puVar9 == (undefined8 *)0x0) {
                      pcVar12 = &cf_Failedtocreatehostlogmanager;
                    }
                    else {
                      puVar9 = _malloc(0x18);
                      *puVar9 = 0;
                      puVar9[1] = 0;
                      puVar9[2] = 0;
                      lVar4 = _CFDictionaryCreateMutable
                                        (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,0);
                      puVar9[1] = lVar4;
                      if (lVar4 == 0) {
LAB_00157685:
                        _free(puVar9);
                        puVar9 = (undefined8 *)0x0;
                      }
                      else {
                        pdVar5 = _dispatch_semaphore_create(1);
                        *puVar9 = pdVar5;
                        if (pdVar5 == (dispatch_semaphore_t)0x0) {
                          _CFRelease(lVar4);
                          goto LAB_00157685;
                        }
                        puVar9[2] = __AMRestorableDeviceLogCallbackHandler;
                      }
                      _AMRSafePrintLogAndRelease(3);
                      *(undefined8 **)((long)_gRestorableData + 0x80) = puVar9;
                      if (puVar9 != (undefined8 *)0x0) {
                        plVar10 = _malloc(0x18);
                        if (plVar10 == (long *)0x0) {
                          _AMRSafePrintLogAndRelease(3,&cf_Failedtoallocate_AMRDeviceLogManager);
LAB_001576f4:
                          plVar10 = (long *)0x0;
                        }
                        else {
                          plVar10[2] = 0;
                          plVar10[1] = (long)__AMRestorableDeviceLogCallbackHandler;
                          lVar4 = _CFDictionaryCreateMutable
                                            (uVar11,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                          *plVar10 = lVar4;
                          if (lVar4 == 0) {
                            _AMRSafePrintLogAndRelease(3,&cf_FailedtoallocateecidToContext);
LAB_001576ec:
                            _free(plVar10);
                            goto LAB_001576f4;
                          }
                          pdVar3 = _dispatch_queue_create
                                             ("com.apple.MobileDevice.MobileRestore.deviceLogManager"
                                              ,(dispatch_queue_attr_t)0x0);
                          plVar10[2] = (long)pdVar3;
                          if (pdVar3 == (dispatch_queue_t)0x0) {
                            _AMRSafePrintLogAndRelease(3,&cf_Failedtocreateprocessingqueue);
                            _CFRelease(lVar4);
                            goto LAB_001576ec;
                          }
                          if (__AMRDeviceLogContextRefTypeID == 0) {
                            __AMRDeviceLogContextRefTypeID =
                                 __CFRuntimeRegisterClass(&__AMRDeviceLogManagerCreate_contextClass)
                            ;
                          }
                          else {
                            _AMRSafePrintLog(6,&
                                               cf_Skipping_AMRDeviceLogManagerbecauseit_salreadybeenregistered_
                                            );
                          }
                        }
                        *(long **)((long)_gRestorableData + 0x88) = plVar10;
                        uVar14 = 0;
                        _AMRSafePrintLogAndRelease();
                        pvVar2 = _gRestorableData;
                        if (plVar10 == (long *)0x0) {
                          pcVar12 = &cf_Failedtoinitializelogmanagers;
                        }
                        else {
                          uVar14 = 0;
                          *(undefined1 *)((long)_gRestorableData + 0xa0) = 0;
                          *(undefined1 *)((long)pvVar2 + 0x10) = 0;
                          pdVar5 = _dispatch_semaphore_create(0);
                          *(dispatch_semaphore_t *)((long)_gRestorableData + 8) = pdVar5;
                          if (pdVar5 == (dispatch_semaphore_t)0x0) {
                            pcVar12 = &cf_Failedtocreatemutexforeventrunloop;
                          }
                          else {
                            uVar14 = 0;
                            pdVar3 = _dispatch_get_global_queue(0,0);
                            _dispatch_async_f(pdVar3,(void *)0x0,___thr_AMRegisterForCallbacks);
                            _dispatch_semaphore_wait
                                      (*(dispatch_semaphore_t *)((long)_gRestorableData + 8),
                                       0xffffffffffffffff);
                            if (*(char *)((long)_gRestorableData + 0x10) == '\x01') {
                              lVar4 = _CFBundleGetBundleWithIdentifier
                                                (&cf_com_apple_framework_IOKit);
                              if (lVar4 == 0) {
                                pcVar12 = &cf_FailedtolocateIOKitbundleforpowersymbols;
                              }
                              else {
                                uVar11 = _CFBundleGetFunctionPointerForName
                                                   (lVar4,&cf_IOPMAssertionCreateWithProperties);
                                *(undefined8 *)((long)_gRestorableData + 0x90) = uVar11;
                                lVar4 = _CFBundleGetFunctionPointerForName
                                                  (lVar4,&cf_IOPMAssertionCreate);
                                pvVar2 = _gRestorableData;
                                *(long *)((long)_gRestorableData + 0x98) = lVar4;
                                uVar14 = 1;
                                if ((lVar4 != 0) || (*(long *)((long)pvVar2 + 0x90) != 0)) {
                                  pcVar12 = (cfstringStruct *)0x0;
                                  goto LAB_001573e5;
                                }
                                pcVar12 = &cf_Failedtolocatepowersymbols;
                              }
                              _AMRSafePrintLogAndRelease(3,pcVar12);
                              pcVar12 = (cfstringStruct *)0x0;
                              _AMRSafePrintLog(3,&cf_F);
                              uVar14 = 1;
                            }
                            else {
                              pcVar12 = &
                                        cf_Failedtoregisterfordevicenotificationeventsandstartrunloop
                              ;
                            }
                          }
                        }
                        goto LAB_001573e5;
                      }
                      pcVar12 = &cf_Failedtocreateseriallogmanager;
                    }
                    _AMRSafePrintLogAndRelease(3,pcVar12);
                    pcVar12 = &cf_Failedtoinitializelogmanagers;
                  }
                }
              }
            }
          }
        }
      }
LAB_00157742:
      uVar14 = 0;
    }
  }
LAB_001573e5:
  _AMRSafePrintLogAndRelease(3,pcVar12);
  if (_gRestorableData != (void *)0x0 && (char)uVar14 == '\0') {
    if (*(long *)((long)_gRestorableData + 0x38) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0x38));
    }
    if (*(long *)((long)_gRestorableData + 0x40) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0x40));
    }
    if (*(long *)((long)_gRestorableData + 0x48) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0x48));
    }
    if (*(long *)((long)_gRestorableData + 0x58) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0x58));
    }
    if (*(long *)((long)_gRestorableData + 0x30) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0x30));
    }
    if (*(long *)((long)_gRestorableData + 0xb8) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0xb8));
    }
    if (*(long *)((long)_gRestorableData + 0x50) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0x50));
    }
    if (*(long *)((long)_gRestorableData + 0xb0) != 0) {
      _CFRelease(*(long *)((long)_gRestorableData + 0xb0));
    }
    if ((*(dispatch_object_t *)((long)_gRestorableData + 0x20))._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(*(dispatch_object_t *)((long)_gRestorableData + 0x20));
    }
    if ((*(dispatch_object_t *)((long)_gRestorableData + 0x18))._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(*(dispatch_object_t *)((long)_gRestorableData + 0x18));
    }
    if ((*(dispatch_object_t *)((long)_gRestorableData + 8))._os_obj != (_os_object_s *)0x0) {
      _dispatch_release(*(dispatch_object_t *)((long)_gRestorableData + 8));
    }
    if (((*(dispatch_object_t *)((long)_gRestorableData + 0x28))._os_obj == (_os_object_s *)0x0) ||
       (_dispatch_release(*(dispatch_object_t *)((long)_gRestorableData + 0x28)),
       _gRestorableData != (void *)0x0)) {
      _free(_gRestorableData);
    }
    _gRestorableData = (void *)0x0;
    uVar14 = 0;
  }
LAB_00157546:
  _dispatch_semaphore_signal(__initSemaphore);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

