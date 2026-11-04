// rea decompile_all
// name: __DLRemoveItemOnComputer
// address: 0x502f
// body: available
// range: 0x502f-0x5110 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLRemoveItemOnComputer(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_40;
  char *local_38;
  
  local_40 = 0;
  local_38 = (char *)0x0;
  iVar2 = __DLResolveAndValidatePath();
  if (iVar2 != 0) goto LAB_000050eb;
  iVar2 = __DLCreateItemAttributes(param_1,param_2,&local_40,param_3);
  lVar1 = local_40;
  if (iVar2 == 0) {
    uVar3 = _CFDictionaryGetValue(local_40,&cf_DLFileType);
    lVar4 = _CFStringCompare(uVar3,&cf_DLFileTypeDirectory,0);
    if (lVar4 == 0) {
      iVar2 = __DLEnumerateContentsOfDirectoryOnComputer
                        (param_1,param_2,__DLRemoveItemOnComputerCallback,param_1,param_3);
      if (iVar2 != 0) goto LAB_000050db;
      iVar2 = _rmdir(local_38);
    }
    else {
      iVar2 = _unlink(local_38);
    }
    iVar2 = _DLStatusFromOSStatus(iVar2,param_3);
  }
LAB_000050db:
  if (lVar1 != 0) {
    _CFRelease(lVar1);
  }
LAB_000050eb:
  _free(local_38);
  return iVar2;
}

