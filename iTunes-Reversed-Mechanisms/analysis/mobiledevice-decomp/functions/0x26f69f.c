// rea decompile_all
// name: _AMRLazyArchiveExtractToPath
// address: 0x26f69f
// body: available
// range: 0x26f69f-0x26f87e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26f87a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 _AMRLazyArchiveExtractToPath(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  FILE *pFVar5;
  void *pvVar6;
  size_t sVar7;
  undefined8 uVar8;
  ulong uVar9;
  size_t sVar10;
  undefined1 local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  cVar2 = _CFStringGetFileSystemRepresentation(param_2,local_438,0x400);
  uVar3 = 0;
  if ((cVar2 == '\0') || (lVar4 = _AMRLazyArchiveOpenFile(param_1,param_2,0), lVar4 == 0))
  goto LAB_0026f845;
  cVar2 = _CFStringGetFileSystemRepresentation(*(undefined8 *)(lVar4 + 0x20),local_838,0x400);
  if (cVar2 == '\0') {
LAB_0026f86a:
    uVar3 = 0;
    pvVar6 = (void *)0x0;
LAB_0026f830:
    _AMRLazyFileClose(lVar4);
  }
  else {
    uVar1 = *(ulong *)(lVar4 + 0x28);
    pFVar5 = _fopen(local_438,"wb");
    if (pFVar5 == (FILE *)0x0) goto LAB_0026f86a;
    pvVar6 = _calloc(1,0x20000);
    uVar9 = uVar1;
    if (pvVar6 == (void *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      do {
        if (uVar9 == 0) {
          _fclose(pFVar5);
          uVar8 = _CFDictionaryGetValue(*param_1,&cf___ArchiveFiles__);
          _CFDictionaryRemoveValue(uVar8,*(undefined8 *)(lVar4 + 0x20));
          uVar3 = _AMRLazyExtractorAddFileFromPathRange(*param_1,local_838,local_438,uVar1,0);
          goto LAB_0026f830;
        }
        sVar10 = 0x20000;
        if (uVar9 < 0x20000) {
          sVar10 = uVar9;
        }
        cVar2 = _AMRLazyFileRead(lVar4,pvVar6,sVar10);
        if (cVar2 == '\0') break;
        sVar7 = _fwrite(pvVar6,1,sVar10,pFVar5);
        uVar9 = uVar9 - sVar10;
      } while (sVar7 == sVar10);
    }
    _AMRLazyFileClose(lVar4);
    _fclose(pFVar5);
    uVar3 = 0;
  }
  if (pvVar6 != (void *)0x0) {
    _free(pvVar6);
  }
LAB_0026f845:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

