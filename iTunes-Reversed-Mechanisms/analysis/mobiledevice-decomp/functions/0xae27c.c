// rea decompile_all
// name: _copy_file_func
// address: 0xae27c
// body: available
// range: 0xae27c-0xae496 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xae41b to 0x2aa374 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _copy_file_func(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  char *from;
  char *to;
  int *piVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  from = (char *)_createPathForString(param_1,*(undefined8 *)(param_3 + 0x38));
  to = (char *)_createPathForString(param_1,*(undefined8 *)(param_3 + 0x48));
  piVar3 = (int *)_CFDataGetBytePtr(param_2);
  if (*piVar3 - 4U < 7) {
    uVar6 = *(undefined8 *)(&DAT_00444870 + (ulong)(*piVar3 - 4U) * 8);
  }
  else {
    uVar6 = 0;
  }
  lVar4 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 8),uVar6);
  cVar1 = _verbose();
  if (cVar1 != '\0') {
    _dmlog("copy_file_func",0x251,&cf_oldFileList______p,uVar6,lVar4);
  }
  if (lVar4 == 0) {
    _dmlog("copy_file_func",0x254,&cf_oldFileListisNULL__oldManifest___,*(undefined8 *)(param_3 + 8)
          );
    _set_error(param_3,0);
  }
  else {
    iVar2 = _prepare_directories_for_file(to);
    if (iVar2 == 0) {
      cVar1 = _verbose();
      if (cVar1 != '\0') {
        _dmlog("copy_file_func",0x260,&cf_copying__s__to___s,from,to);
      }
      iVar2 = _copyfile(from,to,(copyfile_state_t)0x0,0xc000f);
      if (iVar2 == 0) {
        cVar1 = _CFDictionaryContainsKey(lVar4,param_1);
        if (cVar1 != '\0') {
          lVar4 = _CFDictionaryGetValue(*(undefined8 *)(param_3 + 0x18),&cf_PATCH);
          if (lVar4 == 0) {
            lVar4 = _CFDictionaryCreateMutable
                              (0,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                               PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            _CFDictionarySetValue(*(undefined8 *)(param_3 + 0x18),&cf_PATCH,lVar4);
          }
          _CFDictionarySetValue(lVar4,param_1,param_2);
        }
        goto LAB_000ae3f8;
      }
      piVar3 = ___error();
      pcVar5 = _strerror(*piVar3);
      _dmlog("copy_file_func",0x262,&cf_copyfilefailedtocopy_s__s,from,pcVar5);
    }
    else {
      piVar3 = ___error();
      pcVar5 = _strerror(*piVar3);
      _dmlog("copy_file_func",0x25b,&cf_prepare_directories_for_filefailed__s,pcVar5);
    }
    _set_error(param_3,0);
  }
LAB_000ae3f8:
  if (from != (char *)0x0) {
    _free(from);
  }
  if (to == (char *)0x0) {
    return;
  }
  _free(to);
  return;
}

