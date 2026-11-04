// rea decompile_all
// name: _CopyMutableCDRecord
// address: 0xa2a0a
// body: available
// range: 0xa2a0a-0xa2abf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _CopyMutableCDRecord(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  void *pvVar11;
  
  puVar9 = _calloc(1,0x68);
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  *puVar9 = *param_1;
  puVar9[1] = uVar2;
  puVar9[2] = uVar3;
  puVar9[3] = uVar4;
  puVar9[4] = uVar5;
  puVar9[5] = uVar6;
  puVar9[6] = uVar7;
  puVar9[7] = uVar8;
  uVar2 = param_1[9];
  puVar9[8] = param_1[8];
  puVar9[9] = uVar2;
  uVar2 = param_1[0xb];
  puVar9[10] = param_1[10];
  puVar9[0xb] = uVar2;
  puVar9[0xc] = param_1[0xc];
  pcVar10 = _strdup((char *)param_1[9]);
  puVar9[9] = pcVar10;
  uVar1 = *(ushort *)(param_1 + 6);
  pvVar11 = _malloc((ulong)uVar1);
  puVar9[10] = pvVar11;
  _memcpy(pvVar11,(void *)param_1[10],(ulong)uVar1);
  uVar1 = *(ushort *)(param_1 + 0xb);
  pvVar11 = _malloc((ulong)uVar1);
  puVar9[0xc] = pvVar11;
  _memcpy(pvVar11,(void *)param_1[0xc],(ulong)uVar1);
  return puVar9;
}

