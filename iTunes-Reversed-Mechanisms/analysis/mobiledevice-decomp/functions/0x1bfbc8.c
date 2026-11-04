// rea decompile_all
// name: _BrotliCompressFragmentFast
// address: 0x1bfbc8
// body: available
// range: 0x1bfbc8-0x1bfd1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCompressFragmentFast
               (undefined8 param_1,long param_2,long param_3,int param_4,undefined8 param_5,
               uint param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,ulong *param_11,long param_12)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *param_11;
  if (param_3 != 0) {
    iVar2 = 0x1f;
    if (param_6 != 0) {
      for (; param_6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    switch(iVar2) {
    case 9:
      _BrotliCompressFragmentFastImpl9
                (param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,param_11,
                 param_12);
      break;
    case 0xb:
      _BrotliCompressFragmentFastImpl11
                (param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,param_11,
                 param_12);
      break;
    case 0xd:
      _BrotliCompressFragmentFastImpl13
                (param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,param_11,
                 param_12);
      break;
    case 0xf:
      _BrotliCompressFragmentFastImpl15
                (param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,param_11,
                 param_12);
    }
    if (param_3 * 8 + 0x1fU < *param_11 - uVar3) {
      _EmitUncompressedMetaBlock(param_2,param_3 + param_2,uVar3,param_11,param_12);
    }
    if (param_4 == 0) {
      return;
    }
    uVar3 = *param_11;
  }
  *(ulong *)(param_12 + (uVar3 >> 3)) =
       (ulong)*(byte *)(param_12 + (uVar3 >> 3)) | 1L << ((byte)uVar3 & 7);
  uVar1 = uVar3 + 1;
  *param_11 = uVar1;
  *(ulong *)(param_12 + (uVar1 >> 3)) =
       (ulong)*(byte *)(param_12 + (uVar1 >> 3)) | 1L << ((byte)uVar1 & 7);
  *param_11 = (ulong)((int)uVar3 + 9U & 0xfffffff8);
  return;
}

