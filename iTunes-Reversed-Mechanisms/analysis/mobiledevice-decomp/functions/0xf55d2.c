// rea decompile_all
// name: _PRProgressDecodeWeights
// address: 0xf55d2
// body: available
// range: 0xf55d2-0xf59fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * _PRProgressDecodeWeights(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  void *pvVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  size_t sVar15;
  ulong local_48;
  ulong local_40;
  int local_38;
  int local_34;
  
  if (param_1 != 0) {
    lVar1 = _CFGetTypeID();
    lVar2 = _CFArrayGetTypeID();
    if (lVar1 == lVar2) {
      uVar3 = _CFArrayGetCount();
      if ((uVar3 & 0x8000000000000001) == 1) {
        local_48 = 0;
        pvVar4 = _malloc(uVar3 * 8);
        _CFArrayGetValues(param_1,0,uVar3,pvVar4);
        iVar12 = 0;
        uVar14 = 0;
        do {
          local_40 = local_40 & 0xffffffff00000000;
          lVar1 = _CFGetTypeID(*(undefined8 *)((long)pvVar4 + uVar14 * 8));
          lVar2 = _CFNumberGetTypeID();
          if (lVar1 != lVar2) {
            plVar5 = (long *)0x0;
            goto LAB_000f59f8;
          }
          _CFNumberGetValue(*(undefined8 *)((long)pvVar4 + uVar14 * 8),9,&local_40);
          if (uVar14 == 0) {
            local_48 = local_40 & 0xffffffff;
          }
          else if (((uVar14 & 1) != 0) && (iVar12 < (int)local_40)) {
            iVar12 = (int)local_40;
          }
          uVar14 = uVar14 + 1;
        } while (uVar3 != uVar14);
        plVar5 = (long *)_PRProgressCreateEmpty(iVar12 + 1);
        *(int *)((long)plVar5 + 0x1c) = (int)local_48;
        if (1 < (long)uVar3) {
          lVar1 = 1;
          do {
            local_40 = local_40 & 0xffffffff00000000;
            local_34 = 0;
            _CFNumberGetValue(*(undefined8 *)((long)pvVar4 + lVar1 * 8),9,&local_40);
            _CFNumberGetValue(*(undefined8 *)((long)pvVar4 + lVar1 * 8 + 8),9,&local_34);
            uVar14 = (ulong)(int)local_40;
            if ((-1 < (long)uVar14) && (uVar14 < (ulong)plVar5[2])) {
              *(int *)(*plVar5 + uVar14 * 4) = local_34;
            }
            lVar1 = lVar1 + 2;
          } while (lVar1 < (long)uVar3);
        }
LAB_000f59f8:
        _free(pvVar4);
        return plVar5;
      }
    }
    else {
      lVar1 = _CFGetTypeID(param_1);
      lVar2 = _CFDictionaryGetTypeID();
      if (lVar1 == lVar2) {
        local_40 = 0;
        lVar1 = _CFDictionaryGetValue(param_1,&cf_weight_count);
        if (lVar1 != 0) {
          lVar2 = _CFGetTypeID(lVar1);
          lVar6 = _CFNumberGetTypeID();
          if ((lVar2 == lVar6) &&
             (lVar2 = _CFDictionaryGetValue(param_1,&cf_operation_ids), lVar2 != 0)) {
            lVar6 = _CFGetTypeID(lVar2);
            lVar7 = _CFDictionaryGetTypeID();
            if ((lVar6 == lVar7) &&
               (lVar6 = _CFDictionaryGetValue(param_1,&cf_operation_weights), lVar6 != 0)) {
              lVar7 = _CFGetTypeID(lVar6);
              lVar8 = _CFDictionaryGetTypeID();
              if ((lVar7 == lVar8) &&
                 (lVar7 = _CFDictionaryGetValue(param_1,&cf_operation_progresses), lVar7 != 0)) {
                lVar8 = _CFGetTypeID(lVar7);
                lVar9 = _CFDictionaryGetTypeID();
                if (lVar8 == lVar9) {
                  _CFNumberGetValue(lVar1,0xe,&local_40);
                  plVar5 = (long *)_PRProgressCreateEmpty(local_40);
                  *(undefined4 *)((long)plVar5 + 0x1c) = 0;
                  sVar10 = _CFDictionaryGetCount(lVar6);
                  pvVar11 = _calloc(sVar10,8);
                  pvVar4 = _calloc(sVar10,8);
                  _CFDictionaryGetKeysAndValues(lVar6,pvVar11,pvVar4);
                  if (0 < (long)sVar10) {
                    sVar15 = 0;
                    do {
                      local_34 = 0;
                      local_38 = 0;
                      lVar1 = _CFDictionaryGetValue
                                        (lVar2,*(undefined8 *)((long)pvVar11 + sVar15 * 8));
                      if (lVar1 != 0) {
                        _CFNumberGetValue(lVar1,9,&local_34);
                        if ((-1 < (long)local_34) && ((long)local_34 < (long)local_40)) {
                          _CFNumberGetValue(*(undefined8 *)((long)pvVar4 + sVar15 * 8),9,&local_38);
                          *(int *)((long)plVar5 + 0x1c) = *(int *)((long)plVar5 + 0x1c) + local_38;
                          *(int *)(*plVar5 + (long)local_34 * 4) = local_38;
                        }
                      }
                      sVar15 = sVar15 + 1;
                    } while (sVar10 != sVar15);
                  }
                  _free(pvVar11);
                  _free(pvVar4);
                  sVar10 = _CFDictionaryGetCount(lVar7);
                  pvVar11 = _calloc(sVar10,8);
                  pvVar4 = _calloc(sVar10,8);
                  _CFDictionaryGetKeysAndValues(lVar7,pvVar11,pvVar4);
                  if (0 < (long)sVar10) {
                    sVar15 = 0;
                    do {
                      local_34 = 0;
                      local_38 = 0;
                      lVar1 = _CFDictionaryGetValue
                                        (lVar2,*(undefined8 *)((long)pvVar11 + sVar15 * 8));
                      if (lVar1 != 0) {
                        _CFNumberGetValue(lVar1,9,&local_34);
                        if ((-1 < (long)local_34) && ((long)local_34 < (long)local_40)) {
                          _CFNumberGetValue(*(undefined8 *)((long)pvVar4 + sVar15 * 8),9,&local_38);
                          iVar12 = *(int *)(*plVar5 + (long)local_34 * 4);
                          iVar13 = local_38;
                          if (iVar12 < local_38) {
                            iVar13 = iVar12;
                          }
                          *(int *)(plVar5[1] + (long)local_34 * 4) = iVar13;
                        }
                      }
                      sVar15 = sVar15 + 1;
                    } while (sVar10 != sVar15);
                  }
                  _free(pvVar11);
                  goto LAB_000f59f8;
                }
              }
            }
          }
        }
      }
    }
  }
  return (long *)0x0;
}

