// rea decompile_all
// name: _ShouldMergeBlock
// address: 0x1c5a89
// body: available
// range: 0x1c5a89-0x1c5c20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1c5c1c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _ShouldMergeBlock(long param_1,ulong param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  ulong local_838 [257];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_838,0x800);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      local_838[*(byte *)(param_1 + uVar2)] = local_838[*(byte *)(param_1 + uVar2)] + 1;
      uVar2 = uVar2 + 0x2b;
    } while (uVar2 < param_2);
    uVar2 = (param_2 + 0x2a) / 0x2b;
    if (0x2aff < param_2 + 0x2a) {
      dVar4 = (double)_log2();
      goto LAB_001c5b34;
    }
  }
  dVar4 = (double)(&_kBrotliLog2Table)[uVar2];
LAB_001c5b34:
  dVar4 = (dVar4 + 0.5) * (double)uVar2 + 200.0;
  lVar3 = 0;
  do {
    uVar2 = local_838[lVar3];
    auVar7._8_4_ = (int)(uVar2 >> 0x20);
    auVar7._0_8_ = uVar2;
    auVar7._12_4_ = 0x45300000;
    dVar6 = ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
            (auVar7._8_8_ - 1.9342813113834067e+25);
    bVar1 = *(byte *)(param_3 + lVar3);
    if (uVar2 < 0x100) {
      dVar5 = (double)(&_kBrotliLog2Table)[uVar2];
    }
    else {
      dVar5 = (double)_log2(dVar6);
    }
    dVar4 = dVar4 - dVar6 * ((double)bVar1 + dVar5);
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return 0.0 <= dVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

