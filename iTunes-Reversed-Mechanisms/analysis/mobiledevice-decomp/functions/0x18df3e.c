// rea decompile_all
// name: _appendThreadErrorContextString
// address: 0x18df3e
// body: available
// range: 0x18df3e-0x18dfd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _appendThreadErrorContextString(char *param_1)

{
  size_t sVar1;
  pthread_key_t pVar2;
  void *pvVar3;
  ulong uVar4;
  short sVar5;
  uint uVar6;
  
  if ((param_1 != (char *)0x0) && (sVar1 = _strlen(param_1), 0xffffffffffffdfff < sVar1 - 0x2001)) {
    pVar2 = _getErrorContextKey();
    pvVar3 = _pthread_getspecific(pVar2);
    if (pvVar3 != (void *)0x0) {
      uVar6 = (int)sVar1 + 3;
      uVar4 = (ulong)*(ushort *)((long)pvVar3 + 0x48);
      if ((uVar6 & 0xffff) + (uint)*(ushort *)((long)pvVar3 + 0x48) <=
          (uint)*(ushort *)((long)pvVar3 + 0x4a)) {
        sVar5 = (short)uVar6;
        *(short *)((long)pvVar3 + uVar4 + 0x4c) = sVar5;
        _memcpy((void *)((long)pvVar3 + uVar4 + 0x4e),param_1,sVar1);
        *(undefined1 *)((long)pvVar3 + sVar1 + 0x4e + uVar4) = 0;
        *(short *)((long)pvVar3 + 0x48) = *(short *)((long)pvVar3 + 0x48) + sVar5;
      }
    }
  }
  return;
}

