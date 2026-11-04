// rea decompile_all
// name: __AMRestoreCreateCFPropertyListWithContentsOfFile
// address: 0xe0cd9
// body: available
// range: 0xe0cd9-0xe0dbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRestoreCreateCFPropertyListWithContentsOfFile(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long local_38;
  long local_30;
  
  if (param_1 == 0) {
    _AMRLog(3,&cf_Can_tloadplistsincefilepathisNULL);
    iVar1 = 1;
  }
  else {
    local_30 = 0;
    iVar1 = __AMRestoreCreateCFDataWithContentsOfFile();
    if (iVar1 == 0) {
      local_38 = 0;
      lVar2 = _CFPropertyListCreateWithData
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_30,0,0,&local_38);
      *param_2 = lVar2;
      iVar1 = 0x13;
      if (lVar2 != 0) {
        iVar1 = 0;
      }
      if (local_38 != 0) {
        _AMRLog(3,&cf__s_CFPropertyListCreateFromXMLData___,
                "_AMRestoreCreateCFPropertyListWithContentsOfFile");
        _CFRelease(local_38);
      }
      if (local_30 != 0) {
        _CFRelease();
      }
    }
    else {
      _AMRLogWithFilePath(3,param_1,&cf_unabletocreatedatafromfile__d,iVar1);
    }
  }
  return iVar1;
}

