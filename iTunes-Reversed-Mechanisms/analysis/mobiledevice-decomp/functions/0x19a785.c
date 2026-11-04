// rea decompile_all
// name: _lookup_updatable_aces
// address: 0x19a785
// body: available
// range: 0x19a785-0x19aa21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lookup_updatable_aces(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  byte bVar10;
  ulong uVar11;
  long local_40;
  uint local_38;
  int local_34;
  
  _ace_lookup_complete = 0;
  _num_updatable_aces = 0;
  uVar6 = _get_edt_matching_dict();
  local_34 = 0;
  iVar3 = _IOServiceGetMatchingServices(*(undefined4 *)PTR__kIOMasterPortDefault_004411d8,uVar6);
  if (iVar3 == 0) {
    iVar3 = _IOIteratorNext(local_34);
    if (_num_updatable_aces < 8 && iVar3 != 0) {
      do {
        local_40 = 0;
        cVar2 = _os_parse_boot_arg_int("libusbcupdate-update-all-aces",&local_40);
        if ((cVar2 == '\0') || (local_40 != 1)) {
          local_38 = 0;
          uVar4 = _get_u32_from_edt_prop(iVar3,&cf_usbc_update_protocol,&local_38);
          if (uVar4 == 0) {
            if (local_38 - 1 < 2) {
              if ((_inRestore == '\0') || ((_logLevel & 2) == 0)) {
                pcVar9 = "Found updatable Ace based on usbc-update-protocol value\n";
                goto LAB_0019a841;
              }
              pcVar9 = "Found updatable Ace based on usbc-update-protocol value";
              goto LAB_0019a8d8;
            }
            if ((_inRestore != '\0') && ((_logLevel & 2) != 0)) {
              pcVar9 = "Unexpected usbc-update-protocol value %d\n";
              uVar4 = local_38;
              goto LAB_0019a955;
            }
            _uarpLogInfo(3,"Unexpected usbc-update-protocol value %d\n");
          }
          else if (_inRestore == '\x01') {
            pcVar9 = "Error when reading usbc-update-protocol: 0x%x\n";
LAB_0019a955:
            _printf(pcVar9,(ulong)uVar4);
          }
          else {
            _uarpLogError(3,"Error when reading usbc-update-protocol: 0x%x\n",uVar4);
          }
        }
        else {
          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
            pcVar9 = "Skipping updatable check due to bootarg";
LAB_0019a8d8:
            _puts(pcVar9);
          }
          else {
            pcVar9 = "Skipping updatable check due to bootarg\n";
LAB_0019a841:
            _uarpLogInfo(3,pcVar9);
          }
          local_40 = CONCAT44(local_40._4_4_,0xffffffff);
          iVar5 = _get_u32_from_edt_prop(iVar3,&cf_rid,&local_40);
          if ((uint)local_40 < 0x100 && iVar5 == 0) {
            (&_lun_to_rid_lookup)[_num_updatable_aces] = (char)local_40;
            _num_updatable_aces = _num_updatable_aces + 1;
          }
          else if (_inRestore == '\x01') {
            _puts("Couldn\'t find RID for service, skipping!");
          }
          else {
            _uarpLogError(3,"Couldn\'t find RID for service, skipping!\n");
          }
        }
        _IOObjectRelease(iVar3);
        iVar3 = _IOIteratorNext(local_34);
      } while (iVar3 != 0 && _num_updatable_aces < 8);
    }
    if (local_34 != 0) {
      _IOObjectRelease();
    }
    uVar4 = _num_updatable_aces;
    if (1 < _num_updatable_aces) {
      uVar7 = (ulong)_num_updatable_aces;
      uVar8 = 1;
      do {
        uVar11 = 0;
        bVar10 = _lun_to_rid_lookup;
        do {
          bVar1 = (&DAT_004a5b8d)[uVar11];
          if (bVar1 < bVar10) {
            (&_lun_to_rid_lookup)[uVar11] = bVar1;
            (&DAT_004a5b8d)[uVar11] = bVar10;
            bVar1 = bVar10;
          }
          bVar10 = bVar1;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar4 - (int)uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
    _ace_lookup_complete = 1;
  }
  return;
}

