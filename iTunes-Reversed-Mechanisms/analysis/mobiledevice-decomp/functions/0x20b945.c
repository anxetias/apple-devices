// rea decompile_all
// name: _xz_simple_crc32
// address: 0x20b945
// body: available
// range: 0x20b945-0x20b997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _xz_simple_crc32(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
    lVar2 = 0;
    do {
      uVar3 = *(byte *)(param_1 + lVar2) ^ uVar1;
      uVar1 = uVar1 >> 8 ^ *(uint *)(&_crc32_lut4 + (ulong)(uVar3 & 0xf) * 4) >> 4 ^
              *(uint *)(&_crc32_lut4 +
                       (ulong)((uVar3 >> 4 ^ *(uint *)(&_crc32_lut4 + (ulong)(uVar3 & 0xf) * 4)) &
                              0xf) * 4);
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
    uVar1 = ~uVar1;
  }
  return uVar1;
}

