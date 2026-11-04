// rea decompile_all
// name: _AMAuthInstallBundlePersonalizeRestoreLocalPolicy
// address: 0x28b73d
// body: available
// range: 0x28b73d-0x28b88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBundlePersonalizeRestoreLocalPolicy
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = _CFGetAllocator();
  local_58 = 0;
  local_38 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  iVar1 = _AMAuthInstallPlatformCopyURLWithAppendedComponent
                    (uVar2,param_2,&cf_amai_LocalPolicy_restore_img4,0);
  if ((((iVar1 == 0) &&
       (iVar1 = __AMAuthInstallBundleLocalPolicyCopyGivenOrDefaultNSIH
                          (param_1,param_2,param_3,&local_58), iVar1 == 0)) &&
      (iVar1 = _AMAuthInstallRestoreLocalPolicyCreateServerRequest(param_1,local_58,&local_48),
      iVar1 == 0)) &&
     ((iVar1 = _AMAuthInstallApCreatePersonalizedResponse(param_1,local_48,&local_40), iVar1 == 0 &&
      (iVar1 = _AMAuthInstallLocalPolicyStitchTicketData(param_1,local_40,&local_38), iVar1 == 0))))
  {
    iVar1 = _AMAuthInstallSupportWriteDataToFileURL(uVar2,local_38,local_50,1);
    if (iVar1 == 0) {
      iVar1 = 0;
      if (param_4 != (undefined8 *)0x0) {
        uVar2 = _CFRetain(local_38);
        *param_4 = uVar2;
      }
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallBundlePersonalizeRestoreLocalPolicy",
                        "failed to write local policy to %@",local_50);
    }
  }
  _SafeRelease(local_40);
  _SafeRelease(local_48);
  _SafeRelease(local_50);
  _SafeRelease(local_38);
  _SafeRelease(local_58);
  _SafeRelease(0);
  return iVar1;
}

