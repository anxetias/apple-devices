// rea decompile_all
// name: __ensureDirectoryExists
// address: 0xc00ca
// body: available
// range: 0xc00ca-0xc0261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc0209 to 0xbf524 __AMSDebugLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xc025d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __ensureDirectoryExists(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  undefined1 local_8c8 [144];
  undefined1 local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  if (param_1 == 0) {
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      __AMSDebugLog("DLEnsureDirectoryExists called on a NULL path\n");
      return;
    }
  }
  else {
    lVar3 = _CFStringCreateArrayBySeparatingStrings(0,param_1,&cf__);
    if (lVar3 != 0) {
      lVar4 = _CFArrayGetCount(lVar3);
      if (1 < lVar4) {
        lVar7 = 1;
        do {
          ___bzero(local_838,0x400);
          uVar5 = _CFArrayGetValueAtIndex(lVar3,lVar7);
          cVar1 = _CFStringGetFileSystemRepresentation(uVar5,local_838,0x400);
          if (cVar1 != '\x01') {
            __AMSDebugLog(
                         "DLEnsureDirectoryExists: Can\'t get File System encoded char* for path component string\n"
                         );
            break;
          }
          ___strcat_chk(local_438,"/",0x400);
          ___strcat_chk(local_438,local_838,0x400);
          iVar2 = _stat_INODE64(local_438,local_8c8);
          if (((iVar2 != 0) && (iVar2 = _mkdir(local_438,0x1ff), iVar2 != 0)) &&
             (piVar6 = ___error(), *piVar6 != 0x11)) {
            __AMSDebugLog("DLEnsureDirectoryExists: Can\'t make directory for %s\n",local_438);
            break;
          }
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
      }
      _CFRelease(lVar3);
    }
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

