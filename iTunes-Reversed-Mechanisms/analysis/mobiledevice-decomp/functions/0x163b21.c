// rea decompile_all
// name: __AMRestorableCopyTrackedDevice
// address: 0x163b21
// body: available
// range: 0x163b21-0x16429d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRestorableCopyTrackedDevice(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  cfstringStruct *pcVar17;
  int iVar18;
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  int local_4c;
  long *local_48;
  char *local_40;
  int local_34;
  
  if (param_1 == 0) {
    pcVar17 = &cf_Can_tseeifdeviceistrackedwithNULLdevice;
LAB_00164296:
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)__AMDeviceProxyCreate();
    if (plVar8 == (long *)0x0) {
      pcVar17 = &cf_Failedtocreateproxyfordevice;
      goto LAB_00164296;
    }
    uVar4 = __AMDeviceProxyGetState(plVar8);
    lVar9 = __AMDeviceProxyGetECID(plVar8);
    if (lVar9 == 0) {
      pcVar17 = &
                cf_Can_tgeneratefaketrackingidentifierfordevicethat_snotoftyperecovery_DFU_orPortDFU
      ;
      if ((uVar4 < 7) && ((0x46U >> (uVar4 & 0x1f) & 1) != 0)) {
        uVar5 = __AMDeviceProxyGetLocationID
                          (plVar8,&
                                  cf_Can_tgeneratefaketrackingidentifierfordevicethat_snotoftyperecovery_DFU_orPortDFU
                          );
        _AMRLog(7,&cf_FoundLocationID__d,uVar5);
        _AMRSafeLog(3,&cf___,&cf_InvalidECIDpassedtomakekeywith);
        _CFRelease(&cf_InvalidECIDpassedtomakekeywith);
        goto LAB_00163c67;
      }
    }
    else {
      _AMRLog(7,&cf_FoundECID_0x_lX,lVar9);
      lVar9 = __AMRestorableCreateKeyForDeviceWithECID(lVar9);
      if (lVar9 != 0) {
        _dispatch_semaphore_wait
                  (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
        lVar10 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar9);
        if (lVar10 == 0) {
          _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
          uVar6 = __AMDeviceProxyGetLocationID(plVar8);
          local_40 = (char *)(ulong)uVar6;
          if (uVar4 == 6) {
            lVar10 = 0;
            local_68 = lVar9;
            _AMRLog(7,&cf_PortDFUdeviceattached_checkingforpossibleDFUmatches);
            lVar9 = __AMRestorableCreateKeyForDeviceWithECID(local_40);
            uVar14 = __AMDeviceProxyGetECID(plVar8);
            lVar11 = __AMRestorableCreateKeyForDeviceWithECID(uVar14);
            _dispatch_semaphore_wait
                      (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
            lVar12 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x48),lVar11);
            if (lVar12 != 0) {
              _CFRetain(lVar12);
              lVar10 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar12);
              if (lVar10 == 0) {
                lVar10 = 0;
                _AMRLog(7,&cf_NodevicefounddespitematchingapreviousAPECID_Filearadar_);
              }
              else {
                _CFRetain(lVar10);
                _CFDictionaryAddValue(*(undefined8 *)(_gRestorableData + 0x38),lVar11,lVar10);
                _CFDictionaryAddValue(*(undefined8 *)(_gRestorableData + 0x40),lVar9,lVar11);
                _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x38),lVar12);
                _CFDictionaryRemoveValue(*(undefined8 *)(_gRestorableData + 0x48),lVar11);
              }
            }
            _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
            pcVar16 = "";
            if (lVar10 == 0) {
              pcVar16 = " not";
            }
            _AMRLog(7,&cf_APDFUdevicematchingportDFUdeviceatlocationID0x_X_sfound,local_40,pcVar16);
            if (lVar9 != 0) {
              _CFRelease(lVar9);
            }
            if (lVar11 != 0) {
              _CFRelease(lVar11);
            }
            if (lVar12 != 0) {
              _CFRelease(lVar12);
            }
            lVar9 = local_68;
            if (lVar10 == 0) {
              _AMRLog(7,&cf_PortDFUdevicedidn_tmatchpreviouslyseenDFUdevice_locationID_0x_lX_,
                      local_40);
              goto LAB_00163fe0;
            }
            goto LAB_00163be3;
          }
          if (uVar4 == 1) {
            iVar18 = 0;
            local_68 = lVar9;
            _AMRLog(7,&cf_DFUdeviceattached_checkingforpossibleportDFUmatches);
            pcVar16 = local_40;
            local_34 = 0;
            local_58 = 0;
            local_78 = 0;
            uVar14 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
            lVar11 = _CFNumberCreate(uVar14,3);
            lVar9 = _IOServiceMatching("IOUSBHostDevice");
            local_70 = uVar14;
            lVar12 = _CFDictionaryCreateMutable
                               (uVar14,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            _CFDictionaryAddValue(lVar12,&cf_locationID,lVar11);
            _CFDictionaryAddValue(lVar9,&cf_IOPropertyMatch,lVar12);
            _CFRetain(lVar9);
            uVar5 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
            iVar7 = _IOServiceGetMatchingService(uVar5,lVar9);
            if (iVar7 == 0) {
              _AMRSafeLog(3,&
                            cf__s_Failuretolocatedeviceservicefor____inIORegistry_UsingthislocationIDandhopingit_sinourlookup_Matchingdictionary___
                          ,"_findMatchingLocationID",lVar11,lVar9);
              lVar10 = __portDFUDeviceMatchingApLocationID(plVar8,0);
              lVar13 = 0;
            }
            else {
LAB_00163dc2:
              local_48 = plVar8;
              local_60 = lVar9;
              iVar18 = iVar7;
              lVar13 = _IORegistryEntryCreateCFProperty(iVar18,&cf_locationID,local_70,0);
              if (lVar13 == 0) {
                lVar13 = 0;
                pcVar17 = &cf__s_Failuretocreate_locationID_propertyfromIORegistryEntry;
LAB_001640cc:
                _AMRSafeLog(3,pcVar17,"_findMatchingLocationID");
                goto LAB_001640df;
              }
              lVar9 = _CFGetTypeID(lVar13);
              lVar10 = _CFNumberGetTypeID();
              if (lVar9 != lVar10) {
                pcVar17 = &cf__s_property_locationID_isnotCFNumber;
                goto LAB_001640cc;
              }
              cVar3 = _CFNumberGetValue(lVar13,4,&local_58);
              if (cVar3 == '\0') {
                pcVar17 = &cf__s_failedtoconvertlocationID;
                pcVar16 = "_findMatchingLocationID";
                lVar10 = 0;
                uVar14 = 3;
                goto LAB_00163ec8;
              }
              iVar7 = _IOObjectConformsTo(iVar18,"AppleUSBHub");
              if ((iVar7 != 0) && (local_78 == 0)) {
                uVar14 = _IORegistryEntryCopyPath(iVar18,"IOService");
                _AMRSafeLog(7,&cf_Newdeviceisthechildofahubat__,uVar14);
                _IORegistryEntryGetRegistryEntryID(iVar18,&local_78);
              }
              lVar10 = __portDFUDeviceMatchingApLocationID(local_48,local_58);
              iVar7 = _IORegistryEntryGetParentEntry(iVar18,"IOService",&local_34);
              if (iVar7 == 0) {
                _IOObjectRelease(iVar18);
                iVar18 = local_34;
                local_34 = 0;
                _CFRelease(lVar13);
                if ((iVar18 == 0) ||
                   (iVar7 = iVar18, lVar9 = local_60, plVar8 = local_48, lVar10 != 0))
                goto LAB_00163eac;
                goto LAB_00163dc2;
              }
              _AMRSafeLog(7,&cf__s_NomatchingancestorfoundforlocationID__,"_findMatchingLocationID",
                          lVar11);
LAB_00163eac:
              if (lVar10 == 0) {
LAB_001640df:
                _AMRSafeLog(7,&
                              cf_FoundnoimmediatematchbylocationID_LookingforPortDFUdeviceinthechildrenofthehub_
                           );
                uVar14 = _CFDictionaryCreateMutable
                                   (local_70,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                uVar15 = _IORegistryEntryIDMatching(local_78);
                _CFDictionarySetValue(uVar14,&cf_IOParentMatch,uVar15);
                _CFRelease(uVar15);
                local_4c = 0;
                _IOServiceGetMatchingServices(uVar5,uVar14);
                do {
                  do {
                    iVar7 = _IOIteratorNext(local_4c);
                    lVar10 = 0;
                    if (iVar7 == 0) goto LAB_001641c4;
                    lVar13 = _IORegistryEntryCreateCFProperty(iVar7,&cf_locationID,local_70,0);
                    _IOObjectRelease(iVar7);
                  } while (lVar13 == 0);
                  _CFNumberGetValue(lVar13,4,&local_58);
                  lVar10 = __portDFUDeviceMatchingApLocationID(local_48,local_58);
                } while (lVar10 == 0);
                _AMRLog(7,&cf_Matching___sibling___PortDFUdevicefoundforDFUdevice__X,pcVar16);
LAB_001641c4:
                plVar8 = local_48;
                lVar9 = local_60;
                if (local_4c != 0) {
                  _IOObjectRelease();
                }
              }
              else {
                pcVar17 = &cf_MatchingPortDFUdevicefoundforDFUdevice__llX;
                uVar14 = 7;
LAB_00163ec8:
                _AMRSafeLog(uVar14,pcVar17,pcVar16);
                plVar8 = local_48;
                lVar9 = local_60;
              }
            }
            if (lVar11 != 0) {
              _CFRelease();
            }
            if (lVar9 != 0) {
              _CFRelease(lVar9);
            }
            if (lVar12 != 0) {
              _CFRelease();
            }
            if (lVar13 != 0) {
              _CFRelease(lVar13);
            }
            if (iVar18 != 0) {
              _IOObjectRelease(iVar18);
            }
            lVar9 = local_68;
            if (lVar10 != 0) goto LAB_00163be3;
            lVar10 = 0;
            _AMRLog(7,&cf_Didn_tmatchDFUdeviceaftertraversing_locationID_0x_lX_,local_40);
          }
          else {
            _AMRLog(7,&cf_Deviceattachedinnon_DFU_non_portDFUstate_shouldbenewdevice);
LAB_00163fe0:
            lVar10 = 0;
          }
        }
        else {
          _CFRetain(lVar10);
          _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
LAB_00163be3:
          uVar2 = __AMRestorableDeviceIsProxyTrackable(plVar8);
          *(undefined1 *)(lVar10 + 0xb8) = uVar2;
          *(undefined1 *)(lVar10 + 0xb9) = uVar2;
        }
        _AMRSafeLogAndRelease(3,0);
        _CFRelease(lVar9);
        goto LAB_00163c7a;
      }
LAB_00163c67:
      pcVar17 = &cf_FailedtomakedevicekeywithECID;
    }
  }
  _AMRSafeLogAndRelease(3,pcVar17);
  lVar10 = 0;
LAB_00163c7a:
  if (plVar8 != (long *)0x0) {
    LOCK();
    piVar1 = (int *)((long)plVar8 + 0x14);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
    }
  }
  return lVar10;
}

