// rea decompile_all
// name: _ccn_mul1
// address: 0x1d1b1
// body: available
// range: 0x1d1b1-0x1d22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d227 to 0x8f60 _ccn_mul1_asm (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _ccn_mul1(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  iVar4 = __get_cpu_capabilities();
  if ((iVar4 < 0) && (uVar5 = __get_cpu_capabilities(), (uVar5 >> 0x22 & 1) != 0)) {
    uVar5 = _ccn_mul1_asm(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    do {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar5;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_4;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulong *)(param_3 + lVar6 * 8);
      auVar3 = auVar1 * auVar2 + auVar3;
      uVar5 = auVar3._8_8_;
      *(long *)(param_2 + lVar6 * 8) = auVar3._0_8_;
      lVar6 = lVar6 + 1;
    } while (param_1 != lVar6);
  }
  return uVar5;
}

