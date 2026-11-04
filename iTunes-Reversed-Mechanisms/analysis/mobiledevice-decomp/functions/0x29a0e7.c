// rea decompile_all
// name: _AMAuthInstallProvisioningSendAck
// address: 0x29a0e7
// body: available
// range: 0x29a0e7-0x29a2ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningSendAck(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    iVar1 = 1;
    lVar3 = 0;
    goto LAB_0029a249;
  }
  if (*(long *)(param_1 + 0x138) == 0) {
    if (*(int *)(param_1 + 0x130) != 8) {
      _AMAuthInstallLog(5,"AMAuthInstallProvisioningSendAck",
                        "No provisioning info to ack, sending ping.");
      pcVar5 = &cf_1;
      goto LAB_0029a169;
    }
    _AMAuthInstallLog(3,"AMAuthInstallProvisioningSendAck","Provisioning failed, ack already sent.")
    ;
    iVar1 = 0x13;
  }
  else {
    pcVar5 = &cf_200;
LAB_0029a169:
    uVar2 = _CFGetAllocator(param_1);
    lVar3 = _CFDictionaryCreateMutable
                      (uVar2,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    if (lVar3 != 0) {
      iVar1 = _AMAuthInstallProvisioningPopulateRequestDict(param_1,lVar3,pcVar5);
      if (iVar1 == 0) {
        uVar2 = _CFGetAllocator(param_1);
        uVar2 = _CFStringCreateWithFormat(uVar2,0,&cf_0x_X,param_2);
        _CFDictionarySetValue(lVar3,&cf_STATUS,uVar2);
        _CFRelease(uVar2);
        uVar2 = _CFGetAllocator(param_1);
        iVar1 = _AMAuthInstallProvisioningServerSendSyncRequest
                          (uVar2,*(undefined8 *)(param_1 + 0x128),lVar3,&local_38);
        if (iVar1 == 0) {
          if (local_38 == 0) {
            iVar1 = 0;
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningSendAck","responseDict is NULL");
          }
          else {
            uVar2 = _CFDictionaryGetValue(local_38,&cf_STATUS);
            iVar1 = 0;
            _AMAuthInstallLog(6,"AMAuthInstallProvisioningSendAck","Server returned STATUS=%@",uVar2
                             );
          }
          goto LAB_0029a249;
        }
        pcVar4 = "AMAuthInstallProvisioningServerSendSyncRequest failed status=%d";
      }
      else {
        pcVar4 = "AMAuthInstallProvisioningPopulateRequestDict failed status=%d";
      }
      _AMAuthInstallLog(3,"AMAuthInstallProvisioningSendAck",pcVar4,iVar1);
      goto LAB_0029a249;
    }
    iVar1 = 2;
  }
  lVar3 = 0;
LAB_0029a249:
  _SafeRelease(lVar3);
  _SafeRelease(local_38);
  return iVar1;
}

