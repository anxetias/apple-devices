// rea decompile_all
// name: _uarpTransmitQueueProcessRecv
// address: 0x180341
// body: available
// range: 0x180341-0x180562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpTransmitQueueProcessRecv(undefined8 param_1,long param_2,undefined2 *param_3,ushort param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  
  if (*(short *)(param_2 + 0x70) != 0) {
    uVar6 = 0;
    do {
      lVar4 = *(long *)(*(long *)(param_2 + 0x78) + uVar6 * 8);
      if (lVar4 != 0) {
        sVar2 = _uarpNtohs(*param_3);
        sVar3 = _uarpNtohs(**(undefined2 **)(lVar4 + 0x10));
        if ((sVar2 == 4) && (sVar3 == 3)) {
          if (((param_4 & 0xfff0) != 0) &&
             (*(int *)(param_3 + 4) == *(int *)(*(long *)(lVar4 + 0x10) + 6))) goto LAB_0018053b;
        }
        else if ((sVar2 == 7) && (sVar3 == 6)) {
          if (((0x11 < param_4) &&
              (lVar4 = *(long *)(lVar4 + 0x10), param_3[4] == *(short *)(lVar4 + 6))) &&
             (*(int *)(param_3 + 5) == *(int *)(lVar4 + 8))) {
            sVar2 = param_3[7];
LAB_0018044a:
            if (sVar2 == *(short *)(lVar4 + 0xc)) goto LAB_0018053b;
          }
        }
        else {
          if ((sVar2 == 0xb) && (sVar3 == 10)) goto LAB_0018053b;
          if ((sVar2 == 0xd) && (sVar3 == 5)) {
            if (0x23 < param_4) {
              lVar4 = *(long *)(lVar4 + 0x10);
              sVar2 = param_3[6];
              goto LAB_0018044a;
            }
          }
          else {
            if ((sVar2 == 0xe) && (sVar3 == 8)) goto LAB_0018053b;
            if ((sVar2 == 0xf) && (sVar3 == 9)) {
              if (9 < param_4) {
LAB_00180492:
                if ((short)*(int *)(param_3 + 3) == *(short *)(*(long *)(lVar4 + 0x10) + 6)) {
LAB_0018053b:
                  _UARPLayer2WatchdogCancel(param_1,param_2);
                  _uarpTransmitQueuePendingEntryComplete();
                  return 0;
                }
              }
            }
            else if ((sVar2 == 0x10) && (sVar3 == 0xc)) {
              if ((param_4 & 0xfff8) != 0) goto LAB_00180492;
            }
            else if ((sVar2 == 0x12) && (sVar3 == 0x11)) {
              if (0xd < param_4) {
                lVar4 = *(long *)(lVar4 + 0x10);
                piVar5 = (int *)(param_3 + 5);
LAB_001804fe:
                cVar1 = _uarpAssetTagCompare(piVar5,lVar4 + 6);
                if (cVar1 != '\0') goto LAB_0018053b;
              }
            }
            else if ((sVar2 == 0x14) && (sVar3 == 0x13)) {
              if (0xb < param_4) {
                lVar4 = *(long *)(lVar4 + 0x10);
                piVar5 = (int *)(param_3 + 3);
                goto LAB_001804fe;
              }
            }
            else if ((sVar2 == -1) &&
                    ((sVar3 == -1 &&
                     (cVar1 = _UARPLayer2VendorSpecificCheckExpectedResponse
                                        (param_1,param_2,*(undefined8 *)(lVar4 + 0x10),
                                         *(undefined2 *)(lVar4 + 0x1c),param_3,param_4),
                     cVar1 == '\x01')))) goto LAB_0018053b;
          }
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_2 + 0x70));
  }
  return 0;
}

