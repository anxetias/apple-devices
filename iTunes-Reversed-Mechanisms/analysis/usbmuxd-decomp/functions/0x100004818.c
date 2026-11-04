// rea decompile_all
// name: FUN_100004818
// address: 0x100004818
// body: available
// range: 0x100004818-0x1000049e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100004818(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  int *piVar6;
  char *pcVar7;
  long lVar8;
  undefined1 local_b8 [96];
  size_t local_58;
  
  iVar1 = _open(param_1,0x100);
  if (iVar1 == -1) {
    piVar6 = ___error();
    *param_2 = *piVar6;
    piVar6 = ___error();
    if ((*piVar6 != 2) && (2 < DAT_100021030)) {
      piVar6 = ___error();
      pcVar7 = _strerror(*piVar6);
      FUN_1000008d2(3,0,&cf__sCouldnotopen_s__s,"CopyDataForPath",param_1,pcVar7);
    }
  }
  else {
    iVar2 = _fstat_INODE64(iVar1,local_b8);
    if (iVar2 == -1) {
      piVar6 = ___error();
      *param_2 = *piVar6;
      if (2 < DAT_100021030) {
        piVar6 = ___error();
        pcVar7 = _strerror(*piVar6);
        FUN_1000008d2(3,0,&cf__sCouldnotfstat_s__s,"CopyDataForPath",param_1,pcVar7);
      }
    }
    else {
      lVar3 = _CFDataCreateMutable(0,local_58);
      if (lVar3 != 0) {
        _CFDataSetLength(lVar3,local_58);
        pvVar4 = (void *)_CFDataGetMutableBytePtr(lVar3);
        sVar5 = _read(iVar1,pvVar4,local_58);
        if (sVar5 == local_58) {
          _CFRetain(lVar3);
          lVar8 = lVar3;
        }
        else {
          iVar2 = 5;
          if (sVar5 == 0xffffffffffffffff) {
            piVar6 = ___error();
            iVar2 = *piVar6;
          }
          *param_2 = iVar2;
          if (DAT_100021030 < 3) {
            lVar8 = 0;
          }
          else {
            piVar6 = ___error();
            pcVar7 = _strerror(*piVar6);
            lVar8 = 0;
            FUN_1000008d2(3,0,&cf__sCouldnotread_s__s,"CopyDataForPath",param_1,pcVar7);
          }
        }
        _close(iVar1);
        _CFRelease(lVar3);
        return lVar8;
      }
      *param_2 = 0xc;
    }
    _close(iVar1);
  }
  return 0;
}

