// rea decompile_all
// name: _AMRAuthInstallCopyURLForKeyInBundle
// address: 0xf722e
// body: available
// range: 0xf722e-0xf7353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRAuthInstallCopyURLForKeyInBundle
              (long param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    _AMRLog(3,&cf_Can_tcopyURLwithoutamairef);
    return 1;
  }
  if (param_2 == 0) {
    pcVar5 = &cf_Can_tcopyURLwithNULLoptions;
  }
  else if (param_3 == 0) {
    pcVar5 = &cf_Can_tcopyURLwithNULLkey;
  }
  else {
    if (param_5 != 0) {
      iVar2 = _AMRAuthInstallCopyPersonalizedBundleSupportRecoveryOSURL(param_2,param_4,&local_38);
      if (iVar2 == 0) {
        cVar1 = _CFBooleanGetValue(param_4);
        if (cVar1 == '\0') {
          lVar4 = _AMRAuthInstallCopyVariant();
        }
        else {
          lVar4 = _AMRAuthInstallCopyRecoveryOSVariant(param_1,param_2);
        }
        if (lVar4 == 0) {
          _AMRLog(3,&cf_Can_tcopyURLforbundleresourcewithoutvariant);
          iVar2 = 0xbba;
        }
        else {
          iVar3 = _AMAuthInstallBundleCopyURLForKey(param_1,param_3,lVar4,local_38);
          iVar2 = 0xbba;
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          _CFRelease(lVar4);
        }
      }
      goto LAB_000f72e0;
    }
    pcVar5 = &cf_Can_tcopyURLwithoutoutref;
  }
  _AMRLog(3,pcVar5);
  iVar2 = 1;
LAB_000f72e0:
  if (local_38 != 0) {
    _CFRelease();
  }
  return iVar2;
}

