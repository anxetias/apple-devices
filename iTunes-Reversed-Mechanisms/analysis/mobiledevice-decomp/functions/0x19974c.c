// rea decompile_all
// name: _simulationBackendCreate
// address: 0x19974c
// body: available
// range: 0x19974c-0x1997a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _simulationBackendCreate(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)_uarpZalloc(0x40);
  *param_1 = (long)puVar2;
  *puVar2 = 0xffffffff;
  *(undefined1 *)(puVar2 + 1) = 0x77;
  *(undefined8 *)(puVar2 + 2) = 0x1010100000022;
  *(undefined8 *)(puVar2 + 4) = 0x123456789abcdef;
  *(undefined8 *)(puVar2 + 6) = 0x706050403020100;
  *(undefined8 *)(puVar2 + 8) = 0xf0e0d0c0b0a0908;
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x28) = 1;
  *(undefined1 *)(lVar1 + 0x2c) = 0;
  return 0;
}

