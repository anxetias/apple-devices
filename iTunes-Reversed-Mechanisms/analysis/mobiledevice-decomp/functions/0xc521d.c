// rea decompile_all
// name: _USBMuxIntCFSocketCallback
// address: 0xc521d
// body: available
// range: 0xc521d-0xc55aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc5279 to 0xc62ed _USBMuxDebugLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xc55a6 to 0xc50c6 _USBMuxIntDisableListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _USBMuxIntCFSocketCallback(void)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  char *pcVar12;
  int *in_R8;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  if ((in_R8 == (int *)0x0) || (*in_R8 != -0x21524111)) {
    _USBMuxDebugLog("%s:%d %s invalid USBMuxListenerRef %p\n","USBMuxIntCFSocketCallback",0x5c0,
                    "USBMuxIntCFSocketCallback",in_R8);
    return;
  }
  if (in_R8[0x1a] == 0) {
    pauVar1 = (undefined1 (*) [16])(in_R8 + 0x22);
    uVar4 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    do {
      uVar2 = in_R8[0x10];
      if ((ulong)uVar2 < 0x10) {
        uVar6 = _USBMuxRecvWithTimeout(in_R8[1],*pauVar1 + uVar2,(ulong)(0x10 - uVar2),0,0);
        if (0 < (long)uVar6) {
          in_R8[0x10] = in_R8[0x10] + (int)uVar6;
          if (uVar6 < 0x10 - uVar2) {
            return;
          }
          goto LAB_000c52c9;
        }
LAB_000c5585:
        if (((long)uVar6 < 0) && (piVar10 = ___error(), *piVar10 == 0x23)) {
          return;
        }
LAB_000c5595:
        _USBMuxIntDisableListener(in_R8);
        return;
      }
LAB_000c52c9:
      if (_isTranslated == '\x01') {
        auVar15 = pshufb(*pauVar1,_DAT_0032b460);
        *pauVar1 = auVar15;
      }
      if (in_R8[0x11] == 0) {
        if (in_R8[0x24] != 8) {
          _USBMuxDebugLog("%s:%d Message not CFDictionary\n","USBMuxIntCFSocketCallback",0x5f0);
          goto LAB_000c5595;
        }
        lVar7 = *(long *)(in_R8 + 0x1e);
        if (lVar7 == 0) {
          lVar7 = _CFDataCreateMutable(uVar4,0);
          *(long *)(in_R8 + 0x1e) = lVar7;
        }
        lVar7 = _CFDataGetLength(lVar7);
        if (lVar7 != (ulong)*(uint *)*pauVar1 - 0x10) {
          _CFDataSetLength(*(undefined8 *)(in_R8 + 0x1e));
        }
      }
      iVar13 = in_R8[0x22] - (in_R8[0x11] + in_R8[0x10]);
      if ((uint)(in_R8[0x11] + in_R8[0x10]) <= (uint)in_R8[0x22] && iVar13 != 0) {
        iVar3 = in_R8[1];
        lVar7 = _CFDataGetMutableBytePtr(*(undefined8 *)(in_R8 + 0x1e));
        lVar14 = (long)iVar13;
        uVar6 = _USBMuxRecvWithTimeout(iVar3,(ulong)(uint)in_R8[0x11] + lVar7,lVar14,0,0);
        if ((long)uVar6 < 1) {
          if ((long)uVar6 < lVar14) goto LAB_000c5585;
        }
        else {
          in_R8[0x11] = in_R8[0x11] + (int)uVar6;
          if ((long)uVar6 < lVar14) {
            return;
          }
        }
      }
      in_R8[0x10] = 0;
      in_R8[0x11] = 0;
      lVar7 = _CFPropertyListCreateWithData(uVar4,*(undefined8 *)(in_R8 + 0x1e),0);
      if (lVar7 == 0) {
        _USBMuxDebugLog("%s:%d data was not a property list\n","USBMuxHandleDictionary",0x583);
      }
      else {
        lVar14 = _CFGetTypeID(lVar7);
        lVar8 = _CFDictionaryGetTypeID();
        if (lVar14 == lVar8) {
          lVar14 = _CFDictionaryGetValue(lVar7,_kUSBMuxParam_MessageType);
          if (lVar14 == 0) {
LAB_000c54d1:
            pcVar12 = "%s:%d dictionary didn\'t contain a message type string\n";
            uVar11 = 0x590;
            goto LAB_000c54e4;
          }
          lVar8 = _CFGetTypeID(lVar14);
          lVar9 = _CFStringGetTypeID();
          if (lVar8 != lVar9) goto LAB_000c54d1;
          lVar8 = _CFStringCompare(lVar14,_kUSBMuxMessageType_Attached,0);
          if (((lVar8 == 0) ||
              (lVar8 = _CFStringCompare(lVar14,_kUSBMuxMessageType_Detached,0), lVar8 == 0)) ||
             (lVar8 = _CFStringCompare(lVar14,_kUSBMuxMessageType_Paired,0), lVar8 == 0)) {
            lVar14 = *(long *)(in_R8 + 4);
            if (lVar14 == 0) {
              lVar14 = _CFArrayCreateMutable(uVar4,0,PTR__kCFTypeArrayCallBacks_004411a8);
              *(long *)(in_R8 + 4) = lVar14;
            }
            _CFArrayAppendValue(lVar14,lVar7);
            _USBMuxDebugLog("%s:%d Adding event %p to changelist.\n","USBMuxHandleDictionary",0x59d)
            ;
            if ((*(long *)(in_R8 + 0x16) != 0) &&
               (_CFRunLoopSourceSignal(), *(long *)(in_R8 + 0x18) != 0)) {
              _CFRunLoopWakeUp();
            }
          }
          else {
            uVar5 = _CFStringGetFastestEncoding(lVar14);
            _CFStringGetCStringPtr(lVar14,uVar5);
            _USBMuxDebugLog("%s:%d Unknown message type: %s\n","USBMuxHandleDictionary",0x5ab);
          }
        }
        else {
          pcVar12 = "%s:%d property list was not a dictionary\n";
          uVar11 = 0x589;
LAB_000c54e4:
          _USBMuxDebugLog(pcVar12,"USBMuxHandleDictionary",uVar11);
        }
        _CFRelease(lVar7);
      }
    } while (in_R8[0x1a] == 0);
  }
                    /* WARNING: Read-only address (ram,0x0032b460) is written */
  return;
}

