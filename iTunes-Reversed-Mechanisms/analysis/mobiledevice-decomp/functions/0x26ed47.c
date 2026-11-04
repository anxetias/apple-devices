// rea decompile_all
// name: _AMRAuthInstallConfigureUsingOptions
// address: 0x26ed47
// body: available
// range: 0x26ed47-0x26eee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0026ee93) */

int _AMRAuthInstallConfigureUsingOptions
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  cVar1 = '\0';
  iVar3 = __AMRAuthInstallCopySigningServerURL(param_2,param_3,0);
  if (iVar3 == 0) {
    iVar3 = _AMAuthInstallSetSigningServerURL(param_1,0);
    if (iVar3 == 0) {
      cVar1 = __AMRAuthInstallGetBooleanOptionOrPreference(param_2,param_3,&cf_AuthInstallEnableSso)
      ;
      if ((cVar1 == '\0') || (iVar3 = _AMRAuthInstallSsoEnable(param_1), iVar3 == 0)) {
        cVar2 = __AMRAuthInstallGetBooleanOptionOrPreference
                          (param_2,param_3,&cf_AuthInstallEnableSsoStealthMode);
        if ((cVar2 == '\0') || (iVar3 = _AMAuthInstallSsoSetStealthMode(param_1,1), iVar3 == 0)) {
          lVar4 = _CFDictionaryGetValue(param_2,&cf_AppleConnectUser);
          lVar5 = _CFDictionaryGetValue(param_2,&cf_AppleConnectData);
          cVar2 = cVar1;
          if (lVar5 != 0) {
            if (lVar4 == 0) {
              iVar3 = _AMAuthInstallSsoSetToken(param_1,lVar5);
            }
            else {
              iVar3 = _AMAuthInstallSsoSetAppleConnectInfo(param_1,lVar4,lVar5);
            }
            cVar2 = '\x01';
            if (iVar3 != 0) {
              iVar3 = _AMAuthInstallToRestoreError(iVar3);
              goto LAB_0026ee8a;
            }
          }
          cVar1 = cVar2;
          cVar2 = __AMRAuthInstallGetBooleanOptionOrPreference
                            (param_2,param_3,&cf_SkipNoncesForAPSEP);
          if ((cVar2 == '\0') ||
             (iVar3 = _AMAuthInstallBundleRequestTicketWithoutNonce(param_1,1), iVar3 == 0)) {
            __AMRAuthInstallGetBooleanOptionOrPreference
                      (param_2,param_3,&cf_ImageDecryptionKeysEnableSso);
            __AMRAuthInstallGetBooleanOptionOrPreference(param_2,param_3,&cf_FDREnableSso);
            iVar3 = 0;
          }
          else {
            iVar3 = _AMAuthInstallToRestoreError(iVar3);
          }
        }
        else {
          iVar3 = _AMAuthInstallToRestoreError(iVar3);
        }
      }
    }
    else {
      iVar3 = _AMAuthInstallToRestoreError(iVar3);
      cVar1 = '\0';
    }
  }
LAB_0026ee8a:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar1;
  }
  return iVar3;
}

