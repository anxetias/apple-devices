// rea decompile_all
// name: _AMAuthInstallCryptoEncryptWithWrappedKeyAndIVPrependIV
// address: 0x28ff0b
// body: available
// range: 0x28ff0b-0x28fff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0028ff4f) */
/* WARNING: Removing unreachable block (ram,0x0028ffc5) */
/* WARNING: Removing unreachable block (ram,0x0028ff69) */
/* WARNING: Removing unreachable block (ram,0x0028ff72) */
/* WARNING: Removing unreachable block (ram,0x0028ffd7) */

int _AMAuthInstallCryptoEncryptWithWrappedKeyAndIVPrependIV(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = _AMAuthInstallCryptoEncryptWithSessionKeyAndIVPrependIV();
  if (iVar1 == 0) {
    pcVar2 = "wrappedKeyData is NULL";
    iVar1 = 0;
  }
  else {
    pcVar2 = "failed to encrypt randomKey";
  }
  _AMAuthInstallLog(3,"AMAuthInstallCryptoEncryptWithWrappedKeyAndIVPrependIV",pcVar2);
  return iVar1;
}

