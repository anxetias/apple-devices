// rea decompile_all
// name: __AMAuthInstallBundleLocalPolicyCopyGivenOrDefaultNSIH
// address: 0x1a9042
// body: available
// range: 0x1a9042-0x1a9155 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallBundleLocalPolicyCopyGivenOrDefaultNSIH
              (long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 local_38;
  undefined8 local_30;
  
  if (param_4 == (undefined8 *)0x0) {
    iVar2 = 1;
  }
  else if (param_3 == 0) {
    uVar3 = _CFGetAllocator();
    local_38 = 0;
    local_30 = 0;
    if ((param_1 == 0) || (cVar1 = _AMAuthInstallApIsImg4(param_1), cVar1 == '\0')) {
      pcVar5 = &cf_amai_apticket_der;
    }
    else {
      pcVar5 = &cf_amai_apimg4ticket_der;
    }
    lVar4 = 0;
    iVar2 = _AMAuthInstallPlatformCopyURLWithAppendedComponent(uVar3,param_2,pcVar5,0,&local_30);
    if (iVar2 == 0) {
      lVar4 = _AMAuthInstallApCreateDigest(local_30,0x1000,0x180,&local_38);
      if (lVar4 == 0) {
        lVar4 = 0;
        _AMAuthInstallLog(3,"_AMAuthInstallBundleLocalPolicyCopyDefaultNSIH",
                          "failed to compute NSIH for %@: %@",local_30,local_38);
        iVar2 = 4;
      }
      else {
        uVar3 = _CFRetain(lVar4);
        *param_4 = uVar3;
        iVar2 = 0;
      }
    }
    _SafeRelease(local_30);
    _SafeRelease(lVar4);
    _SafeRelease(local_38);
  }
  else {
    uVar3 = _CFRetain(param_3);
    *param_4 = uVar3;
    iVar2 = 0;
  }
  return iVar2;
}

