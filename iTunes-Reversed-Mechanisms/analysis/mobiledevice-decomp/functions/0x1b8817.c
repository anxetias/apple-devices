// rea decompile_all
// name: _FlsParserReplaceDownloadItem
// address: 0x1b8817
// body: available
// range: 0x1b8817-0x1b8892 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _FlsParserReplaceDownloadItem(__FlsParser*, unsigned int, __CFData const*) */

undefined8 _FlsParserReplaceDownloadItem(__FlsParser *param_1,uint param_2,__CFData *param_3)

{
  PRGSequencer *this;
  int iVar1;
  undefined4 uVar2;
  DownloadDataElementStructType *in_RAX;
  undefined8 uVar3;
  void *pvVar4;
  DownloadDataElementStructType *local_28;
  
  local_28 = in_RAX;
  iVar1 = _FlsParserFindDownloadItem(param_1,param_2,&local_28,(SecurityElementStructType **)0x0);
  uVar3 = 1;
  if (iVar1 == 0) {
    this = *(PRGSequencer **)(param_1 + 0x18);
    pvVar4 = (void *)_CFDataGetBytePtr(param_3);
    iVar1 = PRGSequencer::RegisterElementData(this,pvVar4);
    if (iVar1 == -1) {
      uVar3 = 2;
    }
    else {
      _CFArrayAppendValue(*(undefined8 *)(param_1 + 0x10),param_3);
      *(int *)(local_28 + 0x20) = iVar1;
      uVar2 = _CFDataGetLength(param_3);
      *(undefined4 *)(local_28 + 0x1c) = uVar2;
      uVar3 = 0;
    }
  }
  return uVar3;
}

