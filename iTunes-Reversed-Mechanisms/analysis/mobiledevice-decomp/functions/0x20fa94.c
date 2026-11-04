// rea decompile_all
// name: _BrotliStoreUncompressedMetaBlock
// address: 0x20fa94
// body: available
// range: 0x20fa94-0x20fc11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliStoreUncompressedMetaBlock
               (int param_1,long param_2,ulong param_3,ulong param_4,size_t param_5,ulong *param_6,
               long param_7)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  
  param_3 = param_3 & param_4;
  uVar4 = *param_6;
  *(ulong *)(param_7 + (uVar4 >> 3)) = (ulong)*(byte *)(param_7 + (uVar4 >> 3));
  if ((param_5 == 1) || (uVar2 = (int)param_5 - 1, uVar2 < 0x8000)) {
    uVar3 = 4;
  }
  else {
    uVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
      }
    }
    uVar3 = (ulong)((uVar1 ^ 0xffffffe0) + 0x24 >> 2);
  }
  uVar5 = uVar4 + 1 >> 3;
  *(ulong *)(param_7 + uVar5) =
       uVar3 - 4 << ((byte)(uVar4 + 1) & 7) | (ulong)*(byte *)(param_7 + uVar5);
  uVar5 = uVar4 + 3 >> 3;
  *(size_t *)(param_7 + uVar5) =
       param_5 - 1 << ((byte)(uVar4 + 3) & 7) | (ulong)*(byte *)(param_7 + uVar5);
  uVar4 = uVar4 + uVar3 * 4 + 3;
  *(ulong *)(param_7 + (uVar4 >> 3)) =
       (ulong)*(byte *)(param_7 + (uVar4 >> 3)) | 1L << ((byte)uVar4 & 7);
  uVar2 = (int)uVar4 + 8;
  uVar4 = (ulong)(uVar2 & 0xfffffff8);
  uVar3 = (ulong)(uVar2 >> 3);
  *(undefined1 *)(param_7 + uVar3) = 0;
  if (param_4 + 1 < param_3 + param_5) {
    sVar6 = (param_4 + 1) - param_3;
    _memcpy((void *)(uVar3 + param_7),(void *)(param_3 + param_2),sVar6);
    uVar4 = uVar4 + sVar6 * 8;
    param_5 = param_5 - sVar6;
    uVar3 = uVar4 >> 3;
    param_3 = 0;
  }
  _memcpy((void *)(uVar3 + param_7),(void *)(param_2 + param_3),param_5);
  uVar4 = uVar4 + param_5 * 8;
  *param_6 = uVar4;
  *(undefined1 *)(param_7 + (uVar4 >> 3)) = 0;
  if (param_1 != 0) {
    *(undefined8 *)(param_7 + (uVar4 >> 3)) = 1;
    uVar3 = uVar4 + 1 >> 3;
    *(ulong *)(param_7 + uVar3) = (ulong)*(byte *)(param_7 + uVar3) | 1L << ((byte)(uVar4 + 1) & 7);
    *param_6 = (ulong)((int)uVar4 + 8);
    *(undefined1 *)(param_7 + (ulong)((int)uVar4 + 9U >> 3)) = 0;
  }
  return;
}

