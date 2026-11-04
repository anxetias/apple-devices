// rea decompile_all
// name: _sendDirectoryRoot
// address: 0xdd1bb
// body: available
// range: 0xdd1bb-0xdd30f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _sendDirectoryRoot(int, __CFDictionary const*, __CFDictionary const*, char*) */

undefined8
_sendDirectoryRoot(int param_1,__CFDictionary *param_2,__CFDictionary *param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int local_34;
  
  lVar2 = _BOMCopierNew();
  if (lVar2 == 0) {
    uVar4 = 0xf;
  }
  else {
    local_34 = _dup(param_1);
    if (local_34 == -1) {
      uVar4 = 0xf;
      local_34 = -1;
    }
    else {
      uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar3 = _CFDictionaryCreateMutable
                        (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      uVar4 = _CFNumberCreate(uVar4,9,&local_34);
      _CFDictionarySetValue(lVar3,&cf_outputFD,uVar4);
      _CFDictionarySetValue(lVar3,&cf_createCPIO,*(undefined8 *)PTR__kCFBooleanTrue_00441110);
      _CFRelease(uVar4);
      _BOMCopierSetFatalErrorHandler(lVar2,_fatal_copier_error);
      _BOMCopierSetFatalFileErrorHandler(lVar2,_fatal_copier_file_error);
      _BOMCopierSetFileErrorHandler(lVar2,_copier_file_error);
      _AMRLog(6,&cf_sock_3d_sendingdirectoryasCPIO__s,param_1,param_2);
      iVar1 = _BOMCopierCopyWithOptions(lVar2,param_2,0,lVar3);
      local_34 = -1;
      uVar4 = 0xf;
      if (iVar1 == 0) {
        uVar4 = 0;
      }
      if (lVar3 != 0) {
        _CFRelease(lVar3);
        if (local_34 != -1) {
          _close(local_34);
        }
      }
    }
    _BOMCopierFree(lVar2);
  }
  return uVar4;
}

