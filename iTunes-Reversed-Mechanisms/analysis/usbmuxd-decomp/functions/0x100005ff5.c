// rea decompile_all
// name: FUN_100005ff5
// address: 0x100005ff5
// body: available
// range: 0x100005ff5-0x10000624e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100005ff5(char *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  
  sVar3 = _strlen(param_1);
  pcVar4 = _malloc(sVar3 + 5);
  if (pcVar4 == (char *)0x0) {
    iVar1 = 0xc;
  }
  else {
    _snprintf(pcVar4,sVar3 + 5,"%s.tmp",param_1);
    iVar1 = _unlink(pcVar4);
    if (iVar1 == -1) {
      piVar5 = ___error();
      iVar1 = *piVar5;
      piVar5 = ___error();
      if ((*piVar5 != 2) && (2 < DAT_100021030)) {
        pcVar6 = _strerror(iVar1);
        FUN_1000008d2(3,0,&cf__sunabletounlinkfile_s__s_,"WriteDataToPath",pcVar4,pcVar6);
      }
    }
    iVar2 = _open(pcVar4,0xb01,0x1a4);
    if (iVar2 == -1) {
      piVar5 = ___error();
      iVar1 = *piVar5;
      if (2 < DAT_100021030) {
        piVar5 = ___error();
        pcVar6 = _strerror(*piVar5);
        FUN_1000008d2(3,0,&cf__sunabletocreatefile_s__s_,"WriteDataToPath",pcVar4,pcVar6);
      }
    }
    else {
      uVar7 = _CFDataGetLength(param_2);
      pvVar8 = (void *)_CFDataGetBytePtr(param_2);
      uVar9 = _write(iVar2,pvVar8,uVar7 & 0xffffffff);
      if (uVar9 == (uVar7 & 0xffffffff)) {
        _close(iVar2);
        _unlink(param_1);
        iVar1 = _rename(pcVar4,param_1);
        if (iVar1 == -1) {
          piVar5 = ___error();
          iVar1 = *piVar5;
          if (2 < DAT_100021030) {
            piVar5 = ___error();
            pcVar6 = _strerror(*piVar5);
            FUN_1000008d2(3,0,&cf__sunabletorename_s__s_,"WriteDataToPath",param_1,pcVar6);
          }
          _unlink(pcVar4);
        }
        else {
          iVar1 = 0;
          if (6 < DAT_100021030) {
            iVar1 = 0;
            FUN_1000008d2(7,0,&cf__ssuccessfullywrotepairingrecord__s__,"WriteDataToPath",param_1);
          }
        }
      }
      else {
        iVar1 = 5;
        if (uVar9 == 0xffffffffffffffff) {
          piVar5 = ___error();
          iVar1 = *piVar5;
        }
        if (2 < DAT_100021030) {
          piVar5 = ___error();
          pcVar6 = _strerror(*piVar5);
          FUN_1000008d2(3,0,&cf__sunabletowritedatatofile__s,"WriteDataToPath",pcVar6);
        }
        _close(iVar2);
      }
    }
    _free(pcVar4);
  }
  return iVar1;
}

