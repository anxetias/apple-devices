// rea decompile_all
// name: _ShouldCompress
// address: 0x1ce916
// body: available
// range: 0x1ce916-0x1ceb95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ceb91 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ShouldCompress(long param_1,uint param_2,uint param_3,ulong param_4,undefined8 param_5,
               ulong param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_438 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_4 < 3) {
LAB_001ce93e:
    uVar1 = 0;
  }
  else {
    if (param_6 < (param_4 >> 8) + 2) {
      auVar7._8_4_ = (int)((ulong)param_5 >> 0x20);
      auVar7._0_8_ = param_5;
      auVar7._12_4_ = 0x45300000;
      auVar11._8_4_ = (int)(param_4 >> 0x20);
      auVar11._0_8_ = param_4;
      auVar11._12_4_ = 0x45300000;
      dVar9 = ((double)CONCAT44(0x43300000,(int)param_4) - 4503599627370496.0) +
              (auVar11._8_8_ - 1.9342813113834067e+25);
      if (dVar9 * 0.99 <
          ((double)CONCAT44(0x43300000,(int)param_5) - 4503599627370496.0) +
          (auVar7._8_8_ - 1.9342813113834067e+25)) {
        ___bzero(local_438,0x400);
        if (0xc < param_4 + 0xc) {
          uVar2 = (param_4 + 0xc) / 0xd;
          do {
            local_438[*(byte *)(param_1 + (ulong)(param_3 & param_2))] =
                 local_438[*(byte *)(param_1 + (ulong)(param_3 & param_2))] + 1;
            param_3 = param_3 + 0xd;
            uVar2 = uVar2 - 1;
          } while (uVar2 != 0);
        }
        dVar8 = 0.0;
        uVar5 = 0xfffffffffffffff8;
        uVar2 = 0;
        do {
          uVar3 = (ulong)*(uint *)((long)local_438 + uVar5 + 8);
          if (uVar3 < 0x100) {
            dVar10 = (double)(&_kBrotliLog2Table)[uVar3];
          }
          else {
            dVar10 = (double)_log2();
          }
          uVar4 = (ulong)*(uint *)((long)local_438 + uVar5 + 0xc);
          if (uVar4 < 0x100) {
            dVar6 = (double)(&_kBrotliLog2Table)[uVar4];
          }
          else {
            dVar6 = (double)_log2((double)uVar4);
          }
          uVar2 = uVar2 + uVar3 + uVar4;
          dVar8 = (dVar8 - (double)uVar3 * dVar10) - (double)uVar4 * dVar6;
          uVar5 = uVar5 + 8;
        } while (uVar5 < 0x3f8);
        auVar12._8_4_ = (int)(uVar2 >> 0x20);
        auVar12._0_8_ = uVar2;
        auVar12._12_4_ = 0x45300000;
        dVar10 = ((double)CONCAT44(0x43300000,(int)uVar2) - 4503599627370496.0) +
                 (auVar12._8_8_ - 1.9342813113834067e+25);
        if (uVar2 != 0) {
          if (uVar2 < 0x100) {
            dVar6 = (double)(&_kBrotliLog2Table)[uVar2];
          }
          else {
            dVar6 = (double)_log2(dVar10);
          }
          dVar8 = dVar8 + dVar6 * dVar10;
        }
        if (dVar10 <= dVar8) {
          dVar10 = dVar8;
        }
        if ((dVar9 * 7.92) / 13.0 < dVar10) goto LAB_001ce93e;
      }
    }
    uVar1 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

