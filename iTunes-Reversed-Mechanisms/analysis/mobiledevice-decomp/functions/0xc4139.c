// rea decompile_all
// name: _USBMuxListenerCreateFiltered
// address: 0xc4139
// body: available
// range: 0xc4139-0xc45eb inclusive
// range: 0xc45f3-0xc461f inclusive
// range: 0xc4648-0xc46d1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Exceeded maximum restarts with more pending */

int _USBMuxListenerCreateFiltered(uint *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  int *piVar16;
  int local_68;
  int local_64;
  long local_60;
  int *local_58;
  int local_4c;
  long local_48;
  long local_40;
  int local_34;
  
  local_60 = 0;
  local_4c = 0;
  if (param_1 == (uint *)0x0 || param_3 == (undefined8 *)0x0) {
    _USBMuxDebugLog("%s:%d Invalid parameters.\n","USBMuxListenerCreateFiltered",0x2d3);
    return 0x16;
  }
  if (_imTooOldForThis == '\x01') {
    _USBMuxDebugLog("%s:%d Server incompatible version. We\'re using %d\n",
                    "USBMuxListenerCreateFiltered",0x2d9,1);
    _imTooOldForThis = '\x01';
    return 0x49;
  }
  *param_3 = 0;
  puVar8 = _malloc(0xa0);
  if (puVar8 == (undefined4 *)0x0) {
    _USBMuxDebugLog("%s:%d Failed to allocate listener.\n","USBMuxListenerCreateFiltered",0x2e3);
    return 0xc;
  }
  *(undefined8 *)(puVar8 + 0x1d) = 0;
  *(undefined8 *)(puVar8 + 0x1f) = 0;
  *(undefined8 *)(puVar8 + 0x19) = 0;
  *(undefined8 *)(puVar8 + 0x1b) = 0;
  *(undefined8 *)(puVar8 + 0x15) = 0;
  *(undefined8 *)(puVar8 + 0x17) = 0;
  *(undefined8 *)(puVar8 + 0x11) = 0;
  *(undefined8 *)(puVar8 + 0x13) = 0;
  *(undefined8 *)(puVar8 + 0xd) = 0;
  *(undefined8 *)(puVar8 + 0xf) = 0;
  *(undefined8 *)(puVar8 + 9) = 0;
  *(undefined8 *)(puVar8 + 0xb) = 0;
  *(undefined8 *)(puVar8 + 5) = 0;
  *(undefined8 *)(puVar8 + 7) = 0;
  *(undefined8 *)(puVar8 + 1) = 0;
  *(undefined8 *)(puVar8 + 3) = 0;
  puVar8[0x21] = 0;
  *puVar8 = 0xdeadbeef;
  uVar1 = *param_1;
  puVar8[2] = uVar1;
  *(undefined8 *)(puVar8 + 0xe) = *(undefined8 *)(param_1 + 2);
  if ((3 < uVar1) || (uVar1 == 1)) {
    _USBMuxDebugLog("%s:%d Unsupported version.\n","USBMuxListenerCreateFiltered",0x30b);
    _free(puVar8);
    return 0x2d;
  }
  piVar16 = puVar8 + 1;
  uVar2 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(puVar8 + 8) = uVar2;
  uVar1 = param_1[9];
  uVar3 = param_1[10];
  uVar4 = param_1[0xb];
  puVar8[10] = param_1[8];
  puVar8[0xb] = uVar1;
  puVar8[0xc] = uVar3;
  puVar8[0xd] = uVar4;
  *(undefined8 *)(puVar8 + 0x10) = 0;
  *(undefined8 *)(puVar8 + 0x26) = 0;
  if (param_2 != 0) {
    local_34 = 0;
    cVar5 = _GetDictionaryUIntValue(param_2,_kUSBMuxProperty_LinkType);
    if (cVar5 == '\0') {
      _USBMuxDebugLog("%s:%d No Link Type Filter Set\n","USBMuxListenerCreateFiltered",0x31c);
    }
    local_4c = local_34;
    cVar5 = _GetDictionaryUIntValue(param_2,_kUSBMuxProperty_LocationID,puVar8 + 0x26);
    if (cVar5 == '\0') {
      _USBMuxDebugLog("%s:%d No LocationID Filter Set\n","USBMuxListenerCreateFiltered",0x322);
    }
  }
  _USBMuxStartWSA();
  iVar6 = _USBMuxIntNewSocket(piVar16);
  if (iVar6 != 0) {
    _USBMuxDebugLog("%s:%d USBMuxIntNewSocket failed.\n","USBMuxListenerCreateFiltered",0x32c);
    _free(puVar8);
    return iVar6;
  }
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  lVar9 = _CFDictionaryCreateMutable
                    (uVar2,3,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  if (lVar9 == 0) {
    _USBMuxDebugLog("%s:%d failed to allocate dictionary\n","USBMuxListenerCreateFiltered",0x336);
    local_34 = 0xc;
    lVar9 = 0;
    lVar10 = 0;
    goto LAB_000c44e0;
  }
  lVar10 = _CFNumberCreate(uVar2,9,puVar8 + 2);
  local_58 = piVar16;
  lVar11 = _CFNumberCreate(uVar2,9,&local_4c);
  piVar16 = local_58;
  local_40 = lVar10;
  _CFDictionaryAddValue(lVar9,_kUSBMuxParam_kLibUSBMuxVersion,lVar10);
  _CFDictionaryAddValue(lVar9,_kUSBMuxParam_MessageType,_kUSBMuxMessageType_Listen);
  local_48 = lVar11;
  _CFDictionaryAddValue(lVar9,_kUSBMuxParam_ConnType,lVar11);
  iVar6 = _USBMuxSendDictionaryWithTimeout
                    (*piVar16,&local_68,lVar9,&_kClientMessageSendReceiveTimespec);
  local_34 = iVar6;
  _CFRelease(lVar9);
  if (iVar6 != 0) {
    _USBMuxDebugLog("%s:%d Failed to send request.\n","USBMuxListenerCreateFiltered",0x346);
    lVar9 = local_48;
    lVar10 = local_40;
    goto LAB_000c44e0;
  }
  local_34 = _USBMuxReceiveDictionaryWithTimeout
                       (*piVar16,&local_64,&local_60,&_kClientMessageSendReceiveTimespec);
  lVar10 = local_40;
  lVar9 = local_48;
  lVar11 = local_60;
  if (local_34 != 0) {
    _USBMuxDebugLog("%s:%d Failed to receive response.\n","USBMuxListenerCreateFiltered",0x34e);
    goto LAB_000c44e0;
  }
  if ((local_68 == local_64) &&
     (lVar9 = _CFDictionaryGetValue(local_60,_kUSBMuxParam_MessageType), lVar9 != 0)) {
    lVar12 = _CFGetTypeID(lVar9);
    lVar13 = _CFStringGetTypeID();
    lVar10 = local_40;
    if ((lVar12 == lVar13) &&
       ((lVar9 = _CFStringCompare(lVar9,_kUSBMuxMessageType_Result,0), lVar9 == 0 &&
        (cVar5 = _GetDictionarySIntValue(lVar11,_kUSBMuxParam_ResultNum,&local_34), cVar5 != '\0')))
       ) {
      switch(local_34) {
      case 0xc4648:
        break;
      default:
        local_34 = -1;
      }
                    /* WARNING: This code block may not be properly labeled as switch case */
      lVar9 = _CFDictionaryGetValue(lVar11,_kUSBMuxParam_ResultStr);
      if (lVar9 == 0) {
LAB_000c468f:
        pcVar14 = (char *)0x0;
      }
      else {
        lVar10 = _CFGetTypeID(lVar9);
        lVar11 = _CFStringGetTypeID();
        if (lVar10 != lVar11) goto LAB_000c468f;
        uVar7 = _CFStringGetFastestEncoding(lVar9);
        pcVar14 = (char *)_CFStringGetCStringPtr(lVar9,uVar7);
      }
      if ((local_34 != 0) ||
         (lVar9 = local_48, lVar10 = local_40, piVar16 = local_58, pcVar14 != (char *)0x0)) {
        pcVar15 = "";
        if (pcVar14 != (char *)0x0) {
          pcVar15 = pcVar14;
        }
        _USBMuxDebugLog("%s:%d usbmuxd returned error: %d - %s.\n","USBMuxListenerCreateFiltered",
                        0x362,local_34,pcVar15);
        lVar9 = local_48;
        lVar10 = local_40;
        piVar16 = local_58;
      }
      goto LAB_000c44e0;
    }
  }
  _USBMuxDebugLog("%s:%d Response was bogus.\n","USBMuxListenerCreateFiltered",0x356);
  local_34 = -1;
  lVar9 = local_48;
LAB_000c44e0:
  if (local_60 != 0) {
    _CFRelease();
  }
  if (local_34 == 0) {
    _USBMuxDebugLog("%s:%d Created %p\n","USBMuxListenerCreateFiltered",0x382,puVar8);
    *param_3 = puVar8;
  }
  else {
    if (*piVar16 != -1) {
      _close(*piVar16);
    }
    _free(puVar8);
  }
  if (lVar10 != 0) {
    _CFRelease(lVar10);
  }
  if (lVar9 != 0) {
    _CFRelease(lVar9);
  }
  return local_34;
}

