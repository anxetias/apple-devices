// rea decompile_all
// name: _getAHPMLibInterfaceForRID
// address: 0x199ecf
// body: available
// range: 0x199ecf-0x19a1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _getAHPMLibInterfaceForRID(byte param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 local_54 [4];
  long *local_50;
  long local_48;
  long *local_40;
  int local_38;
  byte local_31;
  
  local_31 = param_1;
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    _printf("Trying to find AHPMLibInterface for RID 0x%02x\n",(ulong)param_1);
  }
  else {
    _uarpLogInfo(3,"Trying to find AHPMLibInterface for RID 0x%02x\n",param_1);
  }
  uVar6 = _IOServiceMatching("AppleHPMARM");
  uVar7 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,1,&local_31);
  _add_property_match(uVar6,&cf_RID,uVar7);
  local_48 = 0;
  local_38 = 0;
  uVar3 = _IOServiceGetMatchingServices(*(undefined4 *)PTR__kIOMasterPortDefault_004411d8,uVar6);
  if (uVar3 == 0) {
    if (local_38 != 0) {
      iVar4 = _IOIteratorNext();
      uVar6 = 0xe00002c0;
      if (iVar4 != 0) {
        local_50 = param_2;
        do {
          uVar6 = _CFUUIDGetConstantUUIDWithBytes
                            (0,0x12,0xa1,0xdc,0xcf,0xcf,0x7a,0x47,0x75,0xbe,0xe5,0x9c,0x43,0x19,0xf4
                             ,0xcd,0x2b);
          uVar7 = _CFUUIDGetConstantUUIDWithBytes
                            (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,
                             0x42,0x6f);
          iVar5 = _IOCreatePlugInInterfaceForService(iVar4,uVar6,uVar7,&local_40,local_54);
          plVar2 = local_40;
          if (iVar5 == 0) {
            pcVar1 = *(code **)(*local_40 + 8);
            uVar6 = _CFUUIDGetConstantUUIDWithBytes
                              (0,0xc1,0x3a,0xcd,0xd9,0x20,0x9e,0x4b,1,0xb7,0xbe,0xe0,0x5c,0xd8,0x83,
                               199,0xb1);
            auVar8 = _CFUUIDGetUUIDBytes(uVar6);
            uVar3 = (*pcVar1)(plVar2,auVar8._0_8_,auVar8._8_8_,&local_48);
            if (uVar3 != 0) {
              if (_inRestore == '\x01') {
                _printf("QueryInterface returned 0x%08x\n",(ulong)uVar3);
              }
              else {
                _uarpLogError(3,"QueryInterface returned 0x%08x\n",uVar3);
              }
            }
            (**(code **)(*local_40 + 0x18))();
          }
          _IOObjectRelease(iVar4);
          iVar4 = _IOIteratorNext();
        } while (iVar4 != 0);
        uVar6 = 0xe00002c0;
        if (local_48 != 0) {
          *local_50 = local_48;
          uVar6 = 0;
        }
      }
      if (local_38 == 0) {
        return uVar6;
      }
      _IOObjectRelease();
      return uVar6;
    }
    if (_inRestore == '\x01') {
      _puts("Found no matching services");
    }
    else {
      _uarpLogError(3,"Found no matching services\n");
    }
  }
  else if (_inRestore == '\x01') {
    _printf("Error finding IOKit service: 0x%x\n",(ulong)uVar3);
  }
  else {
    _uarpLogError(3,"Error finding IOKit service: 0x%x\n",uVar3);
  }
  return 0xe00002f0;
}

