// rea decompile_all
// name: ___AMAuthInstallVinylFwReaderCallback
// address: 0x2a263b
// body: available
// range: 0x2a263b-0x2a2b39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a2b35 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong ___AMAuthInstallVinylFwReaderCallback(long param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  bool bVar14;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  ulong local_60;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_80 = 0;
  local_78 = 0;
  if (param_1 == 0) {
LAB_002a2acc:
    local_60 = 0;
    lVar12 = 0;
  }
  else {
    local_60 = 0;
    local_68 = 0;
    if (param_2 == 0) goto LAB_002a2acc;
    lVar13 = 0;
    lVar12 = 0;
    lVar11 = 0;
    if (param_3 == 0) goto LAB_002a270c;
    lVar12 = _CFStringCreateArrayBySeparatingStrings(0,param_2,&cf__);
    if (lVar12 == 0) {
      local_68 = 0;
      lVar12 = 0;
      goto LAB_002a2aac;
    }
    uVar6 = _CFArrayGetValueAtIndex(lVar12,0);
    uVar6 = _AMAuthInstallSupportCopyDataFromHexString(0,uVar6,&local_78);
    if ((int)uVar6 != 0) {
LAB_002a2a91:
      local_68 = 0;
LAB_002a2aac:
      lVar13 = 0;
      lVar2 = 0;
LAB_002a2aae:
      lVar11 = lVar2;
      local_60 = 0;
      goto LAB_002a270c;
    }
    if ((*(long *)(param_1 + 8) != 0) && (uVar6 = _CFStringHasSuffix(param_2), (char)uVar6 != '\0'))
    {
      lVar13 = __AMAuthInstallVinylGetPathComponent(param_2);
      if (lVar13 == 0) goto LAB_002a2a91;
      lVar11 = _CFDictionaryGetValue(*(undefined8 *)(param_1 + 0x38),lVar13);
      local_68 = lVar13;
      if ((lVar11 == 0) ||
         (lVar13 = _CFDictionaryGetValue
                             (lVar11,&
                                     cf_com_apple_EmbeddedSoftwareRestore_eUICC_bootloaderVersionsSupported
                             ), lVar13 == 0)) goto LAB_002a2aac;
      local_60 = CONCAT71((int7)((ulong)lVar13 >> 8),1);
      lVar11 = _CFArrayGetCount(lVar13);
      local_70 = lVar13;
      if ((lVar11 < 1) || (lVar13 = _CFArrayGetValueAtIndex(lVar13,0), lVar13 == 0)) {
        bVar14 = false;
        uVar6 = 0;
      }
      else {
        bVar14 = false;
        uVar6 = _CFStringCreateArrayBySeparatingStrings(0,lVar13,&cf__);
        lVar13 = _CFArrayGetCount(uVar6);
        if (lVar13 == 2) {
          uVar7 = _CFArrayGetValueAtIndex(uVar6,0);
          iVar4 = _CFStringGetIntValue(uVar7);
          uVar7 = _CFArrayGetValueAtIndex(uVar6,1);
          uVar5 = _CFStringGetIntValue(uVar7);
          bVar14 = 0x300 < ((uVar5 | iVar4 << 8) & 0x7fff);
        }
      }
      _SafeRelease(uVar6);
      lVar13 = *(long *)(param_1 + 0x20);
      if (lVar13 == 0) {
        lVar13 = 0;
        lVar11 = 0;
LAB_002a29cb:
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_002a270c;
        local_70 = _CFArrayGetValueAtIndex(*(long *)(param_1 + 0x30),0);
        lVar9 = _CFArrayGetValueAtIndex(*(undefined8 *)(param_1 + 0x30),1);
        lVar2 = lVar11;
        if (((local_70 != 0) && (lVar9 != 0)) && (local_78 != 0)) {
          _CFArrayAppendValue();
          iVar4 = _BbfwReaderFindAndCopyFileData(param_3,param_2,&local_80);
          if (iVar4 != 0) goto LAB_002a2ae1;
          uVar6 = _CFDataGetBytePtr(local_80);
          uVar7 = _CFDataGetLength(local_80);
          iVar4 = _AMSupportDigestSha256(uVar6,uVar7,local_58);
          if (iVar4 != 0) {
            pcVar10 = "failed to compute digest";
            goto LAB_002a2aff;
          }
          _SafeRelease(lVar11);
          lVar11 = _CFDataCreate(0,local_58,0x20);
          lVar2 = 0;
          if (lVar11 != 0) {
            _CFArrayAppendValue(lVar9,lVar11);
            goto LAB_002a270c;
          }
        }
      }
      else {
        lVar11 = *(long *)(param_1 + 0x28);
        if (lVar11 == 0) {
LAB_002a28f9:
          cVar3 = _CFEqual(local_78,lVar13);
          lVar13 = 0;
          lVar11 = 0;
LAB_002a29af:
          if ((cVar3 == '\0') ||
             (iVar4 = _BbfwReaderFindAndCopyFileData(param_3,param_2,param_1 + 0x18), iVar4 == 0))
          goto LAB_002a29cb;
LAB_002a2ae1:
          pcVar10 = "failed to find and/or copy data";
LAB_002a2aff:
          local_60 = 0;
          _AMAuthInstallLog(3,"__AMAuthInstallVinylFwReaderCallback",pcVar10);
          goto LAB_002a270c;
        }
        if (((!bVar14) && (lVar13 = _CFArrayGetCount(local_70), 0 < lVar13)) &&
           (lVar13 = _CFArrayGetValueAtIndex(local_70,0), lVar13 != 0)) {
          uVar6 = _CFStringCreateArrayBySeparatingStrings(0,lVar13,&cf__);
          lVar13 = _CFArrayGetCount(uVar6);
          if ((lVar13 == 2) && (pbVar8 = (byte *)_CFDataGetBytePtr(lVar11), pbVar8 != (byte *)0x0))
          {
            local_70 = CONCAT44(local_70._4_4_,(uint)*pbVar8);
            uVar7 = _CFArrayGetValueAtIndex(uVar6,0);
            iVar4 = _CFStringGetIntValue(uVar7);
            if (iVar4 == (int)local_70) {
              bVar1 = pbVar8[1];
              uVar6 = _CFArrayGetValueAtIndex(uVar6,1);
              uVar5 = _CFStringGetIntValue(uVar6);
              if (uVar5 == bVar1) {
                lVar13 = *(long *)(param_1 + 0x20);
                goto LAB_002a28f9;
              }
            }
          }
        }
        lVar13 = _CFDataCreateMutableCopy
                           (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                            *(undefined8 *)(param_1 + 0x20));
        if (lVar13 == 0) goto LAB_002a2aac;
        uVar6 = _CFDataGetBytePtr(*(undefined8 *)(param_1 + 0x28));
        lVar11 = _CFDataGetLength(*(undefined8 *)(param_1 + 0x28));
        _CFDataAppendBytes(lVar13,uVar6,lVar11 + -1);
        uVar6 = _CFDataGetBytePtr(lVar13);
        uVar7 = _CFDataGetLength(lVar13);
        iVar4 = _AMSupportDigestSha256(uVar6,uVar7,local_58);
        if (iVar4 == 0) {
          _SafeRelease(0);
          lVar11 = _CFDataCreate(0,local_58,0x20);
          cVar3 = _CFEqual(local_78,lVar11);
          goto LAB_002a29af;
        }
        _AMAuthInstallLog(3,"__AMAuthInstallVinylFwReaderCallback","failed to compute digest");
        lVar2 = 0;
      }
      goto LAB_002a2aae;
    }
    local_60 = CONCAT71((int7)((ulong)uVar6 >> 8),1);
  }
  local_68 = 0;
  lVar13 = 0;
  lVar11 = 0;
LAB_002a270c:
  _SafeRelease(local_80);
  _SafeRelease(local_78);
  _SafeRelease(lVar11);
  _SafeRelease(lVar12);
  _SafeRelease(lVar13);
  _SafeRelease(local_68);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_60 & 0xff;
}

