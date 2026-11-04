// rea decompile_all
// name: _ASRServerHandleConnection
// address: 0x19dcaa
// body: available
// range: 0x19dcaa-0x19dd8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _ASRServerHandleConnection
              (undefined4 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,code *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 local_c0 [96];
  undefined8 local_60;
  
  iVar1 = _open(param_2,0,0x180);
  if (iVar1 < 0) {
    piVar3 = ___error();
    iVar2 = *piVar3;
    pcVar4 = "Could not open source file";
  }
  else {
    iVar2 = _fstat_INODE64(iVar1,local_c0);
    if (iVar2 != 0) {
      piVar3 = ___error();
      iVar2 = *piVar3;
      (*param_6)(param_7,"Could not get information on source file",100);
      _close(iVar1);
      return iVar2;
    }
    iVar2 = _ASRServerHandleConnectionWithProvider
                      (param_1,param_3,param_6,param_7,local_60,_imageDataProvider,iVar1);
    iVar1 = _close(iVar1);
    if (iVar1 == 0) {
      return iVar2;
    }
    if (iVar2 == 0) {
      piVar3 = ___error();
      iVar2 = *piVar3;
    }
    pcVar4 = "Could not close source file";
  }
  (*param_6)(param_7,pcVar4,100);
  return iVar2;
}

