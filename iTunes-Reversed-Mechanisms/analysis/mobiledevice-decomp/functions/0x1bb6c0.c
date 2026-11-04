// rea decompile_all
// name: _SHA1ResultPartial
// address: 0x1bb6c0
// body: available
// range: 0x1bb6c0-0x1bb7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _SHA1ResultPartial(long param_1,long param_2,undefined8 *param_3,uint *param_4)

{
  short sVar1;
  int iVar2;
  void *pvVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  
  iVar2 = 1;
  if (param_2 != 0 && param_1 != 0) {
    iVar2 = *(int *)(param_1 + 100);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x60) == 0 && (param_3 == (undefined8 *)0x0 || param_4 == (uint *)0x0))
      {
        _SHA1PadMessage(param_1);
        *(undefined8 *)(param_1 + 0x4e) = 0;
        *(undefined8 *)(param_1 + 0x56) = 0;
        *(undefined8 *)(param_1 + 0x3e) = 0;
        *(undefined8 *)(param_1 + 0x46) = 0;
        *(undefined8 *)(param_1 + 0x2e) = 0;
        *(undefined8 *)(param_1 + 0x36) = 0;
        *(undefined8 *)(param_1 + 0x1e) = 0;
        *(undefined8 *)(param_1 + 0x26) = 0;
        *(undefined8 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0x60) = 1;
      }
      else {
        if (param_3 == (undefined8 *)0x0 || param_4 == (uint *)0x0) {
          return 1;
        }
        sVar1 = *(short *)(param_1 + 0x1c);
        uVar6 = (uint)sVar1;
        *param_4 = uVar6;
        if (0 < sVar1) {
          pvVar3 = _malloc((ulong)uVar6);
          *param_3 = pvVar3;
          _memcpy(pvVar3,(void *)(param_1 + 0x1e),(long)(int)uVar6);
        }
      }
      iVar2 = 0;
      bVar4 = 0;
      lVar5 = 0;
      do {
        *(char *)(param_2 + lVar5) =
             (char)(*(uint *)(param_1 + (ulong)((uint)lVar5 & 0xfffffffc)) >> (~bVar4 & 0x18));
        lVar5 = lVar5 + 1;
        bVar4 = bVar4 + 8;
      } while (lVar5 != 0x14);
    }
  }
  return iVar2;
}

