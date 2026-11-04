// rea decompile_all
// name: _AMSupportDigestInitContext
// address: 0x18a9
// body: available
// range: 0x18a9-0x1928 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMSupportDigestInitContext(long *param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar1 = *param_1;
  if (lVar1 == 0x30) {
    lVar1 = _ccsha384_di();
  }
  else if (lVar1 == 0x20) {
    lVar1 = _ccsha256_di();
  }
  else {
    if (lVar1 != 0x14) {
      return 0xd;
    }
    lVar1 = _ccsha1_di();
  }
  param_1[2] = lVar1;
  pvVar2 = _malloc(*(long *)(lVar1 + 8) + *(long *)(lVar1 + 0x10) + 0xc);
  *param_2 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 2;
  }
  else {
    _ccdigest_init(param_1[2],pvVar2);
    uVar3 = 0;
  }
  return uVar3;
}

