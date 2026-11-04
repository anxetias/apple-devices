// rea decompile_all
// name: _aes_encrypt_key_hw
// address: 0xeb10
// body: available
// range: 0xeb10-0xebcf inclusive
// range: 0xec06-0xec82 inclusive
// range: 0xecd9-0xed48 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_aes_encrypt_key_hw(undefined8 param_1,undefined1 (*param_2) [16],long param_3,
                   undefined1 (*param_4) [16])

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_3 < 0x21) {
    param_3 = param_3 << 3;
  }
  if (param_3 == 0x80) {
    *(undefined4 *)param_4[0xf] = 0xa0;
    auVar14 = *param_2;
    uVar10 = auVar14._0_4_;
    uVar11 = auVar14._4_4_;
    uVar12 = auVar14._8_4_;
    uVar13 = auVar14._12_4_;
    *param_4 = auVar14;
    auVar14 = aeskeygenassist(auVar14,1);
    FUN_0000ebd0(param_1,uVar10,auVar14._0_8_);
    auVar14._4_4_ = uVar11;
    auVar14._0_4_ = uVar10;
    auVar14._8_4_ = uVar12;
    auVar14._12_4_ = uVar13;
    aeskeygenassist(auVar14,2);
    FUN_0000ebd0();
    auVar15._4_4_ = uVar11;
    auVar15._0_4_ = uVar10;
    auVar15._8_4_ = uVar12;
    auVar15._12_4_ = uVar13;
    aeskeygenassist(auVar15,4);
    FUN_0000ebd0();
    auVar2._4_4_ = uVar11;
    auVar2._0_4_ = uVar10;
    auVar2._8_4_ = uVar12;
    auVar2._12_4_ = uVar13;
    aeskeygenassist(auVar2,8);
    FUN_0000ebd0();
    auVar3._4_4_ = uVar11;
    auVar3._0_4_ = uVar10;
    auVar3._8_4_ = uVar12;
    auVar3._12_4_ = uVar13;
    aeskeygenassist(auVar3,0x10);
    FUN_0000ebd0();
    auVar4._4_4_ = uVar11;
    auVar4._0_4_ = uVar10;
    auVar4._8_4_ = uVar12;
    auVar4._12_4_ = uVar13;
    aeskeygenassist(auVar4,0x20);
    FUN_0000ebd0();
    auVar5._4_4_ = uVar11;
    auVar5._0_4_ = uVar10;
    auVar5._8_4_ = uVar12;
    auVar5._12_4_ = uVar13;
    aeskeygenassist(auVar5,0x40);
    FUN_0000ebd0();
    auVar6._4_4_ = uVar11;
    auVar6._0_4_ = uVar10;
    auVar6._8_4_ = uVar12;
    auVar6._12_4_ = uVar13;
    aeskeygenassist(auVar6,0x80);
    FUN_0000ebd0();
    auVar7._4_4_ = uVar11;
    auVar7._0_4_ = uVar10;
    auVar7._8_4_ = uVar12;
    auVar7._12_4_ = uVar13;
    aeskeygenassist(auVar7,0x1b);
    FUN_0000ebd0();
    auVar8._4_4_ = uVar11;
    auVar8._0_4_ = uVar10;
    auVar8._8_4_ = uVar12;
    auVar8._12_4_ = uVar13;
    aeskeygenassist(auVar8,0x36);
    FUN_0000ebd0();
    uVar9 = 0;
  }
  else if (param_3 == 0xc0) {
    *(undefined4 *)param_4[0xf] = 0xc0;
    uVar10 = *(undefined4 *)*param_2;
    uVar11 = *(undefined4 *)(*param_2 + 4);
    uVar12 = *(undefined4 *)(*param_2 + 8);
    uVar13 = *(undefined4 *)(*param_2 + 0xc);
    uVar1 = *(ulong *)param_2[1];
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar1;
    *(undefined4 *)*param_4 = uVar10;
    *(undefined4 *)(*param_4 + 4) = uVar11;
    *(undefined4 *)(*param_4 + 8) = uVar12;
    *(undefined4 *)(*param_4 + 0xc) = uVar13;
    *(ulong *)param_4[1] = uVar1;
    auVar14 = aeskeygenassist(auVar16,1);
    FUN_0000ec90(param_1,uVar10,auVar14._0_8_);
    aeskeygenassist(auVar16,2);
    FUN_0000ec90();
    aeskeygenassist(auVar16,4);
    FUN_0000ec90();
    aeskeygenassist(auVar16,8);
    FUN_0000ec90();
    aeskeygenassist(auVar16,0x10);
    FUN_0000ec90();
    aeskeygenassist(auVar16,0x20);
    FUN_0000ec90();
    aeskeygenassist(auVar16,0x40);
    FUN_0000ec90();
    aeskeygenassist(auVar16,0x80);
    FUN_0000ec90();
    uVar9 = 0;
  }
  else if (param_3 == 0x100) {
    *(undefined4 *)param_4[0xf] = 0xe0;
    uVar10 = *(undefined4 *)*param_2;
    uVar11 = *(undefined4 *)(*param_2 + 4);
    uVar12 = *(undefined4 *)(*param_2 + 8);
    uVar13 = *(undefined4 *)(*param_2 + 0xc);
    auVar14 = param_2[1];
    *(undefined4 *)*param_4 = uVar10;
    *(undefined4 *)(*param_4 + 4) = uVar11;
    *(undefined4 *)(*param_4 + 8) = uVar12;
    *(undefined4 *)(*param_4 + 0xc) = uVar13;
    param_4[1] = auVar14;
    auVar15 = aeskeygenassist(auVar14,1);
    FUN_0000ed50(param_1,uVar10,auVar15._0_8_);
    aeskeygenassist(auVar14,2);
    FUN_0000ed50();
    aeskeygenassist(auVar14,4);
    FUN_0000ed50();
    aeskeygenassist(auVar14,8);
    FUN_0000ed50();
    aeskeygenassist(auVar14,0x10);
    FUN_0000ed50();
    aeskeygenassist(auVar14,0x20);
    FUN_0000ed50();
    aeskeygenassist(auVar14,0x40);
    FUN_0000edb0();
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  return uVar9;
}

