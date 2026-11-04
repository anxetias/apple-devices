// rea decompile_all
// name: FUN_10000ba66
// address: 0x10000ba66
// body: available
// range: 0x10000ba66-0x10000c241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000c23d to 0x100013425 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000ba66(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  code *pcVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  char *pcVar15;
  cfstringStruct *pcVar16;
  byte bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined8 local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  socklen_t local_6c;
  long *local_68;
  undefined1 local_5c;
  undefined1 local_5b;
  ushort local_5a;
  uint local_58;
  undefined4 local_54;
  long *local_50;
  sockaddr local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10001c070;
  iVar5 = _IOIteratorNext(param_2);
  if (iVar5 != 0) {
    local_80 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    local_78 = *(undefined8 *)PTR__kCFRunLoopCommonModes_10001c040;
    local_54 = param_2;
    do {
      plVar8 = _malloc(0x38);
      if (plVar8 == (long *)0x0) {
        if (2 < DAT_100021030) {
          FUN_1000008d2(3,0,&cf_failedtoallocatestoragetotrackattachedkdpdevice);
          goto LAB_10000bcae;
        }
      }
      else {
        plVar8[4] = 0;
        plVar8[5] = 0;
        plVar8[2] = 0;
        plVar8[3] = 0;
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[6] = 0;
        puVar9 = _malloc(0x800);
        plVar8[5] = (long)puVar9;
        pvVar10 = _malloc(0x800);
        plVar8[4] = (long)pvVar10;
        if (puVar9 == (undefined8 *)0x0 || pvVar10 == (void *)0x0) {
          if (2 < DAT_100021030) {
            FUN_1000008d2(3,0,&cf_failedtoallocatebuffers);
          }
        }
        else {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
          puVar9[3] = 0;
          *(undefined8 *)((long)puVar9 + 0x1a) = 0;
          *(undefined8 *)((long)puVar9 + 0x22) = 0;
          *(undefined1 *)((long)puVar9 + 5) = 1;
          *(undefined1 *)((long)puVar9 + 0xb) = 2;
          *(undefined2 *)((long)puVar9 + 0xc) = 2;
          *(undefined1 *)((long)puVar9 + 0xe) = 0x45;
          *(undefined1 *)((long)puVar9 + 0x17) = 0x11;
          *(undefined4 *)((long)puVar9 + 0x1e) = 0x1010101;
          *(undefined2 *)((long)puVar9 + 0x24) = 0xb3a0;
          local_68 = (long *)0x0;
          local_70 = 0x5d9;
          local_50 = plVar8;
          uVar11 = _CFUUIDGetConstantUUIDWithBytes
                             (0,0x2d,0x97,0x86,0xc6,0x9e,0xf3,0x11,0xd4,0xad,0x51,0,10,0x27,5,0x28,
                              0x61);
          uVar12 = _CFUUIDGetConstantUUIDWithBytes
                             (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,
                              0x42,0x6f);
          iVar6 = _IOCreatePlugInInterfaceForService(iVar5,uVar11,uVar12,&local_68,&local_70);
          plVar8 = local_50;
          param_2 = local_54;
          plVar3 = local_68;
          if (iVar6 == 0) {
            pcVar2 = *(code **)(*local_68 + 8);
            uVar11 = _CFUUIDGetConstantUUIDWithBytes
                               (0,100,0xba,0xbd,0xd2,0xf,0x6b,0x4b,0x4f,0x8e,0x3e,0xdc,0x36,4,0x69,
                                0x87,0xad);
            auVar19 = _CFUUIDGetUUIDBytes(uVar11);
            plVar8 = local_50;
            plVar1 = local_50 + 1;
            iVar6 = (*pcVar2)(plVar3,auVar19._0_8_,auVar19._8_8_,plVar1);
            if (iVar6 != 0) {
              if (2 < DAT_100021030) {
                FUN_1000008d2(3,0,&
                                  cf_Ignoredinterface_couldn_tget3_0_0interface_probablynotrunning10_5orlater
                             );
              }
              _IODestroyPlugInInterface(local_68);
              FUN_10000c242(plVar8);
              param_2 = local_54;
              goto LAB_10000bcae;
            }
            _IODestroyPlugInInterface(local_68);
            uVar11 = FUN_1000094c2();
            iVar6 = _IOServiceAddInterestNotification
                              (uVar11,iVar5,"IOGeneralInterest",FUN_10000c337,plVar8,plVar8 + 2);
            if (iVar6 == 0) {
              *plVar8 = 0;
              local_a8 = 0;
              local_88 = 0;
              local_98 = 0;
              uStack_90 = 0;
              plStack_a0 = plVar8;
              lVar13 = _CFSocketCreate(local_80,2,2,0,1,FUN_10000c3e1,&local_a8);
              param_2 = local_54;
              *plVar8 = lVar13;
              if (lVar13 != 0) {
                iVar6 = _CFSocketGetNative(lVar13);
                local_58 = 0;
                iVar7 = _ioctl(iVar6,0x8004667e,&local_58);
                if (iVar7 == 0) {
                  local_48.sa_len = '\x10';
                  local_48.sa_family = '\x02';
                  local_48.sa_data[0] = -0x60;
                  local_48.sa_data[1] = -0x4d;
                  local_48.sa_data[2] = '\0';
                  local_48.sa_data[3] = '\0';
                  local_48.sa_data[4] = '\0';
                  local_48.sa_data[5] = '\0';
                  local_48.sa_data[6] = '\0';
                  local_48.sa_data[7] = '\0';
                  local_48.sa_data[8] = '\0';
                  local_48.sa_data[9] = '\0';
                  local_48.sa_data[10] = '\0';
                  local_48.sa_data[0xb] = '\0';
                  local_48.sa_data[0xc] = '\0';
                  local_48.sa_data[0xd] = '\0';
                  iVar7 = _bind(iVar6,&local_48,0x10);
                  if (iVar7 == 0) {
LAB_10000bf4c:
                    local_6c = 0x10;
                    iVar6 = _getsockname(iVar6,&local_48,&local_6c);
                    uVar11 = local_48._0_8_;
                    plVar8 = local_50;
                    if (iVar6 == 0) {
                      local_5a._0_1_ = local_48.sa_data[0];
                      local_5a._1_1_ = local_48.sa_data[1];
                      local_48._0_8_ = uVar11;
                      _CFSocketSetSocketFlags(*local_50,0x80);
                      uVar11 = _CFSocketCreateRunLoopSource(local_80,*plVar8,0);
                      uVar12 = _CFRunLoopGetCurrent();
                      _CFRunLoopAddSource(uVar12,uVar11,local_78);
                      plVar8 = local_50;
                      _CFRelease(uVar11);
                      iVar6 = (**(code **)(*(long *)plVar8[1] + 0x40))();
                      if (iVar6 == 0) {
                        local_48._0_8_ = local_48._0_8_ & 0xffffffffffffff00;
                        (**(code **)(*(long *)*plVar1 + 0x98))();
                        uVar4 = local_5a;
                        if (local_48.sa_len != '\0') {
                          bVar17 = 1;
                          do {
                            iVar6 = (**(code **)(*(long *)*plVar1 + 0xd0))
                                              ((long *)*plVar1,bVar17,&local_58,&local_6c,&local_5c,
                                               &local_a8,&local_5b);
                            if (iVar6 != 0) {
                              plVar8 = local_50;
                              if (DAT_100021030 < 3) goto LAB_10000bca9;
                              pcVar16 = &cf_GetPipePropertiesfailed_0x_x;
                              goto LAB_10000c1a5;
                            }
                            if ((local_58 & 0xff) == 1) {
                              *(byte *)((long)local_50 + 0x35) = bVar17;
                              *(undefined2 *)((long)local_50 + 0x32) = (undefined2)local_a8;
                            }
                            else if ((local_58 & 0xff) == 0) {
                              *(byte *)((long)local_50 + 0x34) = bVar17;
                              *(undefined2 *)(local_50 + 6) = (undefined2)local_a8;
                            }
                            bVar18 = bVar17 < local_48.sa_len;
                            bVar17 = bVar17 + 1;
                          } while (bVar18);
                        }
                        plVar8 = local_50;
                        if ((*(char *)((long)local_50 + 0x34) == '\0') ||
                           (*(char *)((long)local_50 + 0x35) == '\0')) {
                          if (2 < DAT_100021030) {
                            pcVar15 = "in pipe";
                            if (*(char *)((long)local_50 + 0x34) == '\0') {
                              pcVar15 = "out pipe";
                            }
                            FUN_1000008d2(3,0,&cf__snotfound,pcVar15);
                          }
                        }
                        else {
                          plVar8 = local_50 + 3;
                          iVar6 = (**(code **)(*(long *)local_50[1] + 0x20))();
                          if (iVar6 == 0) {
                            uVar11 = _CFRunLoopGetCurrent();
                            _CFRunLoopAddSource(uVar11,*plVar8,local_78);
                            if (2 < DAT_100021030) {
                              pcVar15 = " non-standard port";
                              if (uVar4 == 0xb3a0) {
                                pcVar15 = "";
                              }
                              FUN_1000008d2(3,0,&cf_panicdevicewaitingonport_d_s,
                                            uVar4 << 8 | uVar4 >> 8,pcVar15);
                            }
                            FUN_10000c378(local_50);
                            goto LAB_10000bcae;
                          }
                          plVar8 = local_50;
                          if (2 < DAT_100021030) {
                            pcVar16 = &cf_CreateInterfaceAsyncEventSourcefailed_0x_x;
LAB_10000c1a5:
                            FUN_1000008d2(3,0,pcVar16,iVar6);
                            plVar8 = local_50;
                          }
                        }
                      }
                      else if (2 < DAT_100021030) {
                        pcVar16 = &cf_USBInterfaceOpenfailed_0x_x;
                        goto LAB_10000be05;
                      }
                      goto LAB_10000bca9;
                    }
                    if (2 < DAT_100021030) {
                      piVar14 = ___error();
                      iVar6 = *piVar14;
                      piVar14 = ___error();
                      pcVar15 = _strerror(*piVar14);
                      pcVar16 = &cf_getsocknamefailed__d__s;
                      goto LAB_10000bf98;
                    }
                  }
                  else {
                    piVar14 = ___error();
                    if (*piVar14 == 0x30) {
                      local_48.sa_data[0] = '\0';
                      local_48.sa_data[1] = '\0';
                      iVar7 = _bind(iVar6,&local_48,0x10);
                      if (iVar7 == 0) goto LAB_10000bf4c;
                    }
                    if (2 < DAT_100021030) {
                      piVar14 = ___error();
                      iVar6 = *piVar14;
                      piVar14 = ___error();
                      pcVar15 = _strerror(*piVar14);
                      pcVar16 = &cf_bindfailed__d__s;
                      goto LAB_10000bf98;
                    }
                  }
                }
                else if (2 < DAT_100021030) {
                  piVar14 = ___error();
                  iVar6 = *piVar14;
                  piVar14 = ___error();
                  pcVar15 = _strerror(*piVar14);
                  pcVar16 = &cf_ioctlFIONBIOfailed__d__s;
LAB_10000bf98:
                  FUN_1000008d2(3,0,pcVar16,iVar6,pcVar15);
                }
                plVar8 = local_50;
                if (*local_50 != 0) {
                  _CFSocketInvalidate();
                  _CFRelease(*plVar8);
                  *plVar8 = 0;
                }
              }
              if (2 < DAT_100021030) {
                FUN_1000008d2(3,0,&cf_Failedtocreateudplisteningport);
              }
            }
            else {
              param_2 = local_54;
              if (DAT_100021030 < 3) goto LAB_10000bca9;
              pcVar16 = &cf_ignoringinterface_can_tsetupinterestnotifications_0x_x;
LAB_10000be05:
              FUN_1000008d2(3,0,pcVar16,iVar6);
            }
          }
          else {
            if (2 < DAT_100021030) {
              FUN_1000008d2(3,0,&cf_Ignoredinterface_IOCreatePlugInInterfaceForServicefailed_0x_x,
                            iVar6);
            }
            _IODestroyPlugInInterface(local_68);
          }
        }
LAB_10000bca9:
        FUN_10000c242(plVar8);
LAB_10000bcae:
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,0,&cf__s__dIOObjectRelease_0x_x_,"KDPInterfacesFound",0x1d6,iVar5);
        }
      }
      _IOObjectRelease(iVar5);
      iVar5 = _IOIteratorNext(param_2);
    } while (iVar5 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10001c070 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

