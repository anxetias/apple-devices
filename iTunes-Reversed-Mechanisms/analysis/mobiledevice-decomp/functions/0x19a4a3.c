// rea decompile_all
// name: _get_retimer_service
// address: 0x19a4a3
// body: available
// range: 0x19a4a3-0x19a6d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _get_retimer_service(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_48;
  int local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  
  *param_2 = 0;
  uVar5 = _get_edt_matching_dict();
  uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  local_48 = param_1;
  uVar6 = _CFDataCreate(uVar2,&local_48,4);
  _add_property_match(uVar5,&cf_rid,uVar6);
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
  iVar3 = _IOServiceGetMatchingService(uVar1,uVar5);
  if (iVar3 == 0) {
    if (_inRestore == '\x01') {
      _printf("Error finding matching device tree nodes: 0x%x\n",0);
    }
    else {
      _uarpLogError(3,"Error finding matching device tree nodes: 0x%x\n",0);
    }
  }
  else {
    local_38 = 0;
    iVar4 = _get_u32_from_edt_prop(iVar3,&cf_usbc_update_protocol);
    if (iVar4 != 0) {
      if (iVar4 == -0x1ffffd10) {
        return 0;
      }
      return iVar4;
    }
    if (local_38 != 2) {
      return 0;
    }
    local_44 = 0;
    iVar3 = _get_u32_from_edt_prop(iVar3,&cf_spi_flash_parent);
    local_34 = local_44;
    local_40 = _IOServiceMatching("AppleARMIICDevice");
    uVar5 = _CFDictionaryCreateMutable
                      (uVar2,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    lVar7 = _CFDataCreate(uVar2,&local_34,4);
    if (lVar7 != 0) {
      _CFDictionaryAddValue(uVar5,&cf_AAPL_phandle,lVar7);
      _CFRelease(lVar7);
    }
    uVar2 = local_40;
    _CFDictionarySetValue(local_40,&cf_IOPropertyMatch,uVar5);
    iVar4 = _IOServiceGetMatchingService(uVar1,uVar2);
    if (iVar4 != 0) {
      local_34 = 0;
      _IORegistryEntryGetChildEntry(iVar4,"IOService",&local_34);
      if (local_34 == 0) {
        if (_inRestore == '\x01') {
          _puts("Error finding the atcrt service (found the iic service)");
        }
        else {
          _uarpLogError(3,"Error finding the atcrt service (found the iic service)\n");
        }
        iVar3 = -0x1ffffd40;
      }
      else {
        *param_2 = local_34;
      }
    }
    if (*param_2 != 0) {
      return iVar3;
    }
    if (_inRestore == '\x01') {
      _puts("Error finding the spi-flash-parent");
    }
    else {
      _uarpLogError(3,"Error finding the spi-flash-parent\n");
    }
  }
  return -0x1ffffd40;
}

