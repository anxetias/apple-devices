// rea decompile_all
// name: FUN_100001fa3
// address: 0x100001fa3
// body: available
// range: 0x100001fa3-0x100002012 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002007 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100001fa3(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = DAT_100021030;
  uVar2 = 7;
  if (param_1 < 7) {
    uVar2 = param_1;
  }
  DAT_100021030 = param_1;
  _asl_set_filter(DAT_100021298,(2 << ((byte)uVar2 & 0x1f)) + -1);
  if (uVar1 != DAT_100021030) {
    FUN_10000a0f5();
    if (-2 < (int)DAT_100021030) {
      FUN_1000008d2(0xffffffff,0,&cf_logfilterchangedfrom_dto_d,uVar1);
      return;
    }
  }
  return;
}

