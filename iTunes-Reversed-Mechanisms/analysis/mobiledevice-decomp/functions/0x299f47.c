// rea decompile_all
// name: _AMAuthInstallProvisioningServerSendSyncRequest
// address: 0x299f47
// body: available
// range: 0x299f47-0x29a0e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallProvisioningServerSendSyncRequest
              (undefined8 param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long local_38;
  long local_30;
  undefined4 local_28;
  int local_24;
  
  local_38 = 0;
  local_30 = 0;
  iVar2 = 1;
  if ((param_3 != 0) && (param_4 != (undefined8 *)0x0)) {
    if (param_2 == 0) {
      _AMAuthInstallLog(3,"AMAuthInstallProvisioningServerSendSyncRequest",
                        "provisioning server url is NULL");
    }
    else {
      iVar2 = _AMAuthInstallHttpCreatePostRequest();
      if ((iVar2 == 0) &&
         (iVar2 = _AMAuthInstallHttpMessageSendSyncNew
                            (0x402e000000000000,param_1,0,&local_38,&local_28,0), iVar2 == 0)) {
        if (local_38 == 0) {
          _AMAuthInstallLog(3,"AMAuthInstallProvisioningServerSendSyncRequest",
                            "no response data (httpStatus=%u)",local_28);
        }
        else {
          iVar2 = _AMAuthInstallProvisioningCopyResponse(param_1,local_38,&local_24,&local_30);
          if (iVar2 != 0) goto LAB_0029a045;
          _AMAuthInstallLog(5,"AMAuthInstallProvisioningServerSendSyncRequest",
                            "httpStatus=%u, status=%d",local_28,local_24);
          lVar1 = local_30;
          if (local_24 != 0) {
            _AMAuthInstallLog(3,"AMAuthInstallProvisioningServerSendSyncRequest","server error: %d")
            ;
            iVar2 = 0x18;
            goto LAB_0029a045;
          }
          if (local_30 != 0) {
            iVar2 = 0;
            _AMAuthInstallLog(6,"AMAuthInstallProvisioningServerSendSyncRequest","data=%@",local_30)
            ;
            uVar3 = _CFRetain(lVar1);
            *param_4 = uVar3;
            goto LAB_0029a045;
          }
          _AMAuthInstallLog(3,"AMAuthInstallProvisioningServerSendSyncRequest",
                            "server failed to provide response data");
        }
        iVar2 = 0x11;
      }
    }
  }
LAB_0029a045:
  _SafeRelease(0);
  _SafeRelease(0);
  _SafeRelease(local_38);
  _SafeRelease(local_30);
  return iVar2;
}

