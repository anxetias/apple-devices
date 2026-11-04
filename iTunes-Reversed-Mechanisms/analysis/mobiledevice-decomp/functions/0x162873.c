// rea decompile_all
// name: ___thr_AMMuxedDeviceDisconnected
// address: 0x162873
// body: available
// range: 0x162873-0x162a1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1629b3 to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1629e2 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMMuxedDeviceDisconnected(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    _AMRSafeLog(3,&cf___,&cf_Can_thandlenilargsformuxdisconnect);
    _CFRelease(&cf_Can_thandlenilargsformuxdisconnect);
    return;
  }
  iVar5 = *param_1;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    _AMRSafePrintLog(5,&cf_Entered__s_mux_device__u,"__thr_AMMuxedDeviceDisconnected",iVar5);
  }
  lVar1 = __AMRestoreGetECIDForMuxID(iVar5);
  if (lVar1 == 0) {
    pcVar4 = &cf_Can_thandledisconnectwithinvalidecid;
  }
  else {
    lVar2 = __AMRestorableCreateKeyForDeviceWithECID(lVar1);
    if (lVar2 != 0) {
      _AMRLog(7,&cf_MuxeddevicedisconnectedwithECID_0x_lX,lVar1);
      _dispatch_semaphore_wait
                (*(dispatch_semaphore_t *)(_gRestorableData + 0x20),0xffffffffffffffff);
      lVar1 = _CFDictionaryGetValue(*(undefined8 *)(_gRestorableData + 0x38),lVar2);
      if (lVar1 == 0) {
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
        pcVar4 = &cf_Can_thandledevicedisconnectionsincethisdeviceisnottracked;
        lVar1 = 0;
      }
      else {
        _CFRetain(lVar1);
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(_gRestorableData + 0x20));
        if (*(long *)(lVar1 + 0x20) == 0) {
          pcVar4 = &cf_Can_thandledevicedisconnectionsincedevicelacksproxy_;
        }
        else {
          lVar3 = _CFDictionaryGetValue
                            (*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x18),&cf_DiscoveredByMux);
          if (lVar3 == 0) {
            pcVar4 = &cf_Ignoringmuxdisconnectnotificationaboutnon_muxdevice_;
          }
          else {
            __AMRestorableDeviceHandleDisconnection(lVar1);
            pcVar4 = (cfstringStruct *)0x0;
          }
        }
      }
      _AMRSafeLogAndRelease(3,pcVar4);
      _CFRelease(lVar2);
      if (lVar1 != 0) {
        _CFRelease(lVar1);
      }
      goto LAB_001629a6;
    }
    pcVar4 = &cf_Failedtocreateecidkeyformuxdevice;
  }
  _AMRSafeLogAndRelease(3,pcVar4);
LAB_001629a6:
  _free(param_1);
  return;
}

