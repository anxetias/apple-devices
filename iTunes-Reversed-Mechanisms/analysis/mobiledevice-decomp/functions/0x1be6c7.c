// rea decompile_all
// name: _add_data_in_datablock
// address: 0x1be6c7
// body: available
// range: 0x1be6c7-0x1be7ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _add_data_in_datablock(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0xffffff98;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = _malloc(0x1010);
      if (puVar1 == (undefined8 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        return 0xffffff98;
      }
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1[1] = 0xff0;
      param_1[1] = puVar1;
      *param_1 = puVar1;
    }
    if (param_3 != 0) {
      uVar5 = puVar1[1];
      do {
        if (uVar5 == 0) {
          puVar2 = _malloc(0x1010);
          if (puVar2 == (undefined8 *)0x0) {
            *puVar1 = 0;
            return 0xffffff98;
          }
          *puVar2 = 0;
          puVar2[2] = 0;
          puVar2[1] = 0xff0;
          *puVar1 = puVar2;
          param_1[1] = puVar2;
          uVar5 = 0xff0;
          lVar4 = 0;
        }
        else {
          lVar4 = puVar1[2];
          puVar2 = puVar1;
        }
        uVar3 = param_3;
        if (uVar5 < param_3) {
          uVar3 = uVar5;
        }
        uVar3 = uVar3 & 0xffffffff;
        if (uVar3 != 0) {
          uVar5 = 0;
          do {
            *(undefined1 *)((long)puVar2 + uVar5 + lVar4 + 0x20) = *(undefined1 *)(param_2 + uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar3 != uVar5);
          uVar5 = puVar2[1];
          lVar4 = puVar2[2];
        }
        puVar2[2] = lVar4 + uVar3;
        uVar5 = uVar5 - uVar3;
        puVar2[1] = uVar5;
        param_2 = param_2 + uVar3;
        param_3 = param_3 - uVar3;
        puVar1 = puVar2;
      } while (param_3 != 0);
    }
    uVar6 = 0;
  }
  return uVar6;
}

