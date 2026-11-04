// rea decompile_all
// name: _DLGetListenerSocketFromLaunchd
// address: 0xcd18
// body: available
// range: 0xcd18-0xcff0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _DLGetListenerSocketFromLaunchd(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  timespec *timeout;
  ulong uVar6;
  timespec local_70;
  kevent local_60;
  ulong local_40;
  void *local_38;
  
  local_38 = (void *)0x0;
  local_40 = 0;
  iVar2 = _launch_activate_socket("Listeners");
  if (iVar2 == 0) {
    if (local_38 == (void *)0x0) {
      cVar1 = _DLLoggingEnabled(5);
      if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(5), cVar1 != '\0')) {
        pcVar5 = &cf_Nolistenersfound;
        goto LAB_0000cf1a;
      }
    }
    else {
      if ((1 < local_40) &&
         ((cVar1 = _DLLoggingEnabled(5), cVar1 != '\0' ||
          (cVar1 = _DLOutputEnabled(5), cVar1 != '\0')))) {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                ,"DLGetListenerSocketFromLaunchd",5);
      }
      iVar2 = _kqueue();
      if (iVar2 == -1) {
        cVar1 = _DLLoggingEnabled(5);
        if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(5), cVar1 != '\0')) {
          pcVar5 = &cf_Can_tsetupkqueue;
LAB_0000cf8e:
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                  ,"DLGetListenerSocketFromLaunchd",5,pcVar5);
        }
LAB_0000cf9a:
        _free(local_38);
      }
      else {
        if (local_40 != 0) {
          uVar6 = 0;
          do {
            local_60.ident = (uintptr_t)*(int *)((long)local_38 + uVar6 * 4);
            local_60.filter = -1;
            local_60.flags = 1;
            local_60._12_8_ = 0;
            local_60._20_8_ = 0;
            local_60.udata._4_4_ = 0;
            iVar3 = _kevent(iVar2,&local_60,1,(kevent *)0x0,0,(timespec *)0x0);
            if (iVar3 == -1) {
              cVar1 = _DLLoggingEnabled(5);
              if ((cVar1 == '\0') && (cVar1 = _DLOutputEnabled(5), cVar1 == '\0'))
              goto LAB_0000cf9a;
              pcVar5 = &cf_Failureonkeventcallforread;
              goto LAB_0000cf8e;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_40);
        }
        _free(local_38);
        local_38 = (void *)0x0;
        local_70.tv_sec = (__darwin_time_t)param_1;
        local_70.tv_nsec = 0;
        timeout = &local_70;
        if (param_1 == 0) {
          timeout = (timespec *)0x0;
        }
        iVar2 = _kevent(iVar2,(kevent *)0x0,0,&local_60,1,timeout);
        if (iVar2 == 0) {
          cVar1 = _DLLoggingEnabled(5);
          if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(5), cVar1 != '\0')) {
            pcVar5 = &cf_Timeoutwaitingforkevent;
LAB_0000cf1a:
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
                    ,"DLGetListenerSocketFromLaunchd",5,pcVar5);
            return 0;
          }
        }
        else {
          if (iVar2 != -1) {
            return (undefined4)local_60.ident;
          }
          cVar1 = _DLLoggingEnabled(5);
          if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(5), cVar1 != '\0')) {
            pcVar5 = &cf_Failureonkeventcallforsocket;
            goto LAB_0000cf1a;
          }
        }
      }
    }
  }
  else {
    cVar1 = _DLLoggingEnabled(3);
    if ((cVar1 != '\0') || (cVar1 = _DLOutputEnabled(3), cVar1 != '\0')) {
      pcVar4 = _strerror(iVar2);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakkugDLiE0SsopHmzCut7SBOwFmVrbK9VUierk/Library/Caches/com.apple.xbs/Sources/DeviceLink/Utility/DeviceLinkUtility.c"
              ,"DLGetListenerSocketFromLaunchd",3,"Failed to launch_activate_socket: %d, %s",iVar2,
              pcVar4);
      return 0;
    }
  }
  return 0;
}

