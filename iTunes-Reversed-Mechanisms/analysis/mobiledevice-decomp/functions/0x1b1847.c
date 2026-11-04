// rea decompile_all
// name: _AMAuthInstallPlatformMakeDirectoryForURL
// address: 0x1b1847
// body: available
// range: 0x1b1847-0x1b1a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b1a1f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallPlatformMakeDirectoryForURL(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 local_8d8 [144];
  char *local_848;
  char local_83a [1026];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_83a[0] = '/';
  local_83a[1] = '\0';
  ___bzero(local_438,0x400);
  cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_83a + 2,0x400);
  if (cVar1 == '\0') {
    uVar8 = 3;
  }
  else {
    sVar3 = _strlen(local_83a + 2);
    cVar1 = _CFURLHasDirectoryPath(param_1);
    if (cVar1 == '\0') {
      if (sVar3 == 0) {
        sVar4 = 0;
      }
      else {
        do {
          sVar4 = sVar3 - 1;
          if (local_83a[sVar3 + 1] == '/') break;
          bVar9 = sVar3 != 1;
          sVar3 = sVar4;
        } while (bVar9);
      }
      local_83a[sVar4 + 2] = '\0';
    }
    local_848 = local_83a + 2;
    pcVar5 = _strsep(&local_848,local_83a);
    if (pcVar5 != (char *)0x0) {
      do {
        if (*pcVar5 != '\0') {
          _snprintf(local_438,0x400,"%s%c%s",local_438,0x2f,pcVar5);
          iVar2 = _stat_INODE64(local_438,local_8d8);
          if (iVar2 == -1) {
            piVar6 = ___error();
            if (*piVar6 == 2) {
              iVar2 = _mkdir(local_438,0x1ed);
              if ((iVar2 != -1) || (piVar6 = ___error(), *piVar6 == 0x11)) goto LAB_001b198f;
              pcVar5 = "Could not mkdir (%s)";
            }
            else {
              pcVar5 = "Could not stat (%s)";
            }
            piVar6 = ___error();
            pcVar7 = _strerror(*piVar6);
            _AMAuthInstallLog(3,"AMAuthInstallPlatformMakeDirectoryForURL",pcVar5,pcVar7);
            _AMAuthInstallLog(7,"AMAuthInstallPlatformMakeDirectoryForURL","%s",local_438);
            uVar8 = 4;
            goto LAB_001b19a1;
          }
        }
LAB_001b198f:
        pcVar5 = _strsep(&local_848,local_83a);
      } while (pcVar5 != (char *)0x0);
    }
    uVar8 = 0;
  }
LAB_001b19a1:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

