// rea decompile_all
// name: _BrotliCompressFragmentTwoPass
// address: 0x1dbc08
// body: available
// range: 0x1dbc08-0x1dbe43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCompressFragmentTwoPass
               (undefined8 param_1,void *param_2,size_t param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,uint param_8,ulong *param_9,long param_10)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar5 = *param_9;
  iVar3 = 0x1f;
  if (param_8 != 0) {
    for (; param_8 >> iVar3 == 0; iVar3 = iVar3 + -1) {
    }
  }
  switch(iVar3) {
  case 8:
    _BrotliCompressFragmentTwoPassImpl8
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 9:
    _BrotliCompressFragmentTwoPassImpl9
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 10:
    _BrotliCompressFragmentTwoPassImpl10
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0xb:
    _BrotliCompressFragmentTwoPassImpl11
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0xc:
    _BrotliCompressFragmentTwoPassImpl12
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0xd:
    _BrotliCompressFragmentTwoPassImpl13
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0xe:
    _BrotliCompressFragmentTwoPassImpl14
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0xf:
    _BrotliCompressFragmentTwoPassImpl15
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0x10:
    _BrotliCompressFragmentTwoPassImpl16
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
    break;
  case 0x11:
    _BrotliCompressFragmentTwoPassImpl17
              (param_1,param_2,param_3,param_5,param_6,param_7,param_9,param_10);
  }
  if (param_3 * 8 + 0x1f < *param_9 - uVar5) {
    pbVar1 = (byte *)(param_10 + (uVar5 >> 3));
    *pbVar1 = *pbVar1 & ~(-1 << ((byte)uVar5 & 7));
    *param_9 = uVar5;
    _BrotliStoreMetaBlockHeader(param_3,1,param_9,param_10);
    uVar4 = (int)*param_9 + 7;
    *param_9 = (ulong)(uVar4 & 0xfffffff8);
    _memcpy((void *)((ulong)(uVar4 >> 3) + param_10),param_2,param_3);
    uVar5 = param_3 * 8 + *param_9;
    *param_9 = uVar5;
    *(undefined1 *)(param_10 + (uVar5 >> 3)) = 0;
  }
  if (param_4 != 0) {
    uVar2 = *param_9;
    *(ulong *)(param_10 + (uVar2 >> 3)) =
         (ulong)*(byte *)(param_10 + (uVar2 >> 3)) | 1L << ((byte)uVar2 & 7);
    uVar5 = uVar2 + 1;
    *param_9 = uVar5;
    *(ulong *)(param_10 + (uVar5 >> 3)) =
         (ulong)*(byte *)(param_10 + (uVar5 >> 3)) | 1L << ((byte)uVar5 & 7);
    *param_9 = (ulong)((int)uVar2 + 9U & 0xfffffff8);
  }
  return;
}

