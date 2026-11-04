// rea decompile_all
// name: _aaDecompressionStreamReadInput
// address: 0x18cd77
// body: available
// range: 0x18cd77-0x18ce34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _aaDecompressionStreamReadInput(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      uVar1 = param_1[1];
      if (uVar1 == 0) {
        if (*(int *)((long)param_1 + 0x3c) != 0) {
          return uVar2;
        }
        uVar1 = _AAByteStreamRead(*param_1,param_2 + uVar2,param_3);
        if ((long)uVar1 < 0) {
          return uVar1;
        }
        if (uVar1 == 0) {
          *(undefined4 *)((long)param_1 + 0x3c) = 1;
          return uVar2;
        }
      }
      else {
        if (param_3 < uVar1) {
          uVar1 = param_3;
        }
        _memcpy((void *)(param_2 + uVar2),(void *)param_1[3],uVar1);
        if ((long)uVar1 < 0) {
          return uVar1;
        }
        sVar3 = param_1[1] - uVar1;
        if (uVar1 <= (ulong)param_1[1]) {
          if (sVar3 != 0) {
            _memmove((void *)param_1[3],(void *)((long)param_1[3] + uVar1),sVar3);
          }
          param_1[1] = sVar3;
        }
      }
      uVar2 = uVar2 + uVar1;
      param_3 = param_3 - uVar1;
    } while (param_3 != 0);
  }
  return uVar2;
}

