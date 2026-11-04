// rea decompile_all
// name: _fAssetAllHeadersAndMetaDataComplete
// address: 0x19c603
// body: available
// range: 0x19c603-0x19d0d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19d0cf to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _fAssetAllHeadersAndMetaDataComplete(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  void *pvVar10;
  ulong uVar11;
  char *pcVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  bool bVar16;
  uint uVar17;
  short sVar18;
  ulong uVar19;
  undefined4 *puVar20;
  undefined1 local_f0 [4];
  undefined4 local_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  int *local_c8;
  ulong local_c0;
  int local_b8;
  int local_b4;
  undefined2 local_b0;
  undefined6 uStack_ae;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  long local_68;
  byte local_59;
  undefined8 *local_58;
  short local_4a;
  ulong local_48;
  undefined1 local_40;
  undefined1 local_3f;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar19 = 0x1e;
  if ((param_1 == 0) || (param_3 == (undefined8 *)0x0)) goto LAB_0019d057;
  local_58 = param_3;
  piVar8 = (int *)_uarpAssetQuerySuperBinaryMetaData(param_1,*param_3);
  puVar14 = local_58;
  for (; local_58 = puVar14, piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
    if (*piVar8 == -0x332d7efd) {
      if (piVar8[1] != 4) {
        uVar19 = 0;
        goto LAB_0019d03f;
      }
      iVar4 = _uarpNtohl(**(undefined4 **)(piVar8 + 2));
      *(bool *)(local_58 + 4) = iVar4 != 0;
    }
    puVar14 = local_58;
  }
  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
    pcVar12 = "False";
    if (*(char *)(puVar14 + 4) != '\0') {
      pcVar12 = "True";
    }
    _printf("Ignore Version = %s\n",pcVar12);
  }
  else {
    pcVar12 = "False";
    if (*(char *)(puVar14 + 4) != '\0') {
      pcVar12 = "True";
    }
    _uarpLogInfo(3,"Ignore Version = %s\n",pcVar12);
  }
  uVar5 = _uarpPlatformEndpointAssetQueryNumberOfPayloads(param_1,*puVar14,puVar14 + 1);
  if (uVar5 == 0) {
    if (*(long *)(param_1 + 0x568) == 0) {
      uVar19 = 0x1e;
      puVar14 = local_58;
    }
    else {
      uVar3 = *(ushort *)(puVar14 + 1);
      local_c0 = (ulong)uVar3;
      local_a0 = _uarpZalloc((uint)uVar3 * 4);
      if (local_a0 != 0) {
        uVar5 = _BackendGetPersParam(*(undefined8 *)(param_1 + 0x568),2,&local_b0,8);
        if (uVar5 == 0) {
          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
            _printf("Searching for Board ID 0x%llx\n",CONCAT62(uStack_ae,local_b0));
          }
          else {
            _uarpLogInfo(3,"Searching for Board ID 0x%llx\n",CONCAT62(uStack_ae,local_b0));
          }
          uVar19 = 0xf;
          if (local_c0 != 0) {
            local_a8 = 0;
            uVar19 = 0;
            local_6c = 0;
            local_70 = 0;
            local_68 = param_1;
            sVar18 = -1;
            do {
              local_4a = sVar18;
              puVar14 = local_58;
              uVar5 = _uarpAssetQueryPayloadInfo(param_1,*local_58,uVar19);
              if (uVar5 != 0) {
LAB_0019d028:
                uVar19 = (ulong)uVar5;
                param_1 = local_68;
                goto LAB_0019d033;
              }
              uVar6 = _uarpTagStructPack32(&local_98);
              uVar6 = _uarpNtohl(uVar6);
              *(undefined4 *)(local_a0 + local_a8 * 4) = uVar6;
              piVar8 = (int *)_uarpAssetQueryPayloadMetaData(param_1,*puVar14,uVar19);
              sVar18 = local_4a;
              if (piVar8 != (int *)0x0) {
                bVar16 = false;
                piVar13 = piVar8;
LAB_0019c85d:
                do {
                  if (*piVar13 == -0x774d6ee5) {
                    uVar19 = 0xf;
                    param_1 = local_68;
                    if (piVar13[1] != 8) goto LAB_0019d033;
                    lVar9 = _uarpNtohll(**(undefined8 **)(piVar13 + 2));
                    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                      _printf("Found Board ID 0x%llx\n",lVar9);
                    }
                    else {
                      _uarpLogInfo(3,"Found Board ID 0x%llx\n",lVar9);
                    }
                    if (lVar9 == CONCAT62(uStack_ae,local_b0)) {
                      param_1 = local_68;
                      if ((((char)local_98 != 'D') || (local_98._1_1_ != 'L')) || (local_4a != -1))
                      goto LAB_0019d033;
                      piVar13 = *(int **)(piVar13 + 4);
                      bVar16 = true;
                      local_4a = (short)local_a8;
                      if (piVar13 == (int *)0x0) goto LAB_0019c931;
                      goto LAB_0019c85d;
                    }
                  }
                  piVar1 = piVar13 + 4;
                  piVar13 = *(int **)piVar1;
                } while (*(int **)piVar1 != (int *)0x0);
                param_1 = local_68;
                sVar18 = local_4a;
                if (bVar16) {
LAB_0019c931:
                  lVar9 = local_68;
                  local_d0 = 0;
                  uVar5 = _BackendGetPersParam
                                    (*(undefined8 *)(local_68 + 0x568),0,&local_59,1,&local_d0);
                  puVar14 = local_58;
                  sVar18 = local_4a;
                  if (uVar5 != 0) goto LAB_0019d028;
                  do {
                    iVar4 = *piVar8;
                    param_1 = local_68;
                    local_c8 = piVar8;
                    if (iVar4 == -0x774d6ef0) {
                      if (puVar14[5] != 0) {
                        uVar19 = 0xf;
                        goto LAB_0019d033;
                      }
                      pvVar10 = (void *)_uarpZalloc(piVar8[1]);
                      puVar14[5] = pvVar10;
                      if (pvVar10 == (void *)0x0) {
                        uVar19 = 0xb;
                        param_1 = local_68;
                        goto LAB_0019d033;
                      }
                      uVar5 = piVar8[1];
                      *(uint *)(puVar14 + 6) = uVar5;
                      _memcpy(pvVar10,*(void **)(piVar8 + 2),(ulong)uVar5);
                    }
                    else if (iVar4 == -0x774d6edb) {
                      uVar19 = 0xf;
                      if ((piVar8[1] != 4) || (*(undefined4 **)(piVar8 + 2) == (undefined4 *)0x0))
                      goto LAB_0019d033;
                      uVar5 = _uarpNtohl(**(undefined4 **)(piVar8 + 2));
                      uVar7 = _BackendTagHint(*(undefined8 *)(lVar9 + 0x568),uVar5);
                      sVar18 = local_4a;
                      if (uVar7 != 0) {
                        if (_inRestore == '\x01') {
                          _printf("Non-Fatal error sending tag hint(0x%x) to backend: 0x%x\n",
                                  (ulong)uVar5,(ulong)uVar7);
                          sVar18 = local_4a;
                        }
                        else {
                          _uarpLogError(3,
                                        "Non-Fatal error sending tag hint(0x%x) to backend: 0x%x\n",
                                        (ulong)uVar5,uVar7);
                          sVar18 = local_4a;
                        }
                      }
                    }
                    else if ((iVar4 == -0x774d6ee4) &&
                            (uVar5 = piVar8[1], lVar9 = local_68, 8 < uVar5)) {
                      puVar20 = *(undefined4 **)(piVar8 + 2);
                      local_78 = 0;
                      local_74 = 0xff;
                      local_b4 = 0;
                      local_b8 = 0;
                      do {
                        iVar4 = _uarpNtohl(*puVar20);
                        uVar17 = uVar5 - 8;
                        uVar7 = _uarpNtohl(puVar20[1]);
                        uVar5 = uVar17 - uVar7;
                        puVar14 = local_58;
                        lVar9 = local_68;
                        sVar18 = local_4a;
                        if (uVar17 < uVar7) goto LAB_0019cc00;
                        puVar2 = (ulong *)(puVar20 + 2);
                        if (iVar4 == -0x774d6ee1) {
                          if (uVar7 != 9) goto LAB_0019cc00;
                          local_40 = *(undefined1 *)(puVar20 + 4);
                          local_48 = *puVar2;
                          local_3f = 0;
                          if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                            _printf("Found matching tags %s\n",&local_48);
                          }
                          else {
                            _uarpLogInfo(3,"Found matching tags %s\n",&local_48);
                          }
                          uVar6 = *(undefined4 *)((long)puVar20 + 0xd);
                          local_b8 = _uarpNtohl(puVar20[2]);
                          local_b4 = _uarpNtohl(uVar6);
                        }
                        else if (iVar4 == -0x774d6ee2) {
                          if (uVar7 != 4) goto LAB_0019cc00;
                          local_78 = _uarpNtohl((int)*puVar2);
                        }
                        else if (iVar4 == -0x774d6ee3) {
                          if (uVar7 != 4) goto LAB_0019cc00;
                          local_74 = _uarpNtohl((int)*puVar2);
                        }
                        puVar20 = (undefined4 *)((long)puVar2 + (ulong)uVar7);
                      } while (8 < uVar5);
                      puVar14 = local_58;
                      lVar9 = local_68;
                      sVar18 = local_4a;
                      if (((local_74 <= local_78) && (local_b8 != 0)) && (local_b4 != 0)) {
                        if (local_59 <= (byte)local_78 && (byte)local_74 <= local_59) {
                          local_70 = local_b8;
                          local_6c = local_b4;
                        }
                      }
                    }
LAB_0019cc00:
                    piVar8 = *(int **)(local_c8 + 4);
                    param_1 = lVar9;
                  } while (piVar8 != (int *)0x0);
                }
              }
              puVar14 = local_58;
              local_a8 = local_a8 + 1;
              uVar19 = local_a8 & 0xffffffff;
            } while (local_a8 != local_c0);
            if (local_70 == 0) {
              uVar19 = 0xf;
            }
            else {
              uVar11 = 0;
              uVar19 = 0xf;
              do {
                if (*(int *)(local_a0 + uVar11 * 4) == local_70) {
                  *(short *)((long)local_58 + 0xc) = (short)uVar11;
                  if (local_6c != 0) {
                    uVar11 = 0;
                    goto LAB_0019ccaa;
                  }
                  break;
                }
                uVar11 = uVar11 + 1;
              } while (local_c0 != uVar11);
            }
          }
        }
        else {
          uVar19 = (ulong)uVar5;
        }
        goto LAB_0019d033;
      }
      uVar19 = 0xb;
      puVar14 = local_58;
    }
  }
  else {
    uVar19 = (ulong)uVar5;
    puVar14 = local_58;
  }
  goto LAB_0019d03f;
  while (uVar11 = uVar11 + 1, local_c0 != uVar11) {
LAB_0019ccaa:
    if (*(int *)(local_a0 + uVar11 * 4) == local_6c) {
      *(short *)((long)local_58 + 0xe) = (short)uVar11;
      if (sVar18 != -1) {
        *(short *)(local_58 + 2) = sVar18;
        _image3Free(local_a0);
        uVar5 = _uarpAssetQueryPayloadInfo
                          (param_1,*puVar14,*(undefined2 *)((long)puVar14 + 0xc),local_f0);
        if ((uVar5 == 0) && (uVar5 = _FWImageSetComponentSize(puVar14[3],0,local_d8), uVar5 == 0)) {
          *(undefined4 *)((long)puVar14 + 0x34) = local_ec;
          *(uint *)(puVar14 + 7) = uStack_e8;
          *(undefined4 *)((long)puVar14 + 0x3c) = uStack_e4;
          *(undefined4 *)(puVar14 + 8) = uStack_e0;
          local_cc = 0;
          uVar5 = _uarpVersionToAceVersion(&local_ec,&local_cc,0);
          if ((uVar5 == 0) &&
             ((uVar5 = _FWImageSetFWVersion(puVar14[3],local_cc), uVar5 == 0 &&
              (uVar5 = _uarpAssetQueryPayloadInfo
                                 (param_1,*puVar14,*(undefined2 *)((long)puVar14 + 0xe),local_f0),
              uVar5 == 0)))) {
            *(uint *)(puVar14 + 8) = (uStack_e8 & 0xff) << 8 | (uint)(byte)local_ec;
            uVar5 = _FWImageSetComponentSize(puVar14[3],1,local_d8);
            if (uVar5 == 0) {
              if (*(char *)(param_1 + 0x512) == '\x01') {
                if (*(long *)(param_1 + 0x568) == 0) {
                  uVar19 = 0x1e;
                  goto LAB_0019d03f;
                }
                local_98 = 0;
                uStack_90 = 0;
                local_48 = local_48 & 0xffffffff00000000;
                local_b0 = 0;
                uVar5 = _BackendGetActiveVersion();
                if ((uVar5 == 0) &&
                   (uVar5 = _aceVersionToUARPVersion(local_48 & 0xffffffff,local_b0,&local_98),
                   uVar5 == 0)) {
                  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                    _printf("validate_same_version: existing = %d.%d.%d.%d, new = %d.%d.%d.%d\n",
                            local_98 & 0xffffffff,(ulong)local_98._4_4_,uStack_90 & 0xffffffff,
                            (ulong)uStack_90._4_4_,(ulong)*(uint *)((long)local_58 + 0x34),
                            (ulong)*(uint *)(local_58 + 7),(ulong)*(uint *)((long)local_58 + 0x3c),
                            (ulong)*(uint *)(local_58 + 8));
                  }
                  else {
                    _uarpLogInfo(3,
                                 "validate_same_version: existing = %d.%d.%d.%d, new = %d.%d.%d.%d\n"
                                 ,local_98 & 0xffffffff,local_98._4_4_,uStack_90 & 0xffffffff,
                                 uStack_90._4_4_,*(undefined4 *)((long)local_58 + 0x34),
                                 *(undefined4 *)(local_58 + 7),
                                 *(undefined4 *)((long)local_58 + 0x3c),
                                 *(undefined4 *)(local_58 + 8));
                  }
                  iVar4 = _uarpVersionCompare(&local_98,(long)puVar14 + 0x34);
                  puVar14 = local_58;
                  if (iVar4 == 0) {
                    uVar5 = _uarpPlatformEndpointAssetFullyStaged(param_1,*local_58);
                    if (uVar5 == 0) goto LAB_0019d05f;
                    uVar19 = (ulong)uVar5;
                    if (_inRestore == '\x01') {
                      _printf("Failed to mark asset as fully staged when verifying version: 0x%x\n",
                              uVar19);
                    }
                    else {
                      _uarpLogError(3,
                                    "Failed to mark asset as fully staged when verifying version: 0x%x\n"
                                    ,uVar19);
                    }
                  }
                  else {
                    uVar19 = 0x18;
                  }
                  goto LAB_0019d03f;
                }
              }
              else {
                uVar5 = _uarpAssetQueryPayloadInfo
                                  (param_1,*puVar14,*(undefined2 *)(puVar14 + 2),local_f0);
                if (uVar5 == 0) {
                  if (*(char *)((long)puVar14 + 0x21) == '\0') {
                    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                      _puts(
                           "Workaround: setting digest list length to 0 because we aren\'t doing personalization"
                           );
                    }
                    else {
                      _uarpLogInfo(3,
                                   "Workaround: setting digest list length to 0 because we aren\'t doing personalization\n"
                                  );
                    }
                    uVar15 = puVar14[3];
                    local_d8 = 0;
                  }
                  else {
                    uVar15 = puVar14[3];
                  }
                  uVar5 = _FWImageSetComponentSize(uVar15,3,local_d8);
                  uVar19 = (ulong)uVar5;
                  if (uVar5 != 0) goto LAB_0019d03f;
                  *(undefined2 *)((long)puVar14 + 10) = *(undefined2 *)((long)puVar14 + 0xc);
                  uVar5 = _FWImageSetActiveComponent(puVar14[3],0);
                  if (uVar5 == 0) {
                    if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                      _puts("Setting payload index");
                    }
                    else {
                      _uarpLogInfo(3,"Setting payload index\n");
                    }
                    uVar5 = _uarpPlatformEndpointAssetSetPayloadIndex
                                      (param_1,*puVar14,*(undefined2 *)((long)puVar14 + 10));
                    if (uVar5 == 0) goto LAB_0019d05f;
                  }
                }
              }
            }
          }
        }
        uVar19 = (ulong)uVar5;
        goto LAB_0019d03f;
      }
      break;
    }
  }
LAB_0019d033:
  puVar14 = local_58;
  _image3Free(local_a0);
LAB_0019d03f:
  _uarpPlatformEndpointAssetAbandon(param_1,param_1 + 0x438,*puVar14,0x900);
LAB_0019d057:
  _fAssetAllHeadersAndMetaDataComplete_cold_1(uVar19);
LAB_0019d05f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

