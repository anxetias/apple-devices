// rea decompile_all
// name: _internalBackendCreate
// address: 0x270f98
// body: available
// range: 0x270f98-0x271329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _internalBackendCreate
              (long *param_1,undefined1 param_2,int param_3,char param_4,undefined4 param_5,
              byte param_6,undefined1 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long local_78;
  undefined1 local_70 [12];
  undefined4 local_64;
  long local_60;
  long local_58;
  long local_50;
  int local_44;
  undefined4 local_40;
  undefined1 local_39;
  uint local_38;
  undefined1 local_31;
  
  local_44 = param_3;
  local_31 = param_2;
  cVar2 = _os_parse_boot_arg_string("-restore",0,0);
  if (cVar2 != '\0') {
    _inRestore = '\x01';
  }
  cVar2 = _os_parse_boot_arg_int("libusbcupdate_log",&_logLevel);
  if (cVar2 == '\0') {
    __logLevel = 1;
  }
  if (_inRestore == '\x01') {
    _printf("-restore is %u\n",1);
  }
  else {
    _uarpLogError(3,"-restore is %u\n",0);
  }
  if (param_1 == (long *)0x0) {
    return 0x1e;
  }
  lVar4 = _uarpZalloc(0x70);
  *param_1 = lVar4;
  if (lVar4 == 0) {
    return 0xb;
  }
  local_78 = 0;
  local_40 = param_5;
  iVar3 = _readBootArg("libusbcupdate-always-personalize",&local_78);
  lVar4 = *param_1;
  if (((local_78 == 1 && iVar3 == 0) | param_6) == 1) {
    *(undefined1 *)(lVar4 + 0x52) = 1;
  }
  *(char *)(lVar4 + 0x53) = param_4;
  local_50 = 0;
  if (((param_4 != '\0') &&
      (iVar3 = _readBootArg("libusbupdate-allow-same-version",&local_50), iVar3 == 0)) &&
     (local_50 == 1)) {
    if ((_inRestore == '\x01') && ((__logLevel & 2) != 0)) {
      _puts("Ignoring initialization option to skip flashing same verison based on bootarg");
    }
    else {
      _uarpLogInfo(3,
                   "Ignoring initialization option to skip flashing same verison based on bootarg\n"
                  );
    }
    *(undefined1 *)(*param_1 + 0x53) = 0;
  }
  local_60 = 0;
  iVar3 = _readBootArg("libusbcupdate-prevent-downgrades");
  lVar4 = *param_1;
  if ((iVar3 == 0) && (local_60 == 1)) {
    *(undefined1 *)(lVar4 + 0x54) = 1;
  }
  *(undefined1 *)(lVar4 + 0x55) = param_7;
  *(undefined4 *)(lVar4 + 0x6c) = param_8;
  local_58 = 0;
  iVar3 = _readBootArg("libusbcupdate-skip-restore");
  if ((iVar3 == 0) && (local_58 == 1)) {
    *(undefined1 *)(*param_1 + 0x51) = 1;
    return 0;
  }
  if ((0 < local_44) &&
     (iVar3 = _get_rid_for_lun(local_44,&local_31), param_2 = local_31, iVar3 != 0)) {
    return iVar3;
  }
  lVar4 = *param_1;
  *(undefined1 *)(lVar4 + 0x66) = param_2;
  iVar3 = _get_tag_for_rid(param_2,lVar4 + 0xc);
  if (iVar3 != 0) {
    return iVar3;
  }
  iVar3 = _getAHPMLibInterfaceForRID(local_31,*param_1);
  if (iVar3 != 0) goto LAB_002712f8;
  local_38 = 0;
  iVar3 = (**(code **)(**(long **)*param_1 + 0x28))(*(long **)*param_1,0,0,&local_38,4,0,local_70);
  if (iVar3 == 0) {
    if (local_38 == 0x28) {
      iVar3 = (**(code **)(**(long **)*param_1 + 0x28))
                        (*(long **)*param_1,0,1,&local_38,4,0,local_70);
      if (iVar3 == 0) {
        if (local_38 + 0xfdfedfd8 < 0xfffffffc) {
          if (_inRestore != '\x01') {
            pcVar5 = "Error: Got unexpected DID 0x%x\n";
            goto LAB_002712e5;
          }
          pcVar5 = "Error: Got unexpected DID 0x%x\n";
          goto LAB_0027123c;
        }
        puVar1 = (undefined8 *)*param_1;
        *(undefined1 *)(puVar1 + 10) = 0;
        *(char *)(puVar1 + 0xd) = (char)local_40;
        if ((char)local_40 == '\0') {
          return 0;
        }
        local_39 = 1;
        local_64 = 0x41444655;
        iVar3 = (**(code **)(*(long *)*puVar1 + 0x68))
                          ((long *)*puVar1,1,&local_64,&local_39,0,0,0,1,0,10,0,0);
        if ((iVar3 == 0) &&
           (iVar3 = _wait_for_mode(*(undefined8 *)*param_1,0x41444655,0,1), iVar3 == 0)) {
          return 0;
        }
      }
    }
    else {
      if (_inRestore == '\x01') {
        pcVar5 = "Error: Got unexpected VID 0x%x\n";
LAB_0027123c:
        _printf(pcVar5,(ulong)local_38);
      }
      else {
        pcVar5 = "Error: Got unexpected VID 0x%x\n";
LAB_002712e5:
        _uarpLogError(3,pcVar5);
      }
      iVar3 = 0x1e;
    }
  }
  _destroyAHPMLibInterface(*param_1);
LAB_002712f8:
  _image3Free(*param_1);
  *param_1 = 0;
  return iVar3;
}

