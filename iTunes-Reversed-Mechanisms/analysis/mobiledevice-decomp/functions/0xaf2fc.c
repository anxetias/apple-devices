// rea decompile_all
// name: _mkdir_recursive
// address: 0xaf2fc
// body: available
// range: 0xaf2fc-0xaf505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _mkdir_recursive(char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  iVar2 = _mkdir(param_1,0x1c0);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = ___error();
  if (*piVar3 == 0x11) {
    return 0;
  }
  piVar3 = ___error();
  if (*piVar3 != 2) {
    return 0xffffffff;
  }
  pcVar4 = _strdup(param_1);
  pcVar8 = pcVar4 + (*pcVar4 == '/');
  do {
    if (*pcVar8 == '/') {
      *pcVar8 = '\0';
      iVar2 = _mkdir(pcVar4,0x1c0);
      if (((iVar2 != 0) && (piVar3 = ___error(), *piVar3 != 0x11)) &&
         (piVar3 = ___error(), *piVar3 != 2)) {
        piVar3 = ___error();
        pcVar8 = _strerror(*piVar3);
        _dmlog("mkdir_recursive",0x7f,&cf_mkdirerrorfor_s__s,pcVar4,pcVar8);
        goto LAB_000af4e6;
      }
      cVar1 = _verbose();
      if (cVar1 != '\0') {
        piVar3 = ___error();
        iVar2 = *piVar3;
        piVar3 = ___error();
        pcVar5 = _strerror(*piVar3);
        _dmlog("mkdir_recursive",0x82,&cf_mkdirresultfor_s__d_s,pcVar4,iVar2,pcVar5);
      }
      *pcVar8 = '/';
    }
    else if (*pcVar8 == '\0') break;
    pcVar8 = pcVar8 + 1;
  } while( true );
  iVar2 = _mkdir(param_1,0x1c0);
  if (iVar2 == 0) {
    cVar1 = _verbose();
    if (cVar1 == '\0') {
LAB_000af47c:
      uVar9 = 0;
      goto LAB_000af4ec;
    }
    piVar3 = ___error();
    iVar2 = *piVar3;
    piVar3 = ___error();
    pcVar8 = _strerror(*piVar3);
    pcVar6 = &cf_created_s;
    uVar7 = 0x8f;
  }
  else {
    piVar3 = ___error();
    if (*piVar3 != 0x11) {
      piVar3 = ___error();
      iVar2 = *piVar3;
      piVar3 = ___error();
      pcVar8 = _strerror(*piVar3);
      _dmlog("mkdir_recursive",0x8a,&cf_mkdirfailedfor_s__d_s,pcVar4,iVar2,pcVar8);
LAB_000af4e6:
      uVar9 = 0xffffffff;
      goto LAB_000af4ec;
    }
    cVar1 = _verbose();
    if (cVar1 == '\0') goto LAB_000af47c;
    piVar3 = ___error();
    iVar2 = *piVar3;
    piVar3 = ___error();
    pcVar8 = _strerror(*piVar3);
    pcVar6 = &cf_mkdirresultfor_s__d_s;
    uVar7 = 0x8d;
  }
  uVar9 = 0;
  _dmlog("mkdir_recursive",uVar7,pcVar6,pcVar4,iVar2,pcVar8);
LAB_000af4ec:
  _free(pcVar4);
  return uVar9;
}

