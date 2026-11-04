// rea decompile_all
// name: _BrotliStoreMetaBlockTrivial
// address: 0x20ece3
// body: available
// range: 0x20ece3-0x20ef61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20ef5d to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliStoreMetaBlockTrivial
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,int param_6,long param_7,undefined8 param_8,undefined8 param_9,
               ulong *param_10,long param_11)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_2500 [2184];
  undefined8 local_1c78;
  undefined1 local_1c70 [2824];
  undefined8 local_1168;
  undefined1 local_1160 [1032];
  undefined8 local_d58;
  undefined8 local_d50;
  ulong local_d48;
  undefined8 local_d40;
  undefined8 local_d38;
  int local_d2c;
  undefined1 local_d28 [288];
  undefined1 local_c08 [144];
  undefined1 local_b78 [1408];
  undefined1 local_5f8 [704];
  undefined1 local_338 [512];
  undefined1 local_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_d48 = (ulong)*(uint *)(param_7 + 0x48);
  local_d40 = param_5;
  local_d38 = param_3;
  local_d2c = param_6;
  _StoreCompressedMetaBlockHeader(param_6,param_4,param_10,param_11);
  ___bzero(local_1160,0x408);
  local_d58 = 0x7ff0000000000000;
  ___bzero(local_1c70,0xb08);
  local_1168 = 0x7ff0000000000000;
  ___bzero(local_2500,0x888);
  local_1c78 = 0x7ff0000000000000;
  local_d50 = param_2;
  _BuildHistograms(param_2,local_d38,local_d40,param_8,param_9,local_1160,local_1c70,local_2500);
  uVar1 = *param_10;
  uVar4 = uVar1 >> 3;
  *(ulong *)(param_11 + uVar4) = (ulong)*(byte *)(param_11 + uVar4);
  *param_10 = uVar1 + 0xd;
  uVar3 = _BrotliAllocate(param_1,0x2c08);
  if (*(int *)(param_1 + 0x18) == 0) {
    _BuildAndStoreHuffmanTree(local_1160,0x100,0x100,uVar3,local_138,local_338,param_10,param_11);
    _BuildAndStoreHuffmanTree(local_1c70,0x2c0,0x2c0,uVar3,local_5f8,local_b78,param_10,param_11);
    _BuildAndStoreHuffmanTree(local_2500,0x8c,local_d48,uVar3,local_c08,local_d28,param_10,param_11)
    ;
    _BrotliFree(param_1,uVar3);
    _StoreDataWithHuffmanCodes
              (local_d50,local_d38,local_d40,param_8,param_9,local_138,local_338,local_5f8,local_b78
               ,local_c08,local_d28,param_10,param_11);
    if (local_d2c != 0) {
      uVar2 = (int)*param_10 + 7;
      *param_10 = (ulong)(uVar2 & 0xfffffff8);
      *(undefined1 *)(param_11 + (ulong)(uVar2 >> 3)) = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

