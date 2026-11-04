// rea decompile_all
// name: _AMAuthInstallCreate
// address: 0x273060
// body: available
// range: 0x273060-0x2737ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _AMAuthInstallCreate(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_80;
  long local_38;
  
  _pthread_once((pthread_once_t *)&__AMAuthInstallClassInitializeOnce,__AMAuthInstallClassInitialize
               );
  local_38 = 0;
  lVar2 = _CFDictionaryCreateMutable
                    (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  lVar6 = 0;
  lVar15 = 0;
  local_80 = 0;
  lVar13 = 0;
  lVar12 = 0;
  lVar7 = 0;
  lVar16 = 0;
  lVar8 = 0;
  lVar9 = 0;
  lVar10 = 0;
  lVar11 = 0;
  lVar14 = 0;
  if (lVar2 != 0) {
    local_38 = 0;
    lVar3 = _CFURLCreateWithString(param_1,&cf_https___gs_apple_com_443_,0);
    lVar6 = 0;
    lVar15 = 0;
    local_80 = 0;
    lVar13 = 0;
    lVar12 = 0;
    lVar7 = 0;
    lVar16 = 0;
    lVar8 = 0;
    lVar9 = 0;
    lVar10 = 0;
    lVar11 = 0;
    lVar14 = 0;
    if (lVar3 != 0) {
      lVar6 = _CFURLCreateWithString(param_1,&cf_http___vega_dr_apple_com_8080_vegads_fuser,0);
      local_38 = lVar3;
      if (lVar6 == 0) {
        lVar6 = 0;
        local_80 = 0;
        lVar13 = 0;
        lVar12 = 0;
        lVar7 = 0;
        lVar16 = 0;
        lVar8 = 0;
        lVar9 = 0;
        lVar10 = 0;
        lVar11 = 0;
        lVar15 = 0;
        lVar14 = 0;
      }
      else {
        lVar15 = _CFURLCreateWithString
                           (param_1,&cf_http___treecko_dr_apple_com_8080_TREECKO_controller,0);
        if (lVar15 == 0) {
          local_80 = 0;
          lVar15 = 0;
        }
        else {
          local_80 = _CFDictionaryCreateMutable
                               (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
          if (local_80 == 0) {
            local_80 = 0;
          }
          else {
            lVar13 = _CFDictionaryCreateMutable
                               (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                PTR__kCFTypeDictionaryValueCallBacks_004411b8);
            if (lVar13 != 0) {
              lVar12 = _CFDictionaryCreateMutable
                                 (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              if (lVar12 == 0) {
                lVar12 = 0;
                lVar16 = 0;
                lVar8 = 0;
                lVar9 = 0;
                lVar10 = 0;
                lVar11 = 0;
                lVar14 = 0;
                lVar7 = 0;
              }
              else {
                lVar7 = _CFDictionaryCreateMutable
                                  (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                   PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                if (lVar7 == 0) {
                  lVar7 = 0;
                  lVar8 = 0;
                  lVar9 = 0;
                  lVar10 = 0;
                  lVar11 = 0;
                  lVar14 = 0;
                  lVar16 = 0;
                }
                else {
                  lVar16 = _CFDictionaryCreateMutable
                                     (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                      PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                  if (lVar16 == 0) {
                    lVar9 = 0;
                    lVar10 = 0;
                    lVar11 = 0;
                    lVar16 = 0;
                    lVar14 = 0;
                    lVar8 = 0;
                  }
                  else {
                    lVar8 = _CFDictionaryCreateMutable
                                      (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                    if (lVar8 == 0) {
                      lVar8 = 0;
                      lVar10 = 0;
                      lVar11 = 0;
                      lVar14 = 0;
                      lVar9 = 0;
                    }
                    else {
                      lVar9 = _CFDictionaryCreateMutable
                                        (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                         PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                      if (lVar9 == 0) {
                        lVar9 = 0;
                        lVar11 = 0;
                        lVar14 = 0;
                        lVar10 = 0;
                      }
                      else {
                        lVar10 = _CFDictionaryCreateMutable
                                           (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                            PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                        if (lVar10 == 0) {
                          lVar10 = 0;
                          lVar11 = 0;
                          lVar14 = 0;
                        }
                        else {
                          lVar14 = 0;
                          lVar11 = _CFDictionaryCreateMutable
                                             (param_1,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                              PTR__kCFTypeDictionaryValueCallBacks_004411b8);
                          if (lVar11 == 0) {
                            lVar11 = 0;
                          }
                          else {
                            lVar14 = __CFRuntimeCreateInstance
                                               (param_1,__AMAuthInstallTypeID,0x208,0);
                            if (lVar14 == 0) {
                              lVar14 = 0;
                            }
                            else {
                              ___bzero(lVar14 + 0x10,0x208);
                              *(undefined1 *)(lVar14 + 0x208) = 0;
                              *(undefined2 *)(lVar14 + 0x39) = 0x101;
                              uVar4 = _CFRetain(lVar3);
                              *(undefined8 *)(lVar14 + 0x48) = uVar4;
                              *(undefined4 *)(lVar14 + 0x50) = 3;
                              uVar4 = _CFRetain(lVar2);
                              *(undefined8 *)(lVar14 + 0x160) = uVar4;
                              uVar4 = _CFRetain(local_80);
                              *(undefined8 *)(lVar14 + 0x178) = uVar4;
                              uVar4 = _CFRetain(lVar13);
                              *(undefined8 *)(lVar14 + 0x180) = uVar4;
                              uVar4 = _CFRetain(lVar12);
                              *(undefined8 *)(lVar14 + 0x1a0) = uVar4;
                              uVar4 = _CFRetain(lVar6);
                              *(undefined8 *)(lVar14 + 0xa0) = uVar4;
                              uVar4 = _CFRetain(lVar15);
                              *(undefined8 *)(lVar14 + 0x128) = uVar4;
                              *(cfstringStruct **)(lVar14 + 0x58) = &cf_ApImg4Ticket;
                              uVar4 = _CFRetain(lVar7);
                              *(undefined8 *)(lVar14 + 200) = uVar4;
                              uVar4 = _CFRetain(lVar16);
                              *(undefined8 *)(lVar14 + 0xd0) = uVar4;
                              uVar4 = _CFRetain(lVar8);
                              *(undefined8 *)(lVar14 + 0xd8) = uVar4;
                              pvVar5 = _calloc(1,0x30);
                              *(void **)(lVar14 + 0x80) = pvVar5;
                              if (pvVar5 == (void *)0x0) {
                                __AMAuthInstallFinalize(lVar14);
                              }
                              else {
                                uVar4 = _CFRetain(lVar9);
                                puVar1 = *(undefined8 **)(lVar14 + 0x80);
                                *puVar1 = uVar4;
                                puVar1[3] = 0;
                                puVar1[4] = 0;
                                puVar1[1] = 0;
                                puVar1[2] = 0;
                                puVar1[5] = 0;
                                *(undefined8 *)(lVar14 + 0x1f0) = 0;
                                *(undefined1 *)(lVar14 + 0x1f8) = 0;
                                *(code **)(lVar14 + 0x1b8) = __AMAuthInstallNoopUpdaterAddTags;
                                *(code **)(lVar14 + 0x1c0) =
                                     __AMAuthInstallNoopUpdaterWriteManifests;
                                uVar4 = _CFRetain(lVar10);
                                *(undefined8 *)(lVar14 + 0x1c8) = uVar4;
                                uVar4 = _CFRetain(lVar11);
                                *(undefined8 *)(lVar14 + 0x1d0) = uVar4;
                                *(undefined8 *)(lVar14 + 0x1e8) = 0;
                                *(undefined8 *)(lVar14 + 0x200) = 0;
                                uVar4 = _AMAuthInstallLockCreate(param_1);
                                *(undefined8 *)(lVar14 + 0x168) = uVar4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_0027355f;
            }
          }
        }
        lVar11 = 0;
        lVar10 = 0;
        lVar9 = 0;
        lVar8 = 0;
        lVar7 = 0;
        lVar13 = 0;
        lVar12 = 0;
        lVar16 = 0;
        lVar14 = 0;
      }
    }
  }
LAB_0027355f:
  _SafeRelease(lVar2);
  _SafeRelease(local_38);
  _SafeRelease(lVar6);
  _SafeRelease(lVar15);
  _SafeRelease(local_80);
  _SafeRelease(lVar13);
  _SafeRelease(lVar12);
  _SafeRelease(0);
  _SafeRelease(lVar7);
  _SafeRelease(lVar16);
  _SafeRelease(lVar8);
  _SafeRelease(lVar9);
  _SafeRelease(lVar10);
  _SafeRelease(lVar11);
  return lVar14;
}

