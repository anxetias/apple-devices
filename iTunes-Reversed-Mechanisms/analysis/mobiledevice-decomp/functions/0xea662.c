// rea decompile_all
// name: __deviceConnected
// address: 0xea662
// body: available
// range: 0xea662-0xea926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __deviceConnected(long param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  int local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_34;
  
  local_48 = param_3;
  iVar3 = _IOIteratorNext(param_2);
  if (iVar3 != 0) {
    local_78 = "numberWithUnsignedLongLong:";
    local_70 = "objectForKeyedSubscript:";
    local_58 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    local_60 = local_48 + 1;
    local_68 = "setObject:forKeyedSubscript:";
    local_34 = param_2;
    do {
      _IOObjectRetain(iVar3);
      local_40 = 0;
      _IORegistryEntryGetRegistryEntryID(iVar3,&local_40);
      _AMRLog(7,&cf_deviceconnected_isDFU__d__registryID__llx,*(undefined1 *)(param_1 + 4),local_40)
      ;
      local_80 = 5;
      iVar4 = _IOServiceWaitQuiet(iVar3,&local_80);
      if (iVar4 == 0) {
        if (__locationIDNotToFilter != 0) {
          local_4c = 0;
          lVar5 = _IORegistryEntryCreateCFProperty(iVar3,&cf_locationID,0,0);
          iVar4 = 0;
          if (lVar5 != 0) {
            _CFNumberGetValue(lVar5,3,&local_4c);
            _CFRelease(lVar5);
            iVar4 = local_4c;
          }
          if (__locationIDNotToFilter != iVar4) goto LAB_000ea8dc;
        }
        puVar2 = PTR__objc_msgSend_00441098;
        uVar6 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,local_78,local_40);
        lVar5 = (*(code *)puVar2)(__registryIDToDevice,local_70,uVar6);
        if (lVar5 == 0) {
          lVar5 = __AMRUSBDeviceCreateDevice(iVar3);
          param_2 = local_34;
          if (lVar5 == 0) {
            if ((code *)local_48[4] != (code *)0x0) {
              (*(code *)local_48[4])(0x7d7,local_48[6]);
            }
          }
          else {
            if (*(char *)(param_1 + 4) == '\0') {
              lVar5 = __AMRecoveryModeDeviceCreate(local_58,lVar5);
              puVar1 = local_60;
              param_2 = local_34;
            }
            else if (*(int *)(param_1 + 8) == 2) {
              lVar5 = __AMPortDFUModeDeviceCreate(local_58,lVar5,2);
              puVar1 = local_48;
              param_2 = local_34;
            }
            else {
              lVar5 = __AMDFUModeDeviceCreate(local_58,lVar5);
              puVar1 = local_48;
              param_2 = local_34;
            }
            local_34 = param_2;
            if (lVar5 == 0) {
              if ((code *)local_48[4] == (code *)0x0) {
                _AMRLog(3,&cf_anerorroccurredhandlingaconnecteddevice_0x_x,0x12);
              }
              else {
                (*(code *)local_48[4])(0x12,local_48[6]);
              }
            }
            else {
              (*(code *)*puVar1)(lVar5,local_48[6]);
              (*(code *)PTR__objc_msgSend_00441098)(__registryIDToDevice,local_68,lVar5,uVar6);
              _CFRelease(lVar5);
            }
          }
        }
        else {
          _AMRLog(5,&cf_adevicewithaduplicateregistryidwasconnected_);
          param_2 = local_34;
        }
      }
      else {
        _AMRLog(3,&cf_devicedidnotgoquietafterwaiting_0x_x,iVar4);
      }
LAB_000ea8dc:
      _IOObjectRelease(iVar3);
      _IOObjectRelease(iVar3);
      iVar3 = _IOIteratorNext(param_2);
    } while (iVar3 != 0);
  }
  return;
}

