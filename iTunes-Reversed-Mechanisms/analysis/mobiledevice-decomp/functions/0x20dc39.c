// rea decompile_all
// name: _StoreTrivialContextMap
// address: 0x20dc39
// body: available
// range: 0x20dc39-0x20de80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20de7c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void _StoreTrivialContextMap
               (ulong param_1,ulong param_2,undefined8 param_3,ulong *param_4,long param_5)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ushort local_7a8 [271];
  byte abStack_589 [269];
  undefined4 uStack_47c;
  undefined4 local_478 [272];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  _StoreVarLenUint8(param_1 - 1,param_4,param_5);
  if (1 < param_1) {
    lVar1 = param_2 - 1;
    uVar4 = (param_2 + param_1) - 1;
    ___bzero(local_478,uVar4 * 4);
    uVar6 = *param_4;
    *(ulong *)(param_5 + (uVar6 >> 3)) =
         (ulong)*(byte *)(param_5 + (uVar6 >> 3)) | 1L << ((byte)uVar6 & 7);
    uVar7 = uVar6 + 1;
    *param_4 = uVar7;
    *(ulong *)(param_5 + (uVar7 >> 3)) =
         param_2 - 2 << ((byte)uVar7 & 7) | (ulong)*(byte *)(param_5 + (uVar7 >> 3));
    *param_4 = uVar6 + 5;
    (&uStack_47c)[param_2] = (int)param_1;
    local_478[0] = 1;
    if (param_2 < uVar4) {
      _memset_pattern16((void *)((long)local_478 + param_2 * 4),&DAT_0032b3e0,param_1 * 4 - 4);
    }
    _BuildAndStoreHuffmanTree
              (local_478,uVar4,uVar4,param_3,abStack_589 + 1,local_7a8,param_4,param_5);
    bVar2 = abStack_589[param_2];
    uVar3 = local_7a8[param_2 - 1];
    uVar7 = *param_4;
    uVar6 = 0;
    do {
      lVar5 = uVar6 + lVar1;
      if (uVar6 == 0) {
        lVar5 = 0;
      }
      uVar4 = abStack_589[lVar5 + 1] + uVar7;
      *(ulong *)(param_5 + (uVar7 >> 3)) =
           (ulong)local_7a8[lVar5] << ((byte)uVar7 & 7) | (ulong)*(byte *)(param_5 + (uVar7 >> 3));
      *param_4 = uVar4;
      *(ulong *)(param_5 + (uVar4 >> 3)) =
           (ulong)uVar3 << ((byte)uVar4 & 7) | (ulong)*(byte *)(param_5 + (uVar4 >> 3));
      uVar4 = uVar4 + bVar2;
      *param_4 = uVar4;
      *(ulong *)(param_5 + (uVar4 >> 3)) =
           (ulong)(uint)~(-1 << ((byte)lVar1 & 0x1f)) << ((byte)uVar4 & 7) |
           (ulong)*(byte *)(param_5 + (uVar4 >> 3));
      uVar7 = uVar4 + lVar1;
      *param_4 = uVar7;
      uVar6 = uVar6 + 1;
    } while (param_1 != uVar6);
    *(ulong *)(param_5 + (uVar7 >> 3)) =
         (ulong)*(byte *)(param_5 + (uVar7 >> 3)) | 1L << ((byte)uVar7 & 7);
    *param_4 = uVar4 + param_2;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

