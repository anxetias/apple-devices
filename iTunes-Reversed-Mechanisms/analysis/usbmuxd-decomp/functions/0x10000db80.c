// rea decompile_all
// name: FUN_10000db80
// address: 0x10000db80
// body: available
// range: 0x10000db80-0x10000de26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000de22 to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000db80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 local_a0;
  undefined1 local_9a [18];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10001c070;
  *param_1 = -1;
  iVar1 = _socket(1,1,0);
  if (iVar1 < 0) {
    piVar4 = ___error();
    iVar2 = *piVar4;
    piVar4 = ___error();
    iVar1 = *piVar4;
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    FUN_10000d8c6("%s:%d socket failed: %d - %s\n","USBMuxIntNewSocket",0x9c,iVar1,pcVar5);
  }
  else {
    local_a0 = 0x10400;
    iVar2 = _setsockopt(iVar1,0xffff,0x1001,&local_a0,4);
    if (iVar2 != 0) {
      piVar4 = ___error();
      iVar2 = *piVar4;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      FUN_10000d8c6("%s:%d setsockopt SO_SNDBUF failed: %d - %s\n","USBMuxIntNewSocket",0xa6,iVar2,
                    pcVar5);
    }
    local_a0 = 0x10400;
    iVar2 = _setsockopt(iVar1,0xffff,0x1002,&local_a0,4);
    if (iVar2 != 0) {
      piVar4 = ___error();
      iVar2 = *piVar4;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      FUN_10000d8c6("%s:%d setsockopt SO_RCVBUF failed: %d - %s\n","USBMuxIntNewSocket",0xac,iVar2,
                    pcVar5);
    }
    local_a0 = 1;
    iVar2 = _setsockopt(iVar1,0xffff,0x1022,&local_a0,4);
    if (iVar2 != 0) {
      piVar4 = ___error();
      iVar2 = *piVar4;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      FUN_10000d8c6("%s:%d setsockopt SO_NOSIGPIPE failed: %d - %s\n","USBMuxIntNewSocket",0xb5,
                    iVar2,pcVar5);
    }
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_9a[2] = '\0';
    local_9a[3] = '\0';
    local_9a[4] = '\0';
    local_9a[5] = '\0';
    local_9a[6] = '\0';
    local_9a[7] = '\0';
    local_9a[8] = '\0';
    local_9a[9] = '\0';
    local_9a._10_8_ = 0;
    local_38 = 0;
    local_9a[0] = 'j';
    local_9a[1] = '\x01';
    ___strlcpy_chk(local_9a + 2,"/var/run/usbmuxd",0x68,0x68);
    iVar2 = _connect(iVar1,(sockaddr *)local_9a,0x6a);
    if (iVar2 == 0) {
      iVar2 = 0;
      iVar3 = FUN_10000de27(iVar1,0);
      if (iVar3 != 0) {
        FUN_10000d8c6("%s:%d Failed to set non-blocking on socket.\n","USBMuxIntNewSocket",0xcb);
      }
      *param_1 = iVar1;
    }
    else {
      piVar4 = ___error();
      iVar2 = *piVar4;
      piVar4 = ___error();
      iVar3 = *piVar4;
      piVar4 = ___error();
      pcVar5 = _strerror(*piVar4);
      FUN_10000d8c6("%s:%d connect failed: %d - %s\n","USBMuxIntNewSocket",0xc2,iVar3,pcVar5);
      FUN_10000d8c6("%s:%d confirm that MobileDevice/usbmuxd is installed and running",
                    "USBMuxIntNewSocket",0xc3);
      _close(iVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

