// rea decompile_all
// name: __AMRCompressedZipFileOpen
// address: 0x1799fa
// body: available
// range: 0x1799fa-0x179acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long __AMRCompressedZipFileOpen(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  
  local_38 = 0;
  uVar2 = _CFDictionaryGetValue(param_2,&cf___ZipFileDirPos__);
  _CFNumberGetValue(uVar2,4,&local_38);
  uVar2 = local_38;
  local_38 = 0;
  uVar3 = _CFDictionaryGetValue(param_2,&cf___ZipFileNum__);
  _CFNumberGetValue(uVar3,4,&local_38);
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = local_38;
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    iVar1 = _unz64local_GetCurrentFileInfoInternal(param_1,param_1 + 0xb0,param_1 + 0x138,0,0);
    *(ulong *)(param_1 + 0x90) = (ulong)(iVar1 == 0);
    if ((iVar1 == 0) && (iVar1 = _unzOpenCurrentFile(param_1), iVar1 == 0)) {
      return param_1;
    }
  }
  _unzCloseCurrentFile(param_1);
  return 0;
}

