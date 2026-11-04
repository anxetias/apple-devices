// rea decompile_all
// name: _SocketStreamHandlerConnect
// address: 0x8718
// body: available
// range: 0x8718-0x89b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x87ef to 0xa706 _DLSetStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SocketStreamHandlerConnect(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_3c = 0;
  local_38 = param_3;
  if (*(long *)(param_1 + 0x30) != 0) {
    _SocketDelete();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar4 = _CFDictionaryGetValue(param_2,&cf_DLInfoHostnameKey);
  lVar5 = _CFDictionaryGetValue(param_2,&cf_DLInfoMobileDeviceRefKey);
  lVar6 = _CFDictionaryGetValue(param_2,&cf_DLInfoPortKey);
  lVar7 = _CFDictionaryGetValue(param_2,&cf_DLInfoServiceNameKey);
  uVar8 = _CFDictionaryGetValue(param_2,&cf_DLInfoLockdownOptions);
  lVar9 = _CFDictionaryGetValue(param_2,&cf_DLInfoMuxDeviceIdKey);
  if (lVar9 != 0) {
    pcVar10 = (cfstringStruct *)
              _CFStringCreateWithFormat
                        (0,0,&cf_SocketStreamHandlerConnect_Connectionviadirectusbmuxisdeprecated_);
    goto LAB_000087e1;
  }
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      pcVar10 = &cf_SocketStreamHandlerConnect_Nomuxdeviceid_AMDeviceRef_orhostnameininfodictionary;
      goto LAB_000087e1;
    }
    iVar3 = _AMDeviceIsValid(lVar5);
    if (iVar3 == 0) {
      _CFRelease(lVar5);
      pcVar10 = &cf_SocketStreamHandlerConnect_AMDeviceRefdataobjectininfodictionaryisinvalid;
      goto LAB_000087e1;
    }
    pcVar11 = "localhost";
  }
  else {
    pcVar11 = (char *)_DLCreateCStringFromCFString(lVar4);
    if (pcVar11 == (char *)0x0) {
      pcVar10 = (cfstringStruct *)
                _CFStringCreateWithFormat
                          (0,0,&cf_SocketStreamHandlerConnect_Hostnameininfodictionaryisinvalid___,
                           lVar4);
      goto LAB_000087e1;
    }
    lVar5 = 0;
  }
  if (lVar6 == 0) {
    if (lVar7 == 0) {
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
      pcVar10 = &cf_SocketStreamHandlerConnect_Noport_serviceininfodictionary;
LAB_000087e1:
      uVar8 = _DLSetStatus(0xfffffffd,local_38,pcVar10);
      return uVar8;
    }
  }
  else {
    cVar2 = _CFNumberGetValue(lVar6,9,&local_3c);
    if (cVar2 == '\0') {
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
      pcVar10 = (cfstringStruct *)
                _CFStringCreateWithFormat
                          (0,0,&cf_SocketStreamHandlerConnect_Portininfodictionaryisinvalid___,lVar6
                          );
      uVar8 = 0xfffffffd;
      goto LAB_0000899d;
    }
  }
  if (lVar5 == 0) {
    lVar4 = _SocketConnect(pcVar11,local_3c,uVar8);
  }
  else {
    lVar4 = _SocketConnectLockdownService(lVar5,lVar7);
  }
  *(long *)(param_1 + 0x30) = lVar4;
  if (lVar4 == 0) {
    pcVar10 = (cfstringStruct *)
              _CFStringCreateWithFormat(0,0,&cf_SocketStreamHandlerConnect_Can_tcreatesocket);
  }
  else {
    uVar1 = *(uint *)(lVar4 + 4);
    uVar12 = (ulong)uVar1;
    if (uVar12 == 0) {
      return 0;
    }
    uVar8 = *(undefined8 *)(&_SocketErrorStrings + uVar12 * 8);
    _SocketDelete(lVar4);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (uVar12 == 9) {
      pcVar10 = &cf_SocketStreamHandlerConnect_Cannotconnect_thedeviceislocked;
      uVar8 = 0xfffffffb;
      goto LAB_0000899d;
    }
    if (uVar1 == 8) {
      pcVar10 = &cf_SocketStreamHandlerConnect_Cannotconnect_wearenotpairedwiththisdevice;
      uVar8 = 0xfffffffc;
      goto LAB_0000899d;
    }
    pcVar10 = (cfstringStruct *)
              _CFStringCreateWithFormat
                        (0,0,&cf_SocketStreamHandlerConnect_Can_tconnecttohost_Socketerror_d__s_,
                         uVar1,uVar8);
  }
  uVar8 = 0xffffffff;
LAB_0000899d:
  uVar8 = _DLSetStatus(uVar8,local_38,pcVar10);
  return uVar8;
}

