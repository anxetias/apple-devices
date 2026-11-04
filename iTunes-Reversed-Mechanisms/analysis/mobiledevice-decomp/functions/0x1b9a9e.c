// rea decompile_all
// name: swap_IndirectDownloadDataElementStructType_endian
// address: 0x1b9a9e
// body: available
// range: 0x1b9a9e-0x1b9b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* swap_IndirectDownloadDataElementStructType_endian(IndirectDownloadDataElementStructType*) */

undefined8
swap_IndirectDownloadDataElementStructType_endian(IndirectDownloadDataElementStructType *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  auVar2 = ZEXT416(0x10203);
  do {
    auVar3 = pshufb(ZEXT416(*(uint *)(param_1 + lVar1 * 4)),auVar2);
    *(int *)(param_1 + lVar1 * 4) = auVar3._0_4_;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 3);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *(ulong *)(param_1 + 0xc);
  auVar3 = pshufb(auVar3,_DAT_0032b470);
  *(long *)(param_1 + 0xc) = auVar3._0_8_;
  auVar3 = pshufb(ZEXT416(*(uint *)(param_1 + 0x14)),auVar2);
  *(int *)(param_1 + 0x14) = auVar3._0_4_;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) << 0x10;
  auVar3 = pshufb(ZEXT416(*(uint *)(param_1 + 0x1c)),auVar2);
  *(int *)(param_1 + 0x1c) = auVar3._0_4_;
  auVar2 = pshufb(ZEXT416(*(uint *)(param_1 + 0x24)),auVar2);
  *(int *)(param_1 + 0x24) = auVar2._0_4_;
  return 1;
}

