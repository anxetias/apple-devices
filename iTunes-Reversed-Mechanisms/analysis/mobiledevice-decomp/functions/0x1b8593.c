// rea decompile_all
// name: _FlsParserCopyDownloadItem
// address: 0x1b8593
// body: available
// range: 0x1b8593-0x1b8692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _FlsParserCopyDownloadItem(__FlsParser*, unsigned int, __CFData const**, __CFData const**) */

int _FlsParserCopyDownloadItem
              (__FlsParser *param_1,uint param_2,__CFData **param_3,__CFData **param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  __CFData *p_Var6;
  SecurityElementStructType *local_40;
  DownloadDataElementStructType *local_38;
  
  iVar1 = _FlsParserFindDownloadItem(param_1,param_2,&local_38,&local_40);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_3 == (__CFData **)0x0) {
    lVar4 = 0;
  }
  else {
    uVar2 = _CFGetAllocator(param_1);
    uVar3 = PRGSequencer::GetElementData
                      (*(PRGSequencer **)(param_1 + 0x18),*(uint *)(local_38 + 0x20));
    lVar4 = _CFDataCreate(uVar2,uVar3,*(undefined4 *)(local_38 + 0x1c));
    if (lVar4 == 0) {
      return 2;
    }
  }
  if (param_4 == (__CFData **)0x0) {
    lVar5 = 0;
  }
  else {
    uVar2 = _CFGetAllocator(param_1);
    lVar5 = _CFDataCreate(uVar2,local_40 + 0x20c,0x600);
    if (lVar5 == 0) {
      iVar1 = 2;
      lVar5 = 0;
      goto LAB_001b8667;
    }
  }
  if (param_3 != (__CFData **)0x0) {
    p_Var6 = (__CFData *)_CFRetain(lVar4);
    *param_3 = p_Var6;
  }
  iVar1 = 0;
  if (param_4 != (__CFData **)0x0) {
    p_Var6 = (__CFData *)_CFRetain(lVar5);
    *param_4 = p_Var6;
  }
LAB_001b8667:
  if (lVar4 != 0) {
    _CFRelease(lVar4);
  }
  if (lVar5 != 0) {
    _CFRelease(lVar5);
  }
  return iVar1;
}

