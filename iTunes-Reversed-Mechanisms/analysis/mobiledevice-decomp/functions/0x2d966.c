// rea decompile_all
// name: _DEREncodeSequenceFromObject
// address: 0x2d966
// body: available
// range: 0x2d966-0x2dda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2dd9e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _DEREncodeSequenceFromObject
              (undefined8 param_1,undefined8 *param_2,long param_3,ushort param_4,ulong param_5,
              undefined1 *param_6,ulong param_7,ulong *param_8)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  code *pcVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  ulong local_48;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_7 <= ~(ulong)param_6) {
    uVar9 = *param_8;
    local_40 = 0;
    local_48 = param_7;
    if (uVar9 < param_7) {
LAB_0002dd99:
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    iVar6 = _DEREncodeTag(param_1,param_6,&local_48);
    uVar8 = local_48;
    if (iVar6 == 0) {
      if (~(ulong)param_6 < local_48) goto LAB_0002dd94;
      uVar7 = param_7 - local_48;
      if (param_7 < local_48) {
LAB_0002dda3:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puVar13 = param_6 + local_48;
      iVar6 = 7;
      if ((puVar13 < param_6 + param_7) &&
         (iVar6 = _DERContentLengthOfEncodedSequence(param_2,param_3,param_4,param_5,&local_40),
         uVar5 = local_40, iVar6 == 0)) {
        puVar1 = param_6 + uVar9;
        local_48 = uVar7;
        if ((puVar1 < puVar13) || ((puVar13 < param_6 || (uVar9 - uVar8 < uVar7))))
        goto LAB_0002dd99;
        iVar6 = _DEREncodeLengthSized(local_40,puVar13,uVar7,&local_48);
        if (iVar6 == 0) {
          puVar11 = puVar13 + local_48;
          if (!CARRY8((ulong)puVar13,local_48)) {
            uVar9 = uVar7 - local_48;
            if (uVar7 < local_48) goto LAB_0002dda3;
            if (!CARRY8(uVar5,(ulong)puVar11)) {
              iVar6 = 7;
              if (puVar11 + uVar5 <= param_6 + param_7) {
                if (param_4 != 0) {
                  puVar2 = (undefined8 *)(param_3 + (long)param_2);
                  uVar8 = 0;
                  do {
                    if ((~param_5 < uVar8) || (~(ulong)param_2 < *(ulong *)(param_5 + uVar8)))
                    goto LAB_0002dd94;
                    puVar12 = (undefined8 *)(*(ulong *)(param_5 + uVar8) + (long)param_2);
                    uVar3 = *(ushort *)(param_5 + 0x10 + uVar8);
                    if ((uVar3 >> 9 & 1) == 0) {
                      if ((uVar3 & 1) == 0) {
LAB_0002db9a:
                        local_48 = uVar9;
                        if (((puVar11 <= puVar1) && (param_6 <= puVar11)) &&
                           (uVar9 <= (ulong)((long)puVar1 - (long)puVar11))) {
                          iVar6 = _DEREncodeTag(*(undefined8 *)(param_5 + 8 + uVar8),puVar11,
                                                &local_48);
                          if (iVar6 == 0) {
                            puVar13 = puVar11 + local_48;
                            if (!CARRY8((ulong)puVar11,local_48)) {
                              uVar7 = uVar9 - local_48;
                              if (local_48 <= uVar9) {
                                if ((param_2 <= puVar12) && (puVar12 + 2 <= puVar2)) {
                                  local_40 = puVar12[1];
                                  bVar14 = true;
                                  if (((uVar3 >> 8 & 1) != 0) &&
                                     ((local_40 != 0 && (*(char *)*puVar12 < '\0')))) {
                                    local_40 = local_40 + 1;
                                    bVar14 = false;
                                  }
                                  local_48 = uVar7;
                                  if (((puVar1 < puVar13) || (puVar13 < param_6)) ||
                                     ((ulong)((long)puVar1 - (long)puVar13) < uVar7))
                                  goto LAB_0002dd99;
                                  iVar6 = _DEREncodeLengthSized(local_40,puVar13,uVar7,&local_48);
                                  if (iVar6 != 0) goto LAB_0002d9dc;
                                  puVar11 = puVar13 + local_48;
                                  if (CARRY8((ulong)puVar13,local_48)) goto LAB_0002dd94;
                                  uVar9 = uVar7 - local_48;
                                  if (uVar7 < local_48) goto LAB_0002dda3;
                                  if (!bVar14) {
                                    if (puVar11 == (undefined1 *)0xffffffffffffffff)
                                    goto LAB_0002dd94;
                                    if ((puVar1 <= puVar11) || (puVar11 < param_6))
                                    goto LAB_0002dd99;
                                    *puVar11 = 0;
                                    bVar14 = uVar9 == 0;
                                    uVar9 = uVar9 - 1;
                                    if (bVar14) goto LAB_0002dda3;
                                    puVar11 = puVar11 + 1;
                                  }
                                  if (((puVar11 <= puVar1) && (param_6 <= puVar11)) &&
                                     (uVar7 = puVar12[1],
                                     uVar7 <= (ulong)((long)puVar1 - (long)puVar11))) {
                                    pvVar10 = (void *)*puVar12;
                                    goto LAB_0002dd4a;
                                  }
                                }
                                goto LAB_0002dd99;
                              }
                              goto LAB_0002dda3;
                            }
                            goto LAB_0002dd94;
                          }
                          goto LAB_0002d9dc;
                        }
                        goto LAB_0002dd99;
                      }
                      if ((puVar12 < param_2) || (puVar2 < puVar12 + 2)) goto LAB_0002dd99;
                      if (puVar12[1] != 0) goto LAB_0002db9a;
                    }
                    else {
                      if ((((puVar12 < param_2) || (puVar2 < puVar12 + 2)) || (puVar1 < puVar11)) ||
                         ((puVar11 < param_6 ||
                          (uVar7 = puVar12[1], (ulong)((long)puVar1 - (long)puVar11) < uVar7))))
                      goto LAB_0002dd99;
                      pvVar10 = (void *)*puVar12;
LAB_0002dd4a:
                      _memmove(puVar11,pvVar10,uVar7);
                      uVar7 = puVar12[1];
                      bVar14 = CARRY8((ulong)puVar11,uVar7);
                      puVar11 = puVar11 + uVar7;
                      if (bVar14) goto LAB_0002dd94;
                      bVar14 = uVar9 < uVar7;
                      uVar9 = uVar9 - uVar7;
                      if (bVar14) goto LAB_0002dda3;
                    }
                    uVar8 = uVar8 + 0x18;
                  } while ((ulong)param_4 * 0x18 != uVar8);
                }
                if (*param_8 < (ulong)((long)puVar11 - (long)param_6)) goto LAB_0002dd99;
                *param_8 = (long)puVar11 - (long)param_6;
                iVar6 = 0;
              }
              goto LAB_0002d9dc;
            }
          }
          goto LAB_0002dd94;
        }
      }
    }
LAB_0002d9dc:
    if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return iVar6;
  }
LAB_0002dd94:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

