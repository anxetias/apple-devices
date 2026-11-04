// rea decompile_all
// name: swap_DownloadDataElementStructType_endian
// address: 0x1b9a1c
// body: available
// range: 0x1b9a1c-0x1b9a9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* swap_DownloadDataElementStructType_endian(DownloadDataElementStructType*) */

undefined8 swap_DownloadDataElementStructType_endian(DownloadDataElementStructType *param_1)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  lVar2 = 0;
  auVar3 = ZEXT416(0x10203);
  do {
    auVar4 = pshufb(ZEXT416(*(uint *)(param_1 + lVar2 * 4)),auVar3);
    *(int *)(param_1 + lVar2 * 4) = auVar4._0_4_;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulong *)(param_1 + 0xc);
  auVar4 = pshufb(auVar4,_DAT_0032b470);
  *(long *)(param_1 + 0xc) = auVar4._0_8_;
  auVar4 = pshufb(ZEXT416(*(uint *)(param_1 + 0x14)),auVar3);
  *(int *)(param_1 + 0x14) = auVar4._0_4_;
  uVar1 = *(uint *)(param_1 + 0x18) << 0x10;
  if (_CalledByWrite == '\0') {
    uVar1 = *(uint *)(param_1 + 0x18) >> 0x10;
  }
  *(uint *)(param_1 + 0x18) = uVar1;
  auVar4 = pshufb(ZEXT416(*(uint *)(param_1 + 0x1c)),auVar3);
  *(int *)(param_1 + 0x1c) = auVar4._0_4_;
  auVar3 = pshufb(ZEXT416(*(uint *)(param_1 + 0x24)),auVar3);
  *(int *)(param_1 + 0x24) = auVar3._0_4_;
  return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
}

