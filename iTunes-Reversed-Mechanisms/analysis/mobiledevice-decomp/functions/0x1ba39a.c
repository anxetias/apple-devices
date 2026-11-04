// rea decompile_all
// name: PRGSequencer::FindElementStructure
// address: 0x1ba39a
// body: available
// range: 0x1ba39a-0x1ba3da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* PRGSequencer::FindElementStructure(unsigned int, unsigned int) */

uint * __thiscall PRGSequencer::FindElementStructure(PRGSequencer *this,uint param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(int *)(this + 0xcb0) < 1) {
    return (uint *)0x0;
  }
  uVar2 = *(int *)(this + 0xcb0) - 1;
  if (0xc6 < uVar2) {
    uVar2 = 199;
  }
  uVar3 = 0;
  while (((puVar1 = *(uint **)(this + uVar3 * 8 + 0x30), puVar1 == (uint *)0x0 ||
          (*puVar1 != param_1)) || (puVar1[2] != param_2))) {
    uVar3 = uVar3 + 1;
    if (uVar2 + 1 == uVar3) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}

