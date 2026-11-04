// rea decompile_all
// name: _fAssetGetBytesAtOffset2
// address: 0x17d2a1
// body: available
// range: 0x17d2a1-0x17d3db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_fAssetGetBytesAtOffset2
          (undefined8 param_1,undefined8 param_2,long param_3,void *param_4,uint param_5,
          uint param_6,undefined2 *param_7)

{
  FILE *pFVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  _CoreUARPRestoreLogError(param_1,1,"UARP Restore: Get %u Bytes from offset %u",param_5,param_6);
  if (*(FILE **)(param_3 + 0x10) == (FILE *)0x0) {
    uVar3 = (ulong)(*(uint *)(param_3 + 0x134) - param_6 & 0xffff);
    if (param_5 + param_6 <= *(uint *)(param_3 + 0x134)) {
      uVar3 = (ulong)param_5 & 0xffff;
    }
    _memcpy(param_4,(void *)((ulong)param_6 + *(long *)(param_3 + 0x118)),uVar3);
  }
  else {
    _fseek(*(FILE **)(param_3 + 0x10),(ulong)param_6,0);
    uVar4 = (ulong)param_5 & 0xffff;
    uVar3 = _fread(param_4,1,uVar4,*(FILE **)(param_3 + 0x10));
    if (uVar3 < uVar4) {
      pFVar1 = *(FILE **)(param_3 + 0x10);
      iVar2 = _ferror(pFVar1);
      if (iVar2 == 0) {
        iVar2 = _feof(pFVar1);
        _CoreUARPRestoreLogError(param_1,1,"UARP Restore: EOF %d, Read %zu bytes",iVar2,uVar3);
        if (iVar2 != 0) goto LAB_0017d376;
      }
      else {
        _CoreUARPRestoreLogError
                  (param_1,1,"UARP Restore: Read error %d, Read %zu bytes",iVar2,uVar3);
      }
      return 0x36;
    }
  }
LAB_0017d376:
  *param_7 = (short)uVar3;
  if (*(int *)(param_3 + 0x134) != 0) {
    _CoreUARPRestoreAssetTransferProgress(param_1,param_3,param_6);
  }
  return 0;
}

