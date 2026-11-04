// rea decompile_all
// name: _sendFileDescriptor
// address: 0xdd413
// body: available
// range: 0xdd413-0xdd4ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _sendFileDescriptor(int, int) */

undefined8 _sendFileDescriptor(int param_1,int param_2)

{
  bool bVar1;
  void *pvVar2;
  size_t sVar3;
  ssize_t sVar4;
  int *piVar5;
  uint uVar6;
  size_t sVar7;
  void *pvVar8;
  undefined8 uVar9;
  
  pvVar2 = _valloc(0x100000);
  if (pvVar2 == (void *)0x0) {
    uVar9 = 0x12;
  }
  else {
    uVar6 = 5;
    while( true ) {
      while (sVar3 = _read(param_2,pvVar2,0x100000), sVar3 == 0xffffffffffffffff) {
        piVar5 = ___error();
        uVar9 = 0xb;
        if ((*piVar5 != 4) || (bVar1 = uVar6 < 2, uVar6 = uVar6 - 1, bVar1)) goto LAB_000dd4e0;
      }
      if (sVar3 == 0) break;
      pvVar8 = pvVar2;
      uVar6 = 5;
      if (0 < (long)sVar3) {
        do {
          uVar6 = 5;
          while (sVar4 = _send(param_1,pvVar8,sVar3,0), sVar4 == -1) {
            piVar5 = ___error();
            uVar9 = 9;
            if ((*piVar5 != 4) || (bVar1 = uVar6 < 2, uVar6 = uVar6 - 1, bVar1)) goto LAB_000dd4e0;
          }
          pvVar8 = (void *)((long)pvVar8 + sVar4);
          uVar6 = 5;
          sVar7 = sVar3 - sVar4;
          bVar1 = sVar4 <= (long)sVar3;
          sVar3 = sVar7;
        } while (sVar7 != 0 && bVar1);
      }
    }
    uVar9 = 0;
  }
LAB_000dd4e0:
  _free(pvVar2);
  return uVar9;
}

