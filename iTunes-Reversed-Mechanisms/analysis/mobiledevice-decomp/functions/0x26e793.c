// rea decompile_all
// name: _AMRAuthInstallCopyVariant
// address: 0x26e793
// body: available
// range: 0x26e793-0x26e974 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * _AMRAuthInstallCopyVariant(long param_1,long param_2)

{
  int iVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    return (cfstringStruct *)0x0;
  }
  if (param_2 == 0) {
    return (cfstringStruct *)0x0;
  }
  pcVar2 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_AuthInstallVariant);
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar6 = &cf_requestedvariant___;
LAB_0026e801:
    _AMRLog(6,pcVar6,pcVar2);
    _CFRetain(pcVar2);
    return pcVar2;
  }
  pcVar2 = (cfstringStruct *)_CFDictionaryGetValue(param_2,&cf_AuthInstallRestoreBehavior);
  if (pcVar2 != (cfstringStruct *)0x0) {
    _AMAuthInstallBundleSetVariantSpecifiesRestoreBehavior(param_1,1);
    pcVar6 = &cf_requestedrestorebehavior___;
    goto LAB_0026e801;
  }
  lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
  if (lVar3 == 0) {
    _AMRLog(3,&cf_kAMRestoreOptionsRestoreBundlePathnotfoundinoptionsdictionary);
    return (cfstringStruct *)0x0;
  }
  uVar4 = _CFGetAllocator(param_1);
  lVar5 = _CFURLCreateWithFileSystemPath(uVar4,lVar3,0,1);
  if (lVar5 == 0) {
    _AMRLog(3,&cf_failedtocreatebundleURLfrom____,lVar3);
    return (cfstringStruct *)0x0;
  }
  pcVar2 = &cf_InternalDevelopment;
  iVar1 = _AMRAuthInstallCopyBuildIdentity(param_1,param_2,&cf_InternalDevelopment,&local_38);
  if (iVar1 == 0) {
LAB_0026e884:
    if (local_38 != 0) {
      uVar4 = _CFGetAllocator(param_1);
      pcVar2 = (cfstringStruct *)
               _AMAuthInstallSupportGetValueForKeyPathInDict(uVar4,local_38,&cf_Info_Variant);
      if (pcVar2 != (cfstringStruct *)0x0) {
        _CFRetain(pcVar2);
        goto LAB_0026e8c6;
      }
      pcVar6 = &cf_novariantfoundinBuildManifest_plist;
      goto LAB_0026e8ba;
    }
    pcVar6 = &cf_AMRAuthInstallCopyBuildIdentityfailedtocreatebuildIdentity;
  }
  else {
    pcVar2 = &cf_Factory_SoftwareDownload;
    iVar1 = _AMRAuthInstallCopyBuildIdentity(param_1,param_2,&cf_Factory_SoftwareDownload,&local_38)
    ;
    if (iVar1 == 0) goto LAB_0026e884;
    pcVar2 = (cfstringStruct *)0x0;
    iVar1 = _AMRAuthInstallCopyBuildIdentity(param_1,param_2,0,&local_38);
    if (iVar1 == 0) goto LAB_0026e884;
    pcVar6 = &cf_AMRAuthInstallCopyBuildIdentityfailed;
LAB_0026e8ba:
    pcVar2 = (cfstringStruct *)0x0;
  }
  _AMRLog(3,pcVar6);
LAB_0026e8c6:
  _CFRelease(lVar5);
  if (local_38 == 0) {
    return pcVar2;
  }
  _CFRelease();
  return pcVar2;
}

