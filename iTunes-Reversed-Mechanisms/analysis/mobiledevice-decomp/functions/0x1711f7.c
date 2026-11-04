// rea decompile_all
// name: _CreateDataFromPrivateKey
// address: 0x1711f7
// body: available
// range: 0x1711f7-0x171262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _CreateDataFromPrivateKey(undefined8 param_1)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *a;
  undefined8 uVar2;
  
  type = _BIO_s_mem();
  a = _BIO_new(type);
  if (a == (BIO *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = _PEM_write_bio_PrivateKey(a,param_1,0,0,0,0,0);
    if (iVar1 != 0) {
      uVar2 = __create_data_from_bp(a);
    }
    _BIO_free(a);
  }
  return uVar2;
}

