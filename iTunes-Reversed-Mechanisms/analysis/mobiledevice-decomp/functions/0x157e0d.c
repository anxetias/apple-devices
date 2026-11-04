// rea decompile_all
// name: ___thr_AMRestorableDetermineMuxDeviceTypeInBackground
// address: 0x157e0d
// body: available
// range: 0x157e0d-0x1581ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x158178 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDetermineMuxDeviceTypeInBackground(long *param_1)

{
  AMDeviceProxyCF<__AMRestoreModeDevice*> *pAVar1;
  long lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  __AMRestoreModeDevice *p_Var9;
  char *pcVar10;
  AMDeviceProxyCF<__AMRestoreModeDevice*> *this;
  long lVar11;
  void *context;
  cfstringStruct *pcVar12;
  char *pcVar13;
  long local_40;
  long local_38;
  
  _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
  lVar2 = *(long *)(_gRestorableData + 0x70);
  if (lVar2 != 0) {
    _CFRetain(lVar2);
  }
  _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
  p_Var9 = (__AMRestoreModeDevice *)
           _AMRestoreModeDeviceCreateFromUSBMuxProperties
                     (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,*param_1);
  if (p_Var9 == (__AMRestoreModeDevice *)0x0) {
    pcVar12 = &cf_Failedtocreatemuxed_modedevice;
    local_38 = 0;
    local_40 = 0;
    this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0;
  }
  else {
    uVar4 = _AMRestoreModeDeviceGetDeviceID(p_Var9);
    uVar5 = _AMRestoreModeDeviceGetLocationID(p_Var9);
    iVar6 = _AMRestoreModeDeviceGetProductID(p_Var9);
    iVar7 = _AMRestoreModeDeviceGetMuxedDeviceType(p_Var9);
    switch(iVar7) {
    case 1:
      this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)__AMDeviceProxyCreateRestoreOSProxy(p_Var9);
      local_38 = 0;
      break;
    case 2:
      this = operator_new(0x28);
      AMDeviceProxyCF<__AMRestoreModeDevice*>::AMDeviceProxyCF(this,p_Var9);
      *(undefined ***)this = &PTR__AMRamrodOSDeviceProxy_00448588;
      local_40 = 0;
      local_38 = 0;
      goto LAB_00158047;
    case 3:
      local_40 = _AMDeviceCreateFromProperties(*param_1);
      if (local_40 == 0) {
LAB_001580dd:
        pcVar12 = &cf_Failedtocreatemuxproxy;
        goto LAB_001580f2;
      }
      if ((lVar2 == 0) ||
         (cVar3 = _AMDeviceNotificationIsDeviceCanonical(*(undefined1 *)(lVar2 + 0x7d),local_40),
         cVar3 != '\0')) {
        this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)
               __AMDeviceProxyCreateBootedOSProxy(local_40);
        local_38 = 0;
        goto LAB_0015803e;
      }
      this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0;
      _AMRLog(7,&cf_IgnoringUSBMuxdeviceat0x_08x_supportsnewerprotocols_,uVar5);
      _AMRSafeLogAndRelease(3,0);
      local_38 = 0;
      goto LAB_00158105;
    case 4:
      iVar8 = ___isPlatformVersionAtLeast(1,10,0xd,0);
      if (iVar8 != 0) {
        iVar8 = 0xb;
        if (iVar6 != 0x1114) {
          iVar8 = (uint)(iVar6 != 0x8600) * 3 + 5;
        }
        pcVar10 = (char *)_remote_device_type_get_description(iVar8);
        pcVar13 = "";
        if (pcVar10 != (char *)0x0) {
          pcVar13 = pcVar10;
        }
        iVar6 = _remote_device_type_parse(pcVar13);
        if (iVar6 == iVar8) {
          _AMRLog(7,&cf_IgnoringUSBMuxdeviceat0x_08x_supportsRemoteServiceDiscovery_,uVar5);
          goto LAB_00158005;
        }
      }
      local_38 = _AMRBootedModeDeviceCreateWithLocationID(uVar5);
      if (local_38 == 0) goto LAB_001580dd;
      this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)
             __AMDeviceProxyCreateBootedLockdownlessOSProxy(local_38);
      break;
    default:
      _AMRLog(7,&cf_IgnoringUSBMuxdeviceat0x_08x_unsupporteddevicetype__d__,uVar5,iVar7);
LAB_00158005:
      pcVar12 = (cfstringStruct *)0x0;
LAB_001580f2:
      local_40 = 0;
      local_38 = 0;
      this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0;
      goto LAB_001580f6;
    }
    local_40 = 0;
LAB_0015803e:
    if (this == (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0) {
      pcVar12 = &cf_Failedtocreatemuxproxy;
      this = (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0;
    }
    else {
LAB_00158047:
      if (*(long *)PTR__kCFBooleanTrue_00441110 == 0) {
        _CFDictionaryRemoveValue(*(long *)(this + 0x18),&cf_DiscoveredByMux);
      }
      else {
        _CFDictionarySetValue();
      }
      lVar11 = __AMDeviceProxyGetECID(this);
      if (lVar11 == 0) {
        pcVar12 = &cf_FailedtogetECIDformuxdevice;
      }
      else {
        context = _calloc(1,0x20);
        if (context == (void *)0x0) {
          pcVar12 = &cf_Failedtoallocateargsforprocessingmuxevent;
        }
        else {
          *(bool *)context = iVar7 == 1;
          *(bool *)((long)context + 1) = iVar7 == 4;
          *(long *)((long)context + 0x10) = lVar11;
          *(undefined4 *)((long)context + 0x18) = uVar4;
          *(AMDeviceProxyCF<__AMRestoreModeDevice*> **)((long)context + 8) = this;
          LOCK();
          *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
          UNLOCK();
          _dispatch_async_f((dispatch_queue_t)param_1[2],context,(dispatch_function_t)param_1[1]);
          pcVar12 = (cfstringStruct *)0x0;
        }
      }
    }
  }
LAB_001580f6:
  _AMRSafeLogAndRelease(3,pcVar12);
  if (lVar2 != 0) {
LAB_00158105:
    _CFRelease(lVar2);
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease(local_38);
  }
  if (this != (AMDeviceProxyCF<__AMRestoreModeDevice*> *)0x0) {
                    /* WARNING (jumptable): Read-only address (ram,0x00000014) is written */
    LOCK();
    pAVar1 = this + 0x14;
    *(int *)pAVar1 = *(int *)pAVar1 + -1;
    UNLOCK();
    if (*(int *)pAVar1 == 0) {
      (**(code **)(*(long *)this + 8))(this);
    }
  }
  if (p_Var9 != (__AMRestoreModeDevice *)0x0) {
    _CFRelease(p_Var9);
  }
  if (*param_1 != 0) {
    _CFRelease();
  }
  if ((*(dispatch_object_t *)(param_1 + 2))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(param_1 + 2));
  }
  _free(param_1);
  return;
}

