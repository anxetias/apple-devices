// rea decompile_all
// name: _AMRestorableIsURLDirectory
// address: 0x16f992
// body: available
// range: 0x16f992-0x16fa89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16fa85 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _AMRestorableIsURLDirectory(long param_1)

{
  char cVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined8 unaff_RBX;
  ulong uVar4;
  cfstringStruct *pcVar5;
  undefined1 local_4b8 [5];
  undefined1 local_4b3;
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    pcVar3 = &cf_Can_tcheckifNULLURLisadirectory;
  }
  else {
    pcVar3 = (cfstringStruct *)_CFURLCopyFileSystemPath(param_1,0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      cVar1 = _CFStringGetCString(pcVar3,local_428,0x400,0x8000100);
      if (cVar1 == '\0') {
        pcVar5 = &cf_Failedtogetcstringofpath;
LAB_0016fa81:
        uVar4 = 0;
      }
      else {
        iVar2 = _stat_INODE64(local_428,local_4b8);
        if (iVar2 != 0) {
          pcVar5 = &cf_Failedtostatfile;
          goto LAB_0016fa81;
        }
        uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),local_4b3) & 0xffffffffffffff40;
        uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 6);
        pcVar5 = (cfstringStruct *)0x0;
      }
      _AMRSafeLogAndRelease(3,pcVar5);
      goto LAB_0016fa1a;
    }
    pcVar3 = &cf_Failedtogetpathstring;
  }
  uVar4 = 0;
  _AMRSafeLog(3,&cf___,pcVar3);
LAB_0016fa1a:
  _CFRelease(pcVar3);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

