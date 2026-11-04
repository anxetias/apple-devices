// rea decompile_all
// name: FUN_100000b14
// address: 0x100000b14
// body: available
// range: 0x100000b14-0x100000b8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100000b14(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = _malloc(0x90);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar2 = _malloc(0x8000);
    if (pvVar2 != (void *)0x0) {
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)((long)puVar1 + 0x4c) = 0x8000;
      puVar1[5] = pvVar2;
      DAT_100022b50 = DAT_100022b50 + 1;
      return puVar1;
    }
    _free(puVar1);
  }
  return (undefined8 *)0x0;
}

