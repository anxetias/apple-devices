// rea decompile_all
// name: _USBMuxConnectByPort
// address: 0xc3c24
// body: available
// range: 0xc3c24-0xc3f45 inclusive
// range: 0xc3f75-0xc406f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Exceeded maximum restarts with more pending */

int _USBMuxConnectByPort(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  int local_50;
  int local_4c;
  undefined8 local_48;
  ushort local_3a;
  int local_38;
  int local_34;
  
  local_3a = (ushort)param_2;
  local_48 = 0;
  if (param_3 == (int *)0x0 || (param_2 == 0 || param_1 == 0)) {
    return 0x16;
  }
  if (_imTooOldForThis == '\x01') {
    _imTooOldForThis = '\x01';
    return 0x49;
  }
  *param_3 = -1;
  iVar2 = _USBMuxIntNewSocket(&local_34);
  if (iVar2 != 0) {
    return iVar2;
  }
  uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar4 = _CFDictionaryCreateMutable
                    (uVar8,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar4 == 0) {
    _USBMuxDebugLog("%s:%d failed to allocate dictionary\n","USBMuxConnectByPort",0x238);
    _close(local_34);
    return 0xc;
  }
  _CFDictionaryAddValue(lVar4,_kUSBMuxParam_MessageType,_kUSBMuxMessageType_Connect);
  cVar1 = _SetDictionaryIntValue(lVar4,_kUSBMuxParam_DeviceID,param_1);
  if (cVar1 == '\0') {
    pcVar10 = "%s:%d Failed to specify DeviceID parameter\n";
    uVar8 = 0x242;
LAB_000c3e16:
    _USBMuxDebugLog(pcVar10,"USBMuxConnectByPort",uVar8);
    _close(local_34);
    _CFRelease(lVar4);
    return 0xc;
  }
  _USBMuxDebugLog("%s:%d Connecting to port %d (%02x, %02x)\n","USBMuxConnectByPort",0x248,local_3a,
                  (char)local_3a,local_3a >> 8);
  if (_isTranslated == '\x01') {
    local_3a = local_3a << 8 | local_3a >> 8;
  }
  lVar5 = _CFNumberCreate(uVar8,2,&local_3a);
  if (lVar5 == 0) {
    pcVar10 = "%s:%d Failed to specify Port parameter\n";
    uVar8 = 0x259;
    goto LAB_000c3e16;
  }
  _CFDictionaryAddValue(lVar4,_kUSBMuxParam_PortNumber,lVar5);
  _CFRelease(lVar5);
  iVar2 = _USBMuxSendDictionaryWithTimeout
                    (local_34,&local_50,lVar4,&_kClientMessageSendReceiveTimespec);
  _CFRelease(lVar4);
  if ((iVar2 != 0) ||
     (iVar2 = _USBMuxReceiveDictionaryWithTimeout
                        (local_34,&local_4c,&local_48,&_kClientMessageSendReceiveTimespec),
     uVar8 = local_48, local_38 = iVar2, iVar2 != 0)) {
    _close(local_34);
    return iVar2;
  }
  if (local_4c != local_50) {
    _USBMuxDebugLog("%s:%d transaction ids don\'t match\n","USBMuxConnectByPort",0x272);
    uVar8 = local_48;
    goto LAB_000c3ed0;
  }
  lVar4 = _CFDictionaryGetValue(local_48,_kUSBMuxParam_MessageType);
  if (lVar4 == 0) {
LAB_000c3e93:
    pcVar10 = "%s:%d response was not a result dictionary\n";
    uVar9 = 0x27b;
  }
  else {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if ((lVar5 != lVar6) ||
       (lVar4 = _CFStringCompare(lVar4,_kUSBMuxMessageType_Result,0), lVar4 != 0))
    goto LAB_000c3e93;
    cVar1 = _GetDictionarySIntValue(uVar8,_kUSBMuxParam_ResultNum,&local_38);
    if (cVar1 != '\0') {
      switch(local_38) {
      case 0xc3f1b:
                    /* WARNING: This code block may not be properly labeled as switch case */
        local_38 = 0;
        break;
      default:
        local_38 = -1;
        lVar4 = _CFDictionaryGetValue(uVar8,_kUSBMuxParam_ResultStr);
        pcVar10 = "";
        if (lVar4 != 0) {
          lVar5 = _CFGetTypeID(lVar4);
          lVar6 = _CFStringGetTypeID();
          if (lVar5 == lVar6) {
            uVar3 = _CFStringGetFastestEncoding(lVar4);
            pcVar7 = (char *)_CFStringGetCStringPtr(lVar4,uVar3);
            pcVar10 = "";
            if (pcVar7 != (char *)0x0) {
              pcVar10 = pcVar7;
            }
          }
        }
        _USBMuxDebugLog("%s:%d response indicated error: %d - %s\n","USBMuxConnectByPort",0x293,
                        local_38,pcVar10);
      }
      _CFRelease(uVar8);
      if ((local_38 == 0) &&
         ((local_38 = _USBMuxSetSocketBlockingMode(local_34,1), local_38 == 0 ||
          (_USBMuxDebugLog("%s:%d %s Failed to set blocking mode on socket: %d.\n",
                           "USBMuxConnectByPort",0x29a,"USBMuxConnectByPort",local_38),
          local_38 == 0)))) {
        *param_3 = local_34;
        return 0;
      }
      _USBMuxDebugLog("%s:%d failed: %d\n","USBMuxConnectByPort",0x29f);
      _close(local_34);
      return local_38;
    }
    pcVar10 = "%s:%d response didn\'t contain result value\n";
    uVar9 = 0x283;
  }
  _USBMuxDebugLog(pcVar10,"USBMuxConnectByPort",uVar9);
LAB_000c3ed0:
  _CFRelease(uVar8);
  _close(local_34);
  return 5;
}

