// rea decompile_all
// name: _InitBlockSplitterLiteral
// address: 0x6db20
// body: available
// range: 0x6db20-0x6dcda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _InitBlockSplitterLiteral
               (long param_1,undefined8 *param_2,ulong param_3,long param_4,long *param_5,
               ulong *param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  
  param_3 = param_3 >> 9;
  uVar1 = param_3 + 1;
  uVar3 = 0x101;
  if (uVar1 < 0x101) {
    uVar3 = uVar1;
  }
  *param_2 = 0x100;
  param_2[1] = 0x200;
  param_2[2] = 0x4079000000000000;
  param_2[3] = 0;
  param_2[4] = param_4;
  param_2[6] = param_6;
  param_2[7] = 0x200;
  param_2[0xe] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  uVar2 = *(ulong *)(param_4 + 0x20);
  if (uVar2 <= param_3) {
    if (uVar2 == 0) {
      uVar2 = uVar1;
    }
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 * 2;
    } while (uVar5 <= param_3);
    pvVar4 = (void *)_BrotliAllocate(param_1,uVar5);
    if ((*(int *)(param_1 + 0x18) == 0) && (*(size_t *)(param_4 + 0x20) != 0)) {
      _memcpy(pvVar4,*(void **)(param_4 + 0x10),*(size_t *)(param_4 + 0x20));
    }
    _BrotliFree(param_1,*(undefined8 *)(param_4 + 0x10));
    *(void **)(param_4 + 0x10) = pvVar4;
    *(ulong *)(param_4 + 0x20) = uVar5;
  }
  uVar2 = *(ulong *)(param_4 + 0x28);
  if (uVar2 <= param_3) {
    if (uVar2 == 0) {
      uVar2 = uVar1;
    }
    do {
      uVar5 = uVar2;
      uVar2 = uVar5 * 2;
    } while (uVar5 <= param_3);
    pvVar4 = (void *)_BrotliAllocate(param_1,uVar5 * 4);
    if ((*(int *)(param_1 + 0x18) == 0) && (*(long *)(param_4 + 0x28) != 0)) {
      _memcpy(pvVar4,*(void **)(param_4 + 0x18),*(long *)(param_4 + 0x28) << 2);
    }
    _BrotliFree(param_1,*(undefined8 *)(param_4 + 0x18));
    *(void **)(param_4 + 0x18) = pvVar4;
    *(ulong *)(param_4 + 0x28) = uVar5;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(ulong *)(param_2[4] + 8) = uVar1;
    *param_6 = uVar3;
    lVar6 = _BrotliAllocate(param_1,uVar3 * 0x410);
    *param_5 = lVar6;
    param_2[5] = lVar6;
    if (*(int *)(param_1 + 0x18) == 0) {
      ___bzero(lVar6,0x408);
      *(undefined8 *)(lVar6 + 0x408) = 0x7ff0000000000000;
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
  }
  return;
}

