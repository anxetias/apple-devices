// rea decompile_all
// name: _remote_device_os_is_at_least
// address: 0x1475e6
// body: available
// range: 0x1475e6-0x14790b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _remote_device_os_is_at_least
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  long local_40;
  char *local_38;
  
  local_40 = 0;
  lVar3 = _CFStringCompare(param_2,&cf_15_0,0x40);
  if (lVar3 == -1) {
LAB_00147705:
    uVar9 = 0;
    local_40 = _createAndLogError("remote_device_os_is_at_least",0x51,0xe800000f,1,0,
                                  &
                                  cf_remote_device_os_is_at_leastcanonlycomparetoiOS_tvOS>_15_0_watchOS>_8_0_bridgeOS>_6_0_andmacOS>_12_0_Returningfalse_
                                 );
    lVar3 = 0;
LAB_00147735:
    if (param_8 != (undefined8 *)0x0 && local_40 != 0) {
      uVar6 = _CFRetain(local_40);
      *param_8 = uVar6;
    }
LAB_00147754:
    if (lVar3 == 0) goto LAB_00147761;
  }
  else {
    lVar3 = _CFStringCompare(param_3,&cf_8_0,0x40);
    if (lVar3 == -1) goto LAB_00147705;
    lVar3 = _CFStringCompare(param_4,&cf_15_0,0x40);
    if (lVar3 == -1) goto LAB_00147705;
    lVar3 = _CFStringCompare(param_6,&cf_12_0,0x40);
    if (lVar3 == -1) goto LAB_00147705;
    lVar3 = _CFStringCompare(param_7,&cf_6_0,0x40);
    if (lVar3 == -1) goto LAB_00147705;
    lVar3 = _remote_device_copy_property(param_1,"ProductName");
    if (lVar3 == 0) {
LAB_001476d1:
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar9 = 0;
      __os_log_internal(0,_md_log_log,1,
                        "Failed to read product type. Device OS is too old to read ProductName from its remote device properties."
                       );
      goto LAB_00147754;
    }
    puVar4 = (undefined *)_xpc_get_type(lVar3);
    if (puVar4 != PTR___xpc_type_string_00441328) goto LAB_001476d1;
    pcVar5 = (char *)_xpc_string_get_string_ptr(lVar3);
    if (pcVar5 == (char *)0x0) {
      pcVar8 = &cf_Failedtogetstring_;
      uVar9 = 0;
      uVar6 = 0x5e;
      lVar7 = 0;
LAB_001478cc:
      local_40 = _createAndLogError("remote_device_os_is_at_least",uVar6,0xe80000f1,1,lVar7,pcVar8);
      goto LAB_00147735;
    }
    local_38 = pcVar5;
    iVar1 = _strcmp(pcVar5,"iPhone OS");
    if (iVar1 == 0) {
LAB_00147868:
      uVar2 = _remote_device_osversion_property_is_at_least(param_1,param_2,&local_40);
      uVar9 = (ulong)uVar2;
      if (local_40 != 0) {
        pcVar8 = &cf_FailedtocomparetoOSVersion_;
        uVar6 = 0x79;
        lVar7 = local_40;
        goto LAB_001478cc;
      }
    }
    else {
      iVar1 = _strcmp(local_38,"Watch OS");
      param_2 = param_3;
      if (iVar1 == 0) goto LAB_00147868;
      iVar1 = _strcmp(local_38,"Apple TVOS");
      param_2 = param_4;
      if (iVar1 == 0) goto LAB_00147868;
      iVar1 = _strcmp(local_38,"xrOS");
      param_2 = param_5;
      if (iVar1 == 0) goto LAB_00147868;
      iVar1 = _strcmp(local_38,"macOS");
      param_2 = param_6;
      if (iVar1 == 0) goto LAB_00147868;
      iVar1 = _strcmp(local_38,"Bridge OS");
      pcVar5 = local_38;
      param_2 = param_7;
      if (iVar1 == 0) goto LAB_00147868;
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"Unknown ProductName \'%s\'. Treating as sufficiently new.",
                        pcVar5);
      uVar9 = CONCAT71((int7)((ulong)pcVar5 >> 8),1);
    }
  }
  _xpc_release(lVar3);
LAB_00147761:
  if (local_40 != 0) {
    _CFRelease();
  }
  return uVar9 & 0xffffffff;
}

