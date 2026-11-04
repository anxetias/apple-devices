// rea decompile_all
// name: _AMSupportPlatformMakeDirectoryForURL
// address: 0x69d3
// body: available
// range: 0x69d3-0x6bfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6bfa to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportPlatformMakeDirectoryForURL(undefined8 param_1)

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
  char *local_8d8;
  char local_8ca [2];
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  char local_838 [1024];
  char local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_8ca[0] = '/';
  local_8ca[1] = '\0';
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  cVar1 = _CFURLGetFileSystemRepresentation(param_1,1,local_838,0x400);
  if (cVar1 == '\0') {
    uVar8 = 3;
  }
  else {
    sVar3 = _strlen(local_838);
    cVar1 = _CFURLHasDirectoryPath(param_1);
    if (cVar1 == '\0') {
      if (sVar3 == 0) {
        sVar4 = 0;
      }
      else {
        do {
          sVar4 = sVar3 - 1;
          if (local_838[sVar3 - 1] == '/') break;
          bVar9 = sVar3 != 1;
          sVar3 = sVar4;
        } while (bVar9);
      }
      local_838[sVar4] = '\0';
    }
    local_8d8 = local_838;
    pcVar5 = _strsep(&local_8d8,local_8ca);
    if (pcVar5 != (char *)0x0) {
      do {
        local_848 = 0;
        uStack_840 = 0;
        local_858 = 0;
        uStack_850 = 0;
        local_868 = 0;
        uStack_860 = 0;
        local_878 = 0;
        uStack_870 = 0;
        local_888 = 0;
        uStack_880 = 0;
        local_898 = 0;
        uStack_890 = 0;
        local_8a8 = 0;
        uStack_8a0 = 0;
        local_8b8 = 0;
        uStack_8b0 = 0;
        local_8c8 = 0;
        uStack_8c0 = 0;
        if (*pcVar5 != '\0') {
          _snprintf(local_438,0x400,"%s%c%s",local_438,0x2f,pcVar5);
          iVar2 = _stat_INODE64(local_438,&local_8c8);
          if (iVar2 == -1) {
            piVar6 = ___error();
            if (*piVar6 == 2) {
              iVar2 = _mkdir(local_438,0x1ed);
              if ((iVar2 != -1) || (piVar6 = ___error(), *piVar6 == 0x11)) goto LAB_00006b66;
              pcVar5 = "Could not mkdir (%s)";
            }
            else {
              pcVar5 = "Could not stat (%s)";
            }
            piVar6 = ___error();
            pcVar7 = _strerror(*piVar6);
            _AMSupportLogInternal(3,"AMSupportPlatformMakeDirectoryForURL",pcVar5,pcVar7);
            _AMSupportLogInternal(8,"AMSupportPlatformMakeDirectoryForURL","%s",local_438);
            uVar8 = 4;
            goto LAB_00006b7c;
          }
        }
LAB_00006b66:
        pcVar5 = _strsep(&local_8d8,local_8ca);
      } while (pcVar5 != (char *)0x0);
    }
    uVar8 = 0;
  }
LAB_00006b7c:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}

