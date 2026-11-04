// rea decompile_all
// name: FUN_100009627
// address: 0x100009627
// body: available
// range: 0x100009627-0x10000a0f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100009627(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int *piVar12;
  long lVar13;
  byte bVar14;
  int iVar15;
  cfstringStruct *pcVar16;
  char *pcVar17;
  char *pcVar18;
  void *pvVar19;
  undefined1 auVar20 [16];
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined6 uStack_66;
  long *local_60;
  undefined1 local_51;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_42;
  undefined1 local_41;
  void *local_40;
  char local_32;
  byte local_31;
  
  iVar6 = _IOIteratorNext(param_2);
  if (iVar6 != 0) {
    local_78 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    uVar2 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10001c048;
    local_48 = param_2;
    do {
      local_31 = 0;
      local_4c = 0;
      local_7c = 0x5d9;
      local_60 = (long *)0x0;
      pvVar9 = _malloc(0x1e8);
      if (pvVar9 == (void *)0x0) {
        if (1 < DAT_100021030) {
          piVar12 = ___error();
          iVar7 = *piVar12;
          piVar12 = ___error();
          pcVar18 = _strerror(*piVar12);
          FUN_1000008d2(2,0,&cf_Skippingdevicebecauseweareoutofmemory__d__s,iVar7,pcVar18);
          param_2 = param_2;
          goto LAB_100009a92;
        }
      }
      else {
        ___bzero(pvVar9,0x1e8);
        *(undefined4 *)((long)pvVar9 + 0x18) = 1;
        local_40 = pvVar9;
        uVar10 = _CFUUIDGetConstantUUIDWithBytes
                           (0,0x2d,0x97,0x86,0xc6,0x9e,0xf3,0x11,0xd4,0xad,0x51,0,10,0x27,5,0x28,
                            0x61);
        uVar11 = _CFUUIDGetConstantUUIDWithBytes
                           (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6,
                            0x42,0x6f);
        iVar7 = _IOCreatePlugInInterfaceForService(iVar6,uVar10,uVar11,&local_60,&local_7c);
        pvVar9 = local_40;
        param_2 = local_48;
        plVar4 = local_60;
        if (iVar7 == 0) {
          *(undefined4 *)((long)local_40 + 0x160) = 0xf5;
          pcVar3 = *(code **)(*local_60 + 8);
          uVar10 = _CFUUIDGetConstantUUIDWithBytes
                             (0,100,0xba,0xbd,0xd2,0xf,0x6b,0x4b,0x4f,0x8e,0x3e,0xdc,0x36,4,0x69,
                              0x87,0xad);
          auVar20 = _CFUUIDGetUUIDBytes(uVar10);
          puVar1 = (undefined8 *)((long)pvVar9 + 0x158);
          iVar7 = (*pcVar3)(plVar4,auVar20._0_8_,auVar20._8_8_,puVar1);
          plVar4 = local_60;
          if (iVar7 != 0) {
            *(undefined4 *)((long)pvVar9 + 0x160) = 0xc5;
            pcVar3 = *(code **)(*local_60 + 8);
            uVar10 = _CFUUIDGetConstantUUIDWithBytes
                               (0,0x8f,0xdb,0x84,0x55,0x74,0xa6,0x11,0xd6,0x97,0xb1,0,0x30,0x65,0xd3
                                ,0x60,0x8e);
            auVar20 = _CFUUIDGetUUIDBytes(uVar10);
            iVar7 = (*pcVar3)(plVar4,auVar20._0_8_,auVar20._8_8_,puVar1);
            if (iVar7 != 0) {
              if (2 < DAT_100021030) {
                FUN_1000008d2(3,0,&cf_Ignoredinterface_QueryInterfacefailed_0x_x,iVar7);
              }
              _free(pvVar9);
              param_2 = local_48;
              goto LAB_100009a92;
            }
          }
          _IODestroyPlugInInterface(local_60);
          local_60 = (long *)0x0;
          *(long *)((long)pvVar9 + 0x1d8) = (long)pvVar9 + 0x1d0;
          uVar8 = FUN_100000d27();
          *(undefined4 *)((long)pvVar9 + 0x188) = uVar8;
          *(undefined4 *)((long)pvVar9 + 0x1e0) = DAT_1000212a0;
          *(undefined4 *)((long)pvVar9 + 0x1e4) = DAT_1000212a4;
          uVar10 = FUN_1000094c2();
          iVar7 = _IOServiceAddInterestNotification
                            (uVar10,iVar6,"IOGeneralInterest",FUN_10000a2ac,pvVar9,
                             (undefined4 *)((long)pvVar9 + 0x150));
          pvVar19 = local_40;
          if (iVar7 == 0) {
            if (6 < DAT_100021030) {
              FUN_1000008d2(7,0,&cf__sIOServiceAddInterestNotificationcreated0x_x,"AddNewInterface",
                            *(undefined4 *)((long)pvVar9 + 0x150));
            }
            iVar7 = (**(code **)(*(long *)*puVar1 + 0xa8))();
            pvVar19 = local_40;
            if (iVar7 == 0) {
              if (6 < DAT_100021030) {
                FUN_1000008d2(7,0,&cf__sgotdevice0x_xfrominterface,"AddNewInterface",local_4c);
              }
              iVar7 = _IORegistryEntryCreateCFProperties(local_4c,&local_68,local_78,0);
              if (iVar7 == 0) {
                lVar13 = _CFDictionaryGetValue(CONCAT62(uStack_66,local_68));
                pvVar9 = local_40;
                *(long *)((long)local_40 + 0x138) = lVar13;
                if (lVar13 == 0) {
                  iVar7 = -1;
LAB_100009c14:
                  _CFRelease(CONCAT62(uStack_66,local_68));
                  goto LAB_100009c24;
                }
                _CFRetain(lVar13);
                pcVar18 = (char *)((long)pvVar9 + 0x30);
                cVar5 = _CFStringGetCString(lVar13,pcVar18,0x100,0);
                if (cVar5 == '\0') {
                  iVar7 = -2;
                  goto LAB_100009c14;
                }
                _CFRelease(CONCAT62(uStack_66,local_68));
                FUN_100011123(pcVar18);
                iVar7 = (**(code **)(*(long *)*puVar1 + 0x40))();
                pvVar19 = local_40;
                if (iVar7 != 0) {
                  if (2 < DAT_100021030) {
                    uVar10 = FUN_100008d22(local_40);
                    uVar11 = FUN_100000d8c(iVar7);
                    pcVar16 = &cf_USBInterfaceOpenfailedfor_s__s;
                    goto LAB_100009a78;
                  }
                  goto LAB_100009a82;
                }
                iVar7 = (**(code **)(**(long **)((long)local_40 + 0x158) + 0xa0))();
                if (iVar7 != 0) {
                  if (2 < DAT_100021030) {
                    uVar10 = FUN_100008d22(pvVar19);
                    uVar11 = FUN_100000d8c(iVar7);
                    pcVar16 = &cf_GetLocationIDfailedfor_s__s;
                    goto LAB_100009a78;
                  }
                  goto LAB_100009a82;
                }
                local_50 = *(undefined4 *)((long)pvVar19 + 0x188);
                iVar7 = _strcmp(pcVar18,"ffffffffffffffffffffffffffffffffffffffff");
                pcVar17 = pcVar18;
                if (iVar7 == 0) {
                  pcVar17 = "(NoSerial)";
                }
                uVar10 = _CFStringCreateWithFormat
                                   (local_78,0,&cf__d__s___x,local_50,pcVar17,
                                    *(undefined4 *)((long)pvVar19 + 0x18c));
                *(undefined8 *)((long)pvVar19 + 0x28) = uVar10;
                iVar7 = (**(code **)(**(long **)((long)pvVar19 + 0x158) + 0x1b0))
                                  (*(long **)((long)pvVar19 + 0x158),(int *)((long)pvVar19 + 400));
                iVar15 = 2;
                if (iVar7 == 0) {
                  iVar15 = (*(int *)((long)pvVar19 + 400) != 1000) + 1;
                }
                *(int *)((long)pvVar19 + 400) = iVar15;
                uVar8 = FUN_10000a2ff(pvVar19,local_4c);
                *(undefined4 *)((long)pvVar19 + 0x1a0) = uVar8;
                iVar7 = (**(code **)(**(long **)((long)pvVar19 + 0x158) + 0x98))();
                pvVar19 = local_40;
                if (iVar7 != 0) {
                  if (2 < DAT_100021030) {
                    uVar10 = FUN_100008d22(local_40);
                    uVar11 = FUN_100000d8c(iVar7);
                    pcVar16 = &cf_GetNumEndpointsfor_sfailed__s;
                    goto LAB_100009a78;
                  }
                  goto LAB_100009a82;
                }
                if (local_31 != 0) {
                  bVar14 = 1;
                  do {
                    local_50 = CONCAT31(local_50._1_3_,bVar14);
                    local_70 = CONCAT44(local_70._4_4_,(uint)bVar14);
                    iVar7 = (**(code **)(*(long *)*puVar1 + 0xd0))
                                      ((long *)*puVar1,bVar14,&local_32,&local_42,&local_41,
                                       &local_68,&local_51);
                    if (iVar7 != 0) {
                      pvVar19 = local_40;
                      if (2 < DAT_100021030) {
                        pcVar16 = &cf_GetPipePropertiesfor_sfailed__s;
LAB_10000a03f:
                        pvVar19 = local_40;
                        uVar10 = FUN_100008d22(local_40);
                        uVar11 = FUN_100000d8c(iVar7);
                        FUN_1000008d2(3,0,pcVar16,uVar10,uVar11);
                      }
                      goto LAB_100009a82;
                    }
                    iVar7 = (**(code **)(*(long *)*puVar1 + 0x180))
                                      ((long *)*puVar1,0,local_42,local_32,&local_41,&local_68,
                                       &local_51);
                    if (iVar7 != 0) {
                      pvVar19 = local_40;
                      if (2 < DAT_100021030) {
                        pcVar16 = &cf_GetEndpointPropertiesfor_sfailed__s;
                        goto LAB_10000a03f;
                      }
                      goto LAB_100009a82;
                    }
                    if (local_32 == '\x01') {
                      *(char *)((long)local_40 + 0x178) = (char)local_70;
                      *(undefined2 *)((long)local_40 + 0x17a) = local_68;
                      iVar7 = FUN_100008d87();
                      if ((iVar7 != 0) && (2 < DAT_100021030)) {
                        pcVar16 = &cf_MuxClearPipeStalloninputpipefor_sfailed__s;
LAB_100009eaa:
                        local_70 = FUN_100008d22(local_40);
                        uVar10 = FUN_100000d8c(iVar7);
                        FUN_1000008d2(3,0,pcVar16,local_70,uVar10);
                      }
                    }
                    else if (local_32 == '\0') {
                      *(char *)((long)local_40 + 0x179) = (char)local_70;
                      *(undefined2 *)((long)local_40 + 0x17c) = local_68;
                      iVar7 = FUN_100008d87();
                      if ((iVar7 != 0) && (2 < DAT_100021030)) {
                        pcVar16 = &cf_MuxClearPipeStallonoutputpipefor_sfailed__s;
                        goto LAB_100009eaa;
                      }
                    }
                    bVar14 = (char)local_50 + 1;
                  } while (bVar14 <= local_31);
                }
                pvVar19 = local_40;
                iVar7 = (**(code **)(**(long **)((long)local_40 + 0x158) + 0x70))();
                if (iVar7 != 0) {
                  if (2 < DAT_100021030) {
                    uVar10 = FUN_100008d22(pvVar19);
                    uVar11 = FUN_100000d8c(iVar7);
                    pcVar16 = &cf_GetDeviceProductfor_sfailed__s;
                    goto LAB_100009a78;
                  }
                  goto LAB_100009a82;
                }
                FUN_10000a426(pvVar19);
                if (*(long *)((long)pvVar19 + 0x198) != 0) {
                  _CFStringGetCString(*(long *)((long)pvVar19 + 0x198),pcVar18,0x100,0);
                  if (*(long *)((long)pvVar19 + 0x28) != 0) {
                    _CFRelease();
                    *(undefined8 *)((long)pvVar19 + 0x28) = 0;
                  }
                  uVar10 = _CFStringCreateWithFormat
                                     (local_78,0,&cf__d__s___x,
                                      *(undefined4 *)((long)pvVar19 + 0x188),pcVar18,
                                      *(undefined4 *)((long)pvVar19 + 0x18c));
                  *(undefined8 *)((long)pvVar19 + 0x28) = uVar10;
                }
                FUN_100008f9b(pvVar19);
                iVar7 = (**(code **)(**(long **)((long)pvVar19 + 0x158) + 0x20))();
                if (iVar7 != 0) {
                  if (2 < DAT_100021030) {
                    uVar10 = FUN_100008d22(pvVar19);
                    uVar11 = FUN_100000d8c(iVar7);
                    pcVar16 = &cf_CreateInterfaceAsyncEventSourcefor_sfailed__s;
                    goto LAB_100009a78;
                  }
                  goto LAB_100009a82;
                }
                uVar10 = _CFRunLoopGetCurrent();
                _CFRunLoopAddSource(uVar10,*(undefined8 *)((long)pvVar19 + 0x20),uVar2);
                iVar7 = FUN_10000a61c(pvVar19);
                if (DAT_100021030 < 3 || iVar7 == 0) {
                  param_2 = local_48;
                  if (iVar7 == 0) goto LAB_100009a92;
                  goto LAB_100009a82;
                }
                uVar10 = FUN_100008d22(pvVar19);
                uVar11 = FUN_100000d8c(iVar7);
                pcVar16 = &cf_MuxInterfaceVersionSendfor_sfailed__s;
              }
              else {
                if (3 < DAT_100021030) {
                  uVar10 = FUN_100000d8c(iVar7);
                  FUN_1000008d2(4,0,&cf__sIORegistryEntryCreateCFPropertiesreturned_s,
                                "GetDeviceSerialNumber",uVar10);
                }
LAB_100009c24:
                pvVar19 = local_40;
                if (DAT_100021030 < 3) goto LAB_100009a82;
                uVar10 = FUN_100008d22(local_40);
                uVar11 = FUN_100000d8c(iVar7);
                pcVar16 = &cf_GetDeviceSerialNumberfailedfor_s__s;
              }
LAB_100009a78:
              FUN_1000008d2(3,0,pcVar16,uVar10,uVar11);
            }
            else if (2 < DAT_100021030) {
              uVar10 = FUN_100008d22(local_40);
              uVar11 = FUN_100000d8c(iVar7);
              pcVar16 = &cf_GetDevicefailedfor_s__s;
              goto LAB_100009a78;
            }
          }
          else if (2 < DAT_100021030) {
            uVar10 = FUN_100008d22(local_40);
            uVar11 = FUN_100000d8c(iVar7);
            pcVar16 = &cf_IOServiceAddInterestNotificationfaileddevice_s__s;
            goto LAB_100009a78;
          }
LAB_100009a82:
          FUN_100008fdb(pvVar19);
          param_2 = local_48;
        }
        else {
          if (2 < DAT_100021030) {
            uVar10 = FUN_100000d8c(iVar7);
            FUN_1000008d2(3,0,&cf_Ignoredinterface_IOCreatePlugInInterfaceForServicefailed__s,uVar10
                         );
          }
          _free(pvVar9);
        }
LAB_100009a92:
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,0,&cf__s__dIOObjectRelease_0x_x_,"FoundNewInterfaces",0x8ba,iVar6);
        }
      }
      _IOObjectRelease(iVar6);
      iVar6 = _IOIteratorNext(param_2);
    } while (iVar6 != 0);
  }
  return;
}

