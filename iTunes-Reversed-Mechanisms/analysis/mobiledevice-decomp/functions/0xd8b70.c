// rea decompile_all
// name: _handleFDRCommitRequest
// address: 0xd8b70
// body: available
// range: 0xd8b70-0xd8d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleFDRCommitRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*) */

int _handleFDRCommitRequest(AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar5 + 0x10);
  if (((lVar4 == 0) || (param_2 == (__CFDictionary *)0x0)) || (*(long *)(lVar5 + 0x18) == 0)) {
    _AMRLog(3,&cf__s_badargument,"_handleFDRCommitRequest");
  }
  else {
    _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x158));
    lVar1 = *(long *)(lVar4 + 0x150);
    iVar3 = -1;
    if (lVar1 == 0) {
      iVar3 = 1;
      _AMRLog(4,&cf__s_unexpectedFDRcommitrequestwithNULLamai,"_handleFDRCommitRequest");
    }
    _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x158));
    if (lVar1 == 0) {
      return iVar3;
    }
    lVar4 = _CFDictionaryGetValue(param_2,&cf_FDRMemoryStoreData);
    if (lVar4 == 0) {
      pcVar6 = &cf_FDRcommitrequestwithoutmemoryStoredictionary_;
    }
    else {
      lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar5 + 0x18),&cf_FDRMemoryStorePath);
      if (lVar5 == 0) {
        _AMRLog(3,&cf_FDRcommitrequestfromdevicewithnomemoryStorepathset_);
        return 0x2c;
      }
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar5 = _AMSupportCreateURLFromString(uVar2,lVar5);
      if (lVar5 != 0) {
        iVar3 = _AMSupportWriteDictionarytoFileURLBinary(uVar2,lVar4,lVar5);
        if (iVar3 == 0) {
          lVar4 = _CFDictionaryCreateMutable
                            (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                             PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (lVar4 == 0) {
            iVar3 = 0x12;
          }
          else {
            iVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar4);
            iVar3 = (uint)(iVar3 != 0) * 9;
            _CFRelease(lVar4);
          }
        }
        else {
          _AMRLog(3,&cf_UnabletocommitFDRmemoryStoredatatodisk_Error_d,iVar3);
          iVar3 = 0xb;
        }
        _CFRelease(lVar5);
        return iVar3;
      }
      pcVar6 = &cf_UnableconvertmemorystorepathtoURL_;
    }
    _AMRLog(3,pcVar6);
  }
  return 1;
}

