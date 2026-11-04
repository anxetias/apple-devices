// rea decompile_all
// name: _RPCreateSocketForServiceConnection
// address: 0x19593b
// body: available
// range: 0x19593b-0x195bbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _RPCreateSocketForServiceConnection(__0 *param_1,undefined8 param_2,__CFString *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  RPSocket_srv *this;
  long lVar4;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar5;
  _AMDServiceConnection *local_30;
  
  uVar5 = (undefined4)((ulong)in_stack_ffffffffffffffc0 >> 0x20);
  local_30 = (_AMDServiceConnection *)0x0;
  if (RPCreateSocketForServiceConnection::once != -1) {
    _RPCreateSocketForServiceConnection_cold_1();
  }
  if (_ld_AMDeviceCreateCopy == (code *)0x0) {
    return 0;
  }
  if (_ld_AMDeviceConnect == (code *)0x0) {
    return 0;
  }
  if (_ld_AMDeviceStartSession == (code *)0x0) {
    return 0;
  }
  if (_ld_AMDeviceSecureStartService == (code *)0x0) {
    return 0;
  }
  if (_ld_AMDeviceStopSession == (code *)0x0) {
    return 0;
  }
  if (_ld_AMDeviceDisconnect == (code *)0x0) {
    return 0;
  }
  lVar2 = (*_ld_AMDeviceCreateCopy)(param_2);
  iVar1 = (*_ld_AMDeviceConnect)(lVar2);
  if (iVar1 != 0) {
    if (((param_1 == (__0 *)0x0) && (param_1 = (__0 *)_getDefaultLogCtx(), param_1 == (__0 *)0x0))
       || (*(int *)(param_1 + 0x10) < 3)) {
      lVar4 = 0;
    }
    else {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      lVar4 = 0;
      _LogMsg(3,param_1,uVar3,0x5f6,"RPCreateSocketForServiceConnection",0,&cf_AMDeviceConnecterr_d,
              CONCAT44(uVar5,iVar1));
    }
    goto LAB_00195b96;
  }
  iVar1 = (*_ld_AMDeviceStartSession)(lVar2);
  if (iVar1 == 0) {
    iVar1 = (*_ld_AMDeviceSecureStartService)(lVar2,param_3,0,&local_30);
    if (iVar1 == 0) {
      this = operator_new(0x198);
      RPSocket_srv::RPSocket_srv(this,local_30,param_3);
      lVar4 = *(long *)(this + 8);
      if (lVar4 == 0) goto LAB_00195b73;
      RPSocket::set_log_ctx(*(RPSocket **)(lVar4 + 0x10),param_1);
    }
    else if (((param_1 == (__0 *)0x0) &&
             (param_1 = (__0 *)_getDefaultLogCtx(), param_1 == (__0 *)0x0)) ||
            (*(int *)(param_1 + 0x10) < 3)) {
LAB_00195b73:
      lVar4 = 0;
    }
    else {
      uVar3 = _baseName(
                       "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                       );
      lVar4 = 0;
      _LogMsg(3,param_1,uVar3,0x604,"RPCreateSocketForServiceConnection",0,
              &cf_AMDeviceSecureStartService____err_d,param_3,iVar1);
    }
    (*_ld_AMDeviceStopSession)(lVar2);
  }
  else if (((param_1 == (__0 *)0x0) && (param_1 = (__0 *)_getDefaultLogCtx(), param_1 == (__0 *)0x0)
           ) || (*(int *)(param_1 + 0x10) < 3)) {
    lVar4 = 0;
  }
  else {
    uVar3 = _baseName(
                     "/AppleInternal/Library/BuildRoots/4~CajzugCW_CHbHZ7ezWZZu5dUw8doqNra0ZNDcec/Library/Caches/com.apple.xbs/Sources/PurpleReverseProxy_host/Common/RPSocket.cpp"
                     );
    lVar4 = 0;
    _LogMsg(3,param_1,uVar3,0x5fd,"RPCreateSocketForServiceConnection",0,
            &cf_AMDeviceStartSessionerr_d,CONCAT44(uVar5,iVar1));
  }
  (*_ld_AMDeviceDisconnect)(lVar2);
  if (local_30 != (_AMDServiceConnection *)0x0) {
    _CFRelease();
  }
LAB_00195b96:
  if (lVar2 != 0) {
    _CFRelease(lVar2);
  }
  return lVar4;
}

