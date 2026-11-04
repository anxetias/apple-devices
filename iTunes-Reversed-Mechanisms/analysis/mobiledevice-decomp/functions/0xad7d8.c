// rea decompile_all
// name: _realpath_parent_no_symlink
// address: 0xad7d8
// body: available
// range: 0xad7d8-0xad977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_realpath_parent_no_symlink
          (char *param_1,char *param_2,undefined2 *param_3,long *param_4,undefined8 param_5,
          undefined8 param_6)

{
  int iVar1;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 local_c0 [4];
  ushort local_bc;
  
  sVar2 = _strlen(param_1);
  if (param_1[sVar2 - 1] == '/') {
    param_1[sVar2 - 1] = '\0';
    sVar2 = sVar2 - 1;
  }
  pcVar8 = param_1 + sVar2;
  do {
    pcVar8 = pcVar8 + -1;
    if (pcVar8 < param_1) {
      uVar7 = 0x24c;
      goto LAB_000ad89b;
    }
    sVar2 = sVar2 - 1;
  } while (*pcVar8 != '/');
  if (sVar2 == 0) {
    _strlcpy(param_2,param_1,0x400);
LAB_000ad8d3:
    iVar1 = _lstat_INODE64(param_2,local_c0);
    if (iVar1 == 0) {
      uVar4 = (ulong)local_bc;
      if ((local_bc & 0xf000) == 0xa000) {
        uVar7 = 0x26a;
        goto LAB_000ad89b;
      }
    }
    else {
      uVar4 = 0;
    }
    *param_3 = (short)uVar4;
    uVar7 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
    *pcVar8 = '\0';
    lVar3 = _realpath_DARWIN_EXTSN(param_1,param_2);
    if (lVar3 == 0) {
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      lVar3 = __CreateAndLogDMError
                        ("realpath_parent_no_symlink",599,&cf_realpathof__s_failedatelement__s___s,
                         pcVar6,0,param_6,&cf_realpathof__s_failedatelement__s___s,param_1,param_2,
                         pcVar6);
      *pcVar8 = '/';
    }
    else {
      *pcVar8 = '/';
      sVar2 = _strlcat(param_2,pcVar8,0x400);
      if (sVar2 < 0x400) goto LAB_000ad8d3;
      uVar7 = 0x260;
LAB_000ad89b:
      lVar3 = __CreateAndLogDMError("realpath_parent_no_symlink",uVar7);
    }
    if (param_4 == (long *)0x0) {
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
    }
    else {
      *param_4 = lVar3;
    }
    uVar7 = 0;
  }
  return uVar7;
}

