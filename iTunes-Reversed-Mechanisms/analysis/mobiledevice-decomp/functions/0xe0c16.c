// rea decompile_all
// name: __AMRestoreCreateCFDataWithContentsOfFile
// address: 0xe0c16
// body: available
// range: 0xe0c16-0xe0cce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMRestoreCreateCFDataWithContentsOfFile(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  
  if (param_1 == 0) {
    pcVar4 = &cf_Can_tcreateCFDatafromfilepathsincepathwasnull__s;
  }
  else {
    lVar3 = _CFURLCreateWithFileSystemPath(0,param_1,0,0);
    if (lVar3 != 0) {
      uVar1 = _AMSupportPlatformCreateDataFromMappedFileURL(0,param_2,lVar3);
      iVar2 = __AMRestoreErrorForAMSupportError(uVar1,0xb);
      _AMSupportSafeRelease(lVar3);
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_000e0ca0;
    }
    pcVar4 = &cf__sfailedtoconvertfilepathtoCFURL;
  }
  _AMRLog(3,pcVar4,"_AMRestoreCreateCFDataWithContentsOfFile");
  _AMSupportSafeRelease(0);
  iVar2 = 1;
LAB_000e0ca0:
  _AMRLog(8,&cf__sfailedtoload____d,"_AMRestoreCreateCFDataWithContentsOfFile",param_1,iVar2);
  return iVar2;
}

