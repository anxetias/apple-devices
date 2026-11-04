// rea decompile_all
// name: _cbc_wrapper_aesni
// address: 0x135c3
// body: available
// range: 0x135c3-0x13604 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_cbc_wrapper_aesni(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = _vng_aes_encrypt_aesni_cbc(param_4,param_2,param_3,param_5,param_1);
    puVar1 = (undefined8 *)(param_5 + -0x10 + param_3 * 0x10);
    uVar2 = puVar1[1];
    *param_2 = *puVar1;
    param_2[1] = uVar2;
    return uVar3;
  }
  return 0;
}

