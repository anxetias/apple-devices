// rea decompile_all
// name: _fPersonalizationAssetSetBytesAtOffset2
// address: 0x17d9a4
// body: available
// range: 0x17d9a4-0x17da64 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_fPersonalizationAssetSetBytesAtOffset2
          (long param_1,undefined8 param_2,long param_3,void *param_4,uint param_5,uint param_6)

{
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  
  _CoreUARPRestoreLogError
            (param_1,1,"UARP Restore (IM4M): Get %u Bytes from offset %u",param_5,param_6);
  if (*(char *)(param_1 + 0x7a0) == '\x01') {
    iVar1 = _fseek(*(FILE **)(param_3 + 0x10),(ulong)param_6,0);
    if (iVar1 == -1) {
      return 0x36;
    }
    uVar3 = (ulong)param_5 & 0xffff;
    sVar2 = _fwrite(param_4,1,uVar3,*(FILE **)(param_3 + 0x10));
    if (sVar2 != uVar3) {
      return 0x36;
    }
    _fflush(*(FILE **)(param_3 + 0x10));
  }
  else {
    if (*(uint *)(param_3 + 0x134) < param_5 + param_6) {
      return 0x2b;
    }
    _memcpy((void *)((ulong)param_6 + *(long *)(param_3 + 0x118)),param_4,(ulong)param_5 & 0xffff);
  }
  return 0;
}

