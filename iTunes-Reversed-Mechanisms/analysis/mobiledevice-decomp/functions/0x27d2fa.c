// rea decompile_all
// name: _AMAuthInstallBasebandReadVersionFromBbfw
// address: 0x27d2fa
// body: available
// range: 0x27d2fa-0x27d4b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallBasebandReadVersionFromBbfw(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined8 local_40;
  int local_34;
  
  local_34 = 0;
  local_40 = 0;
  lVar2 = 0;
  uStack_50 = 1;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar6 = 0;
    if (param_3 == (undefined8 *)0x0) goto LAB_0027d3c9;
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    lVar2 = _CFPropertyListCreateWithData(uVar4,param_1,0,0,&local_40);
    if (lVar2 != 0) {
      pcVar3 = (cfstringStruct *)_CFDictionaryGetValue(lVar2,param_2);
      if (pcVar3 == (cfstringStruct *)0x0) {
        pcVar5 = "failed to find VersionStr in %@";
        pcVar3 = &cf_Info_plist;
      }
      else {
        cVar1 = __CFStringToUInt32(pcVar3,&local_34);
        if (cVar1 != '\0') {
          if (local_34 == 0) {
            lVar6 = 0;
            uStack_50 = 3;
            _AMAuthInstallLog(3,"AMAuthInstallBasebandReadVersionFromBbfw","Version is 0 (invalid)")
            ;
          }
          else {
            lVar6 = _CFNumberCreate(uVar4,3,&local_34);
            if (lVar6 == 0) {
              lVar6 = 0;
              _AMAuthInstallLog(3,"AMAuthInstallBasebandReadVersionFromBbfw",
                                "Failed to create versionNumber");
              uStack_50 = 2;
            }
            else {
              uVar4 = _CFRetain(lVar6);
              *param_3 = uVar4;
              uStack_50 = 0;
            }
          }
          goto LAB_0027d3c9;
        }
        pcVar5 = "failed to convert VersionStr(%@) to int";
      }
      uStack_50 = 3;
      lVar6 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandReadVersionFromBbfw",pcVar5,pcVar3);
      goto LAB_0027d3c9;
    }
    uStack_50 = 3;
    _AMAuthInstallLog(3,"AMAuthInstallBasebandReadVersionFromBbfw","failed to parse %@: %@",
                      &cf_Info_plist,local_40);
  }
  lVar2 = 0;
  lVar6 = 0;
LAB_0027d3c9:
  _SafeRelease(lVar6);
  _SafeRelease(lVar2);
  _SafeRelease(local_40);
  return uStack_50;
}

