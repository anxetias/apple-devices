// rea decompile_all
// name: _ShouldCompress
// address: 0x1e13f8
// body: available
// range: 0x1e13f8-0x1e164c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e1648 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _ShouldCompress(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double local_468;
  int local_438 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  auVar12._8_4_ = (int)(param_2 >> 0x20);
  auVar12._0_8_ = param_2;
  auVar12._12_4_ = 0x45300000;
  dVar10 = ((double)CONCAT44(0x43300000,(int)param_2) - 4503599627370496.0) +
           (auVar12._8_8_ - 1.9342813113834067e+25);
  auVar9._8_4_ = (int)((ulong)param_3 >> 0x20);
  auVar9._0_8_ = param_3;
  auVar9._12_4_ = 0x45300000;
  bVar2 = true;
  if (dVar10 * 0.98 <=
      ((double)CONCAT44(0x43300000,(int)param_3) - 4503599627370496.0) +
      (auVar9._8_8_ - 1.9342813113834067e+25)) {
    ___bzero(local_438,0x400);
    if (param_2 != 0) {
      uVar3 = 0;
      do {
        local_438[*(byte *)(param_1 + uVar3)] = local_438[*(byte *)(param_1 + uVar3)] + 1;
        uVar3 = uVar3 + 0x2b;
      } while (uVar3 < param_2);
    }
    dVar8 = 0.0;
    uVar6 = 0xfffffffffffffff8;
    uVar3 = 0;
    do {
      uVar1 = *(uint *)((long)local_438 + uVar6 + 8);
      uVar4 = (ulong)uVar1;
      if (uVar4 < 0x100) {
        dVar11 = (double)(&_kBrotliLog2Table)[uVar4];
        local_468 = (double)(int)uVar1;
      }
      else {
        local_468 = (double)uVar4;
        dVar11 = (double)_log2();
      }
      uVar5 = (ulong)*(uint *)((long)local_438 + uVar6 + 0xc);
      if (uVar5 < 0x100) {
        dVar7 = (double)(&_kBrotliLog2Table)[uVar5];
      }
      else {
        dVar7 = (double)_log2((double)uVar5);
      }
      uVar3 = uVar3 + uVar4 + uVar5;
      dVar8 = (dVar8 - local_468 * dVar11) - (double)uVar5 * dVar7;
      uVar6 = uVar6 + 8;
    } while (uVar6 < 0x3f8);
    auVar13._8_4_ = (int)(uVar3 >> 0x20);
    auVar13._0_8_ = uVar3;
    auVar13._12_4_ = 0x45300000;
    dVar11 = ((double)CONCAT44(0x43300000,(int)uVar3) - 4503599627370496.0) +
             (auVar13._8_8_ - 1.9342813113834067e+25);
    if (uVar3 != 0) {
      if (uVar3 < 0x100) {
        dVar7 = (double)(&_kBrotliLog2Table)[uVar3];
      }
      else {
        dVar7 = (double)_log2(dVar11);
      }
      dVar8 = dVar8 + dVar7 * dVar11;
    }
    if (dVar11 <= dVar8) {
      dVar11 = dVar8;
    }
    bVar2 = dVar11 < (dVar10 * 8.0 * 0.98) / 43.0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

