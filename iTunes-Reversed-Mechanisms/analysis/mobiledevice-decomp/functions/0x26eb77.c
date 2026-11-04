// rea decompile_all
// name: _AMRAuthInstallCreateRecoveryEntryURL
// address: 0x26eb77
// body: available
// range: 0x26eb77-0x26ecbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRAuthInstallCreateRecoveryEntryURL
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  long local_48;
  undefined8 *local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  lVar2 = _AMRAuthInstallCopyRecoveryOSVariant();
  if (lVar2 == 0) {
    _AMRLog(3,&cf_Failedtogetrecoveryvariant_);
  }
  else {
    lVar3 = _CFDictionaryGetValue(param_2,&cf_RecoveryOSSourceBundlePath);
    if (lVar3 == 0) {
      pcVar5 = &cf_Failedtogetrecoverysourcebundlepath_;
    }
    else {
      lVar3 = _CFURLCreateWithFileSystemPath
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,0,1);
      if (lVar3 != 0) {
        local_40 = param_4;
        iVar1 = _AMAuthInstallBundleCopyBuildIdentityForVariant(param_1,lVar3,lVar2,&local_38);
        if (iVar1 == 0) {
          uVar4 = _AMAuthInstallBundleCreateURLForKeyEntryInBuildIdentity
                            (param_1,lVar3,local_38,param_3,
                             *(undefined8 *)PTR__kCFBooleanTrue_00441110,&local_48);
          *local_40 = uVar4;
          if (local_48 == 0) {
            iVar1 = 0;
            goto LAB_0026ec98;
          }
          iVar1 = 0x11;
          pcVar5 = &cf_FailedtogetfullURLpathforentry_;
        }
        else {
          pcVar5 = &cf_Failedtogetcopyofvariant_;
        }
        _AMRLog(3,pcVar5);
LAB_0026ec98:
        _CFRelease(lVar2);
        _CFRelease(lVar3);
        if (local_38 == 0) {
          return iVar1;
        }
        _CFRelease();
        return iVar1;
      }
      pcVar5 = &cf_FailedtocreaterecoverysourcebundleURL_;
    }
    _AMRLog(3,pcVar5);
    _CFRelease(lVar2);
  }
  return 99;
}

