// rea decompile_all
// name: _AMRAuthInstallCopyTicketURL
// address: 0xf9915
// body: available
// range: 0xf9915-0xf9a6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AMRAuthInstallCopyTicketURL(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  long local_40;
  char local_31;
  
  local_31 = '\0';
  local_40 = 0;
  lVar3 = _CFDictionaryGetValue(param_2,&cf_RestoreBundlePath);
  if (lVar3 == 0) {
    pcVar6 = &cf_devicerequiresapersonalizedapticket;
LAB_000f99ba:
    _AMRLog(3,pcVar6);
    return (uint)(param_1 != 0);
  }
  lVar3 = _CFURLCreateWithFileSystemPath(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar3,0,1)
  ;
  if (lVar3 == 0) {
    pcVar6 = &cf_failedtocreateurlforrestorebundle;
    goto LAB_000f99ba;
  }
  uVar4 = _AMAuthInstallBundleGetApTicketComponentPath(param_1);
  uVar5 = _CFGetAllocator(param_1);
  uVar2 = 0;
  iVar1 = _AMAuthInstallSupportCopyURLWithAppendedComponent(uVar5,lVar3,uVar4,0,&local_40);
  if (iVar1 == 0) {
    iVar1 = _AMAuthInstallSupportFileURLExists(local_40,&local_31);
    if (iVar1 == 0) {
      if (local_31 == '\0') {
        _AMRLog(6,&cf_noapticketfound);
        uVar2 = 0xb;
        if (param_1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar4 = _CFRetain(local_40);
        *param_3 = uVar4;
      }
      goto LAB_000f9a0c;
    }
    pcVar6 = &cf_failedtostatapticket;
  }
  else {
    pcVar6 = &cf_failedtocreateurlforapticket;
  }
  uVar2 = 0;
  _AMRLog(3,pcVar6);
  if (param_1 != 0) {
    uVar2 = _AMAuthInstallToRestoreError(iVar1);
  }
LAB_000f9a0c:
  _CFRelease(lVar3);
  if (local_40 == 0) {
    return uVar2;
  }
  _CFRelease();
  return uVar2;
}

