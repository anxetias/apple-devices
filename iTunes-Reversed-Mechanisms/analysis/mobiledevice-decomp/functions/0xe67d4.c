// rea decompile_all
// name: _AMRestoreIsDiskImageDmg
// address: 0xe67d4
// body: available
// range: 0xe67d4-0xe680e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMRestoreIsDiskImageDmg(char *param_1)

{
  int iVar1;
  size_t sVar2;
  bool bVar3;
  
  sVar2 = _strlen(param_1);
  if ((long)sVar2 < 4) {
    bVar3 = false;
  }
  else {
    iVar1 = _strcasecmp(".dmg",param_1 + (sVar2 - 4));
    bVar3 = iVar1 == 0;
  }
  return bVar3;
}

