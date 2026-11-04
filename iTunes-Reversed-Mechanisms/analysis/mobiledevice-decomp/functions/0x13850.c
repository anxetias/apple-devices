// rea decompile_all
// name: _ccrng_crypto_init
// address: 0x13850
// body: available
// range: 0x13850-0x138aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccrng_crypto_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffb;
  if (param_8 < 0x41) {
    *param_1 = _generate;
    param_1[1] = param_2;
    param_1[2] = param_3;
    param_1[3] = param_4;
    param_1[4] = param_5;
    param_1[5] = param_6;
    param_1[6] = param_7;
    param_1[7] = param_8;
    param_1[8] = param_9;
    param_1[9] = param_10;
    param_1[10] = param_9;
    uVar1 = 0;
  }
  return uVar1;
}

