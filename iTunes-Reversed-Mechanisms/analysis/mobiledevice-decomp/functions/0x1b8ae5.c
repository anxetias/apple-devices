// rea decompile_all
// name: _FlsParserFindDownloadItem
// address: 0x1b8ae5
// body: available
// range: 0x1b8ae5-0x1b8bf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _FlsParserFindDownloadItem(__FlsParser*, unsigned int, DownloadDataElementStructType**,
   SecurityElementStructType**) */

undefined8
_FlsParserFindDownloadItem
          (__FlsParser *param_1,uint param_2,DownloadDataElementStructType **param_3,
          SecurityElementStructType **param_4)

{
  uint uVar1;
  long lVar2;
  DownloadDataElementStructType *pDVar3;
  SecurityElementStructType *pSVar4;
  long lVar5;
  char *pcVar6;
  
  lVar2 = PRGSequencer::FindElementStructure(*(PRGSequencer **)(param_1 + 0x18),0x10,0);
  if (lVar2 == 0) {
    pcVar6 = "no toc found in this file";
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0xc);
    lVar2 = PRGSequencer::GetElementData(*(PRGSequencer **)(param_1 + 0x18),*(uint *)(lVar2 + 0x10))
    ;
    if ((ulong)uVar1 != 0) {
      lVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 4 + lVar5) == param_2) {
          uVar1 = *(uint *)(lVar2 + lVar5);
          if (param_3 != (DownloadDataElementStructType **)0x0) {
            pDVar3 = (DownloadDataElementStructType *)
                     PRGSequencer::FindElementStructure
                               (*(PRGSequencer **)(param_1 + 0x18),0xc,uVar1);
            if (pDVar3 == (DownloadDataElementStructType *)0x0) {
              pcVar6 = "missing download data";
              goto LAB_001b8b6b;
            }
            *param_3 = pDVar3;
          }
          if (param_4 == (SecurityElementStructType **)0x0) {
            return 0;
          }
          pSVar4 = (SecurityElementStructType *)
                   PRGSequencer::FindElementStructure(*(PRGSequencer **)(param_1 + 0x18),0xf,uVar1);
          if (pSVar4 != (SecurityElementStructType *)0x0) {
            *param_4 = pSVar4;
            return 0;
          }
          pcVar6 = "missing security pack";
          goto LAB_001b8b6b;
        }
        lVar5 = lVar5 + 0x90;
      } while ((ulong)uVar1 * 0x90 != lVar5);
    }
    pcVar6 = "not found in this file";
  }
LAB_001b8b6b:
  _AMAuthInstallLog(3,"_FlsParserFindDownloadItem",pcVar6);
  return 1;
}

