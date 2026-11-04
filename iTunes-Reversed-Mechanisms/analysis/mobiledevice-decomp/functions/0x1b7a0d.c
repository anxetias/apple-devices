// rea decompile_all
// name: _BbfwWriterAddFile
// address: 0x1b7a0d
// body: available
// range: 0x1b7a0d-0x1b7be0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b7bdc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _BbfwWriterAddFile(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  cVar2 = _CFStringGetCString(param_2,local_438,0x400,0x8000100);
  if (cVar2 == '\0') {
    _BbfwWriterAddFile_cold_1();
    uVar4 = 3;
    goto LAB_001b7aea;
  }
  iVar3 = _amai_zipOpenNewFileInZip(param_1,local_438,0,0,0,0,0,"",8,0xffffffffffffffff);
  if (iVar3 == 0) {
    lVar5 = _CFDataGetBytePtr(param_3);
    if (lVar5 == 0) {
      _AMAuthInstallLog(3,"BbfwWriterAddFile","FileData byte pointer is NULL: %s",local_438);
      uVar4 = 4;
      goto LAB_001b7aea;
    }
    uVar4 = _CFDataGetLength(param_3);
    iVar3 = _amai_zipWriteInFileInZip(param_1,lVar5,uVar4);
    if (iVar3 == 0) {
      iVar3 = _amai_zipCloseFileInZip(param_1);
      if (iVar3 == 0) {
        pcVar7 = "Added bbfw file : %@";
        uVar4 = 0;
        uVar8 = 7;
        goto LAB_001b7ae3;
      }
      uVar4 = _BbfwWriterErrorFromZipStat(iVar3,0x138a);
      piVar6 = ___error();
      iVar1 = *piVar6;
      pcVar7 = "Failed to close file in zip %s with error: %d %d";
    }
    else {
      uVar4 = _BbfwWriterErrorFromZipStat(iVar3,0x1389);
      piVar6 = ___error();
      iVar1 = *piVar6;
      pcVar7 = "Failed to write file in zip %s with error: %d %d";
    }
    _AMAuthInstallLog(3,"BbfwWriterAddFile",pcVar7,local_438,iVar3,iVar1);
  }
  else {
    uVar4 = _BbfwWriterErrorFromZipStat(iVar3,5000);
    pcVar7 = "Failed to open file in zip: %s";
    param_2 = local_438;
    uVar8 = 3;
LAB_001b7ae3:
    _AMAuthInstallLog(uVar8,"BbfwWriterAddFile",pcVar7,param_2);
  }
LAB_001b7aea:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

