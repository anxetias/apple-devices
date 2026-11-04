// rea decompile_all
// name: swap_TocElementStructType_endian
// address: 0x1b9d6d
// body: available
// range: 0x1b9d6d-0x1b9e2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* swap_TocElementStructType_endian(TocElementStructType*, void const*) */

undefined8 swap_TocElementStructType_endian(TocElementStructType *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar3 = 0;
  auVar6 = ZEXT416(0x10203);
  do {
    auVar7 = pshufb(ZEXT416(*(uint *)(param_1 + lVar3 * 4)),auVar6);
    *(int *)(param_1 + lVar3 * 4) = auVar7._0_4_;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  auVar7 = pshufb(ZEXT416(*(uint *)(param_1 + 0xc)),_DAT_00336dd0);
  uVar1 = auVar7._0_4_;
  *(uint *)(param_1 + 0xc) = uVar1;
  uVar2 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (_mach_endian != 2) {
    uVar2 = uVar1;
  }
  if (_CalledByWrite == '\0') {
    uVar2 = uVar1;
  }
  uVar4 = (ulong)uVar2;
  if (uVar2 != 0) {
    uVar4 = uVar4 * 0x90;
    uVar5 = 0;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *(ulong *)((long)param_2 + uVar5);
      auVar7 = pshufb(auVar7,ZEXT816(0x405060700010203));
      *(long *)((long)param_2 + uVar5) = auVar7._0_8_;
      auVar7 = pshufb(ZEXT416(*(uint *)((long)param_2 + uVar5 + 8)),auVar6);
      *(int *)((long)param_2 + uVar5 + 8) = auVar7._0_4_;
      auVar7 = pshufb(ZEXT416(*(uint *)((long)param_2 + uVar5 + 0xc)),auVar6);
      *(int *)((long)param_2 + uVar5 + 0xc) = auVar7._0_4_;
      uVar5 = uVar5 + 0x90;
    } while (uVar4 != uVar5);
  }
  auVar6 = pshufb(ZEXT416(*(uint *)(param_1 + 0x14)),_DAT_00336dd0);
  *(int *)(param_1 + 0x14) = auVar6._0_4_;
  return CONCAT71((int7)(uVar4 >> 8),1);
}

