// rea decompile_all
// name: __CreatePairingRecordFromRecordOnDiskForIdentifier
// address: 0x130b98
// body: available
// range: 0x130b98-0x130d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __CreatePairingRecordFromRecordOnDiskForIdentifier(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  if (param_1 == 0) {
    return 0xe8000007;
  }
  if (param_2 == (long *)0x0) {
    return 0xe8000007;
  }
  *param_2 = 0;
  lVar2 = _USBMuxCopyBUID();
  if (lVar2 == 0) {
    return 0xe8000003;
  }
  lVar3 = __LoadPairingRecord(param_1,1);
  if (lVar3 == 0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,"Could not load pairing record %@",param_1);
    uVar8 = 0xe8000025;
    goto LAB_00130d30;
  }
  lVar4 = _CFDictionaryGetValue(lVar3,&cf_SystemBUID);
  if (lVar4 == 0) {
    pcVar7 = "No system BUID in pairing record \'%@\'. Upgrading.";
LAB_00130c93:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,2,pcVar7,param_1);
    _CFDictionarySetValue(lVar3,&cf_SystemBUID,lVar2);
    cVar1 = __SavePairingRecordWithDeviceID(param_1,lVar3,0);
    if (cVar1 == '\0') {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Could not store pairing record at \'%@\'.",param_1);
      _CFRelease(lVar2);
      uVar8 = 0xe800000a;
      lVar2 = lVar3;
      goto LAB_00130d30;
    }
  }
  else {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFStringGetTypeID();
    if (lVar5 != lVar6) {
      pcVar7 = "System BUID in pairing record \'%@\' not a string. Overwriting.";
      goto LAB_00130c93;
    }
    cVar1 = _CFEqual(lVar4,lVar2);
    if (cVar1 == '\0') {
      pcVar7 = "System BUID in pairing record \'%@\' is out of date?. Overwriting.";
      goto LAB_00130c93;
    }
  }
  *param_2 = lVar3;
  uVar8 = 0;
LAB_00130d30:
  _CFRelease(lVar2);
  return uVar8;
}

