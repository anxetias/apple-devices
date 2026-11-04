// rea decompile_all
// name: _initDebugUSBWithService
// address: 0x2ebc5
// body: available
// range: 0x2ebc5-0x2ed3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _initDebugUSBWithService(void)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 *puStack_30;
  undefined4 local_24;
  
  local_40 = 0;
  local_38 = 0;
  puStack_30 = (undefined4 *)0x0;
  lVar3 = _debug_usb_init_for_service();
  if (lVar3 != 0) {
    iVar2 = _debug_usb_set_endpoint_for_portal(lVar3,1,0);
    if (((iVar2 == 0) && (iVar2 = _debug_usb_set_endpoint_for_portal(lVar3,1), iVar2 == 0)) &&
       (pvVar4 = _malloc(0x800), pvVar4 != (void *)0x0)) {
      local_24 = 0x21;
      local_38 = CONCAT71(local_38._1_7_,1);
      local_38._0_6_ = CONCAT42(0xaff01,(undefined2)local_38);
      local_38 = CONCAT26(1,(undefined6)local_38);
      puStack_30 = &local_24;
      iVar2 = _write_config(lVar3,&local_38,pvVar4,0x800);
      if (iVar2 == 0) {
        local_24 = 1;
        local_38 = CONCAT71(local_38._1_7_,1);
        local_38._0_6_ = CONCAT42(0x14ff02,(undefined2)local_38);
        local_38 = CONCAT26(1,(undefined6)local_38);
        puStack_30 = &local_24;
        iVar2 = _write_config(lVar3,&local_38,pvVar4,0x800);
        if (iVar2 == 0) {
          uVar1 = (ushort)local_40;
          local_40 = CONCAT26(0x20,CONCAT42(0xff03,uVar1 & 0xff00));
          local_24 = 0x800;
          iVar2 = _read_config(lVar3,&local_40,pvVar4,&local_24);
          if (((iVar2 == 0) && ((*(uint *)((long)pvVar4 + 0xc) & 0xfe0000) == 0x20000)) &&
             (iVar2 = _debug_usb_set_endpoint_for_portal(lVar3,3,0x10), iVar2 == 0)) {
            local_24 = 0x46500;
            local_38 = CONCAT71(local_38._1_7_,0x10);
            local_38._0_6_ = CONCAT42(0xa1006,(undefined2)local_38);
            local_38 = CONCAT26(1,(undefined6)local_38);
            puStack_30 = &local_24;
            iVar2 = _write_config(lVar3,&local_38,pvVar4,0x800);
            if (iVar2 == 0) {
              return lVar3;
            }
          }
        }
      }
    }
    _debug_usb_free(lVar3);
  }
  return 0;
}

