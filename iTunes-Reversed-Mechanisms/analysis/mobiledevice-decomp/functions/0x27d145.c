// rea decompile_all
// name: _AMAuthInstallBasebandReadChipIDFromBbfw
// address: 0x27d145
// body: available
// range: 0x27d145-0x27d2f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandReadChipIDFromBbfw(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  
  local_48 = 0;
  local_34 = 0;
  local_40 = 0;
  if (param_1 == 0) {
    iVar2 = 1;
    lVar3 = 0;
  }
  else {
    lVar3 = _BbfwReaderOpen();
    if (lVar3 == 0) {
      lVar3 = 0;
      _AMAuthInstallLog(3,"AMAuthInstallBasebandReadChipIDFromBbfw",
                        "failed to open bbfw archive for reading");
      iVar2 = 4;
    }
    else {
      iVar2 = _BbfwReaderFindAndCopyFileData(lVar3,&cf_Info_plist,&local_48);
      if (iVar2 == 0) {
        lVar4 = _CFPropertyListCreateWithData
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_48,0,0,&local_40);
        if (lVar4 == 0) {
          lVar4 = 0;
          iVar2 = 3;
          _AMAuthInstallLog(3,"AMAuthInstallBasebandReadChipIDFromBbfw","failed to parse %@: %@",
                            &cf_Info_plist,local_40);
        }
        else {
          pcVar5 = (cfstringStruct *)
                   _CFDictionaryGetValue
                             (lVar4,&cf_com_apple_EmbeddedSoftwareRestore_Baseband_ChipId);
          if (pcVar5 == (cfstringStruct *)0x0) {
            pcVar6 = "failed to find ChipId in %@";
            pcVar5 = &cf_Info_plist;
          }
          else {
            cVar1 = __CFStringToUInt32(pcVar5,&local_34);
            if (cVar1 != '\0') {
              if (local_34 == 0) {
                iVar2 = 3;
                _AMAuthInstallLog(3,"AMAuthInstallBasebandReadChipIDFromBbfw",
                                  "ChipId is 0 (invalid)");
              }
              else {
                *param_2 = local_34;
                iVar2 = 0;
              }
              goto LAB_0027d204;
            }
            pcVar6 = "failed to convert ChipId(%@) to int";
          }
          iVar2 = 3;
          _AMAuthInstallLog(3,"AMAuthInstallBasebandReadChipIDFromBbfw",pcVar6,pcVar5);
        }
        goto LAB_0027d204;
      }
    }
  }
  lVar4 = 0;
LAB_0027d204:
  _BbfwReaderClose(lVar3);
  _SafeRelease(local_48);
  _SafeRelease(lVar4);
  _SafeRelease(local_40);
  return iVar2;
}

