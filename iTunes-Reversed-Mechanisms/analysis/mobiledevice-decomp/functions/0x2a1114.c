// rea decompile_all
// name: _AMAuthInstallVinylCreateMeasurements
// address: 0x2a1114
// body: available
// range: 0x2a1114-0x2a1429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a1425 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallVinylCreateMeasurements
              (long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  undefined8 *puVar10;
  long local_108;
  char local_f9;
  undefined8 local_f8 [10];
  undefined8 local_a8 [10];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_f9 = '\0';
  iVar2 = 1;
  if (param_1 != 0) {
    lVar5 = 0;
    if (((param_3 == (long *)0x0) || (param_2 == 0)) || (*(long *)(param_1 + 0x30) == 0))
    goto LAB_002a13c7;
    iVar2 = _AMAuthInstallVinylIsLegacyChipId(param_1,&local_f9);
    if (iVar2 == 0) {
      lVar5 = *param_3;
      uVar4 = _CFGetAllocator(param_1);
      if (lVar5 == 0) {
        lVar5 = _CFDictionaryCreateMutable
                          (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                           PTR__kCFTypeDictionaryValueCallBacks_004411b8);
      }
      else {
        lVar5 = _CFDictionaryCreateMutableCopy(uVar4,0,*param_3);
      }
      if (lVar5 != 0) {
        if (local_f9 == '\0') {
          local_108 = 0;
          puVar10 = local_f8;
          _memcpy(puVar10,&DAT_0044cbe0,0xa0);
          bVar1 = true;
          do {
            bVar9 = bVar1;
            iVar2 = __AMAuthInstallVinylCreateIm4p(param_1,param_2,puVar10 + 2,&local_108);
            if (local_108 != 0 && iVar2 == 0) {
              uVar4 = _CFDataGetBytePtr();
              uVar3 = _CFDataGetLength(local_108);
              _AMAuthInstallLogDumpMemory
                        (7,"_AMAuthInstallVinylCreateMeasurementsInternal","eUICC IM4P",uVar4,uVar3)
              ;
              uVar4 = _CFDataGetBytePtr(local_108);
              uVar6 = _CFDataGetLength(local_108);
              iVar2 = _AMSupportDigestSha256(uVar4,uVar6,local_58);
              if (iVar2 != 0) {
                _AMAuthInstallLog(3,"_AMAuthInstallVinylCreateMeasurementsInternal",
                                  "failed to compute digest");
                break;
              }
              _SafeRelease(local_108);
              local_108 = 0;
              uVar4 = _CFGetAllocator(param_1);
              lVar8 = _CFDataCreate(uVar4,local_58,0x20);
              if (lVar8 == 0) break;
              uVar4 = _CFGetAllocator(param_1);
              lVar7 = _CFDictionaryCreateMutable
                                (uVar4,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                 PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              if (lVar7 == 0) break;
              _CFDictionarySetValue(lVar7,puVar10[1],lVar8);
              _CFDictionarySetValue(lVar5,*puVar10,lVar7);
              _SafeRelease(lVar8);
              _SafeRelease(lVar7);
            }
            puVar10 = local_a8;
            bVar1 = false;
          } while (bVar9);
          _SafeRelease(local_108);
        }
        else {
          iVar2 = _AMAuthInstallBasebandVinylCreateMeasurements(param_1,param_2,lVar5);
          if (iVar2 != 0) goto LAB_002a13c7;
        }
        lVar8 = lVar5;
        if ((param_4 == (undefined8 *)0x0) ||
           (lVar8 = _CFDictionaryGetValue(lVar5,*param_4), lVar8 != 0)) {
          lVar8 = _CFRetain(lVar8);
          *param_3 = lVar8;
        }
        iVar2 = 0;
        goto LAB_002a13c7;
      }
      iVar2 = 2;
    }
  }
  lVar5 = 0;
LAB_002a13c7:
  _SafeRelease(0);
  _SafeRelease(lVar5);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

