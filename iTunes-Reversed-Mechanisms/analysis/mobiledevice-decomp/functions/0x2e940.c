// rea decompile_all
// name: _deviceWithService
// address: 0x2e940
// body: available
// range: 0x2e940-0x2eb18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _deviceWithService(undefined4 param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 local_38;
  
  local_38 = 0;
  cVar2 = _taDFU_AppleKIS_enabled();
  if (((cVar2 == '\0') && (cVar2 = _taDFU_deviceinterfaced_enabled(), cVar2 == '\0')) &&
     (puVar4 = _calloc(1,0x40), puVar4 != (undefined4 *)0x0)) {
    *puVar4 = 3;
    *(undefined **)(puVar4 + 0xc) = &_taDFUDeviceFunctions;
    lVar5 = _initDebugUSBWithService(param_1);
    if (lVar5 != 0) {
      iVar3 = _debug_usb_get_location(lVar5,puVar4 + 8);
      if ((iVar3 == 0) && (pvVar6 = _malloc(0x800), pvVar6 != (void *)0x0)) {
        local_38 = CONCAT71(local_38._1_7_,0x10);
        local_38 = CONCAT26(0x100,CONCAT42(0x1001001,(undefined2)local_38));
        iVar3 = _read_config(lVar5,&local_38,pvVar6);
        if ((iVar3 == 0) && (puVar7 = _calloc(1,0x28), puVar7 != (undefined4 *)0x0)) {
          *(undefined4 **)(puVar4 + 10) = puVar7;
          *puVar7 = param_1;
          _IOObjectRetain(param_1);
          lVar1 = *(long *)(puVar4 + 10);
          if (((lVar1 != 0) && (piVar9 = (int *)((long)pvVar6 + 0xc), *piVar9 == 0x61444655)) &&
             (*(short *)((long)pvVar6 + 0x12) == 1)) {
            *(undefined8 *)(lVar1 + 8) = *(undefined8 *)((long)pvVar6 + 0x1c);
            *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)((long)pvVar6 + 0x14);
            puVar4[9] = *(undefined4 *)((long)pvVar6 + 0x54);
            uVar8 = _read_string(*(undefined1 *)((long)pvVar6 + 0x24),piVar9);
            *(undefined8 *)(lVar1 + 0x18) = uVar8;
            uVar8 = _read_string(*(undefined1 *)((long)pvVar6 + 0x28),piVar9);
            *(undefined8 *)(lVar1 + 0x20) = uVar8;
            uVar8 = _read_string(*(undefined1 *)((long)pvVar6 + 0x5a),piVar9);
            *(undefined8 *)(puVar4 + 2) = uVar8;
            uVar8 = _read_string(*(undefined1 *)((long)pvVar6 + 0x5b),piVar9);
            *(undefined8 *)(puVar4 + 4) = uVar8;
            uVar8 = _read_string(*(undefined1 *)((long)pvVar6 + 0x5c),piVar9);
            *(undefined8 *)(puVar4 + 6) = uVar8;
            _debug_usb_free(lVar5);
            _free(pvVar6);
            return puVar4;
          }
        }
        _debug_usb_free(lVar5);
        _free(pvVar6);
      }
      else {
        _debug_usb_free(lVar5);
      }
    }
    _libDFU_release(puVar4);
  }
  return (undefined4 *)0x0;
}

