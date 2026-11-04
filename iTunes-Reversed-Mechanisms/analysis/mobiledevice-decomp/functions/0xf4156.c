// rea decompile_all
// name: _AMRPerformDFUDataDownload
// address: 0xf4156
// body: available
// range: 0xf4156-0xf43c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMRPerformDFUDataDownload
              (undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  short sVar7;
  ulong uVar8;
  ushort local_36;
  byte local_33;
  char local_32;
  undefined1 local_31;
  
  local_36 = 0;
  local_33 = 0;
  local_31 = 0;
  lVar3 = __AMRUSBDeviceGetInterface(param_1,0xfe,1);
  if (lVar3 == 0) {
    return 0x7d2;
  }
  iVar2 = __AMRUSBInterfaceGetDFUInformation(lVar3,&local_36,&local_33,&local_31);
  __AMRUSBInterfaceClose(lVar3);
  uVar1 = local_31;
  if (iVar2 != 0) {
    _AMRLog(3,&cf_unabletogetDFUinformationfrominterface__d,iVar2);
    return iVar2;
  }
  local_32 = '\0';
  iVar2 = _DFUGetState(param_1,local_31);
  if (iVar2 == 0) {
    if (local_32 != '\x02') {
      if (local_32 == '\n') {
        _AMRLog(7,&cf_IssuingCLEARSTATUSrequest);
        iVar2 = __AMRUSBDeviceSendDeviceRequest(param_1,uVar1,0,1,1,4,0,0,0);
      }
      else {
        iVar2 = _DFUAbort(param_1,uVar1);
      }
      if (((iVar2 != 0) || (iVar2 = _DFUGetState(param_1,uVar1,&local_32), iVar2 != 0)) ||
         (local_32 != '\x02')) goto LAB_000f41fb;
    }
    uVar4 = _CFDataGetLength(param_2);
    lVar3 = _CFDataGetBytePtr(param_2);
    if (uVar4 == 0) {
      sVar7 = 0;
    }
    else {
      sVar7 = 0;
      uVar8 = uVar4;
      do {
        if (param_3 != (code *)0x0) {
          uVar5 = (long)((ulong)(uint)((int)uVar4 - (int)uVar8) * 0x6400000000) >> 0x20;
          (*param_3)(uVar5 / uVar4 & 0xffffffff,param_4,uVar5 % uVar4);
        }
        uVar5 = (ulong)local_36;
        if (uVar8 < local_36) {
          uVar5 = uVar8;
        }
        iVar2 = _DFUTransferOneBlock(param_1,local_31,sVar7,lVar3,uVar5 & 0xffffffff,5);
        if (iVar2 != 0) goto LAB_000f43b4;
        sVar7 = sVar7 + 1;
        lVar3 = lVar3 + uVar5;
        uVar8 = uVar8 - uVar5;
      } while (uVar8 != 0);
    }
    iVar6 = 0;
    iVar2 = _DFUTransferOneBlock(param_1,local_31,sVar7,0,0,7);
    if (iVar2 != 0) {
      if (iVar2 != 0x7d6) {
        _AMRLog(3,&cf_sendingDFUZLPreturned0x_x,iVar2);
LAB_000f43b4:
        _DFUAbort(param_1,local_31);
        goto LAB_000f41fb;
      }
      _AMRLog(5,&cf_devicenotrespondingduringDFUZLP);
    }
    if ((local_33 & 4) == 0) {
      __AMRUSBDeviceReEnumerate(param_1);
    }
  }
  else {
LAB_000f41fb:
    iVar6 = 0x7d5;
  }
  return iVar6;
}

