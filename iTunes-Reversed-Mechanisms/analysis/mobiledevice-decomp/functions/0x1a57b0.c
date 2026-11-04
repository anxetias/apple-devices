// rea decompile_all
// name: _AMAuthInstallBasebandICE3MeasureWorld
// address: 0x1a57b0
// body: available
// range: 0x1a57b0-0x1a5e2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a5e29 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallBasebandICE3MeasureWorld(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8 [21];
  
  local_d8[0x14] = *(ulong *)PTR____stack_chk_guard_004412b8;
  lVar4 = _CFDataGetBytePtr(param_2);
  uVar5 = _CFDataGetLength(param_2);
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[0x10] = 0;
  local_d8[0x11] = 0;
  local_d8[0x12] = 0;
  local_d8[0x13] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  if (uVar5 != 0) {
    uVar9 = 0;
    uVar12 = 0;
    lVar11 = 0;
    lVar7 = 0;
    uVar15 = 0;
    lVar14 = 0;
    uVar13 = 0;
    do {
      lVar1 = uVar9 + lVar4;
      switch(*(undefined4 *)(lVar4 + uVar9)) {
      case 0xc:
        uVar8 = (ulong)*(uint *)(lVar1 + 8);
        if (4 < uVar8) {
LAB_001a5dbf:
          _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3MeasureWorld",
                            "UID value of %ld exceeds maximum array bound of %d\n",uVar8,4);
          goto LAB_001a5dfb;
        }
        local_d8[uVar8 * 2 + 10] = (ulong)*(uint *)(lVar1 + 0x24) + lVar4;
        local_d8[uVar8 * 2 + 0xb] = (ulong)*(uint *)(lVar1 + 0x1c);
        break;
      case 0xf:
        uVar8 = (ulong)*(uint *)(lVar1 + 8);
        if (4 < uVar8) goto LAB_001a5dbf;
        local_d8[uVar8 * 2] = lVar1 + 0x20c;
        local_d8[uVar8 * 2 + 1] = 0x600;
        break;
      case 0x10:
        uVar12 = *(uint *)(lVar1 + 0xc);
        lVar11 = (ulong)*(uint *)(lVar1 + 0x14) + lVar4;
        break;
      case 0x12:
        uVar15 = *(undefined4 *)(lVar1 + 0x14);
        lVar7 = (ulong)*(uint *)(lVar1 + 0x1c) + lVar4;
        break;
      case 0x13:
        uVar13 = *(undefined4 *)(lVar1 + 0x14);
        lVar14 = (ulong)*(uint *)(lVar1 + 0x1c) + lVar4;
      }
      uVar9 = uVar9 + *(uint *)(lVar1 + 4);
    } while (uVar9 < uVar5);
    if (lVar7 != 0) {
      uVar6 = _CFGetAllocator(param_1);
      uVar6 = __AMAuthInstallCopyPsiMeasurementAndVersion(uVar6,lVar7,uVar15,&local_e8,&local_f0);
      if ((int)uVar6 != 0) goto LAB_001a5e00;
      _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld","RamPSI Version: %@",local_f0);
      _CFDictionarySetValue(param_3,&cf_RamPSI_Version,local_f0);
      _CFRelease(local_f0);
      _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld","RamPSI PartialDigest: %@",
                        local_e8);
      _CFDictionarySetValue(param_3,&cf_RamPSI_PartialDigest,local_e8);
      _CFRelease(local_e8);
    }
    if (lVar14 != 0) {
      uVar6 = _CFGetAllocator(param_1);
      uVar6 = __AMAuthInstallCopyBufferMeasurement(uVar6,lVar14,uVar13,&local_e0);
      uVar10 = local_e0;
      if ((int)uVar6 != 0) goto LAB_001a5e00;
      _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld","EBL Digest: %@",local_e0);
      _CFDictionarySetValue(param_3,&cf_EBL_Digest,uVar10);
      _CFRelease(uVar10);
    }
    if (uVar12 != 0) {
      lVar4 = 0;
      do {
        uVar9 = (ulong)*(uint *)(lVar11 + lVar4);
        uVar5 = local_d8[uVar9 * 2 + 10];
        if ((uVar5 == 0) || (uVar8 = local_d8[uVar9 * 2], uVar8 == 0)) {
          _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3MeasureWorld",
                            "one or more elements are missing for TOC with UID = %lx\n");
LAB_001a5dfb:
          uVar6 = 10;
          break;
        }
        iVar2 = *(int *)(lVar11 + 4 + lVar4);
        if (iVar2 == 4) {
          uVar6 = _CFGetAllocator(param_1);
          uVar3 = local_d8[uVar9 * 2 + 0xb];
          uVar6 = __AMAuthInstallCopyBufferMeasurement(uVar6,uVar5,uVar3,&local_e0);
          uVar10 = local_e0;
          if ((int)uVar6 != 0) break;
          _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld","Modem Stack Digest: %@",
                            local_e0);
          _CFDictionarySetValue(param_3,&cf_ModemStack_Digest,uVar10);
          _CFRelease(uVar10);
          uVar6 = _CFGetAllocator(param_1);
          lVar7 = _CFStringCreateWithFormat(uVar6,0,&cf_0x_08lx,uVar3);
          if (lVar7 == 0) {
            uVar6 = 2;
            break;
          }
          _CFDictionarySetValue(param_3,&cf_ModemStack_Length,lVar7);
          _CFRelease(lVar7);
          uVar6 = _CFGetAllocator(param_1);
          uVar6 = __AMAuthInstallCopyBufferMeasurement
                            (uVar6,uVar8,local_d8[uVar9 * 2 + 1],&local_e0);
          uVar10 = local_e0;
          if ((int)uVar6 != 0) break;
          _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld",
                            "Modem Stack SecPack Digest: %@",local_e0);
          _CFDictionarySetValue(param_3,&cf_ModemStack_SecPackDigest,uVar10);
LAB_001a5d94:
          _CFRelease(uVar10);
        }
        else if (iVar2 == 2) {
          uVar6 = _CFGetAllocator(param_1);
          uVar6 = __AMAuthInstallCopyPsiMeasurementAndVersion
                            (uVar6,uVar5,local_d8[uVar9 * 2 + 0xb],&local_e8,&local_f0);
          if ((int)uVar6 == 0) {
            _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld","FlashPSI Version: %@",
                              local_f0);
            _CFDictionarySetValue(param_3,&cf_FlashPSI_Version,local_f0);
            _CFRelease(local_f0);
            _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld","FlashPSI PartialDigest: %@"
                              ,local_e8);
            _CFDictionarySetValue(param_3,&cf_FlashPSI_PartialDigest,local_e8);
            _CFRelease(local_e8);
            uVar6 = _CFGetAllocator(param_1);
            uVar6 = __AMAuthInstallCopyBufferMeasurement
                              (uVar6,uVar8,local_d8[uVar9 * 2 + 1],&local_e0);
            uVar10 = local_e0;
            if ((int)uVar6 == 0) {
              _AMAuthInstallLog(6,"AMAuthInstallBasebandICE3MeasureWorld",
                                "FlashPSI SecPack Digest: %@",local_e0);
              _CFDictionarySetValue(param_3,&cf_FlashPSI_SecPackDigest,uVar10);
              goto LAB_001a5d94;
            }
          }
          break;
        }
        lVar4 = lVar4 + 0x90;
        uVar6 = 0;
      } while ((ulong)uVar12 * 0x90 != lVar4);
      goto LAB_001a5e00;
    }
  }
  uVar6 = 0;
LAB_001a5e00:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_d8[0x14]) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

