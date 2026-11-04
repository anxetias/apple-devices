// rea decompile_all
// name: _handleCACertRequest
// address: 0xda707
// body: available
// range: 0xda707-0xda8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleCACertRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*, __CFString const*,
   __CFError**) */

uint _handleCACertRequest
               (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFString *param_3,
               __CFError **param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  uint uVar8;
  undefined8 local_40;
  uint local_34;
  
  local_40 = 0;
  lVar3 = _CFDictionaryGetValue
                    (*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18),
                     &cf_AuthInstallTrustedCACertFile);
  if (lVar3 == 0) {
    pcVar7 = &cf_ReceivedCAcertdatarequestbuthavenocerttosend;
    local_34 = 10;
LAB_000da7ab:
    lVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar4 = _AMAuthInstallSupportCreateURLFromString(uVar5,lVar3);
    local_34 = 0x12;
    if (lVar4 == 0) {
      pcVar7 = &cf_UnabletoallocateURLfrompathforCACertrequest;
      goto LAB_000da7ab;
    }
    iVar2 = _AMSupportCreateDataFromFileURL(uVar5,&local_40,lVar4);
    if (iVar2 == 0) {
      param_4 = (__CFError **)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
      lVar6 = _CFDictionaryCreateMutable(uVar5,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
      if (lVar6 == 0) {
        pcVar7 = &cf_couldn_tallocatereplydict;
        lVar6 = 0;
      }
      else {
        _CFDictionarySetValue(lVar6,&cf_CACert,local_40);
        iVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar6);
        if (iVar2 == 0) {
          bVar1 = true;
          local_34 = 0;
          pcVar7 = (cfstringStruct *)0x0;
          goto LAB_000da7b3;
        }
        pcVar7 = &cf_failedtosendCAcerttorestored;
        local_34 = 9;
      }
      bVar1 = false;
      goto LAB_000da7b3;
    }
    pcVar7 = &cf_UnabletoreadCAcertdata;
    local_34 = 0xb;
  }
  bVar1 = false;
  lVar6 = 0;
LAB_000da7b3:
  _AMSupportSafeRelease(lVar4);
  _AMSupportSafeRelease(local_40);
  _AMSupportSafeRelease(lVar6);
  uVar8 = local_34;
  if (bVar1) {
    _AMRLog(6,&cf_sentCACertificatefile__,lVar3);
    uVar8 = local_34;
  }
  else {
    if (param_2 != (__CFDictionary *)0x0) {
      uVar5 = _AMRCreateErrorWithUnderlyingError
                        ((__CFString *)(ulong)local_34,(long)pcVar7,(__CFString *)0x0,
                         (__CFError *)param_4);
      *(undefined8 *)param_2 = uVar5;
    }
    _AMRLog(3,&cf___,pcVar7);
  }
  return uVar8;
}

