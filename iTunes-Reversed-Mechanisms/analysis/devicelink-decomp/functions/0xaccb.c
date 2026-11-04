// rea decompile_all
// name: _DLEnsureDirectoryExists
// address: 0xaccb
// body: available
// range: 0xaccb-0xaf47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xae61 to 0xeee5 _fwrite (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xae8d to 0xeed3 _fprintf (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xaec6 to 0xeedf _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _DLEnsureDirectoryExists(long param_1)

{
  FILE *pFVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  undefined1 local_d0 [144];
  ulong local_40;
  long local_38;
  
  if (param_1 == 0) {
    _fwrite("DLEnsureDirectoryExists called on a NULL path\n",0x2e,1,
            *(FILE **)PTR____stderrp_00015078);
    return;
  }
  sVar4 = _CFStringGetMaximumSizeOfFileSystemRepresentation();
  pcVar5 = _calloc(1,sVar4);
  if (pcVar5 == (char *)0x0) {
    _fprintf(*(FILE **)PTR____stderrp_00015078,"DLEnsureDirectoryExists: can\'t malloc %ld bytes",
             sVar4);
    return;
  }
  cVar2 = _CFStringGetFileSystemRepresentation(param_1,pcVar5,sVar4);
  if (cVar2 != '\x01') {
    _fwrite("DLEnsureDirectoryExists: Can\'t get File System encoded char* for path component string\n"
            ,0x57,1,*(FILE **)PTR____stderrp_00015078);
    _free(pcVar5);
    return;
  }
  iVar3 = _stat_INODE64(pcVar5,local_d0);
  if (iVar3 != 0) {
    ___bzero(pcVar5,sVar4);
    lVar6 = _CFStringCreateArrayBySeparatingStrings(0,param_1,&cf__);
    if (lVar6 != 0) {
      local_40 = _CFArrayGetCount(lVar6);
      if (1 < (int)(uint)local_40) {
        local_40 = (ulong)((uint)local_40 & 0x7fffffff);
        uVar10 = 1;
        local_38 = lVar6;
        do {
          uVar7 = _CFArrayGetValueAtIndex(local_38,uVar10);
          sVar4 = _CFStringGetMaximumSizeOfFileSystemRepresentation(uVar7);
          pcVar8 = _calloc(1,sVar4);
          cVar2 = _CFStringGetFileSystemRepresentation(uVar7,pcVar8,sVar4);
          if (cVar2 != '\x01') {
            _fwrite("DLEnsureDirectoryExists: Can\'t get File System encoded char* for path component string\n"
                    ,0x57,1,*(FILE **)PTR____stderrp_00015078);
            _free(pcVar8);
            lVar6 = local_38;
            break;
          }
          sVar4 = _strlen(pcVar5);
          (pcVar5 + sVar4)[0] = '/';
          (pcVar5 + sVar4)[1] = '\0';
          _strcat(pcVar5,pcVar8);
          _free(pcVar8);
          iVar3 = _stat_INODE64(pcVar5,local_d0);
          if (((iVar3 != 0) && (iVar3 = _mkdir(pcVar5,0x1ff), iVar3 != 0)) &&
             (piVar9 = ___error(), *piVar9 != 0x11)) {
            pFVar1 = *(FILE **)PTR____stderrp_00015078;
            piVar9 = ___error();
            pcVar8 = _strerror(*piVar9);
            _fprintf(pFVar1,"DLEnsureDirectoryExists: Can\'t make directory for %s: %s\n",pcVar5,
                     pcVar8);
            lVar6 = local_38;
            break;
          }
          uVar10 = uVar10 + 1;
          lVar6 = local_38;
        } while (local_40 != uVar10);
      }
      _CFRelease(lVar6);
    }
  }
  _free(pcVar5);
  return;
}

