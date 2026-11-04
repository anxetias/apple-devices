// rea decompile_all
// name: __getDeviceMapEntryForHardwareFromPlistCache
// address: 0xe0356
// body: available
// range: 0xe0356-0xe0583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
__getDeviceMapEntryForHardwareFromPlistCache(undefined8 param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ushort local_32;
  
  lVar3 = _CFArrayGetCount();
  if (0 < lVar3) {
    puVar1 = (uint *)(param_3 + 1);
    lVar6 = 0;
    do {
      uVar4 = _CFArrayGetValueAtIndex(param_1,lVar6);
      param_3[0x14] = 0;
      param_3[0x15] = 0;
      param_3[0x16] = 0;
      param_3[0x17] = 0;
      param_3[0] = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
      param_3[0xf] = 0;
      param_3[0x10] = 0;
      param_3[0x11] = 0;
      param_3[0x12] = 0;
      param_3[0x13] = 0;
      param_3[0x18] = 0;
      param_3[0x19] = 0;
      param_3[0x15] = 1;
      lVar5 = _CFDictionaryGetValue(uVar4,&cf_DeviceReleaseNumber);
      if (lVar5 == 0) {
        lVar5 = _CFDictionaryGetValue(uVar4,&cf_CPID);
        if (lVar5 != 0) {
          _CFNumberGetValue(lVar5,3,param_3);
        }
        lVar5 = _CFDictionaryGetValue(uVar4,&cf_BDID);
        if (lVar5 != 0) {
          _CFNumberGetValue(lVar5,3,puVar1);
        }
        lVar5 = _CFDictionaryGetValue(uVar4,&cf_SDOM);
        if (lVar5 != 0) {
          _CFNumberGetValue(lVar5,3,param_3 + 0x15);
        }
        lVar5 = _CFDictionaryGetValue(uVar4,&cf_SCEP);
        if (lVar5 != 0) {
          _CFNumberGetValue(lVar5,3,param_3 + 2);
        }
      }
      else {
        local_32 = 0;
        _CFNumberGetValue(lVar5,2,&local_32);
        *param_3 = 0x8900;
        param_3[2] = (uint)(byte)local_32;
        lVar5 = 0;
        do {
          if ((&_BoardIDMap)[lVar5 * 2] == local_32 >> 8) {
            uVar2 = (uint)(ushort)(&DAT_0032c5d2)[lVar5 * 2];
            goto LAB_000e04d6;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 != 6);
        uVar2 = 0xffff;
LAB_000e04d6:
        *puVar1 = uVar2;
      }
      if (((*param_3 == *param_2) && (*puVar1 == param_2[1])) && (param_3[0x15] == param_2[0x15])) {
        lVar3 = _CFDictionaryGetValue(uVar4,&cf_BoardConfig);
        if (lVar3 == 0) {
          *(undefined1 *)(param_3 + 0x1a) = 0;
        }
        else {
          _CFStringGetCString(lVar3,param_3 + 0x1a,0x20,0x8000100);
        }
        lVar3 = _CFDictionaryGetValue(uVar4,&cf_Platform);
        if (lVar3 == 0) {
          *(undefined1 *)(param_3 + 0x22) = 0;
        }
        else {
          _CFStringGetCString(lVar3,param_3 + 0x22,0x20,0x8000100);
        }
        return 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar3);
  }
  return 0;
}

