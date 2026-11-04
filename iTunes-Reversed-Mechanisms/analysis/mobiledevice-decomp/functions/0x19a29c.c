// rea decompile_all
// name: _get_tag_for_rid
// address: 0x19a29c
// body: available
// range: 0x19a29c-0x19a428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _get_tag_for_rid(uint param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_3c;
  int local_38;
  uint local_34;
  
  local_34 = 1;
  uVar3 = _get_edt_matching_dict();
  local_3c = param_1;
  uVar4 = _CFDataCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,&local_3c,4);
  _add_property_match(uVar3,&cf_rid,uVar4);
  local_38 = 0;
  uVar1 = _IOServiceGetMatchingServices(*(undefined4 *)PTR__kIOMasterPortDefault_004411d8,uVar3);
  if (uVar1 == 0) {
    if (local_38 != 0) {
      iVar2 = _IOIteratorNext();
      while (iVar2 != 0) {
        _get_u32_from_edt_prop(iVar2,&cf_tag_number,&local_34);
        if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
          _printf("Found tag value %d for RID %d\n",(ulong)local_34,(ulong)param_1);
        }
        else {
          _uarpLogInfo(3,"Found tag value %d for RID %d\n",local_34,param_1);
        }
        _IOObjectRelease(iVar2);
        iVar2 = _IOIteratorNext(local_38);
      }
      if (local_38 != 0) {
        _IOObjectRelease();
      }
      *param_2 = local_34;
      return 0;
    }
    if (_inRestore == '\x01') {
      _puts("Found no matching device tree nodes");
    }
    else {
      _uarpLogError(3,"Found no matching device tree nodes\n");
    }
  }
  else if (_inRestore == '\x01') {
    _printf("Error finding matching device tree nodes: 0x%x\n",(ulong)uVar1);
  }
  else {
    _uarpLogError(3,"Error finding matching device tree nodes: 0x%x\n",uVar1);
  }
  return 0xe00002f0;
}

