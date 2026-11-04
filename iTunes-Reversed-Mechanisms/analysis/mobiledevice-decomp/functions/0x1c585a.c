// rea decompile_all
// name: _BuildAndStoreLiteralPrefixCode
// address: 0x1c585a
// body: available
// range: 0x1c585a-0x1c5a88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1c5a84 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _BuildAndStoreLiteralPrefixCode
                (long param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulong local_438 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  if (param_3 < 0x8000) {
    if (param_3 != 0) {
      uVar5 = 0;
      do {
        piVar1 = (int *)((long)local_438 + (ulong)*(byte *)(param_2 + uVar5) * 4);
        *piVar1 = *piVar1 + 1;
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
    lVar8 = 0;
    lVar6 = 0;
    do {
      uVar5 = *(ulong *)((long)local_438 + lVar6 * 4);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar5;
      auVar10 = auVar9 ^ _DAT_0032b310;
      auVar11._0_4_ = -(uint)((int)DAT_0032af60 < auVar10._0_4_);
      auVar11._4_4_ = -(uint)(DAT_0032af60._4_4_ < auVar10._4_4_);
      auVar11._8_4_ = -(uint)(DAT_0032af60._8_4_ < auVar10._8_4_);
      auVar11._12_4_ = -(uint)(DAT_0032af60._12_4_ < auVar10._12_4_);
      auVar10 = auVar11 & _DAT_0032af70 | ~auVar11 & auVar9;
      uVar3 = auVar10._0_4_ * 2;
      uVar4 = auVar10._4_4_ * 2;
      *(ulong *)((long)local_438 + lVar6 * 4) =
           CONCAT44((int)(uVar5 >> 0x20) + uVar4,(int)uVar5 + uVar3);
      param_3 = param_3 + uVar3;
      lVar8 = lVar8 + (ulong)uVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0x100);
  }
  else {
    uVar5 = 0;
    do {
      piVar1 = (int *)((long)local_438 + (ulong)*(byte *)(param_2 + uVar5) * 4);
      *piVar1 = *piVar1 + 1;
      uVar5 = uVar5 + 0x1d;
    } while (uVar5 < param_3);
    param_3 = (param_3 + 0x1c) / 0x1d;
    lVar8 = 0;
    lVar6 = 0;
    do {
      uVar5 = *(ulong *)((long)local_438 + lVar6 * 4);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar5;
      auVar12 = auVar10 ^ _DAT_0032b310;
      auVar13._0_4_ = -(uint)((int)DAT_0032af60 < auVar12._0_4_);
      auVar13._4_4_ = -(uint)(DAT_0032af60._4_4_ < auVar12._4_4_);
      auVar13._8_4_ = -(uint)(DAT_0032af60._8_4_ < auVar12._8_4_);
      auVar13._12_4_ = -(uint)(DAT_0032af60._12_4_ < auVar12._12_4_);
      auVar10 = auVar13 & _DAT_0032af70 | ~auVar13 & auVar10;
      auVar12._4_4_ = auVar10._4_4_ * 2;
      auVar12._0_4_ = auVar10._0_4_ * 2;
      auVar12._8_4_ = auVar10._8_4_ * 2;
      auVar12._12_4_ = auVar10._12_4_ * 2;
      auVar12 = auVar12 | _DAT_0032af80;
      *(ulong *)((long)local_438 + lVar6 * 4) =
           CONCAT44((int)(uVar5 >> 0x20) + auVar12._4_4_,(int)uVar5 + auVar12._0_4_);
      param_3 = param_3 + (auVar12._0_8_ & 0xffffffff);
      lVar8 = lVar8 + (ulong)auVar12._4_4_;
      lVar6 = lVar6 + 2;
    } while (lVar6 != 0x100);
  }
  _BrotliBuildAndStoreHuffmanTreeFast
            (param_1,local_438,lVar8 + param_3,8,param_4,param_5,param_6,param_7);
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      iVar2 = *(int *)((long)local_438 + lVar7 * 4);
      if (iVar2 != 0) {
        lVar6 = lVar6 + (ulong)(iVar2 * (uint)*(byte *)(param_4 + lVar7));
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x100);
    uVar5 = (ulong)(lVar6 * 0x7d) / (lVar8 + param_3);
  }
  else {
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

