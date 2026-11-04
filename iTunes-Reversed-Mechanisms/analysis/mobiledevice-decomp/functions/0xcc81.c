// rea decompile_all
// name: _ccaes_ctr_crypt_mode
// address: 0xcc81
// body: available
// range: 0xcc81-0xccfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * _ccaes_ctr_crypt_mode(void)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)_ccaes_ecb_encrypt_mode();
  lVar1 = *plVar2;
  _DAT_004a3140 = _ccaes_ecb_encrypt_mode();
  __ctr_crypt = (lVar1 + 7U & 0xfffffffffffffff8) + 0x30;
  _DAT_004a3118 = 1;
  _DAT_004a3120 = 0x10;
  _DAT_004a3128 = _ccmode_ctr_init;
  _DAT_004a3130 = _ccmode_ctr_setctr;
  _DAT_004a3138 = _ccaes_vng_ctr_crypt;
  return &_ctr_crypt;
}

