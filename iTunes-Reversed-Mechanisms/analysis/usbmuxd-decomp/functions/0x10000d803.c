// rea decompile_all
// name: FUN_10000d803
// address: 0x10000d803
// body: available
// range: 0x10000d803-0x10000d8c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000d856) */
/* WARNING: Removing unreachable block (ram,0x00010000d867) */

void FUN_10000d803(long param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0xd0))();
  if (iVar1 != 0) {
    FUN_1000110c9(param_1,iVar1);
  }
  if (5 < DAT_100021030) {
    FUN_1000008d2(6,0,&cf_configureNCMOnDevice___selectFunction_dreturned0x_x,param_2,iVar1);
  }
  return;
}

