// rea decompile_all
// name: _USBMuxWaitForTimeoutOrEvent
// address: 0xc645b
// body: available
// range: 0xc645b-0xc65a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _USBMuxWaitForTimeoutOrEvent(int param_1,int param_2,__darwin_time_t *param_3)

{
  int kq;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int16_t iVar4;
  kevent local_58;
  timespec local_38;
  
  if (param_2 == 1) {
    iVar4 = -1;
  }
  else {
    if (param_2 != 2) {
      _USBMuxDebugLog("%s:%d Unknown muxWait value: %d\n","USBMuxWaitForTimeoutOrEvent",0x61,param_2
                     );
      return 0x16;
    }
    iVar4 = -2;
  }
  if (param_3 == (__darwin_time_t *)0x0) {
    iVar1 = 0;
  }
  else {
    kq = _kqueue();
    if (kq == -1) {
      piVar2 = ___error();
      iVar1 = *piVar2;
      pcVar3 = _strerror(iVar1);
      _USBMuxDebugLog("%s:%d kqueue failed: %d - %s\n","USBMuxWaitForTimeoutOrEvent",0x6d,iVar1,
                      pcVar3);
    }
    else {
      local_38.tv_sec = *param_3;
      local_38.tv_nsec = param_3[1];
      local_58.ident = (uintptr_t)param_1;
      local_58.flags = 0x11;
      local_58._12_8_ = 0;
      local_58._20_8_ = 0;
      local_58.udata._4_4_ = 0;
      local_58.filter = iVar4;
      iVar1 = _kevent(kq,&local_58,1,&local_58,1,&local_38);
      if (iVar1 == 0) {
        iVar1 = 0x3c;
      }
      else if (iVar1 == -1) {
        piVar2 = ___error();
        iVar1 = *piVar2;
        pcVar3 = _strerror(iVar1);
        _USBMuxDebugLog("%s:%d kevent failed: %d - %s\n","USBMuxWaitForTimeoutOrEvent",0x79,iVar1,
                        pcVar3);
      }
      else {
        iVar1 = 0;
      }
      _close(kq);
    }
  }
  return iVar1;
}

