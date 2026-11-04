// rea decompile_all
// name: FUN_100000aa4
// address: 0x100000aa4
// body: available
// range: 0x100000aa4-0x100000b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100000aa4(undefined8 param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_retaddr;
  
  if (DAT_100021330 == (undefined8 *)0x0) {
    if (param_3 != 0) {
      puVar1 = (undefined8 *)FUN_100000b14();
      if (puVar1 != (undefined8 *)0x0) goto LAB_100000ac6;
    }
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = DAT_100021330;
    DAT_100021330 = (undefined8 *)*DAT_100021330;
LAB_100000ac6:
    puVar1[6] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[4] = puVar1[5];
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar1[3] = unaff_retaddr;
    *(undefined4 *)(puVar1 + 0xf) = 0;
    puVar1[0x10] = param_1;
    *(undefined4 *)(puVar1 + 0x11) = param_2;
  }
  return puVar1;
}

