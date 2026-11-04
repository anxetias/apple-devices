// rea decompile_all
// name: FUN_00056cf0
// address: 0x56cf0
// body: available
// range: 0x56cf0-0x56d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00056cf0(ulong param_1,ulong param_2,undefined8 param_3,undefined1 (*param_4) [16])

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long unaff_RBX;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM4 [16];
  undefined1 in_XMM5 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar9 [16];
  
  lVar3 = unaff_RBX + 0x20;
  if (-0x21 < unaff_RBX) {
    lVar3 = param_1 * 0x20;
    auVar5 = psadbw(*param_4,in_XMM0);
    auVar9 = psadbw(param_4[1],in_XMM0);
    auVar8 = pmaddubsw(*param_4,in_XMM6);
    auVar7 = pmaddubsw(param_4[1],in_XMM4);
    auVar6._0_8_ = CONCAT44(auVar5._4_4_ + auVar9._4_4_,auVar5._0_4_ + auVar9._0_4_);
    auVar6._8_4_ = auVar5._8_4_ + auVar9._8_4_;
    auVar6._12_4_ = auVar5._12_4_ + auVar9._12_4_;
    auVar5._0_2_ = auVar8._0_2_ + auVar7._0_2_;
    auVar5._2_2_ = auVar8._2_2_ + auVar7._2_2_;
    auVar5._4_2_ = auVar8._4_2_ + auVar7._4_2_;
    auVar5._6_2_ = auVar8._6_2_ + auVar7._6_2_;
    auVar5._8_2_ = auVar8._8_2_ + auVar7._8_2_;
    auVar5._10_2_ = auVar8._10_2_ + auVar7._10_2_;
    auVar5._12_2_ = auVar8._12_2_ + auVar7._12_2_;
    auVar5._14_2_ = auVar8._14_2_ + auVar7._14_2_;
    param_4 = param_4 + 2;
    auVar5 = pmaddwd(auVar5,in_XMM5);
    param_1 = param_1 + (auVar6._0_8_ + auVar6._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar3 + (ulong)(uint)(auVar5._0_4_ + auVar5._8_4_) +
              (ulong)(uint)(auVar5._4_4_ + auVar5._12_4_);
    lVar3 = unaff_RBX;
  }
  lVar4 = lVar3 + 0x10;
  if (-0x11 < lVar3) {
    auVar5 = *param_4;
    param_4 = param_4 + 1;
    auVar6 = psadbw(auVar5,in_XMM0);
    auVar5 = pmaddubsw(auVar5,in_XMM4);
    lVar4 = param_1 * 0x10;
    auVar5 = pmaddwd(auVar5,in_XMM5);
    param_1 = param_1 + (auVar6._0_8_ + auVar6._8_8_ & 0xffffffffU);
    param_2 = param_2 + lVar4 + (ulong)(uint)(auVar5._0_4_ + auVar5._8_4_) +
              (ulong)(uint)(auVar5._4_4_ + auVar5._12_4_);
    lVar4 = lVar3;
  }
  lVar3 = lVar4 + 0x10;
  if (lVar4 + 0x10 != 0) {
    do {
      puVar2 = *param_4;
      param_4 = (undefined1 (*) [16])(*param_4 + 1);
      param_1 = param_1 + (byte)*puVar2;
      param_2 = param_2 + param_1;
      lVar4 = lVar3 + -1;
      bVar1 = 0 < lVar3;
      lVar3 = lVar4;
    } while (lVar4 != 0 && bVar1);
  }
  return param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1) |
         (param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1)) * 0x10000;
}

