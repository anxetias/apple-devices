// rea decompile_all
// name: _FWImageSetComponentSize
// address: 0x2705fb
// body: available
// range: 0x2705fb-0x2706a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _FWImageSetComponentSize(undefined8 *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 in_XMM1 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uStack_30;
  
  uStack_30 = 0x1e;
  if ((param_1 != (undefined8 *)0x0) && (param_2 < 4)) {
    uVar4 = (ulong)param_2;
    *(undefined4 *)((long)param_1 + uVar4 * 4) = 0;
    if (param_1[uVar4 + 4] != 0) {
      auVar6 = _image3Free();
      in_XMM1._0_8_ = auVar6._8_8_;
      in_XMM0._0_8_ = auVar6._0_8_;
      in_XMM1._8_8_ = extraout_XMM1_Qb;
      in_XMM0._8_8_ = extraout_XMM0_Qb;
      param_1[uVar4 + 4] = 0;
    }
    auVar6 = pmovzxdq(in_XMM0,param_1[1]);
    auVar5 = pmovzxdq(in_XMM1,*param_1);
    uVar1 = auVar5._8_8_ + auVar6._8_8_ + auVar5._0_8_ + auVar6._0_8_ + 0x40;
    uVar3 = 0;
    if (uVar1 >> 0x20 == 0) {
      uVar3 = uVar1 & 0xffffffff;
    }
    if (uVar3 + param_3 < 0x7c001) {
      lVar2 = _uarpZalloc();
      param_1[uVar4 + 4] = lVar2;
      if (lVar2 == 0) {
        uStack_30 = 0xb;
      }
      else {
        *(uint *)((long)param_1 + uVar4 * 4) = param_3;
        *(undefined4 *)((long)param_1 + uVar4 * 4 + 0x10) = 0;
        uStack_30 = 0;
      }
    }
    else {
      uStack_30 = 0x27;
    }
  }
  return uStack_30;
}

