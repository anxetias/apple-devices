// rea decompile_all
// name: _AMAuthInstallApImg4CreateRequestTagFromFileURL
// address: 0x277528
// body: available
// range: 0x277528-0x277724 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4CreateRequestTagFromFileURL
              (undefined8 param_1,long param_2,long param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined8 local_38;
  
  local_38 = 0;
  iVar1 = 1;
  iVar2 = iVar1;
  if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == (long *)0x0)) || (param_5 == (long *)0x0))
  {
LAB_002776bd:
    lVar5 = 0;
  }
  else {
    lVar3 = _CFStringFind(param_2,param_3,0);
    if (lVar3 == -1) {
      lVar3 = _CFURLCreateWithFileSystemPath(param_1,param_2,0,0);
      *param_5 = lVar3;
      if (lVar3 != 0) {
        iVar2 = _AMAuthInstallSupportCreateDataFromMappedFileURL(param_1,&local_38,lVar3);
        if (iVar2 == 0) {
          lVar4 = _AMAuthInstallApImg4CopyPayloadType(param_1,local_38);
          if (lVar4 != 0) {
            lVar3 = _AMAuthInstallApImg4GetEntryNameForType(lVar4);
            *param_4 = lVar3;
            if (lVar3 != 0) {
              _CFRetain(lVar3);
              lVar5 = 0;
              goto LAB_00277674;
            }
            _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateRequestTagFromFileURL",
                              "entry not found for %@",lVar4);
            iVar2 = 8;
            goto LAB_0027771e;
          }
          pcVar6 = "failed to get payload type from %@";
          iVar2 = iVar1;
        }
        else {
          pcVar6 = "failed to create file from %@";
        }
        lVar4 = 0;
        _AMAuthInstallLog(3,"AMAuthInstallApImg4CreateRequestTagFromFileURL",pcVar6,param_2);
        lVar5 = 0;
        goto LAB_00277677;
      }
      iVar2 = 2;
      goto LAB_002776bd;
    }
    lVar4 = _CFStringGetLength(param_2);
    lVar5 = _CFStringCreateWithSubstring(param_1,param_2,lVar3 + 1,lVar4 - (lVar3 + 1));
    if (lVar5 == 0) {
      lVar4 = 0;
      iVar2 = 2;
LAB_0027771e:
      lVar5 = 0;
      goto LAB_00277677;
    }
    lVar4 = _CFURLCreateWithFileSystemPath(param_1,lVar5,0,0);
    *param_5 = lVar4;
    if (lVar4 != 0) {
      lVar4 = 0;
      lVar3 = _CFStringCreateWithSubstring(param_1,param_2,0,lVar3);
      *param_4 = lVar3;
      iVar2 = 2;
      if (lVar3 == 0) goto LAB_00277677;
LAB_00277674:
      iVar2 = 0;
      goto LAB_00277677;
    }
    iVar2 = 2;
  }
  lVar4 = 0;
LAB_00277677:
  _SafeRelease(local_38);
  _SafeRelease(lVar4);
  _SafeRelease(0);
  _SafeRelease(lVar5);
  return iVar2;
}

