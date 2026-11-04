// rea decompile_all
// name: _handleSsoServiceTicketRequest
// address: 0xda146
// body: available
// range: 0xda146-0xda323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleSsoServiceTicketRequest(AMRestoreMuxedDeviceMessage*, __CFError**) */

int _handleSsoServiceTicketRequest(AMRestoreMuxedDeviceMessage *param_1,__CFError **param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  __CFError *in_RCX;
  cfstringStruct *pcVar6;
  bool bVar7;
  long local_40;
  __CFError *local_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  local_40 = 0;
  if (lVar5 == 0) {
    pcVar6 = &cf_deviceisNULL;
    iVar1 = 1;
    goto LAB_000da2f8;
  }
  local_38 = (__CFError *)param_2;
  lVar2 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 8),&cf_Arguments);
  if (lVar2 == 0) {
    _AMRLog(3,&cf_messagedoesnotcontainRESTORED_MSG_ARGS___,*(undefined8 *)(param_1 + 8));
    pcVar6 = &cf_messagedoesnotcontainRESTORED_MSG_ARGS;
LAB_000da283:
    iVar1 = 1;
LAB_000da289:
    lVar5 = 0;
    param_2 = (__CFError **)local_38;
  }
  else {
    lVar3 = _CFDictionaryGetValue(lVar2,&cf_SsoAppId);
    if (lVar3 == 0) {
      _AMRLog(3,&cf_argsdoesnotcontainRESTORED_SSO_APP_ID___,lVar2);
      pcVar6 = &cf_argsdoesnotcontainRESTORED_SSO_APP_ID;
      goto LAB_000da283;
    }
    uVar4 = _CFGetAllocator(lVar5);
    in_RCX = (__CFError *)PTR__kCFTypeDictionaryValueCallBacks_004411b8;
    lVar5 = _CFDictionaryCreateMutable(uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0);
    if (lVar5 == 0) {
      pcVar6 = &cf_failedtocreatemessageDict;
      iVar1 = 0x12;
      goto LAB_000da289;
    }
    _AMRLog(3,&cf_AbouttocallAMAuthInstallSsoCreateServiceTicketWithAppId);
    param_2 = (__CFError **)local_38;
    in_RCX = local_38;
    iVar1 = _AMAuthInstallSsoCreateServiceTicketWithAppId
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,&local_40);
    if (iVar1 == 0) {
      _CFDictionarySetValue(lVar5,&cf_SsoServiceTicketData,local_40);
      iVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1,lVar5);
      bVar7 = iVar1 != 0;
      in_RCX = (__CFError *)(ulong)bVar7;
      iVar1 = (uint)bVar7 * 9;
      pcVar6 = &cf_restored_send_messagefailedforRESTORED_SSO_SERVICE_TICKET_DATA;
      if (!bVar7) {
        pcVar6 = &cf_FailedtohandleSSOServiceTicketrequest;
      }
    }
    else {
      iVar1 = _AMAuthInstallToRestoreError(iVar1);
      pcVar6 = &cf_AMAuthInstallSsoCreateServiceTicketWithAppIdfailed;
    }
  }
  if (local_40 != 0) {
    _CFRelease();
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
LAB_000da2f8:
  if (((__CFError *)param_2 != (__CFError *)0x0) && (iVar1 != 0)) {
    uVar4 = _AMRCreateErrorWithUnderlyingError
                      ((__CFString *)(long)iVar1,(long)pcVar6,(__CFString *)0x0,in_RCX);
    *param_2 = (__CFError *)uVar4;
  }
  return iVar1;
}

