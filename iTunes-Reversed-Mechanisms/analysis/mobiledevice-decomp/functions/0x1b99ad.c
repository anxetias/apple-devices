// rea decompile_all
// name: swap_InjectionElementStructType_endian
// address: 0x1b99ad
// body: available
// range: 0x1b99ad-0x1b9a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* swap_InjectionElementStructType_endian(InjectionElementStructType*) */

undefined8 swap_InjectionElementStructType_endian(InjectionElementStructType *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  auVar3 = ZEXT416(0x10203);
  do {
    auVar4 = pshufb(ZEXT416(*(uint *)(param_1 + lVar1 * 4)),auVar3);
    *(int *)(param_1 + lVar1 * 4) = auVar4._0_4_;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  if (_CalledByWrite == '\x01') {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) << 0x10;
    uVar2 = (ulong)(uint)(*(int *)(param_1 + 0x10) << 0x18);
  }
  else {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) >> 0x10;
    uVar2 = (ulong)(byte)param_1[0x13];
  }
  *(int *)(param_1 + 0x10) = (int)uVar2;
  auVar4 = pshufb(ZEXT416(*(uint *)(param_1 + 0x14)),auVar3);
  *(int *)(param_1 + 0x14) = auVar4._0_4_;
  auVar3 = pshufb(ZEXT416(*(uint *)(param_1 + 0x1c)),auVar3);
  *(int *)(param_1 + 0x1c) = auVar3._0_4_;
  return CONCAT71((int7)(uVar2 >> 8),1);
}

