// rea decompile_all
// name: _SHA1PadMessage
// address: 0x1bb7ac
// body: available
// range: 0x1bb7ac-0x1bb860 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bb85c to 0x1bb910 _SHA1ProcessMessageBlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _SHA1PadMessage(long param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long lVar4;
  
  lVar4 = (long)*(short *)(param_1 + 0x1c);
  sVar3 = *(short *)(param_1 + 0x1c) + 1;
  *(short *)(param_1 + 0x1c) = sVar3;
  if (lVar4 < 0x38) {
    *(undefined1 *)(param_1 + 0x1e + lVar4) = 0x80;
    sVar3 = *(short *)(param_1 + 0x1c);
    while (sVar3 < 0x38) {
      *(short *)(param_1 + 0x1c) = sVar3 + 1;
      *(undefined1 *)(param_1 + 0x1e + (long)sVar3) = 0;
      sVar3 = *(short *)(param_1 + 0x1c);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1e + lVar4) = 0x80;
    while (sVar3 < 0x40) {
      *(short *)(param_1 + 0x1c) = sVar3 + 1;
      *(undefined1 *)(param_1 + 0x1e + (long)sVar3) = 0;
      sVar3 = *(short *)(param_1 + 0x1c);
    }
    _SHA1ProcessMessageBlock(param_1);
    sVar3 = *(short *)(param_1 + 0x1c);
    while (sVar3 < 0x38) {
      *(short *)(param_1 + 0x1c) = sVar3 + 1;
      *(undefined1 *)(param_1 + 0x1e + (long)sVar3) = 0;
      sVar3 = *(short *)(param_1 + 0x1c);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x56) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  *(uint *)(param_1 + 0x5a) =
       uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  _SHA1ProcessMessageBlock(param_1);
  return;
}

