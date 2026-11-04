// rea decompile_all
// name: _uarpProcessTLV
// address: 0x181615
// body: available
// range: 0x181615-0x181699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _uarpProcessTLV(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *local_30;
  
  uVar3 = _uarpNtohl(*param_2);
  uVar4 = _uarpNtohl(param_2[1]);
  if (uVar4 < 0xffffffe8) {
    local_30 = (undefined4 *)0x0;
    iVar5 = _UARPLayer2RequestBuffer(param_1,&local_30,uVar4 + 0x18);
    puVar2 = local_30;
    if (iVar5 == 0) {
      *local_30 = uVar3;
      local_30[1] = uVar4;
      puVar1 = local_30 + 6;
      _memcpy(puVar1,param_2 + 2,(ulong)uVar4);
      *(undefined4 **)(puVar2 + 2) = puVar1;
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}

