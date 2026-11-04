// rea decompile_all
// name: _debug_usb_set_endpoint_for_portal
// address: 0x2659e4
// body: available
// range: 0x2659e4-0x265b09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _debug_usb_set_endpoint_for_portal(long param_1,char param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined2 *puVar5;
  byte bVar6;
  uint local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined2 local_36;
  char local_33;
  char local_32;
  byte local_31;
  
  if (0x12 < param_3) {
    return 0xe00002c2;
  }
  uVar4 = (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(*(long **)(param_1 + 0x10),&local_31);
  if ((int)uVar4 == 0) {
    puVar5 = _malloc(6);
    if (puVar5 == (undefined2 *)0x0) {
      uVar4 = 0xe00002bd;
    }
    else {
      local_3c = 0xe00002bc;
      uVar3 = local_3c;
      if (local_31 != 0) {
        bVar6 = 0;
        bVar1 = 0;
        bVar2 = 0;
        do {
          uVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0xd0))
                            (*(long **)(param_1 + 0x10),bVar6,&local_33,&local_32,&local_38,
                             &local_36,&local_37);
          if (uVar3 != 0) goto LAB_00265af0;
          if (local_32 == param_2) {
            if (local_33 == '\x01') {
              *(byte *)((long)puVar5 + 5) = bVar6;
              puVar5[1] = local_36;
              bVar2 = 1;
            }
            else if (local_33 == '\0') {
              *(byte *)(puVar5 + 2) = bVar6;
              *puVar5 = local_36;
              bVar1 = 1;
            }
          }
          bVar6 = bVar6 + 1;
        } while (bVar6 < local_31);
        uVar3 = local_3c;
        if ((bool)(bVar2 & bVar1)) {
          *(undefined2 **)(param_1 + 0x18 + (ulong)param_3 * 8) = puVar5;
          return 0;
        }
      }
LAB_00265af0:
      local_3c = uVar3;
      _free(puVar5);
      uVar4 = (ulong)local_3c;
    }
  }
  return uVar4;
}

