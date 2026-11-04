// rea decompile_all
// name: ___thr_AMRestorableDeviceAdvanceStateMachineAsync
// address: 0x159858
// body: available
// range: 0x159858-0x159e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x159e1f to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceAdvanceStateMachineAsync(long *param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  AMDeviceProxy *this;
  long lVar4;
  long *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  undefined1 uVar17;
  int *piVar18;
  int *piVar19;
  bool bVar20;
  long local_40;
  long local_38;
  
  local_40 = 0;
  if (param_1 == (long *)0x0) {
    __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
    _AMRSafeLog(3,&cf___,&cf_Can_tadvancestatemachinewithNULLargs);
    _CFRelease(&cf_Can_tadvancestatemachinewithNULLargs);
    return;
  }
  lVar13 = *param_1;
  if (lVar13 == 0) {
    pcVar16 = &cf_Can_trestoreNULLdevice;
  }
  else {
    if (param_1[1] != 0) {
      if (*(long *)(lVar13 + 0x10) == 0) {
        local_38 = 0;
      }
      else {
        lVar9 = _CFErrorCopyDescription();
        _AMRSafeLog(7,&cf_Removingpreviouserror___,lVar9);
        lVar13 = *param_1;
        local_38 = lVar9;
        if (*(long *)(lVar13 + 0x10) != 0) {
          _CFRelease();
          lVar13 = *param_1;
        }
      }
      *(undefined8 *)(lVar13 + 0x10) = 0;
      __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78));
      lVar13 = *param_1;
      if (((*(dispatch_object_t *)(lVar13 + 0xa0))._os_obj != (_os_object_s *)0x0) &&
         (*(char *)(lVar13 + 0xb0) == '\x01')) {
        _dispatch_suspend(*(dispatch_object_t *)(lVar13 + 0xa0));
        *(undefined1 *)(lVar13 + 0xb0) = 0;
        lVar13 = *param_1;
      }
      lVar9 = *(long *)(lVar13 + 0x18);
      lVar3 = *(long *)(lVar13 + 0x50);
      this = (AMDeviceProxy *)param_1[1];
      iVar8 = __AMDeviceProxyGetState();
      cVar6 = __AMRestorableStateMachineIsComplete(lVar9);
      if (cVar6 == '\0') {
        piVar18 = (int *)(*(long *)(lVar9 + 0x18) + 0xc);
        lVar10 = _CFDictionaryGetValue(lVar3);
        if (lVar10 != *(long *)PTR__kCFBooleanTrue_00441110) goto LAB_0015997d;
        if (**(int **)(lVar9 + 0x18) == 1) {
          bVar20 = false;
        }
        else {
          bVar20 = *piVar18 == 1;
        }
      }
      else {
        piVar18 = (int *)0x0;
LAB_0015997d:
        bVar20 = false;
      }
      lVar10 = local_38;
      piVar19 = *(int **)(lVar9 + 0x18);
      iVar2 = *piVar19;
      if (iVar2 == iVar8) {
LAB_00159995:
        if (*(char *)(lVar9 + 0x2c) == '\x01') {
          _AMRSafeLogAndRelease(3,0);
          uVar15 = 0xfab;
          pcVar16 = &cf_Can_tadvancetonextstepsincestatemachineisalreadyinlaststate;
          lVar10 = local_38;
          goto LAB_00159cce;
        }
        if (piVar19 == *(int **)(lVar9 + 0x10)) {
          iVar8 = piVar19[1];
          _AMRSafeLogAndRelease(3,0);
          if (iVar8 == 0) {
            uVar15 = 0xfab;
            pcVar16 = &cf_Can_tadvancetonextstepsincestatemachineisalreadyinlaststate;
            lVar10 = local_38;
            goto LAB_00159cce;
          }
        }
        else {
          _AMRSafeLogAndRelease(3,0);
        }
        pbVar1 = (byte *)(lVar9 + 0x2c);
        lVar10 = *(long *)(lVar9 + 0x18);
        piVar18 = (int *)(lVar10 + 4);
        *piVar18 = *piVar18 + -1;
        if (*piVar18 == 0) {
          if (*pbVar1 == 1) {
            _AMRSafeLogAndRelease(3,0);
          }
          else {
            lVar4 = *(long *)(lVar9 + 0x10);
            _AMRSafeLogAndRelease(3,0);
            if (lVar10 != lVar4) {
              *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 0xc;
            }
          }
        }
        if (!bVar20) {
          local_40 = 0;
          *(code **)(this + 8) = __AMRestorableDeviceProxyRestoreCallbackHandler;
          if (lVar3 == 0) {
            pcVar16 = &cf_Can_trestoredevicewithNULLrestoreoptions;
LAB_00159c25:
            lVar10 = local_38;
            local_40 = _AMRCreateErrorWithDomain
                                 (pcVar16,0xfaa,&cf_com_apple_MobileDevice_MobileRestore,0);
          }
          else {
            iVar8 = __AMDeviceProxyGetState(this);
            if (iVar8 - 1U < 6) {
              pcVar16 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)(iVar8 - 1U) * 8);
            }
            else {
              pcVar16 = &cf_Unknown;
            }
            cVar6 = (**(code **)(*(long *)this + 0x68))(this,lVar3,lVar13,&local_40);
            pcVar12 = &cf_Failed;
            if (cVar6 != '\0') {
              pcVar12 = &cf_Successful;
            }
            _AMRLog(7,&cf_Finished__RestorePhase___,pcVar16,pcVar12);
            pcVar16 = (cfstringStruct *)0x0;
            if (cVar6 != '\0') {
              AMDeviceProxy::LogAndRelease(this,3,(__CFString *)0x0);
              *pbVar1 = 0;
              uVar17 = 1;
              lVar10 = local_38;
              goto LAB_00159cfd;
            }
            lVar10 = local_38;
            if (local_40 == 0) goto LAB_00159c25;
          }
          AMDeviceProxy::LogAndRelease(this,3,(__CFString *)pcVar16);
          uVar15 = 0xfaa;
          pcVar16 = (cfstringStruct *)0x0;
          goto LAB_00159cce;
        }
        bVar7 = _AMRestorableDevicePutIntoDFU(lVar13);
        *pbVar1 = bVar7 ^ 1;
        uVar15 = 0xfaa;
        uVar17 = 1;
        pcVar16 = (cfstringStruct *)0x0;
        lVar10 = local_38;
        if (bVar7 == 0) goto LAB_00159cd1;
      }
      else {
        if ((cVar6 == '\0' && (char)piVar19[2] == '\0') && (*piVar18 == iVar8)) {
          *(int **)(lVar9 + 0x18) = piVar18;
          piVar19 = piVar18;
          goto LAB_00159995;
        }
        uVar14 = iVar8 - 1;
        pcVar12 = &cf_Unknown;
        pcVar16 = &cf_Unknown;
        if (uVar14 < 6) {
          pcVar16 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)uVar14 * 8);
        }
        if (iVar2 - 1U < 6) {
          pcVar12 = *(cfstringStruct **)(&DAT_0044a380 + (ulong)(iVar2 - 1U) * 8);
        }
        pcVar11 = &cf_ProbablyforcedintoDFUmodeexternally;
        if ((iVar8 == 1) || (iVar8 == 6)) {
LAB_00159a21:
          pcVar16 = (cfstringStruct *)
                    _AMRMakeString(&cf_Unexpecteddevicestate____expected________,pcVar16,pcVar12,
                                   pcVar11);
          switch(uVar14) {
          case 0:
            uVar15 = 0xfae;
            break;
          case 1:
            goto switchD_00159a4d_caseD_1;
          case 2:
            uVar15 = 0xfaf;
            break;
          case 3:
            uVar15 = 0xfb0;
            break;
          case 4:
            uVar15 = 0xfc6;
            break;
          default:
            uVar15 = 0xfac;
          }
        }
        else {
          if ((iVar8 == 2) && (iVar2 == 4)) {
            pcVar11 = &cf_ProbablycausedbycorruptionorpanicintheinstalledOS;
          }
          else if ((iVar8 == 2) && (iVar2 == 3)) {
            pcVar11 = &cf_Probablycausedbycorruptionorpanicinthebundle_srestored;
          }
          else {
            if ((iVar8 != 2) || (iVar2 != 5)) {
              pcVar11 = &cf___;
              if (iVar8 - 3U < 2) {
                pcVar11 = &cf_ProbablycausedbyatransientUSBlayerissuecausingmissingorduplicateevents
                ;
              }
              goto LAB_00159a21;
            }
            pcVar11 = &cf_Probablycausedbycorruptionorpanicinthebundle_sramrod;
          }
          pcVar16 = (cfstringStruct *)
                    _AMRMakeString(&cf_Unexpecteddevicestate____expected________,pcVar16,pcVar12,
                                   pcVar11);
switchD_00159a4d_caseD_1:
          uVar15 = 0xfad;
        }
LAB_00159cce:
        *(undefined1 *)(lVar9 + 0x2c) = 1;
LAB_00159cd1:
        __AMRestorableStateMachinePrint(lVar9);
        if (local_40 == 0) {
          uVar17 = 0;
          local_40 = _AMRCreateErrorWithDomain
                               (pcVar16,uVar15,&cf_com_apple_MobileDevice_MobileRestore,0);
        }
        else {
          uVar17 = 0;
        }
      }
LAB_00159cfd:
      _AMRSafeLogAndRelease(3,pcVar16);
      *(undefined1 *)(param_1 + 2) = uVar17;
      param_1[3] = local_40;
      _dispatch_sync_f(*(dispatch_queue_t *)(_gRestorableData + 0x18),param_1,
                       ___thr_AMRestorableDeviceAdvanceStateMachineAsyncFinished);
      param_1[3] = 0;
      __AMRestorableDeviceWatcherResume(*param_1 + 0xa0);
      pcVar16 = (cfstringStruct *)0x0;
      goto LAB_00159d4f;
    }
    pcVar16 = &cf_Can_trestorewithNULLproxy;
  }
  lVar10 = 0;
LAB_00159d4f:
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
  _AMRSafeLogAndRelease(3,pcVar16);
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    LOCK();
    piVar18 = (int *)((long)plVar5 + 0x14);
    *piVar18 = *piVar18 + -1;
    UNLOCK();
    if (*piVar18 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if (*param_1 != 0) {
    _CFRelease();
  }
  _free(param_1);
  return;
}

