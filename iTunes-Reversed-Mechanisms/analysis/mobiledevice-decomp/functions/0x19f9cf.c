// rea decompile_all
// name: _AMAuthInstallCreateRecoveryOSBuildIdentityAssetList
// address: 0x19f9cf
// body: available
// range: 0x19f9cf-0x19faeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19fae7 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallCreateRecoveryOSBuildIdentityAssetList(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_004412b8;
  local_88 = &cf_RecoveryOSOS;
  local_80 = &cf_RecoveryOSKernelCache;
  local_78 = &cf_RecoveryOSDeviceTree;
  local_70 = &cf_RecoveryOSiBEC;
  local_68 = &cf_RecoveryOSAppleLogo;
  local_60 = &cf_RecoveryOSStaticTrustCache;
  local_58 = &cf_RecoveryOSiBootData;
  local_50 = &cf_RecoveryOSDiags;
  local_48 = &cf_RecoveryOSAp_SystemVolumeCanonicalMetadata;
  local_40 = &cf_RecoveryOSSystemVolume;
  local_38 = &cf_RecoveryOSBaseSystemVolume;
  local_30 = &cf_RecoveryOSAp_BaseSystemTrustCache;
  local_28 = &cf_RecoveryOSAVISP1_RTKitOS;
  lVar1 = _CFArrayCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_88,0xd,
                         PTR__kCFTypeArrayCallBacks_004411a8);
  uVar2 = 99;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  *param_1 = lVar1;
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

