// rea decompile_all
// name: _AMDeviceVerifySRPConnection
// address: 0x137de4
// body: available
// range: 0x137de4-0x1380a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMDeviceVerifySRPConnection(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    return 0xe8000007;
  }
  if ((*(long *)(param_1 + 0xf8) != 0) || (cVar1 = __AMDeviceIsBackedByRSD(param_1), cVar1 != '\0'))
  {
    uVar2 = _AMDeviceValidatePairing(param_1);
    return uVar2;
  }
  if (*(char *)(param_1 + 0x94) != '\x01') {
    return 0xe8000084;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0xe800000b;
  }
  cVar1 = _AMDeviceIsWiFiPairableRef(param_1);
  if (cVar1 == '\0') {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,
                      "This API is not supported for non-WiFi-pairable device ref (%u)",
                      *(undefined4 *)(param_1 + 0x10));
    return 0xe800000f;
  }
  lVar3 = *(long *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    cVar1 = _doCreatePairingSession(param_1);
    if (cVar1 != '\0') {
      lVar3 = *(long *)(param_1 + 0xd0);
      goto LAB_00137e89;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Failed to create pairing session.");
LAB_00137f50:
    uVar2 = 0xe80000ea;
  }
  else {
LAB_00137e89:
    uVar2 = _doSRPPair(param_1,3,lVar3);
    switch(uVar2) {
    case 0:
      lVar3 = *(long *)(param_1 + 0xd0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar3,"invalidate");
        (*(code *)PTR__objc_release_004410a0)(lVar3);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      goto LAB_00137f50;
    case 1:
      uVar2 = 0;
      break;
    case 2:
      lVar3 = *(long *)(param_1 + 0xd0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar3,"invalidate");
        (*(code *)PTR__objc_release_004410a0)(lVar3);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      uVar2 = 0xe80000ec;
      break;
    case 3:
      lVar3 = *(long *)(param_1 + 0xd0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar3,"invalidate");
        (*(code *)PTR__objc_release_004410a0)(lVar3);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      uVar2 = 0xe80000e8;
      break;
    case 4:
      lVar3 = *(long *)(param_1 + 0xd0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_00441098)(lVar3,"invalidate");
        (*(code *)PTR__objc_release_004410a0)(lVar3);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      uVar2 = 0xe80000e9;
      break;
    default:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar2 = 0;
      __os_log_internal(0,_md_log_log,0x10,"Invalid SRP paring response.");
    }
  }
  return uVar2;
}

