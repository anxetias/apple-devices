// rea decompile_all
// name: std::stringbuf::pbackfail
// address: 0x22097c
// body: available
// range: 0x22097c-0x2209d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::stringbuf::pbackfail(int) */

int __thiscall std::stringbuf::pbackfail(stringbuf *this,int param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(this + 0x30);
  uVar3 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar1) {
    *(ulong *)(this + 0x58) = uVar1;
    uVar3 = uVar1;
  }
  uVar1 = *(ulong *)(this + 0x18);
  iVar2 = -1;
  if (*(ulong *)(this + 0x10) < uVar1) {
    if (param_1 != -1) {
      if ((((byte)this[0x60] & 0x10) != 0) || (*(char *)(uVar1 - 1) == (char)param_1)) {
        *(ulong *)(this + 0x18) = uVar1 - 1;
        *(ulong *)(this + 0x20) = uVar3;
        *(char *)(uVar1 - 1) = (char)param_1;
        iVar2 = param_1;
      }
      return iVar2;
    }
    *(ulong *)(this + 0x18) = uVar1 - 1;
    *(ulong *)(this + 0x20) = uVar3;
    iVar2 = 0;
  }
  return iVar2;
}

