// rea decompile_all
// name: _handleRestoreLocalPolicyRequest
// address: 0xdc971
// body: available
// range: 0xdc971-0xdcbca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _handleRestoreLocalPolicyRequest(AMRestoreMuxedDeviceMessage*, __CFDictionary const*,
   __CFError**) */

int _handleRestoreLocalPolicyRequest
              (AMRestoreMuxedDeviceMessage *param_1,__CFDictionary *param_2,__CFError **param_3)

{
  pthread_mutex_t *ppVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(lVar5 + 0x10);
  local_50 = 0;
  local_48 = 0;
  ppVar1 = (pthread_mutex_t *)(lVar6 + 0x158);
  bVar2 = true;
  _pthread_mutex_lock(ppVar1);
  if ((lVar6 == 0) || (*(long *)(lVar5 + 0x18) == 0)) {
    local_38 = 0;
    _AMRLog(3,&cf__s_badargument,"_handleRestoreLocalPolicyRequest");
    iVar4 = 1;
  }
  else {
    if (*(long *)(lVar6 + 0x150) == 0) {
      _AMRLog(4,&
                cf__s_unexpectedrequestforrestorelocalpolicywithpersonalizationdisabled_proceedinganyway
              ,"_handleRestoreLocalPolicyRequest");
    }
    local_40 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_38 = _CFDictionaryCreateMutable
                         (local_40,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                          PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    iVar4 = 0x12;
    if (local_38 != 0) {
      cVar3 = _AMAuthInstallApPersonalizationEnabled(*(undefined8 *)(lVar6 + 0x150));
      if (cVar3 == '\0') {
        lVar5 = 0;
      }
      else {
        lVar5 = _CFDictionaryGetValue(*(undefined8 *)(lVar5 + 0x18),&cf_RestoreBundlePath);
        if (lVar5 == 0) {
          lVar5 = 0;
          _AMRLog(3,&cf__s_unexpectedlackofpersonalizedbundle,"_handleRestoreLocalPolicyRequest");
          iVar4 = 10;
          goto LAB_000dcb3e;
        }
        lVar5 = _CFURLCreateWithFileSystemPath(local_40,lVar5,0,1);
        if (lVar5 == 0) goto LAB_000dcafc;
        lVar6 = _AMAuthInstallBundleGetRestoreLocalPolicyComponentPath
                          (*(undefined8 *)(lVar6 + 0x150));
        if (lVar6 == 0) {
          iVar4 = 6;
          goto LAB_000dcb3e;
        }
        iVar4 = _AMAuthInstallSupportCopyURLWithAppendedComponent(local_40,lVar5,lVar6,0,&local_50);
        if (iVar4 != 0) {
          iVar4 = _AMAuthInstallToRestoreError(iVar4);
          goto LAB_000dcb3e;
        }
        iVar4 = _AMAuthInstallSupportCreateDataFromFileURL(local_40,&local_48,local_50);
        if (iVar4 == 0) {
          _CFDictionarySetValue(local_38,&cf_RestoreLocalPolicyData,local_48);
        }
        else {
          _AMRLog(3,&cf__s_can_tfindtherestorelocalpolicy_proceedinganyway,
                  "_handleRestoreLocalPolicyRequest");
        }
      }
      _pthread_mutex_unlock(ppVar1);
      bVar2 = false;
      iVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1,local_38);
      iVar4 = (uint)(iVar4 != 0) * 9;
      goto LAB_000dcb3e;
    }
    local_38 = 0;
  }
LAB_000dcafc:
  lVar5 = 0;
LAB_000dcb3e:
  _AMSupportSafeRelease(local_38);
  _AMSupportSafeRelease(lVar5);
  _AMSupportSafeRelease(local_50);
  _AMSupportSafeRelease(local_48);
  if (bVar2) {
    _pthread_mutex_unlock(ppVar1);
  }
  return iVar4;
}

