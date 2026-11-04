// rea decompile_all
// name: _USBMuxReceiveDictionaryWithTimeout
// address: 0xc5ab8
// body: available
// range: 0xc5ab8-0xc5d74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _USBMuxReceiveDictionaryWithTimeout
              (ulong param_1,uint *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  uint local_40;
  undefined8 local_3c;
  uint local_34;
  
  iVar1 = _USBMuxRecvWithTimeout(param_1,&local_40,0x10,0,param_4);
  if (iVar1 != 0x10) {
    if (-1 < iVar1) {
      return 5;
    }
LAB_000c5b5a:
    piVar2 = ___error();
    return *piVar2;
  }
  if (_isTranslated == '\x01') {
    local_40 = local_40 >> 0x18 | (local_40 & 0xff0000) >> 8 | (local_40 & 0xff00) << 8 |
               local_40 << 0x18;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_3c;
    auVar10 = pshufb(auVar10,_DAT_0032b470);
    local_3c = auVar10._0_8_;
    local_34 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
               local_34 << 0x18;
  }
  if (local_40 < 0x10) {
    _USBMuxDebugLog("%s:%d invalid length in hedaer: %d, needed at least %d\n",
                    "USBMuxReceiveDictionaryWithTimeout",0x10b,(ulong)local_40,0x10);
LAB_000c5b43:
    iVar1 = 5;
  }
  else {
    uVar9 = local_3c & 0xffffffff;
    if ((int)local_3c == 1) {
      if (local_3c._4_4_ == 8) {
        uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        lVar3 = _CFDataCreateMutable(uVar7,(ulong)local_40 - 0x10);
        if (lVar3 == 0) {
          _USBMuxDebugLog("%s:%d CFDataCreateMutable for %d bytes failed\n",
                          "USBMuxReceiveDictionaryWithTimeout",0x125);
          return 0xc;
        }
        _CFDataSetLength(lVar3,(ulong)local_40 - 0x10);
        lVar4 = _CFDataGetMutableBytePtr(lVar3);
        lVar5 = _CFDataGetLength(lVar3);
        while( true ) {
          if (lVar5 == 0) {
            lVar4 = 0;
            lVar5 = _CFPropertyListCreateWithData(uVar7,lVar3,0,0,0);
            *param_3 = lVar5;
            _CFRelease(lVar3);
            if (*param_3 != 0) {
              lVar3 = _CFGetTypeID();
              lVar4 = _CFDictionaryGetTypeID();
              if (lVar3 == lVar4) {
                lVar4 = *param_3;
                if (param_2 != (uint *)0x0 && lVar4 != 0) {
                  *param_2 = local_34;
                }
              }
              else {
                lVar4 = 0;
                _USBMuxDebugLog("%s:%d payload was not an xml dictionary\n",
                                "USBMuxReceiveDictionaryWithTimeout",0x144);
                _CFRelease(*param_3);
                *param_3 = 0;
              }
            }
            return (uint)(lVar4 == 0) * 5;
          }
          lVar6 = _USBMuxRecvWithTimeout(param_1 & 0xffffffff,lVar4,lVar5,0,param_4);
          if (lVar6 < 1) break;
          lVar4 = lVar4 + lVar6;
          lVar5 = lVar5 - lVar6;
        }
        if (lVar6 != 0) {
          _USBMuxDebugLog("%s:%d USBMuxRecvWithTimeout failed\n",
                          "USBMuxReceiveDictionaryWithTimeout",0x137);
          _CFRelease(lVar3);
          goto LAB_000c5b5a;
        }
        _USBMuxDebugLog("%s:%d short read (still expecting %llu)\n",
                        "USBMuxReceiveDictionaryWithTimeout",0x133,lVar5);
        _CFRelease(lVar3);
        goto LAB_000c5b43;
      }
      pcVar8 = "%s:%d Server returned non-dictionary type - probably old usbmuxd\n";
      uVar7 = 0x11e;
      uVar9 = 1;
    }
    else {
      pcVar8 = "%s:%d Server returned different version. We\'re using %d, server is using %d\n";
      uVar7 = 0x111;
    }
    _USBMuxDebugLog(pcVar8,"USBMuxReceiveDictionaryWithTimeout",uVar7,1,uVar9);
    _imTooOldForThis = 1;
    iVar1 = 0x49;
  }
                    /* WARNING: Read-only address (ram,0x0032b470) is written */
  return iVar1;
}

