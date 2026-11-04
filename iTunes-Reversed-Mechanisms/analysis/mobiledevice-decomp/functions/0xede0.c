// rea decompile_all
// name: _vng_aes_decrypt_aesni_key
// address: 0xede0
// body: available
// range: 0xede0-0xee2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _vng_aes_decrypt_aesni_key(undefined8 param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 (*extraout_RDX) [16];
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  
  iVar2 = _aes_encrypt_key_hw();
  if (iVar2 == 0) {
    lVar3 = 9;
    pauVar5 = extraout_RDX;
    if ((param_2 != 0x80) && (lVar3 = 0xb, param_2 != 0xc0)) {
      lVar3 = 0xd;
    }
    do {
      pauVar5 = pauVar5 + 1;
      auVar6 = aesimc(*pauVar5);
      *pauVar5 = auVar6;
      lVar4 = lVar3 + -1;
      bVar1 = 0 < lVar3;
      lVar3 = lVar4;
    } while (lVar4 != 0 && bVar1);
  }
  return;
}

