// rea decompile_all
// name: _BrotliCreateBackwardReferences
// address: 0x1f00b0
// body: available
// range: 0x1f00b0-0x1f023b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCreateBackwardReferences(void)

{
  int iVar1;
  long in_R9;
  
  iVar1 = *(int *)(in_R9 + 0x28);
  if (iVar1 < 0x23) {
    switch(iVar1) {
    case 2:
      _CreateBackwardReferencesNH2();
      break;
    case 3:
      _CreateBackwardReferencesNH3();
      break;
    case 4:
      _CreateBackwardReferencesNH4();
      break;
    case 5:
      _CreateBackwardReferencesNH5();
      break;
    case 6:
      _CreateBackwardReferencesNH6();
    }
  }
  else if (iVar1 < 0x36) {
    switch(iVar1) {
    case 0x23:
      _CreateBackwardReferencesNH35();
      break;
    case 0x28:
      _CreateBackwardReferencesNH40();
      break;
    case 0x29:
      _CreateBackwardReferencesNH41();
      break;
    case 0x2a:
      _CreateBackwardReferencesNH42();
    }
  }
  else if (iVar1 == 0x36) {
    _CreateBackwardReferencesNH54();
  }
  else if (iVar1 == 0x37) {
    _CreateBackwardReferencesNH55();
  }
  else if (iVar1 == 0x41) {
    _CreateBackwardReferencesNH65();
  }
  return;
}

