// rea decompile_all
// name: _MISDataCreateFromFile
// address: 0xbf055
// body: available
// range: 0xbf055-0xbf156 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbf152 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _MISDataCreateFromFile(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  size_t sVar4;
  long lVar5;
  undefined1 local_4b8 [96];
  size_t local_458;
  char local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_004412b8;
  _CFStringGetFileSystemRepresentation(param_2,local_428,0x400);
  lVar5 = 0;
  iVar1 = _open(local_428,0,0);
  if (iVar1 == -1) goto LAB_000bf131;
  iVar2 = _fstat_INODE64(iVar1,local_4b8);
  if (iVar2 == -1) {
LAB_000bf106:
    pvVar3 = (void *)0x0;
LAB_000bf109:
    lVar5 = 0;
  }
  else {
    pvVar3 = _malloc(local_458);
    if (pvVar3 == (void *)0x0) goto LAB_000bf106;
    sVar4 = _read(iVar1,pvVar3,local_458);
    if (sVar4 != local_458) goto LAB_000bf109;
    lVar5 = _CFDataCreateWithBytesNoCopy
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,pvVar3,local_458,
                       *(undefined8 *)PTR__kCFAllocatorMalloc_004410f0);
  }
  _close(iVar1);
  if (lVar5 == 0 && pvVar3 != (void *)0x0) {
    _free(pvVar3);
    lVar5 = 0;
  }
LAB_000bf131:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_28) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

