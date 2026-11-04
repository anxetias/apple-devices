// rea decompile_all
// name: FUN_10000927c
// address: 0x10000927c
// body: available
// range: 0x10000927c-0x100009309 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000927c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = DAT_1000212c0;
  puVar2 = DAT_1000212c0;
  puVar3 = &DAT_1000212c0;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    puVar4 = puVar2;
    if (*(int *)(puVar2 + 3) == 2) {
      if (6 < DAT_100021030) {
        FUN_1000008d2(7,0,&cf_Removingmuxinterface__d_sn__s,*(undefined4 *)(puVar2 + 0x31),
                      puVar2 + 6);
        puVar2 = (undefined8 *)*puVar3;
      }
      FUN_10000f83d(puVar2);
      FUN_100008fdb(*puVar3);
      puVar1 = DAT_1000212c0;
      puVar4 = puVar3;
    }
    if (puVar1 == (undefined8 *)0x0) break;
    puVar2 = (undefined8 *)*puVar4;
    puVar3 = puVar4;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
  }
  return;
}

