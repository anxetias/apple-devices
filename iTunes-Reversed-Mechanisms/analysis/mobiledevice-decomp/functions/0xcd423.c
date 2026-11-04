// rea decompile_all
// name: _AMRestoreModeCopyDeviceInfo
// address: 0xcd423
// body: available
// range: 0xcd423-0xcd48d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMRestoreModeCopyDeviceInfo(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = _calloc(1,0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  uVar4 = *(undefined8 *)(param_1 + 0xb0);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = *(undefined8 *)(param_1 + 0xc0);
  uVar7 = *(undefined8 *)(param_1 + 200);
  *puVar8 = *(undefined8 *)(param_1 + 0x90);
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[7] = uVar7;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  puVar8[8] = *(undefined8 *)(param_1 + 0xd0);
  puVar8[9] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0xe8);
  puVar8[10] = *(undefined8 *)(param_1 + 0xe0);
  puVar8[0xb] = uVar1;
  puVar8[0xc] = *(undefined8 *)(param_1 + 0xf0);
  return;
}

