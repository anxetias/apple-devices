// rea decompile_all
// name: _uarpTransmitQueueService
// address: 0x17ff83
// body: available
// range: 0x17ff83-0x180273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _uarpTransmitQueueService(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  char cVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  
  uVar1 = *(ushort *)(param_2 + 0x70);
  do {
    if (uVar1 == 0) {
      return 0;
    }
    uVar8 = 0;
    while( true ) {
      while (puVar2 = *(undefined8 **)(*(long *)(param_2 + 0x78) + uVar8 * 8),
            puVar2 == (undefined8 *)0x0) {
        uVar8 = uVar8 + 1;
        if (uVar8 == uVar1) {
          return 0;
        }
      }
      if (*(char *)(puVar2 + 4) != '\x01') break;
      if (*(long *)(param_1 + 0x128) != 0) {
        return 0;
      }
      uVar8 = uVar8 + 1;
      if (uVar8 == uVar1) {
        return 0;
      }
    }
    if (*(char *)((long)puVar2 + 0x21) != '\x01') {
      sVar4 = _uarpNtohs(*(undefined2 *)puVar2[2]);
      if (sVar4 == -1) {
        cVar3 = _UARPLayer2VendorSpecificCheckValidToSend
                          (param_1,param_2,puVar2[2],*(undefined2 *)((long)puVar2 + 0x1c));
        if (cVar3 != '\0') goto LAB_0018007c;
      }
      else {
        if (((sVar4 != 3) || (iVar6 = _uarpNtohl(*(undefined4 *)(puVar2[2] + 6)), iVar6 != 9)) ||
           (2 < *(ushort *)(param_2 + 0x30))) {
LAB_0018007c:
          if (*(char *)(param_2 + 0x32) == '\x01') {
            return 0;
          }
          if ((ushort)*(byte *)((long)puVar2 + 0x1e) <= *(ushort *)(param_2 + 0x12)) {
            *(byte *)((long)puVar2 + 0x1e) = *(byte *)((long)puVar2 + 0x1e) + 1;
            *(undefined1 *)(puVar2 + 4) = 1;
            if (*(char *)((long)puVar2 + 0x1f) == '\x01') {
              _UARPLayer2WatchdogSet(param_1,param_2,*(undefined2 *)(param_2 + 0x10));
            }
            uVar5 = _uarpNtohs(*(undefined2 *)(param_2 + 0x3a));
            *(undefined2 *)(puVar2[2] + 4) = uVar5;
            *(short *)(param_2 + 0x3a) = *(short *)(param_2 + 0x3a) + 1;
            iVar6 = _UARPLayer2SendMessage
                              (param_1,param_2,*puVar2,
                               (uint)*(ushort *)(param_2 + 0x1e) +
                               (uint)*(ushort *)((long)puVar2 + 0x1c));
            _UARPLayer2LogPacket
                      (param_1,param_2,puVar2[2],*(undefined2 *)((long)puVar2 + 0x1c),iVar6,0);
            if (iVar6 != 0) {
              *(undefined1 *)(puVar2 + 4) = 0;
              _uarpPlatformEndpointSendMessageCompleteInternal(param_1,param_2,puVar2[2]);
              return iVar6;
            }
            return 0;
          }
          sVar4 = _uarpNtohs(*(undefined2 *)puVar2[2]);
          if (sVar4 == -1) {
            _UARPLayer2VendorSpecificExceededRetries
                      (param_1,param_2,puVar2[2],*(undefined2 *)((long)puVar2 + 0x1c));
          }
          else if (sVar4 == 3) {
            uVar7 = _uarpNtohl(*(undefined4 *)(puVar2[2] + 6));
            switch(uVar7) {
            case 1:
              _UARPLayer2ManufacturerNameResponse(param_1,param_2,0,0);
              break;
            case 2:
              _UARPLayer2ModelNameResponse(param_1,param_2,0,0);
              break;
            case 3:
              _UARPLayer2SerialNumberResponse(param_1,param_2,0,0);
              break;
            case 4:
              _UARPLayer2HardwareVersionResponse(param_1,param_2,0,0);
              break;
            case 5:
              _UARPLayer2ActiveFirmwareVersionResponse(param_1,param_2);
              break;
            case 6:
              _UARPLayer2StagedFirmwareVersionResponse(param_1,param_2);
              break;
            case 7:
              _UARPLayer2StatisticsResponse(param_1,param_2);
              break;
            case 8:
              _UARPLayer2LastErrorResponse(param_1,param_2);
              break;
            case 9:
              _UARPLayer2FriendlyNameResponse(param_1,param_2,0,0);
            }
          }
          else if (sVar4 == 1) {
            *(undefined2 *)(param_2 + 0x30) = 0;
            _UARPLayer2ProtocolVersion(param_1,param_2,0);
          }
          _uarpTransmitQueuePendingEntryComplete();
          _uarpTransmitQueueService(param_1,param_2);
          return 0;
        }
        _UARPLayer2FriendlyNameResponse(param_1,param_2,0,0);
      }
    }
    _uarpTransmitQueuePendingEntryComplete();
    uVar1 = *(ushort *)(param_2 + 0x70);
  } while( true );
}

