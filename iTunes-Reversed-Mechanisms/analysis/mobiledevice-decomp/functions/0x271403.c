// rea decompile_all
// name: _internalBackendFlash
// address: 0x271403
// body: available
// range: 0x271403-0x271f63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x271f5f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _internalBackendFlash(undefined8 *param_1,long param_2,undefined8 param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  uint local_78;
  undefined4 local_74;
  uint local_70;
  undefined2 local_6c;
  byte local_68 [4];
  ushort uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  byte local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar12 = 0x1e;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) goto LAB_00271ef5;
  if (*(char *)((long)param_1 + 0x51) != '\0') {
    uVar12 = 0x1a;
    goto LAB_00271ef5;
  }
  uVar6 = _get_mode(*param_1,&local_78);
  if (uVar6 != 0) {
LAB_00271e80:
    uVar12 = (ulong)uVar6;
    goto LAB_00271ef5;
  }
  if (local_78 == 0x424f4f54) {
    if (_inRestore == '\x01') {
      pcVar11 = "Ace in boot mode: Can\'t be updated!";
      goto LAB_002714af;
    }
    pcVar11 = "Ace in boot mode: Can\'t be updated!\n";
    goto LAB_002716de;
  }
  if (local_78 != 0x41444655) {
    if (param_4 == (uint *)0x0) goto LAB_00271955;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    uVar6 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,0,0x2d,&local_74,4,0,local_68);
    if (uVar6 == 0) {
      lVar8 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,
                                CONCAT24(uStack_64,
                                         CONCAT13(local_68[3],
                                                  CONCAT12(local_68[2],
                                                           CONCAT11(local_68[1],local_68[0]))))));
      if (lVar8 != 4) {
        if (_inRestore == '\x01') {
          pcVar11 = "Unexpected boot flags register length %llu\n";
LAB_00271923:
          _printf(pcVar11,lVar8);
        }
        else {
          pcVar11 = "Unexpected boot flags register length %llu\n";
LAB_0027194b:
          _uarpLogError(3,pcVar11);
        }
        goto LAB_00271955;
      }
      if (((local_74._1_1_ & 7) == 1) ||
         (((local_74._1_1_ & 7) == 7 && (0xa1 < (*(ushort *)((long)param_1 + 0x1c) & 0xfe))))) {
        uVar2 = *param_4;
        uVar6 = param_4[1];
        uVar3 = param_4[2];
        uVar4 = param_4[3];
        if (_inRestore == '\x01') {
          pcVar11 = "Proceeding with update to %u.%u.%u.%u because Ace is booted from ramdisk\n";
          goto LAB_00271555;
        }
        pcVar11 = "Proceeding with update to %u.%u.%u.%u because Ace is booted from ramdisk\n";
LAB_002715b1:
        _uarpLogError(3,pcVar11);
        goto LAB_00271955;
      }
      if ((*(char *)((long)param_1 + 0x53) == '\0') && (*(char *)((long)param_1 + 0x54) == '\0')) {
        uVar2 = *param_4;
        uVar6 = param_4[1];
        uVar3 = param_4[2];
        uVar4 = param_4[3];
        if (_inRestore != '\x01') {
          pcVar11 = "Updating to version %u.%u.%u.%u\n";
          goto LAB_002715b1;
        }
        pcVar11 = "Updating to version %u.%u.%u.%u\n";
LAB_00271555:
        _printf(pcVar11,(ulong)uVar2,(ulong)uVar6,(ulong)uVar3,(ulong)uVar4);
        goto LAB_00271955;
      }
      uVar6 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,0,0xf,&local_70,6,0,local_68)
      ;
      if (uVar6 != 0) {
        if (_inRestore != '\x01') {
          pcVar11 = "Bad return value from version register read: 0x%x\n";
          goto LAB_00271936;
        }
        pcVar11 = "Bad return value from version register read: 0x%x\n";
        goto LAB_00271905;
      }
      lVar8 = CONCAT17(uStack_61,
                       CONCAT16(uStack_62,
                                CONCAT24(uStack_64,
                                         CONCAT13(local_68[3],
                                                  CONCAT12(local_68[2],
                                                           CONCAT11(local_68[1],local_68[0]))))));
      if (lVar8 != 6) {
        if (_inRestore != '\x01') {
          pcVar11 = "Unexpected version register length %llu\n";
          goto LAB_0027194b;
        }
        pcVar11 = "Unexpected version register length %llu\n";
        goto LAB_00271923;
      }
      local_58 = (long *)0x0;
      uStack_50 = 0;
      iVar7 = _aceVersionToUARPVersion(local_70,local_6c);
      if (iVar7 != 0) goto LAB_00271955;
      if (_inRestore == '\x01') {
        _printf("Current firmware version: %u.%u.%u.%u, new version: %u.%u.%u.%u\n",
                (ulong)local_58 & 0xffffffff,(ulong)local_58 >> 0x20,uStack_50 & 0xffffffff,
                uStack_50 >> 0x20,(ulong)*param_4,(ulong)param_4[1],(ulong)param_4[2],
                (ulong)param_4[3]);
      }
      else {
        _uarpLogError(3,"Current firmware version: %u.%u.%u.%u, new version: %u.%u.%u.%u\n");
      }
      if ((((ulong)local_58 & 0xe00) != 0) || (uVar6 = *param_4, (uVar6 & 0xe00) != 0))
      goto LAB_00271955;
      if ((((uint)local_58 != uVar6) ||
          ((((*(char *)((long)param_1 + 0x53) == '\0' || (local_58._4_4_ != param_4[1])) ||
            (uStack_50._4_4_ != param_4[3])) || ((uint)uStack_50 != param_4[2])))) &&
         ((*(char *)((long)param_1 + 0x54) != '\x01' ||
          (((uint)local_58 <= uVar6 &&
           (((uint)local_58 != uVar6 ||
            ((local_58._4_4_ <= param_4[1] &&
             ((local_58._4_4_ != param_4[1] ||
              (((uint)uStack_50 <= param_4[2] &&
               (((uint)uStack_50 != param_4[2] || (uStack_50._4_4_ <= param_4[3]))))))))))))))))
      goto LAB_00271955;
      *(undefined1 *)(param_1 + 10) = 1;
      if (_inRestore == '\x01') {
        _puts("Skipping firmware update due to version number check");
      }
      else {
        _uarpLogError(3,"Skipping firmware update due to version number check\n");
      }
    }
    else {
      if (_inRestore == '\x01') {
        pcVar11 = "Bad return value from boot flags register read: 0x%x\n";
LAB_00271905:
        _printf(pcVar11,(ulong)uVar6);
      }
      else {
        pcVar11 = "Bad return value from boot flags register read: 0x%x\n";
LAB_00271936:
        _uarpLogError(3,pcVar11,uVar6);
      }
LAB_00271955:
      if (_inRestore == '\x01') {
        _printf("Ace in mode 0x%08x, performing SFW flash\n",(ulong)local_78);
      }
      else {
        _uarpLogError(3,"Ace in mode 0x%08x, performing SFW flash\n");
      }
      uVar6 = _flash();
      if (uVar6 != 0) goto LAB_00271e80;
      if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
        _puts("Persistent flash successful");
      }
      else {
        _uarpLogInfo(3,"Persistent flash successful\n");
      }
      *(undefined1 *)(param_1 + 10) = 1;
      if (param_4 != (uint *)0x0) {
        uVar6 = param_4[1];
        uVar2 = param_4[2];
        uVar4 = param_4[3];
        *(uint *)((long)param_1 + 0x56) = *param_4;
        *(uint *)((long)param_1 + 0x5a) = uVar6;
        *(uint *)((long)param_1 + 0x5e) = uVar2;
        *(uint *)((long)param_1 + 0x62) = uVar4;
        bVar1 = *(byte *)((long)param_1 + 0x66);
        local_70 = 0;
        local_74 = local_74 & 0xffff0000;
        _uarpVersionToAceVersion(param_4,&local_70,&local_74);
        uVar2 = local_70;
        uVar6 = local_74;
        local_68[0] = (byte)local_70;
        local_68[1] = (byte)(local_70 >> 8);
        local_68[2] = (byte)(local_70 >> 0x10);
        local_68[3] = (byte)(local_70 >> 0x18);
        uVar5 = (ushort)local_74;
        uStack_64 = (ushort)local_74;
        local_58 = (long *)0x0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        _snprintf((char *)&local_58,0x20,"usbc,version,rid%d",(ulong)bVar1);
        if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
          _printf("Writing NVRAM variable %s to {0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x}\n",
                  &local_58,(ulong)(uVar2 & 0xff),(ulong)(uVar2 >> 8 & 0xff),
                  (ulong)(uVar2 >> 0x10 & 0xff),(ulong)(uVar2 >> 0x18),(ulong)(uVar6 & 0xff),
                  (ulong)(uVar5 >> 8));
        }
        else {
          _uarpLogInfo(3,
                       "Writing NVRAM variable %s to {0x%02x,0x%02x,0x%02x,0x%02x,0x%02x,0x%02x}\n",
                       &local_58,uVar2 & 0xff,uVar2 >> 8 & 0xff,uVar2 >> 0x10 & 0xff,
                       (ulong)(uVar2 >> 0x18),uVar6 & 0xff,(ulong)(uVar5 >> 8));
        }
        uVar6 = _set_nvram_variable(&local_58,local_68,6);
        if (uVar6 != 0) {
          if (_inRestore == '\x01') {
            _printf("Failed to persist FW version: 0x%x, treating as non-fatal\n",(ulong)uVar6);
          }
          else {
            _uarpLogError(3,"Failed to persist FW version: 0x%x, treating as non-fatal\n",uVar6);
          }
        }
      }
    }
    uStack_64 = 0;
    uStack_62 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_59 = 0;
    local_58 = (long *)0x0;
    uVar6 = _get_number_of_uart_hpms(*(undefined1 *)((long)param_1 + 0x66),local_68,7);
    if (uVar6 == 0) {
      if (local_59 != 0) {
        uVar13 = 0;
        do {
          uVar6 = _getAHPMLibInterfaceForRID(local_68[uVar13],&local_58);
          if (uVar6 == 0) {
            if (local_58 == (long *)0x0) {
              if (_inRestore == '\x01') {
                uVar12 = 0;
                _printf("UART HPM interface is NULL for RID %d\n",(ulong)local_68[uVar13]);
              }
              else {
                uVar12 = 0;
                _uarpLogError(3,"UART HPM interface is NULL for RID %d\n");
              }
            }
            else {
              local_74 = 0;
              uVar6 = _get_mode(local_58,&local_74);
              uVar12 = (ulong)uVar6;
              if (uVar6 == 0) {
                if (local_74 == 0x41444655) {
                  local_70 = 0x47414944;
                  uVar6 = (**(code **)(*local_58 + 0x68))(local_58,1,&local_70,0,0,0,0,0,0,10,0,0);
                  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                    uVar10 = (ulong)local_68[uVar13];
                    pcVar11 = "Return value from GAID on RID %d: 0x%x\n";
                    uVar9 = (ulong)uVar6;
LAB_00271c9f:
                    _printf(pcVar11,uVar10,uVar9);
                    goto LAB_00271ca6;
                  }
                  bVar1 = local_68[uVar13];
                  pcVar11 = "Return value from GAID on RID %d: 0x%x\n";
                }
                else {
                  if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
                    uVar10 = (ulong)local_68[uVar13];
                    pcVar11 = "Not resetting RID %d in mode 0x%x\n";
                    uVar9 = (ulong)local_74;
                    goto LAB_00271c9f;
                  }
                  bVar1 = local_68[uVar13];
                  pcVar11 = "Not resetting RID %d in mode 0x%x\n";
                  uVar6 = local_74;
                }
                _uarpLogInfo(3,pcVar11,bVar1,uVar6);
              }
              else {
                if (_inRestore == '\x01') {
                  pcVar11 = "Failed to get mode for RID %d: 0x%x\n";
                  uVar10 = (ulong)local_68[uVar13];
                  uVar9 = uVar12;
                  goto LAB_00271c9f;
                }
                _uarpLogError(3,"Failed to get mode for RID %d: 0x%x\n",local_68[uVar13],uVar12);
              }
LAB_00271ca6:
              _destroyAHPMLibInterface(&local_58);
            }
          }
          else {
            uVar12 = (ulong)uVar6;
            if (_inRestore == '\x01') {
              _printf("Failed to get AHPMLibInterface for RID %d: 0x%x\n",(ulong)local_68[uVar13],
                      uVar12);
            }
            else {
              _uarpLogError(3,"Failed to get AHPMLibInterface for RID %d: 0x%x\n",local_68[uVar13],
                            uVar12);
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < local_59);
        if (local_59 != 0) {
          uVar13 = 0;
          do {
            uVar6 = _getAHPMLibInterfaceForRID(local_68[uVar13],&local_58);
            if (uVar6 == 0) {
              if (local_58 == (long *)0x0) {
                if (_inRestore == '\x01') {
                  uVar12 = 0;
                  _printf("UART HPM interface is NULL for RID %d\n",(ulong)local_68[uVar13]);
                }
                else {
                  uVar12 = 0;
                  _uarpLogError(3,"UART HPM interface is NULL for RID %d\n");
                }
              }
              else {
                local_70 = 0;
                uVar6 = _get_mode(local_58,&local_70);
                if (uVar6 == 0) {
                  if (local_70 == 0x564f5554) {
                    if (_inRestore == '\x01') {
                      uVar12 = 0;
                      _printf("UART HPM RID%d in VOUT, GAID skipped and APP mode check will be skipped\n"
                              ,(ulong)local_68[uVar13]);
                    }
                    else {
                      uVar12 = 0;
                      _uarpLogError(3,
                                    "UART HPM RID%d in VOUT, GAID skipped and APP mode check will be skipped\n"
                                   );
                    }
                  }
                  else {
                    uVar12 = 0;
                    uVar6 = _wait_for_mode(local_58,0x41505020,1,0);
                    if (uVar6 != 0) {
                      uVar12 = (ulong)uVar6;
                      _print_fw_update_regs(local_58);
                    }
                  }
                }
                else {
                  uVar12 = (ulong)uVar6;
                  if (_inRestore == '\x01') {
                    _printf("Failed to get mode for RID %d: 0x%x\n",(ulong)local_68[uVar13],uVar12);
                  }
                  else {
                    _uarpLogError(3,"Failed to get mode for RID %d: 0x%x\n",local_68[uVar13],uVar12)
                    ;
                  }
                }
                _destroyAHPMLibInterface(&local_58);
              }
            }
            else {
              uVar12 = (ulong)uVar6;
              if (_inRestore == '\x01') {
                _printf("Failed to get AHPMLibInterface for RID %d: 0x%x\n",(ulong)local_68[uVar13],
                        uVar12);
              }
              else {
                _uarpLogError(3,"Failed to get AHPMLibInterface for RID %d: 0x%x\n");
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < local_59);
        }
        goto LAB_00271e88;
      }
    }
    else {
      uVar12 = (ulong)uVar6;
LAB_00271e88:
      if ((int)uVar12 == 0) goto LAB_00271ef5;
      if ((int)uVar12 == -0x1ffffd10) {
        if (_inRestore != '\x01') {
          uVar12 = 0;
          _uarpLogError(3,"UART HPMs not found, treating as non-fatal\n");
          goto LAB_00271ef5;
        }
        _puts("UART HPMs not found, treating as non-fatal");
      }
      else if (_inRestore == '\x01') {
        _printf("UART HPMs reset failed, status=0x%X, treating as non-fatal\n",uVar12);
      }
      else {
        _uarpLogError(3,"UART HPMs reset failed, status=0x%X, treating as non-fatal\n",uVar12);
      }
    }
    uVar12 = 0;
    goto LAB_00271ef5;
  }
  if (*(int *)((long)param_1 + 0x6c) == 4) {
    if (_inRestore != '\x01') {
      pcVar11 = "HPM in ADFU in OTA stage2\n";
      goto LAB_002716de;
    }
    pcVar11 = "HPM in ADFU in OTA stage2";
LAB_002714af:
    _puts(pcVar11);
  }
  else {
    if ((*(int *)((long)param_1 + 0x6c) == 0) && (*(char *)(param_1 + 0xd) == '\0')) {
      if (_inRestore == '\x01') {
        _puts("WARNING: HPM in ADFU in Unknown Mode and force_dfu not set");
      }
      else {
        _uarpLogError(3,"WARNING: HPM in ADFU in Unknown Mode and force_dfu not set\n");
      }
    }
    if (*(int *)((long)param_1 + 0x6c) != 3) {
      if (_inRestore == '\0') {
        _uarpLogError(3,"Performing ramdisk, ADFU detected\n");
      }
      else {
        _puts("Performing ramdisk, ADFU detected");
      }
      uVar6 = _flash();
      if ((uVar6 == 0) && (uVar6 = _wait_for_mode(*param_1,0x41505020,1,0), uVar6 == 0)) {
        local_68[0] = 0;
        local_68[1] = 0;
        local_68[2] = 0;
        local_68[3] = 0;
        local_58 = (long *)0x0;
        uVar6 = (**(code **)(*(long *)*param_1 + 0x28))
                          ((long *)*param_1,0,0x2d,local_68,4,0,&local_58);
        uVar12 = (ulong)uVar6;
        if (uVar6 == 0) {
          if ((local_68[1] & 7) != 1) {
            if ((_inRestore == '\x01') && ((_logLevel & 2) != 0)) {
              _printf("Unexpected boot source after ADF* update: 0x%x\n",(ulong)(local_68[1] & 7));
            }
            else {
              _uarpLogInfo(3,"Unexpected boot source after ADF* update: 0x%x\n");
            }
          }
          *(undefined1 *)(param_1 + 2) = 0;
        }
        goto LAB_00271ef5;
      }
      goto LAB_00271e80;
    }
    if (_inRestore != '\0') {
      pcVar11 = "HPM in ADFU in OTA Stage 1";
      goto LAB_002714af;
    }
    pcVar11 = "HPM in ADFU in OTA Stage 1\n";
LAB_002716de:
    _uarpLogError(3,pcVar11);
  }
  uVar12 = 0xe00002e9;
LAB_00271ef5:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

