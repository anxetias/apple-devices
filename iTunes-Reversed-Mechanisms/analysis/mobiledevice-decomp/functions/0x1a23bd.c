// rea decompile_all
// name: _AMAuthInstallApImg4ValidImage
// address: 0x1a23bd
// body: available
// range: 0x1a23bd-0x1a2554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMAuthInstallApImg4ValidImage(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  FILE *pFVar3;
  void *pvVar4;
  size_t sVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_1 == 0) {
    _AMSupportCreateErrorInternal
              (param_2,&cf_AuthInstallErrorDomain,1,0,&cf__s_srcURLisNULL,
               "AMAuthInstallApImg4ValidImage");
  }
  else {
    pFVar3 = (FILE *)_AMAuthInstallPlatformOpenFileStreamWithURL(param_1,"rb");
    if (pFVar3 != (FILE *)0x0) {
      pvVar4 = _malloc(0x20);
      if (pvVar4 == (void *)0x0) {
        bVar8 = false;
        _AMSupportCreateErrorInternal
                  (param_2,&cf_AuthInstallErrorDomain,4,0,&cf__s_failedtoallocatechunkbuffer,
                   "AMAuthInstallApImg4ValidImage");
      }
      else {
        sVar5 = _fread(pvVar4,1,0x20,pFVar3);
        if (sVar5 != 0x20) {
          _AMAuthInstallLog(4,"AMAuthInstallApImg4ValidImage","Read %ld bytes out of expected %ld",
                            sVar5,0x20);
        }
        iVar1 = _Img4DecodeParseLengthFromBufferWithTag(pvVar4,sVar5,0x494d3450,&local_38);
        iVar2 = _Img4DecodeParseLengthFromBufferWithTag(pvVar4,sVar5,0x494d4734,&local_38);
        bVar8 = iVar2 == 0 || iVar1 == 0;
      }
      _fclose(pFVar3);
      goto LAB_001a253a;
    }
    piVar6 = ___error();
    pcVar7 = _strerror(*piVar6);
    _AMSupportCreateErrorInternal
              (param_2,&cf_AuthInstallErrorDomain,4,0,&cf__s_failedtoopenfile___error__s,
               "AMAuthInstallApImg4ValidImage",param_1,pcVar7);
  }
  pvVar4 = (void *)0x0;
  bVar8 = false;
LAB_001a253a:
  _SafeFree(pvVar4);
  return bVar8;
}

