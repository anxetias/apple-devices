// rea decompile_all
// name: _AMRAuthInstallEnablePersonalization
// address: 0x26d277
// body: available
// range: 0x26d277-0x26d4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMRAuthInstallEnablePersonalization(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    return 1;
  }
  lVar4 = _CFDictionaryGetValue(param_2,&cf_UpdateBaseband);
  cVar1 = _CFDictionaryContainsKey(param_2,&cf_AuthInstallVariant);
  if (cVar1 == '\0') {
    cVar1 = _CFDictionaryContainsKey(param_2,&cf_AuthInstallRestoreBehavior);
    bVar9 = cVar1 == '\0';
  }
  else {
    bVar9 = false;
  }
  if (lVar4 == 0 || bVar9) {
    bVar8 = false;
  }
  else {
    cVar1 = _CFBooleanGetValue(lVar4);
    bVar8 = cVar1 != '\0';
  }
  if (bVar9) {
    _AMRLog(6,&cf_Appersonalizationdisabled_);
    iVar2 = _AMAuthInstallApEnablePersonalization(param_1,0);
  }
  else {
    iVar2 = _AMAuthInstallApEnablePersonalization(param_1,1);
    lVar4 = _CFDictionaryGetValue(param_2,&cf_AuthInstallForceServerSigning);
    if (lVar4 != 0) {
      lVar5 = _CFBooleanGetTypeID();
      lVar6 = _CFGetTypeID(lVar4);
      if ((lVar5 == lVar6) && (cVar1 = _CFBooleanGetValue(lVar4), cVar1 == '\x01')) {
        _AMAuthInstallApImg4ForceServerSigning(param_1);
      }
    }
  }
  if (iVar2 != 0) {
    pcVar7 = &cf__s_AMAuthInstallApEnablePersonalizationfailed;
    goto LAB_0026d4a4;
  }
  lVar4 = _CFDictionaryGetValue(param_2,&cf_AuthInstallRequestTicketWithoutNonce);
  if (lVar4 == 0) {
LAB_0026d3bc:
    bVar9 = false;
  }
  else {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFBooleanGetTypeID();
    if (lVar5 != lVar6) goto LAB_0026d3bc;
    cVar1 = _CFBooleanGetValue(lVar4);
    bVar9 = cVar1 == '\x01';
  }
  lVar4 = _CFDictionaryGetValue(param_2,&cf_SkipNoncesForAPSEP);
  if (lVar4 == 0) {
LAB_0026d3fa:
    bVar10 = false;
  }
  else {
    lVar5 = _CFGetTypeID(lVar4);
    lVar6 = _CFBooleanGetTypeID();
    if (lVar5 != lVar6) goto LAB_0026d3fa;
    cVar1 = _CFBooleanGetValue(lVar4);
    bVar10 = cVar1 == '\x01';
  }
  if ((bVar10 || bVar9) &&
     (iVar2 = _AMAuthInstallBundleRequestTicketWithoutNonce(param_1,1), iVar2 != 0)) {
    pcVar7 = &cf__s_AMAuthInstallBundleRequestTicketWithoutNoncefailed;
  }
  else {
    if (!bVar8) {
      _AMRLog(6,&cf_Basebandpersonalizationisdisabled);
    }
    iVar2 = _AMAuthInstallBasebandEnablePersonalization(param_1,bVar8);
    if (iVar2 == 0) {
      lVar4 = _CFDictionaryGetValue(param_2,&cf_AuthInstallLocalPolicyHactivate);
      if (lVar4 != *(long *)PTR__kCFBooleanTrue_00441110) {
        return 0;
      }
      iVar2 = _AMAuthInstallApEnableLocalPolicyHactivation(param_1);
      if (iVar2 == 0) {
        return 0;
      }
      pcVar7 = &cf__s_AMAuthInstallApEnableLocalPolicyHactivationfailed;
    }
    else {
      pcVar7 = &cf__s_AMAuthInstallBasebandEnablePersonalizationfailed;
    }
  }
LAB_0026d4a4:
  uVar3 = _AMAuthInstallToRestoreError(iVar2);
  _AMRLog(3,pcVar7,"AMRAuthInstallEnablePersonalization");
  return uVar3;
}

