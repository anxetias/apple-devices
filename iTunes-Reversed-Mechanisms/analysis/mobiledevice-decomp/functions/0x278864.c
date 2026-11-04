// rea decompile_all
// name: _AMAuthInstallApImg4StitchData
// address: 0x278864
// body: available
// range: 0x278864-0x278acd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallApImg4StitchData
              (long param_1,long param_2,long param_3,long param_4,long param_5,char param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  FILE *pFVar5;
  int *piVar6;
  char *pcVar7;
  undefined1 local_d8 [96];
  undefined4 local_78;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_40 = 0;
  pFVar5 = (FILE *)0x0;
  iVar1 = 1;
  if ((param_3 == 0) || (param_4 == 0)) goto LAB_002789f8;
  if (param_6 == '\0') {
    if (param_5 != 0) {
      lVar3 = _CFDictionaryGetValue(param_5,*(undefined8 *)(param_1 + 0x58));
      if (lVar3 != 0) goto LAB_002788d5;
      _AMAuthInstallLog(3,"AMAuthInstallApImg4StitchData",
                        "%s: could not find ticket %@ data in response.",
                        "AMAuthInstallApImg4StitchData",*(undefined8 *)(param_1 + 0x58));
      iVar1 = 8;
LAB_00278ac7:
      pFVar5 = (FILE *)0x0;
      goto LAB_002789f8;
    }
LAB_00278a4d:
    pFVar5 = (FILE *)0x0;
  }
  else {
    lVar3 = 0;
LAB_002788d5:
    local_48 = param_4;
    if (param_2 == 0) {
      pFVar5 = (FILE *)_AMAuthInstallPlatformOpenFileStreamWithURL(param_3,"rb");
      if (pFVar5 == (FILE *)0x0) {
        piVar6 = ___error();
        pcVar7 = _strerror(*piVar6);
        _AMAuthInstallLog(3,"AMAuthInstallApImg4StitchData","failed to open file %@, error=%s",
                          param_3,pcVar7);
        iVar1 = 4;
        goto LAB_00278ac7;
      }
      ___bzero(local_d8,0x90);
      iVar1 = _fileno(pFVar5);
      _fstat_INODE64(iVar1,local_d8);
      _CFGetAllocator(param_1);
      iVar1 = __AMAuthInstallApImg4StitchToURL(local_48,lVar3,local_78,pFVar5,__WriteStreamIntoFile)
      ;
    }
    else {
      _CFStringGetCString(param_2,local_d8,5,0x8000100);
      uVar4 = _CFGetAllocator(param_1);
      iVar1 = _AMAuthInstallSupportCreateDataFromMappedFileURL(uVar4,&local_38,param_3);
      if (iVar1 != 0) goto LAB_00278a4d;
      iVar1 = _AMAuthInstallApImg4ReCreatePayloadWithProperties
                        (local_d8,0,local_38,0,0,0,0,&local_40);
      if (iVar1 != 0) {
        pFVar5 = (FILE *)0x0;
        _AMAuthInstallLog(3,"AMAuthInstallApImg4StitchData","failed to recreate");
        goto LAB_002789f8;
      }
      _SafeRelease(local_38);
      local_38 = 0;
      _CFGetAllocator(param_1);
      uVar2 = _CFDataGetLength(local_40);
      iVar1 = __AMAuthInstallApImg4StitchToURL(local_48,lVar3,uVar2,local_40,__WriteCFDataIntoFile);
      pFVar5 = (FILE *)0x0;
    }
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      _AMAuthInstallLog(3,"AMAuthInstallApImg4StitchData","failed to write stitched data to %@",
                        local_48);
    }
  }
LAB_002789f8:
  _SafeRelease(local_38);
  _SafeRelease(local_40);
  if (pFVar5 != (FILE *)0x0) {
    _fclose(pFVar5);
  }
  return iVar1;
}

