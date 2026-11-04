// rea decompile_all
// name: _deviceWithService
// address: 0x2f54f
// body: available
// range: 0x2f54f-0x2fa16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * _deviceWithService(ulong param_1)

{
  ushort uVar1;
  short sVar2;
  code *pcVar3;
  byte *pbVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  byte bVar14;
  undefined1 auVar15 [16];
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar16;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar18;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar20;
  ulong in_stack_ffffffffffffff70;
  ulong uVar21;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar22;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar23;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar24;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar25;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar26;
  undefined1 local_54 [4];
  short *local_50;
  int *local_48;
  long *local_40;
  undefined4 local_38;
  char local_31;
  
  uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff48 >> 0x20);
  uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff60 >> 0x20);
  uVar20 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  uVar22 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar23 = (undefined4)((ulong)in_stack_ffffffffffffff80 >> 0x20);
  uVar24 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  uVar25 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  uVar26 = (undefined4)((ulong)in_stack_ffffffffffffff98 >> 0x20);
  uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff50 >> 0x20);
  uVar18 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  local_40 = (long *)0x0;
  if ((int)param_1 != 0) {
    iVar6 = _IOObjectConformsTo(param_1,"IOUSBDevice");
    if ((iVar6 != 0) && (puVar8 = _calloc(1,0x40), puVar8 != (undefined4 *)0x0)) {
      *puVar8 = 1;
      *(undefined **)(puVar8 + 0xc) = &_usbDFUDeviceFunctions;
      local_48 = _calloc(1,0x50);
      if (local_48 != (int *)0x0) {
        *(int **)(puVar8 + 10) = local_48;
        *local_48 = (int)param_1;
        _IOObjectRetain(param_1 & 0xffffffff);
        uVar9 = _CFUUIDGetConstantUUIDWithBytes
                          (0,0x9d,199,0xb7,0x80,0x9e,CONCAT44(uVar16,0xc0),CONCAT44(uVar17,0x11),
                           CONCAT44(uVar18,0xd4),CONCAT44(uVar19,0xa5),CONCAT44(uVar20,0x4f),
                           in_stack_ffffffffffffff70 & 0xffffffff00000000,CONCAT44(uVar22,10),
                           CONCAT44(uVar23,0x27),CONCAT44(uVar24,5),CONCAT44(uVar25,0x28),
                           CONCAT44(uVar26,0x61));
        uVar26 = 0;
        uVar25 = 0;
        uVar24 = 0;
        uVar23 = 0;
        uVar22 = 0;
        uVar21 = 0;
        uVar20 = 0;
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0;
        uVar16 = 0;
        uVar10 = _CFUUIDGetConstantUUIDWithBytes
                           (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,
                            0x42,0x6f);
        iVar6 = _IOCreatePlugInInterfaceForService
                          (param_1 & 0xffffffff,uVar9,uVar10,&local_40,local_54);
        plVar5 = local_40;
        if (iVar6 == 0) {
          pcVar3 = *(code **)(*local_40 + 8);
          uVar9 = _CFUUIDGetConstantUUIDWithBytes
                            (0,0x5c,0x81,0x87,0xd0,0x9e,CONCAT44(uVar16,0xf3),CONCAT44(uVar17,0x11),
                             CONCAT44(uVar18,0xd4),CONCAT44(uVar19,0x8b),CONCAT44(uVar20,0x45),
                             uVar21 & 0xffffffff00000000,CONCAT44(uVar22,10),CONCAT44(uVar23,0x27),
                             CONCAT44(uVar24,5),CONCAT44(uVar25,0x28),CONCAT44(uVar26,0x61));
          auVar15 = _CFUUIDGetUUIDBytes(uVar9);
          iVar6 = (*pcVar3)(plVar5,auVar15._0_8_,auVar15._8_8_,local_48 + 2);
          _IODestroyPlugInInterface(local_40);
          local_40 = (long *)0x0;
          if (((iVar6 == 0) && (lVar12 = *(long *)(puVar8 + 10), lVar12 != 0)) &&
             (iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0xa0))
                                (*(long **)(lVar12 + 8),puVar8 + 8), iVar6 == 0)) {
            local_50 = (short *)(puVar8 + 9);
            iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0x68))();
            if (((iVar6 == 0) &&
                (iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0x70))
                                   (*(long **)(lVar12 + 8),(long)puVar8 + 0x26), iVar6 == 0)) &&
               ((iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0x110))
                                   (*(long **)(lVar12 + 8),&local_31), iVar6 == 0 &&
                (local_31 != '\0')))) {
              lVar11 = _usbDFU_copyStringDescriptor(puVar8,local_31);
              *(long *)(puVar8 + 2) = lVar11;
              if (((lVar11 != 0) &&
                  (iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0x118))
                                     (*(long **)(lVar12 + 8),&local_31), iVar6 == 0)) &&
                 (local_31 != '\0')) {
                lVar11 = _usbDFU_copyStringDescriptor(puVar8,local_31);
                *(long *)(puVar8 + 4) = lVar11;
                if (((lVar11 != 0) &&
                    (iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0x120))
                                       (*(long **)(lVar12 + 8),&local_31), iVar6 == 0)) &&
                   (local_31 != '\0')) {
                  lVar12 = _usbDFU_copyStringDescriptor(puVar8,local_31);
                  *(long *)(puVar8 + 6) = lVar12;
                  if ((lVar12 != 0) && (lVar12 = *(long *)(puVar8 + 10), lVar12 != 0)) {
                    iVar6 = (**(code **)(**(long **)(lVar12 + 8) + 0xa8))
                                      (*(long **)(lVar12 + 8),0,(undefined8 *)(lVar12 + 0x10));
                    if (iVar6 == 0) {
                      pbVar4 = *(byte **)(lVar12 + 0x10);
                      pbVar13 = pbVar4 + *pbVar4;
                      uVar1 = *(ushort *)(pbVar4 + 2);
                      if (pbVar13 < pbVar4 + uVar1) {
                        bVar14 = 0;
                        local_38 = 0;
                        do {
                          if (pbVar13[1] == 0x21) {
                            *(byte **)(lVar12 + 0x20) = pbVar13;
                            if ((*local_50 == 0x5ac) &&
                               (iVar6 = _strcmp("Apple Mobile Device (DFU Mode)",
                                                *(char **)(puVar8 + 4)), iVar6 == 0)) {
                              *(undefined **)(lVar12 + 0x20) = &_appleDFUDescriptorOverride;
                            }
                            if ((*(long *)(puVar8 + 10) == 0) ||
                               (lVar11 = *(long *)(*(long *)(puVar8 + 10) + 0x20), lVar11 == 0))
                            goto LAB_0002fa0b;
                            sVar2 = *(short *)(lVar11 + 7);
                            bVar14 = 1;
                            if ((sVar2 != 0x11a) && (sVar2 != 0x110)) goto LAB_0002fa0b;
                          }
                          else if (((pbVar13[1] == 4) && (pbVar13[5] == 0xfe)) && (pbVar13[6] == 1))
                          {
                            if (pbVar13[7] == 1) {
                              *(undefined1 *)(lVar12 + 0x40) = 1;
                              uVar21 = 0;
                            }
                            else {
                              uVar21 = 0;
                              if (1 < (byte)(pbVar13[7] - 1)) {
                                if (*local_50 == 0x5ac) {
                                  uVar7 = _strcmp("Apple Mobile Device (DFU Mode)",
                                                  *(char **)(puVar8 + 4));
                                  uVar21 = (ulong)uVar7;
                                  if (uVar7 == 0) goto LAB_0002f99a;
                                }
                                goto LAB_0002f9aa;
                              }
                            }
LAB_0002f99a:
                            local_38 = (undefined4)CONCAT71((int7)(uVar21 >> 8),1);
                            if (*(long *)(lVar12 + 0x18) == 0) {
                              *(byte **)(lVar12 + 0x18) = pbVar13;
                            }
                          }
LAB_0002f9aa:
                          pbVar13 = pbVar13 + *pbVar13;
                        } while (pbVar13 < pbVar4 + uVar1);
                        if (((byte)local_38 & bVar14) != 0) {
                          if (((*(long *)(puVar8 + 10) != 0) &&
                              (lVar12 = *(long *)(*(long *)(puVar8 + 10) + 0x20), lVar12 != 0)) &&
                             (*(short *)(lVar12 + 7) == 0x11a)) {
                            _stmDFU_parseConfiguration(puVar8);
                          }
                          local_48[10] = 0;
                          _clock_gettime(0,local_48 + 0xc);
                          return puVar8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0002fa0b:
      _libDFU_release(puVar8);
    }
  }
  return (undefined4 *)0x0;
}

