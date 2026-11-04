// rea decompile_all
// name: ___thr_AMRestorableDeviceRestore
// address: 0x166e02
// body: available
// range: 0x166e02-0x168a48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x168a44 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceRestore(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  code *pcVar9;
  int *piVar10;
  long lVar11;
  time_t tVar12;
  long lVar13;
  void *pvVar14;
  long lVar15;
  void *pvVar16;
  long lVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined *puVar20;
  cfstringStruct *pcVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long local_158;
  long local_150;
  code *local_148;
  long local_140;
  long local_138;
  long local_130;
  ulong local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  ulong local_f0;
  long local_e8;
  int *local_e0;
  undefined *local_d8;
  ulong local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  ulong local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_158 = 0;
  puVar20 = (undefined *)*param_1;
  local_150 = param_1[2];
  lVar1 = param_1[4];
  if (puVar20 == (undefined *)0x0) {
    pcVar21 = &cf_Can_trestoreNULLAMRestorableDeviceRef;
LAB_0016866c:
    uVar19 = 0xfa1;
    goto LAB_001689d2;
  }
  lVar11 = param_1[1];
  if (lVar11 == 0) {
    pcVar21 = &cf_Youmustspecifyrestoreoptions;
    goto LAB_0016866c;
  }
  lVar8 = _CFDictionaryGetValue(lVar11,&cf_forceDFU);
  local_c8 = *(long *)PTR__kCFBooleanTrue_00441110;
  if (lVar8 != local_c8 || puVar20[0xb9] != '\0') {
    if (puVar20[0xb9] != '\0') goto LAB_00166eb0;
LAB_00166e9a:
    pcVar21 = &cf_Can_trestoredeviceinthisstate_pleaserebootintoRecoveryorDFU;
    goto LAB_001689cd;
  }
  if (puVar20[0xb8] == '\0') goto LAB_00166e9a;
LAB_00166eb0:
  if (puVar20[0x79] != '\0') {
    pcVar21 = &cf_Can_trestoreadevicethatisalreadybusyrestoring;
    uVar19 = 0xfa4;
    goto LAB_001689d2;
  }
  local_e8 = lVar8;
  uVar19 = _CFDictionaryGetValue(lVar11,&cf_iTunesVersion);
  _AMRSafeLog(6,&cf_iTunesVersion_____,uVar19);
  if (*(long *)(puVar20 + 0x10) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(puVar20 + 0x10) = 0;
  if (*(long *)(puVar20 + 0xd8) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(puVar20 + 0xd8) = 0;
  uVar19 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar8 = _CFDictionaryCreateMutable
                    (uVar19,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  *(long *)(puVar20 + 0xd8) = lVar8;
  if (lVar8 == 0) {
    pcVar21 = &cf_Failedtocreaterestoreinfodict;
    goto LAB_001689cd;
  }
  if (*(long *)(puVar20 + 0x50) != 0) {
    _CFRelease();
  }
  *(undefined8 *)(puVar20 + 0x50) = 0;
  lVar8 = _CFPropertyListCreateDeepCopy(uVar19,lVar11,2);
  *(long *)(puVar20 + 0x50) = lVar8;
  if (lVar8 == 0) {
    pcVar21 = &cf_Failedtocreatemutablerestoreoptions;
    uVar19 = 0xfa2;
    goto LAB_001689d2;
  }
  if (*(long *)(puVar20 + 0x18) != 0) {
    _CFRelease();
    lVar8 = *(long *)(puVar20 + 0x50);
  }
  *(undefined8 *)(puVar20 + 0x18) = 0;
  lVar13 = _CFDictionaryGetValue(lVar8,&cf_StateMachine);
  local_f8 = uVar19;
  local_d8 = puVar20;
  if (lVar13 != 0) {
    pcVar9 = (code *)_CFArrayGetCount(lVar13);
    if ((int)(uint)pcVar9 < 1) {
      pcVar21 = &cf_Can_tcreatestatemachinewithzerosteps;
      goto LAB_0016721f;
    }
    local_d0 = (ulong)((uint)pcVar9 & 0x7fffffff);
    local_148 = pcVar9;
    piVar10 = _calloc(local_d0,0xc);
    if (piVar10 == (int *)0x0) {
      pcVar21 = &cf_Failedtoallocaterestoreinfoforstatemachine;
      goto LAB_0016721f;
    }
    piVar18 = piVar10 + 2;
    uVar22 = 0;
    local_120 = lVar8;
    local_e0 = piVar10;
    local_c0 = lVar13;
    do {
      uVar19 = _CFArrayGetValueAtIndex(local_c0,uVar22);
      local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
      lVar8 = _CFDictionaryGetValue(uVar19,&cf_State);
      if (lVar8 == 0) {
        pcVar21 = &cf_Can_tparsestatemachinewithoutstateentry;
LAB_001685ff:
        _AMRSafeLog(3,&cf___,pcVar21);
        _CFRelease(pcVar21);
        _AMRSafeLog(3,&cf___,&cf_FailedtoparseRestoreStateInfoforstatemachine);
        _CFRelease(&cf_FailedtoparseRestoreStateInfoforstatemachine);
        piVar10 = local_e0;
        goto LAB_0016864b;
      }
      iVar6 = __AMRestorableGetStateForString(lVar8);
      lVar8 = _CFDictionaryGetValue(uVar19,&cf_MaxLoops);
      if (lVar8 == 0) {
        pcVar21 = &cf_Can_tparsestatemachinewithoutmaxcyclesentry;
        goto LAB_001685ff;
      }
      _CFNumberGetValue(lVar8,9,&local_b8);
      iVar4 = (int)local_b8;
      lVar8 = _CFDictionaryGetValue(uVar19,&cf_StrictMaxLoops);
      if (lVar8 == 0) {
        pcVar21 = &cf_Can_tparsestatemachinewithoutstrictcyclesentry;
        goto LAB_001685ff;
      }
      cVar5 = _CFBooleanGetValue(lVar8);
      piVar10 = local_e0;
      piVar18[-2] = iVar6;
      piVar18[-1] = iVar4;
      *(bool *)piVar18 = cVar5 != '\0';
      uVar22 = uVar22 + 1;
      piVar18 = piVar18 + 3;
    } while (local_d0 != uVar22);
    lVar13 = __AMRestorableStateMachineCreateWithStateInfo(local_e0,local_148);
    lVar8 = local_120;
    if (lVar13 != 0) goto LAB_001672ad;
    _AMRSafeLog(3,&cf___,&cf_FailedtocreatecustomstatemachinefromRestoreStateInfoarray);
    _CFRelease(&cf_FailedtocreatecustomstatemachinefromRestoreStateInfoarray);
LAB_0016864b:
    lVar13 = 0;
    _free(piVar10);
    puVar20 = local_d8;
    goto LAB_0016738d;
  }
  lVar13 = _CFDictionaryGetValue(lVar8,&cf_forceDFU);
  lVar17 = *(long *)(puVar20 + 0x20);
  if (lVar17 == 0) {
    pcVar21 = &cf_Can_tcreatestatemachinewithNULLproxy;
    goto LAB_00167207;
  }
  uVar7 = __AMDeviceProxyGetState(lVar17);
  switch(uVar7) {
  case 0:
    pcVar21 = &cf_Failedtogetstatefordevice;
    goto LAB_00167207;
  case 1:
    puVar20 = &__kAMRestorableStateMachineDFUStates;
    cVar5 = '\x03';
    break;
  case 2:
    cVar5 = (lVar13 == local_c8) * '\x02' + '\x02';
    puVar20 = &__kAMRestorableStateMachineRecoveryStates;
    if (lVar13 == local_c8) {
      puVar20 = &__kAMRestorableStateMachineRecoveryForceDFUStates;
    }
    break;
  case 3:
    if (lVar13 == local_c8) {
      puVar20 = &__kAMRestorableStateMachineRestoreOSForceDFUStates;
      goto LAB_00167255;
    }
    pcVar21 = &cf_Can_tstartarestorefromrestoreOS_;
LAB_001671e6:
    cVar5 = '\0';
    uVar19 = _AMRMakeString(pcVar21);
    puVar20 = (undefined *)0x0;
    goto LAB_0016725d;
  case 4:
    puVar20 = &__kAMRestorableStateMachineBootedOSStates;
    if (lVar13 == local_c8) {
      puVar20 = &__kAMRestorableStateMachineBootedOSForceDFUStates;
    }
    cVar5 = (lVar13 == local_c8) + '\x03';
    break;
  case 5:
    if (lVar13 != local_c8) {
      pcVar21 = &cf_Can_tstartarestorefromramrodOS_;
      goto LAB_001671e6;
    }
    puVar20 = &__kAMRestorableStateMachineRamrodOSForceDFUStates;
    goto LAB_00167255;
  case 6:
    puVar20 = &__kAMRestorableStateMachinePortDFUStates;
LAB_00167255:
    cVar5 = '\x04';
    break;
  default:
    pcVar21 = (cfstringStruct *)
              _AMRMakeString(&cf_Can_tcreatestatemachinewithunknownstartingstate__d,uVar7);
    goto LAB_00167207;
  }
  uVar19 = 0;
LAB_0016725d:
  lVar13 = __AMRestorableStateMachineCreateWithStateInfo(puVar20,cVar5);
  if (lVar13 == 0) {
    pcVar21 = &cf_Failedtocreatestatemachine;
LAB_00167207:
    _AMRSafeLogAndRelease(3,pcVar21);
    pcVar21 = &cf_Failedtocreatestandardstatemachine;
    puVar20 = local_d8;
LAB_0016721f:
    lVar13 = 0;
    _AMRSafeLog(3,&cf___,pcVar21);
    _CFRelease(pcVar21);
  }
  else {
    _AMRSafeLogAndRelease(3,uVar19);
    uVar19 = __AMDeviceProxyGetECID(lVar17);
    piVar10 = (int *)0x0;
    _AMRSafeLog(5,&cf_CreatedstatemachinefordevicewithECID_0x_llX,uVar19);
    __AMRestorableStateMachinePrint(lVar13);
LAB_001672ad:
    puVar20 = local_d8;
    lVar8 = _CFDictionaryGetValue(lVar8,&cf_OverrideFinishStage);
    if (lVar8 == 0) {
LAB_00167362:
      pcVar21 = (cfstringStruct *)0x0;
      bVar3 = true;
    }
    else {
      iVar6 = __AMRestorableGetStateForString(lVar8);
      if (iVar6 == 0) {
        pcVar21 = &
                  cf_InvalidrestoreoptionvaluekAMRestorableRestoreOptionOverrideFinishStage_can_tbeunknownstate
        ;
        bVar3 = false;
      }
      else {
        lVar17 = (long)*(int *)(lVar13 + 0x28);
        if (0 < lVar17) {
          piVar18 = *(int **)(lVar13 + 0x20);
          do {
            if (*piVar18 == iVar6) {
              *(int **)(lVar13 + 0x10) = piVar18;
              _AMRSafeLogAndRelease(3,0);
              _AMRSafeLog(5,&cf_Restoreoptionsspecifyfinalrestorestagetobe__,lVar8);
              goto LAB_00167362;
            }
            piVar18 = piVar18 + 3;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        bVar3 = false;
        uVar19 = _AMRMakeString(&
                                cf_Can_tchangestatemachinecompletionstateto__sinceit_snotinthestatemachinesequence
                                ,*(undefined8 *)(&DAT_0044a380 + (ulong)(iVar6 - 1) * 8));
        _AMRSafeLogAndRelease(3,uVar19);
        pcVar21 = &cf_Failedtooverridefinalstateinstatemachine_likelydidn_texistinstatemachine;
      }
    }
    _AMRSafeLogAndRelease(3,pcVar21);
    if (piVar10 != (int *)0x0) {
      _free(piVar10);
    }
    if (!bVar3) {
      _CFRelease(lVar13);
      lVar13 = 0;
    }
  }
LAB_0016738d:
  *(long *)(puVar20 + 0x18) = lVar13;
  *(undefined4 *)(puVar20 + 0x34) = 0;
  local_b8 = puVar20;
  _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                   ___thr_AMRestorableDeviceGetState);
  lVar8 = local_150;
  *(int *)(puVar20 + 0x34) = (int)local_b0;
  lVar13 = local_c8;
  if ((((int)local_b0 != 1) && ((int)local_b0 != 6)) && (local_e8 != local_c8)) {
    lVar13 = *(long *)PTR__kCFBooleanFalse_00441108;
  }
  _CFDictionarySetValue(*(undefined8 *)(puVar20 + 0x50),&cf_InitialStateIsDFU,lVar13);
  tVar12 = _time((time_t *)0x0);
  *(time_t *)(puVar20 + 0x38) = tVar12;
  *(undefined8 *)(puVar20 + 0x40) = 0;
  if (*(long *)(puVar20 + 0x18) == 0) {
    pcVar21 = &cf_Failedtocreatenewstatemachineforrestore;
    uVar19 = 0xfb1;
LAB_001689d2:
    _AMRSafeLogAndRelease(3,pcVar21);
    bVar3 = false;
    goto LAB_0016820c;
  }
  *(long *)(puVar20 + 0x48) = lVar8;
  *(long *)(puVar20 + 0x58) = lVar1;
  puVar20[0xd0] = 0;
  *(undefined4 *)(puVar20 + 0x2c) = 7;
  uVar19 = *(undefined8 *)(puVar20 + 0x50);
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(puVar20 + 0x88),0xffffffffffffffff);
  _CFDictionaryApplyFunction
            (*(undefined8 *)(puVar20 + 0x80),__AMROpenLogWriteStreamsApplier,puVar20);
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(puVar20 + 0x88));
  cVar5 = __AMRShouldCaptureDeviceLogForType(puVar20,&cf_HostLogType,uVar19);
  if (cVar5 != '\0') {
    puVar2 = *(undefined8 **)(_gRestorableData + 0x78);
    if (puVar2 == (undefined8 *)0x0) {
      pcVar21 = &cf_Can_twatchdevicewithnilmanager;
    }
    else {
      _dispatch_semaphore_wait((dispatch_semaphore_t)*puVar2,0xffffffffffffffff);
      lVar8 = __copyCurrentThreadID();
      puVar20 = local_d8;
      if (lVar8 == 0) {
        _dispatch_semaphore_signal((dispatch_semaphore_t)*puVar2);
        pcVar21 = &cf_FailedtogetthreadID;
      }
      else {
        _CFDictionarySetValue(puVar2[1],lVar8,local_d8);
        lVar13 = __copyECID(puVar20);
        if (lVar13 == 0) {
          pcVar21 = &cf_FailedtogetECIDforhostlogmanager;
          lVar13 = 0;
        }
        else {
          _CFDictionarySetValue(puVar2[2],lVar13,local_c8);
          pcVar21 = (cfstringStruct *)0x0;
        }
        _dispatch_semaphore_signal((dispatch_semaphore_t)*puVar2);
        _CFRelease(lVar8);
        if (lVar13 != 0) {
          _CFRelease(lVar13);
        }
      }
    }
    puVar20 = local_d8;
    _AMRSafePrintLogAndRelease(3,pcVar21);
  }
  cVar5 = __AMRShouldCaptureDeviceLogForType(puVar20,&cf_DeviceLogType,uVar19);
  if (cVar5 != '\0') {
    lVar8 = *(long *)(_gRestorableData + 0x88);
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffffffffffff00);
    pvVar14 = (void *)_CFArrayCreateMutable(local_f8,3,0);
    _CFArrayAppendValue(pvVar14,lVar8);
    _CFArrayAppendValue(pvVar14,puVar20);
    _CFArrayAppendValue(pvVar14,&local_b8);
    _dispatch_sync_f(*(dispatch_queue_t *)(lVar8 + 0x10),pvVar14,
                     ___thr_AMRDeviceLogStartWatchingDevice);
  }
  cVar5 = __AMRShouldCaptureDeviceLogForType(puVar20,&cf_SerialLogType,uVar19);
  if (cVar5 != '\0') {
    __AMRSerialLogStartWatchingDevice(*(undefined8 *)(_gRestorableData + 0x80),puVar20);
  }
  uVar19 = local_f8;
  lVar8 = _CFStringCreateMutable(local_f8,0);
  if (lVar8 == 0) {
    _AMRSafeLogAndRelease(3,&cf_Failedtoallocaterestorebannerstring);
  }
  else {
    _CFStringAppend(lVar8,&cf______________________________________________________);
    _CFStringAppend(lVar8,&cf_Deviceinfo_);
    local_b0 = 0;
    local_b8 = puVar20;
    _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                     ___thr_AMRestorableDeviceCopyBoardConfig);
    local_148 = local_a8;
    local_120 = _AMRMakeString(&cf_boardconfiguration___);
    pcVar21 = &cf_Failedtoallocateboardconfigstring;
    if (local_120 == 0) {
      local_120 = 0;
LAB_00168704:
      local_140 = 0;
LAB_00168727:
      local_138 = 0;
LAB_00168751:
      local_128 = 0;
      local_130 = 0;
LAB_00168767:
      local_110 = 0;
      local_118 = 0;
      local_108 = 0;
LAB_00168772:
      local_100 = 0;
LAB_0016877d:
      _AMRSafeLogAndRelease(3,pcVar21);
      _CFRelease(lVar8);
      piVar10 = (int *)0x0;
      lVar13 = 0;
      local_d0 = 0;
      local_c8 = 0;
      lVar11 = 0;
      uVar22 = 0;
    }
    else {
      _CFStringAppend(lVar8,local_120);
      local_b8 = puVar20;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                       ___thr_AMRestorableDeviceGetBoardID);
      local_140 = _AMRMakeString(&cf_BoardID_0x_X,local_b0 & 0xffffffff);
      if (local_140 == 0) goto LAB_00168704;
      _CFStringAppend(lVar8,local_140);
      local_b8 = puVar20;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                       ___thr_AMRestorableDeviceGetChipID);
      local_138 = _AMRMakeString(&cf_ChipID_0x_X,local_b0 & 0xffffffff);
      if (local_138 == 0) goto LAB_00168727;
      _CFStringAppend(lVar8,local_138);
      local_b8 = puVar20;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                       ___thr_AMRestorableDeviceGetECID);
      local_130 = _AMRMakeString(&cf_ECID_0x_llX,local_b0);
      if (local_130 == 0) {
        pcVar21 = &cf_Failedtoallocateecidlinestring;
        goto LAB_00168751;
      }
      _CFStringAppend(lVar8,local_130);
      local_b0 = 0;
      local_b8 = puVar20;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                       ___thr_AMRestorableDeviceCopySerialNumber);
      local_128 = local_b0;
      local_118 = _AMRMakeString(&cf_SerialNumber___);
      if (local_118 == 0) {
        pcVar21 = &cf_Failedtoallocateserialnumberstring;
        goto LAB_00168767;
      }
      _CFStringAppend(lVar8,local_118);
      local_b8 = puVar20;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                       ___thr_AMRestorableDeviceGetLocationID);
      local_110 = _AMRMakeString(&cf_USBLocation_0x_X,local_b0 & 0xffffffff);
      if (local_110 == 0) {
        local_108 = 0;
        pcVar21 = &cf_Failedtoallocateusblocationstring;
        local_110 = 0;
        goto LAB_00168772;
      }
      _CFStringAppend(lVar8,local_110);
      local_108 = _AMRestorableDeviceCopySerialDeviceSWDName(puVar20);
      local_100 = _AMRMakeString(&cf_USBName___,local_108);
      if (local_100 == 0) {
        pcVar21 = &cf_Failedtoallocateusbnamestring;
        goto LAB_00168772;
      }
      _CFStringAppend(lVar8,local_100);
      piVar10 = (int *)_CFStringCreateMutable(uVar19,0);
      if (piVar10 == (int *)0x0) {
        pcVar21 = &cf_Failedtoallocatestartingstatestring;
        goto LAB_0016877d;
      }
      local_e0 = piVar10;
      _CFStringAppend(piVar10,&cf_StartingState_);
      local_b8 = puVar20;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                       ___thr_AMRestorableDeviceGetState);
      piVar10 = local_e0;
      local_e8 = lVar8;
      switch((int)local_b0) {
      case 1:
        pcVar21 = &cf_DFU;
        break;
      case 2:
        pcVar21 = &cf_Recovery;
        break;
      case 3:
        pcVar21 = &cf_RestoreOS;
        break;
      case 4:
        _CFStringAppend(local_e0,&cf_BootedOS);
        local_b8 = puVar20;
        _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                         ___thr_AMRestorableDeviceCopyAMDevice);
        uVar22 = local_b0;
        local_f0 = local_b0;
        if (local_b0 == 0) {
          iVar6 = ___isPlatformVersionAtLeast(1,10,0xd,0);
          if ((iVar6 != 0) &&
             (local_b8 = puVar20,
             _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                              ___thr_AMRestorableDeviceCopyMDRemoteServiceDevice), uVar22 = local_f0
             , uVar24 = local_b0, local_b0 != 0)) {
LAB_001683e9:
            uVar23 = 0;
            local_c0 = _CFDictionaryCreateMutable
                                 (local_f8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
LAB_00168416:
            do {
              if (uVar22 == 0) {
                if (uVar23 != 0) {
                  uVar19 = _CFStringGetCStringPtr((&DAT_0044a310)[uVar23],0x8000100);
                  lVar13 = _MDRemoteServiceDeviceCopyProperty(uVar24,uVar19);
                  goto LAB_0016845d;
                }
                lVar13 = _MDRemoteServiceDeviceGetPropertyDictionary(uVar24);
                if (lVar13 == 0) {
                  uVar23 = 1;
                  goto LAB_00168416;
                }
                _CFRetain(lVar13);
LAB_00168466:
                local_d0 = uVar23;
                lVar17 = _CFGetTypeID(lVar13);
                lVar15 = _CFDictionaryGetTypeID();
                local_c8 = lVar13;
                if (lVar17 == lVar15) {
                  lVar17 = _CFDictionaryGetCount(lVar13);
                  pvVar14 = _malloc(lVar17 * 8);
                  pvVar16 = _malloc(lVar17 * 8);
                  _CFDictionaryGetKeysAndValues(lVar13,pvVar14,pvVar16);
                  lVar8 = local_c0;
                  if (lVar17 < 1) {
                    if (pvVar14 != (void *)0x0) goto LAB_00168534;
                  }
                  else {
                    lVar13 = 0;
                    do {
                      _CFDictionaryAddValue
                                (lVar8,*(undefined8 *)((long)pvVar14 + lVar13 * 8),
                                 *(undefined8 *)((long)pvVar16 + lVar13 * 8));
                      lVar13 = lVar13 + 1;
                    } while (lVar17 != lVar13);
LAB_00168534:
                    _free(pvVar14);
                  }
                  lVar8 = local_e8;
                  uVar22 = local_f0;
                  if (pvVar16 != (void *)0x0) {
                    _free(pvVar16);
                  }
                }
                else {
                  _CFDictionaryAddValue(local_c0,(&DAT_0044a310)[local_d0],lVar13);
                }
                _CFRelease(local_c8);
                uVar23 = local_d0;
              }
              else {
                lVar13 = _AMDeviceCopyValueWithError(uVar22,0,(&DAT_0044a310)[uVar23],0);
LAB_0016845d:
                if (lVar13 != 0) goto LAB_00168466;
              }
              uVar23 = uVar23 + 1;
            } while (uVar23 != 3);
            _AMRSafeLogAndRelease(3,0);
            if (uVar22 != 0) goto LAB_00168599;
            goto LAB_001685a1;
          }
          _AMRSafeLogAndRelease(3,&cf_FailedtocopyAMDevicefromAMRestorableDevice);
          local_c0 = 0;
          piVar10 = local_e0;
          uVar19 = local_f8;
        }
        else {
          iVar6 = _AMDeviceConnect(local_b0);
          if (iVar6 == 0) {
            iVar6 = _AMDeviceStartSession(uVar22);
            if (iVar6 == 0) {
              uVar24 = 0;
              goto LAB_001683e9;
            }
            pcVar21 = &cf_Failedtostartsessionwithdevice;
          }
          else {
            pcVar21 = &cf_Failedtoconnecttodevice;
          }
          _AMRSafeLogAndRelease(3,pcVar21);
          local_c0 = 0;
          uVar24 = 0;
LAB_00168599:
          _CFRelease(uVar22);
LAB_001685a1:
          piVar10 = local_e0;
          uVar19 = local_f8;
          if (uVar24 != 0) {
            _CFRelease(uVar24);
            uVar19 = local_f8;
          }
        }
        goto LAB_0016797d;
      case 5:
        pcVar21 = &cf_RamrodOS;
        break;
      case 6:
        pcVar21 = &cf_PortDFU;
        break;
      default:
        pcVar21 = &cf_Unknown;
      }
      _CFStringAppend(local_e0,pcVar21);
      local_c0 = 0;
LAB_0016797d:
      _CFStringAppend(lVar8,piVar10);
      lVar13 = _CFStringCreateMutable(uVar19,0);
      if (lVar13 == 0) {
        pcVar21 = &cf_Failedtoallocateproductionfusedstring;
        lVar13 = 0;
LAB_00168975:
        local_f0 = 0;
LAB_00168994:
        local_d0 = 0;
LAB_0016899f:
        local_c8 = 0;
        lVar11 = 0;
      }
      else {
        _CFStringAppend(lVar13,&cf_ProductionFused_);
        local_b8 = local_d8;
        _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),&local_b8,
                         ___thr_AMRestorableDeviceGetFusingInfo);
        pcVar21 = &cf_NO;
        if ((int)local_b0 == 2) {
          pcVar21 = &cf_YES;
        }
        _CFStringAppend(lVar13,pcVar21);
        _CFStringAppend(lVar8,lVar13);
        if (local_c0 == 0) {
          local_f0 = 0;
LAB_00167ab1:
          local_d0 = 0;
        }
        else {
          lVar17 = _CFDictionaryGetValue(local_c0,&cf_DeviceName);
          if (lVar17 == 0) {
            local_f0 = 0;
          }
          else {
            uVar22 = _AMRMakeString(&cf_DeviceName___,lVar17);
            if (uVar22 == 0) {
              pcVar21 = &cf_FailedtoallocatedeviceNameLogstring;
              goto LAB_00168975;
            }
            _CFStringAppend(lVar8,uVar22);
            local_f0 = uVar22;
          }
          lVar17 = _CFDictionaryGetValue(local_c0,&cf_BuildVersion);
          if (lVar17 == 0) goto LAB_00167ab1;
          uVar22 = _AMRMakeString(&cf_InstalledBuild___,lVar17);
          if (uVar22 == 0) {
            pcVar21 = &cf_FailedtoallocatebundleVersionLogstring;
            goto LAB_00168994;
          }
          _CFStringAppend(lVar8,uVar22);
          local_d0 = uVar22;
        }
        _CFStringAppend(lVar8,&cf_BuildInfo_);
        lVar17 = _CFDictionaryGetValue(lVar11,&cf_BuildVersion);
        if (lVar17 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = _AMRMakeString(&cf_RestoreBundleBuildVersion___,lVar17);
          if (lVar17 == 0) {
            pcVar21 = &cf_FailedtoallocaterestoreBundleBuildVersionLogstring;
            goto LAB_0016899f;
          }
          _CFStringAppend(lVar8,lVar17);
        }
        lVar8 = _CFDictionaryGetValue(lVar11,&cf_RestoreBundlePath);
        local_c8 = lVar17;
        if (lVar8 == 0) {
          lVar17 = 0;
          lVar8 = local_e8;
        }
        else {
          lVar11 = 0;
          lVar17 = _AMRMakeString(&cf_RestoreBundlePath___,lVar8);
          lVar8 = local_e8;
          if (lVar17 == 0) {
            pcVar21 = &cf_FailedtoallocaterestoreBundlePathLogstring;
            goto LAB_00167bc5;
          }
          _CFStringAppend(local_e8,lVar17);
        }
        _CFStringAppend(lVar8,&cf______________________________________________________);
        puVar20 = local_d8;
        __AMRestorableDeviceLogMessage(local_d8,lVar8,&cf_HostLogType);
        __AMRestorableDeviceLogMessage(puVar20,lVar8,&cf_SerialLogType);
        __AMRestorableDeviceLogMessage(puVar20,lVar8,&cf_DeviceLogType);
        pcVar21 = (cfstringStruct *)0x0;
        piVar10 = local_e0;
        lVar11 = lVar17;
      }
LAB_00167bc5:
      _AMRSafeLogAndRelease(3,pcVar21);
      _CFRelease(lVar8);
      uVar22 = local_f0;
      if (local_c0 != 0) {
        _CFRelease();
        uVar22 = local_f0;
      }
    }
    lVar8 = local_120;
    if (local_148 != (code *)0x0) {
      _CFRelease();
    }
    if (lVar8 != 0) {
      _CFRelease(lVar8);
    }
    if (local_140 != 0) {
      _CFRelease();
    }
    if (local_138 != 0) {
      _CFRelease();
    }
    if (local_130 != 0) {
      _CFRelease();
    }
    if (local_128 != 0) {
      _CFRelease();
    }
    if (local_118 != 0) {
      _CFRelease();
    }
    if (local_110 != 0) {
      _CFRelease();
    }
    if (local_108 != 0) {
      _CFRelease();
    }
    if (local_100 != 0) {
      _CFRelease();
    }
    if (piVar10 != (int *)0x0) {
      _CFRelease(piVar10);
    }
    if (lVar13 != 0) {
      _CFRelease(lVar13);
    }
    if (uVar22 != 0) {
      _CFRelease(uVar22);
    }
    puVar20 = local_d8;
    if (local_d0 != 0) {
      _CFRelease();
    }
    if (local_c8 != 0) {
      _CFRelease();
    }
    if (lVar11 != 0) {
      _CFRelease(lVar11);
    }
  }
  local_90 = *(undefined8 *)(_gRestorableData + 0x18);
  local_b8 = PTR___NSConcreteStackBlock_004412a8;
  local_b0 = 0x40000000;
  local_a8 = ____AMRestorableDeviceDisableTRM_block_invoke;
  local_a0 = &___block_descriptor_tmp_1921;
  local_98 = puVar20;
  _dispatch_sync();
  lVar11 = _CFDictionaryGetValue(*(undefined8 *)(puVar20 + 0x50),&cf_PersonalizedRestoreBundlePath);
  uVar19 = local_f8;
  if (lVar11 == 0) {
    lVar11 = _CFUUIDCreate(local_f8);
    if (lVar11 == 0) {
      _AMRLog(3,&cf_failedtoallocateUUID);
LAB_001689c6:
      pcVar21 = &cf_Failedtocreateuuid;
LAB_001689cd:
      uVar19 = 4000;
      goto LAB_001689d2;
    }
    lVar8 = _CFUUIDCreateString(uVar19,lVar11);
    _CFRelease(lVar11);
    if (lVar8 == 0) goto LAB_001689c6;
    _CFDictionarySetValue(*(undefined8 *)(puVar20 + 0x50),&cf_UUID,lVar8);
    local_c0 = lVar8;
    uVar22 = _CFStringCreateWithFormat(uVar19,0,&cf_PersonalizedBundle___,lVar8);
    if (uVar22 == 0) {
      pcVar21 = &cf_Failedtocreatepersonalizedbundlepath;
      uVar22 = 0;
    }
    else {
      cVar5 = _CFStringGetCString(uVar22,&local_b8,0x80,0x8000100);
      if (cVar5 == '\0') {
        pcVar21 = &cf_Failedtogetcstringforbundlepath;
      }
      else {
        local_d0 = uVar22;
        iVar6 = _AMAuthInstallSupportCopyURLToNewTempDirectory(uVar19,&local_b8,&local_158);
        if (iVar6 == 0) {
          lVar11 = _CFURLCopyFileSystemPath(local_158,0);
          if (lVar11 != 0) {
            _CFDictionarySetValue
                      (*(undefined8 *)(puVar20 + 0x50),&cf_PersonalizedRestoreBundlePath,lVar11);
            local_e8 = lVar11;
            goto LAB_00167d90;
          }
          pcVar21 = &cf_Failedtocopygeneratedbundlepath;
          uVar22 = local_d0;
        }
        else {
          pcVar21 = &cf_Failedtocreatetempdirectory;
          uVar22 = local_d0;
        }
      }
    }
    _AMRSafeLogAndRelease(3,pcVar21);
    bVar3 = false;
    local_c8 = 0;
    lVar11 = 0;
    lVar8 = local_c0;
    local_d0 = uVar22;
LAB_001681d0:
    _CFRelease(lVar8);
  }
  else {
    local_c0 = 0;
    local_d0 = 0;
    local_e8 = 0;
LAB_00167d90:
    local_c8 = _AMAuthInstallSupportCreateURLFromString(uVar19,lVar11);
    if (local_c8 == 0) {
      pcVar21 = &cf_failedtocreatebundleurl;
      local_c8 = 0;
LAB_00168844:
      bVar3 = false;
    }
    else {
      __AMRResourceManagerStartedUsingResourceAtURL(local_c8);
      if (*(long *)(puVar20 + 0x20) == 0) {
        pcVar21 = &cf_Can_ttakepowerassertionwithoutproxy;
LAB_0016885c:
        lVar8 = 0;
        _AMRSafeLog(3,&cf___,pcVar21);
        _CFRelease(pcVar21);
        lVar11 = 0;
LAB_00168042:
        *(undefined4 *)(local_d8 + 0xe8) = 0;
      }
      else {
        if (*(int *)(puVar20 + 0xe8) != 0) {
          pcVar21 = &cf_Devicealreadyhaspowerassertion;
          goto LAB_0016885c;
        }
        piVar10 = (int *)(puVar20 + 0xe8);
        _dispatch_semaphore_wait
                  (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
        if (*(long *)(_gRestorableData + 0x90) == 0) {
          if (*(code **)(_gRestorableData + 0x98) == (code *)0x0) {
            pcVar21 = &cf_Can_ttakepowerassertionwithoutpowersymbols;
            goto LAB_00168352;
          }
          iVar6 = (**(code **)(_gRestorableData + 0x98))(&cf_NetworkClientActive,0xff,piVar10);
          lVar8 = 0;
          lVar11 = 0;
LAB_00167ff1:
          if (iVar6 == 0) {
            if (*piVar10 == 0) {
              pcVar21 = &cf_InvalidpowerassertionIDassigned;
              goto LAB_0016895b;
            }
            bVar3 = false;
            _AMRSafeLog(7,&cf_Successfullyappliedpowerassertion);
            pcVar21 = (cfstringStruct *)0x0;
          }
          else {
            pcVar21 = (cfstringStruct *)
                      _AMRMakeString(&cf_Failedtocreatepowerassertionerror__d_continuing___,iVar6);
LAB_0016895b:
            bVar3 = true;
          }
        }
        else {
          local_e0 = piVar10;
          lVar8 = _CFDictionaryCreateMutable
                            (uVar19,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          puVar20 = local_d8;
          if (lVar8 != 0) {
            uVar19 = __AMDeviceProxyGetECID(*(undefined8 *)(local_d8 + 0x20));
            uVar7 = __AMDeviceProxyGetState(*(undefined8 *)(puVar20 + 0x20));
            lVar11 = _AMRMakeString(&cf_ECID_0x_llXDeviceState__d,uVar19,uVar7);
            if (lVar11 != 0) {
              _CFDictionarySetValue(lVar8,&cf_AssertType,&cf_NetworkClientActive);
              _CFDictionarySetValue(lVar8,&cf_AssertName,&cf_Restoring);
              _CFDictionarySetValue
                        (lVar8,&cf_FrameworkBundleID,&cf_com_apple_MobileDevice_MobileRestore);
              _CFDictionarySetValue(lVar8,&cf_Details,lVar11);
              _CFDictionarySetValue(lVar8,&cf_HumanReadableReason,&cf_Restoreinprogress);
              piVar10 = local_e0;
              iVar6 = (**(code **)(_gRestorableData + 0x90))(lVar8,local_e0);
              goto LAB_00167ff1;
            }
            pcVar21 = &cf_Failedtocreateassertiondescription;
            lVar11 = 0;
            goto LAB_0016895b;
          }
          pcVar21 = &cf_Failedtocreateassertiondictionary;
LAB_00168352:
          lVar8 = 0;
          bVar3 = true;
          lVar11 = 0;
        }
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
        _AMRSafeLogAndRelease(3,pcVar21);
        if (bVar3) goto LAB_00168042;
      }
      if (lVar8 != 0) {
        _CFRelease(lVar8);
      }
      if (lVar11 != 0) {
        _CFRelease(lVar11);
      }
      puVar20 = local_d8;
      lVar11 = *(long *)(local_d8 + 0x50);
      pcVar21 = &cf_Failedtoenqueuedeviceforrestoring;
      if (lVar11 == 0) goto LAB_00168844;
      bVar3 = false;
      lVar8 = _CFDictionaryCreateMutable
                        (local_f8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      if (lVar8 != 0) {
        _CFDictionarySetValue(lVar8,&cf_Device,puVar20);
        _CFDictionarySetValue(lVar8,&cf_RestoreOptions,lVar11);
        _dispatch_semaphore_wait
                  (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
        lVar11 = 0;
        do {
          lVar13 = _CFArrayGetCount(*(undefined8 *)(_gRestorableData + 0xb0));
          bVar3 = lVar13 <= lVar11;
          if (lVar13 <= lVar11) {
            _CFArrayAppendValue(*(undefined8 *)(_gRestorableData + 0xb0),lVar8);
            _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
            __AMRestorableDeviceRestoreQueueNotifyClientsOfPendingPosition();
            __AMRestorableDeviceRestoreQueueFlush();
            pcVar21 = (cfstringStruct *)0x0;
            goto LAB_00168173;
          }
          uVar19 = _CFArrayGetValueAtIndex(*(undefined8 *)(_gRestorableData + 0xb0),lVar11);
          cVar5 = _CFEqual(puVar20,uVar19);
          lVar11 = lVar11 + 1;
        } while (cVar5 == '\0');
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
        pcVar21 = &cf_Failedtoenqueuedeviceforrestoring;
LAB_00168173:
        _CFRelease(lVar8);
      }
    }
    lVar8 = local_c0;
    lVar11 = local_e8;
    _AMRSafeLogAndRelease(3,pcVar21);
    if (lVar8 != 0) goto LAB_001681d0;
  }
  if (local_d0 != 0) {
    _CFRelease();
  }
  if (lVar11 != 0) {
    _CFRelease(lVar11);
  }
  uVar19 = 4000;
  if (local_c8 != 0) {
    _CFRelease();
  }
LAB_0016820c:
  if (local_158 != 0) {
    _CFRelease();
  }
  if (!bVar3) {
    lVar8 = _AMRCreateErrorWithDomain(pcVar21,uVar19,&cf_com_apple_MobileDevice_MobileRestore,0);
    lVar11 = local_150;
    if (local_150 != 0 && puVar20 != (undefined *)0x0) {
      tVar12 = _time((time_t *)0x0);
      *(time_t *)(puVar20 + 0x40) = tVar12;
      lVar13 = _CFDictionaryCreateMutable
                         (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                          PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      _CFDictionarySetValue(lVar13,&cf_Status,&cf_Failed);
      _CFDictionarySetValue(lVar13,&cf_Error,lVar8);
      pvVar14 = (void *)__AMRestorableEventDataExtendedCreate(100,puVar20,lVar13,0,0,lVar11,lVar1);
      _dispatch_async_f(*(dispatch_queue_t *)(puVar20 + 0x90),pvVar14,
                        ___thr_AMRestorableDispatchEvent);
      if (lVar13 != 0) {
        _CFRelease(lVar13);
      }
    }
    if (param_1[3] != 0) {
      _CFRetain(lVar8);
      *(long *)param_1[3] = lVar8;
    }
    if (lVar8 != 0) {
      _CFRelease(lVar8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

