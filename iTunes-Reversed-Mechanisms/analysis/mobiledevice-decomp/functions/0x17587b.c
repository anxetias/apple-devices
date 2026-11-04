// rea decompile_all
// name: ___doSRPPair_block_invoke.70
// address: 0x17587b
// body: available
// range: 0x17587b-0x175d84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___doSRPPair_block_invoke_70(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  bool bVar13;
  undefined4 local_3c;
  long local_38;
  
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,1,"SRP sending data.");
  lVar5 = *(long *)(param_1 + 0x48);
  lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  local_38 = 0;
  local_3c = param_2;
  if (lVar5 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar10 = "Invalid input.";
LAB_00175a52:
    __os_log_internal(0,_md_log_log,0x10,pcVar10);
    lVar3 = 0;
  }
  else {
    if (*(long *)(lVar5 + 0x38) == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar10 = "Invalid connection.";
      goto LAB_00175a52;
    }
    pcVar11 = &cf_CUPairingCreate;
    if (*(char *)(param_1 + 0x54) != '\0') {
      pcVar11 = &cf_CUPairingReset;
    }
    pcVar12 = &cf_CUPairingVerify;
    if (*(int *)(param_1 + 0x50) == 1) {
      pcVar12 = pcVar11;
    }
    lVar3 = __CreateMessageDict_5150(pcVar12);
    if (lVar3 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      pcVar10 = "Failed to create message.";
      goto LAB_00175a52;
    }
    _CFDictionarySetValue(lVar3,&cf_Payload,param_3);
    lVar4 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,3,&local_3c);
    if (lVar4 != 0) {
      _CFDictionarySetValue(lVar3,&cf_Flags,lVar4);
      iVar2 = _lockconn_send_message(lVar5,lVar3);
      if ((iVar2 == 0) && (iVar2 = _lockconn_receive_message(lVar5,&local_38), iVar2 == 0)) {
        lVar5 = _CFDictionaryGetValue(local_38,&cf_Error);
        if (lVar5 == 0) {
          bVar13 = true;
          goto LAB_00175a67;
        }
        lVar6 = _CFGetTypeID(lVar5);
        lVar7 = _CFStringGetTypeID();
        if (lVar6 == lVar7) {
          iVar2 = __ConvertLockdowndError(lVar5);
          bVar13 = iVar2 == 0;
          goto LAB_00175a67;
        }
      }
      bVar13 = false;
      goto LAB_00175a67;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create number.");
  }
  bVar13 = false;
  lVar4 = 0;
LAB_00175a67:
  lVar5 = local_38;
  if (local_38 != 0) {
    lVar6 = _CFDictionaryGetTypeID();
    lVar5 = _CFDictionaryGetValue(lVar5,&cf_ExtendedResponse);
    if ((lVar5 == 0) || (lVar7 = _CFGetTypeID(lVar5), lVar7 != lVar6)) {
      uVar8 = 0;
    }
    else {
      uVar8 = _CFRetain(lVar5);
    }
    *(undefined8 *)(lVar9 + 0x18) = uVar8;
  }
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if ((bVar13) && (lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18), lVar5 != 0))
  {
    lVar9 = _CFStringGetTypeID();
    lVar5 = _CFDictionaryGetValue(lVar5,&cf_doSRPPair);
    if ((lVar5 == 0) || (lVar3 = _CFGetTypeID(lVar5), lVar3 != lVar9)) {
      lVar5 = 0;
    }
    *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) = lVar5;
    uVar8 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    lVar5 = _CFDataGetTypeID();
    lVar9 = _CFDictionaryGetValue(uVar8,&cf_Payload);
    if ((lVar9 != 0) && (lVar3 = _CFGetTypeID(lVar9), lVar3 == lVar5)) {
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x20),"receivedData:",lVar9);
    }
    lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18);
    if (lVar5 == 0) {
      return;
    }
    cVar1 = _CFEqual(lVar5,&cf_resetcu);
    if (cVar1 == '\0') {
      cVar1 = _CFEqual(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),&cf_fail);
      if (cVar1 == '\0') {
        cVar1 = _CFEqual(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18),
                         &cf_succeed);
        lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
        if (cVar1 == '\0') {
          *(undefined4 *)(lVar5 + 0x18) = 0;
        }
        else {
          *(undefined4 *)(lVar5 + 0x18) = 1;
        }
      }
      else {
        *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
      }
    }
    else {
      *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 2;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"SRP device response: %@",
                      *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18));
    if (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == 1) {
      return;
    }
  }
  else {
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
  }
  _dispatch_semaphore_signal
            (*(dispatch_semaphore_t *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  return;
}

