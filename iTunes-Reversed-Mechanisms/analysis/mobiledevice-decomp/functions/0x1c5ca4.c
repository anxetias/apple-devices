// rea decompile_all
// name: _BuildAndStoreCommandPrefixCode
// address: 0x1c5ca4
// body: available
// range: 0x1c5ca4-0x1c5ed0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1c5ecc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BuildAndStoreCommandPrefixCode
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_848 [128];
  undefined1 auStack_7c8 [40];
  code *pcStack_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 uStack_780;
  undefined4 local_778;
  undefined4 uStack_774;
  undefined4 uStack_770;
  undefined4 uStack_76c;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined4 uStack_760;
  undefined4 uStack_75c;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  undefined4 uStack_714;
  undefined4 uStack_710;
  undefined4 uStack_70c;
  undefined8 local_708 [16];
  undefined8 local_688 [8];
  undefined8 local_648;
  undefined1 auStack_608 [128];
  undefined8 local_588;
  undefined1 auStack_548 [256];
  undefined1 local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pcStack_7a0 = (code *)0x1c5cee;
  local_798 = param_5;
  local_790 = param_4;
  ___bzero(local_708 + 8,0x280);
  pcStack_7a0 = (code *)0x1c5d0d;
  _BrotliCreateHuffmanTree(param_1,0x40,0xf,local_448,param_2);
  puVar1 = param_2 + 8;
  pcStack_7a0 = (code *)0x1c5d30;
  _BrotliCreateHuffmanTree(param_1 + 0x100,0x40,0xe,local_448,puVar1);
  local_708[2] = param_2[2];
  local_708[0] = *param_2;
  local_708[1] = param_2[1];
  local_708[4] = param_2[3];
  local_708[6] = param_2[4];
  local_708[3] = param_2[5];
  local_708[5] = param_2[6];
  local_708[7] = param_2[7];
  pcStack_7a0 = (code *)0x1c5d89;
  _BrotliConvertBitDepthsToSymbols(local_708,0x40,&local_788);
  *(undefined4 *)(param_3 + 4) = local_768;
  *(undefined4 *)((long)param_3 + 0x24) = uStack_764;
  *(undefined4 *)(param_3 + 5) = uStack_760;
  *(undefined4 *)((long)param_3 + 0x2c) = uStack_75c;
  *(undefined4 *)(param_3 + 2) = local_778;
  *(undefined4 *)((long)param_3 + 0x14) = uStack_774;
  *(undefined4 *)(param_3 + 3) = uStack_770;
  *(undefined4 *)((long)param_3 + 0x1c) = uStack_76c;
  *param_3 = local_788;
  param_3[1] = uStack_780;
  param_3[6] = local_748;
  param_3[7] = uStack_740;
  param_3[8] = local_728;
  param_3[9] = uStack_720;
  param_3[10] = local_758;
  param_3[0xb] = uStack_750;
  param_3[0xc] = local_738;
  param_3[0xd] = uStack_730;
  *(undefined4 *)(param_3 + 0xe) = local_718;
  *(undefined4 *)((long)param_3 + 0x74) = uStack_714;
  *(undefined4 *)(param_3 + 0xf) = uStack_710;
  *(undefined4 *)((long)param_3 + 0x7c) = uStack_70c;
  pcStack_7a0 = (code *)0x1c5deb;
  _BrotliConvertBitDepthsToSymbols(puVar1,0x40,param_3 + 0x10);
  uVar3 = local_790;
  uVar2 = local_798;
  local_708[6] = 0;
  local_708[7] = 0;
  local_708[4] = 0;
  local_708[5] = 0;
  local_708[2] = 0;
  local_708[3] = 0;
  local_708[1] = 0;
  local_708[0] = *param_2;
  local_708[8] = param_2[1];
  local_688[0] = param_2[2];
  local_648 = param_2[3];
  local_588 = param_2[4];
  lVar4 = 0x38;
  do {
    auStack_848[lVar4 * 8] = *(undefined1 *)((long)param_2 + lVar4 + -0x10);
    auStack_7c8[lVar4 * 8] = *(undefined1 *)((long)param_2 + lVar4 + -8);
    *(undefined1 *)(local_708 + lVar4) = *(undefined1 *)((long)param_2 + lVar4);
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x40);
  pcStack_7a0 = (code *)0x1c5e94;
  _BrotliStoreHuffmanTree(local_708,0x2c0,local_448,local_790,local_798);
  pcStack_7a0 = (code *)0x1c5eaa;
  _BrotliStoreHuffmanTree(puVar1,0x40,local_448,uVar3,uVar2);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  pcStack_7a0 = _lzvnDecode;
  ___stack_chk_fail();
}

