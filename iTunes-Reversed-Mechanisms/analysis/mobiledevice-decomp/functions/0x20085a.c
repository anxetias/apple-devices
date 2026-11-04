// rea decompile_all
// name: _BrotliHistogramReindexDistance
// address: 0x20085a
// body: available
// range: 0x20085a-0x2009ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _BrotliHistogramReindexDistance(long param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_40;
  
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return 0;
    }
    uVar5 = 0;
    _BrotliFree(param_1,0);
    local_40 = 0;
  }
  else {
    pvVar2 = (void *)_BrotliAllocate(param_1,param_4 * 4);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      return 0;
    }
    _memset(pvVar2,0xff,param_4 * 4);
    lVar3 = 0;
    do {
      uVar4 = (ulong)*(uint *)(param_3 + lVar3 * 4);
      if (*(int *)((long)pvVar2 + uVar4 * 4) == -1) {
        *(int *)((long)pvVar2 + uVar4 * 4) = (int)uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      }
      lVar3 = lVar3 + 1;
    } while (param_4 != lVar3);
    if ((int)uVar5 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = _BrotliAllocate(param_1,uVar5 * 0x890);
    }
    uVar5 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      return 0;
    }
    lVar3 = 0;
    do {
      uVar4 = (ulong)*(uint *)(param_3 + lVar3 * 4);
      iVar1 = *(int *)((long)pvVar2 + uVar4 * 4);
      if (iVar1 == (int)uVar5) {
        _memcpy((void *)(uVar5 * 0x890 + local_40),(void *)(uVar4 * 0x890 + param_2),0x890);
        uVar5 = (ulong)((int)uVar5 + 1);
        iVar1 = *(int *)((long)pvVar2 + (ulong)*(uint *)(param_3 + lVar3 * 4) * 4);
      }
      *(int *)(param_3 + lVar3 * 4) = iVar1;
      lVar3 = lVar3 + 1;
    } while (param_4 != lVar3);
    _BrotliFree(param_1,pvVar2);
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      lVar3 = 0;
      do {
        _memcpy((void *)(param_2 + lVar3),(void *)(lVar3 + local_40),0x890);
        lVar3 = lVar3 + 0x890;
      } while (uVar5 * 0x890 - lVar3 != 0);
    }
  }
  _BrotliFree(param_1,local_40);
  return uVar5;
}

