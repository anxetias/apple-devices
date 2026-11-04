// rea decompile_all
// name: _CreateMutableCDRecordFromMutableLFRecord
// address: 0xa2dc9
// body: available
// range: 0xa2dc9-0xa2e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 * _CreateMutableCDRecordFromMutableLFRecord(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  char *pcVar3;
  
  puVar2 = _calloc(1,0x68);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0x31e;
    *(undefined4 *)(puVar2 + 1) = *param_1;
    puVar2[3] = *(undefined2 *)(param_1 + 1);
    uVar1 = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)(puVar2 + 8) = uVar1;
    puVar2[0xc] = *(undefined2 *)(param_1 + 7);
    *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)((long)param_1 + 0x1e);
    *(undefined4 *)(puVar2 + 0xe) = param_1[8];
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(puVar2 + 0x14) = uVar1;
    pcVar3 = _strdup(*(char **)(param_1 + 0xe));
    *(char **)(puVar2 + 0x24) = pcVar3;
  }
  return puVar2;
}

