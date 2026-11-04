// rea decompile_all
// name: __tr_tally
// address: 0x838fd
// body: available
// range: 0x838fd-0x83997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __tr_tally(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = *(uint *)(param_1 + 0x16fc);
  *(short *)(*(long *)(param_1 + 0x1700) + (ulong)uVar1 * 2) = (short)param_2;
  *(uint *)(param_1 + 0x16fc) = uVar1 + 1;
  *(char *)(*(long *)(param_1 + 0x16f0) + (ulong)uVar1) = (char)param_3;
  if (param_2 == 0) {
    psVar2 = (short *)(param_1 + (ulong)param_3 * 4 + 0xc4);
  }
  else {
    *(int *)(param_1 + 0x1718) = *(int *)(param_1 + 0x1718) + 1;
    psVar2 = (short *)(param_1 + 0x4c8 + (ulong)(byte)(&__length_code)[param_3] * 4);
    *psVar2 = *psVar2 + 1;
    uVar1 = (param_2 - 1 >> 7) + 0x100;
    if (param_2 < 0x101) {
      uVar1 = param_2 - 1;
    }
    psVar2 = (short *)(param_1 + (ulong)(byte)(&__dist_code)[uVar1] * 4 + 0x9b8);
  }
  *psVar2 = *psVar2 + 1;
  return *(int *)(param_1 + 0x16fc) == *(int *)(param_1 + 0x16f8) + -1;
}

