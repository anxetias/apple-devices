// rea decompile_all
// name: _uarpAllocateTransmitBuffer2
// address: 0x17fce0
// body: available
// range: 0x17fce0-0x17fd78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * _uarpAllocateTransmitBuffer2(undefined8 param_1,int *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  long *local_28;
  
  local_28 = (long *)0x0;
  iVar2 = _UARPLayer2RequestBuffer(param_1,&local_28,0x28);
  if (iVar2 == 0) {
    uVar3 = *param_2 + (uint)*(ushort *)((long)param_2 + 0x1e) + 0x1a;
    if (param_3 < uVar3) {
      param_3 = uVar3;
    }
    iVar2 = _UARPLayer2RequestTransmitMsgBuffer(param_1,param_2,local_28);
    if (iVar2 == 0) {
      *(uint *)(local_28 + 1) = param_3;
      uVar1 = *(ushort *)((long)param_2 + 0x1e);
      local_28[2] = *local_28 + (ulong)uVar1;
      *(uint *)(local_28 + 3) = param_3 - uVar1;
      *(undefined2 *)((long)local_28 + 0x1c) = 0;
      return local_28;
    }
    _UARPLayer2ReturnBuffer(param_1,local_28);
  }
  return (long *)0x0;
}

