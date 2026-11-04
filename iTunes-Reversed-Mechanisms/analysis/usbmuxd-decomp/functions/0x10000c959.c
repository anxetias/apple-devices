// rea decompile_all
// name: FUN_10000c959
// address: 0x10000c959
// body: available
// range: 0x10000c959-0x10000cf32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000c959(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  cfstringStruct *pcVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined8 local_88;
  int *piStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  long *local_40;
  int *local_38;
  
  local_44 = param_2;
  iVar5 = _IOIteratorNext(param_2);
  if (iVar5 != 0) {
    local_60 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
    local_50 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10001c048;
    do {
      local_48 = 0x5d9;
      local_40 = (long *)0x0;
      piVar8 = _malloc(0x40);
      if (piVar8 == (int *)0x0) {
        if (1 < DAT_100021030) {
          piVar8 = ___error();
          iVar6 = *piVar8;
          piVar8 = ___error();
          pcVar12 = _strerror(*piVar8);
          uVar10 = 2;
          pcVar13 = &cf_Skippingdevicebecauseweareoutofmemory__d__s;
LAB_10000cb89:
          FUN_1000008d2(uVar10,0,pcVar13,iVar6,pcVar12);
          goto LAB_10000cc6f;
        }
      }
      else {
        piVar8[0] = 0;
        piVar8[1] = 0;
        piVar8[2] = 0;
        piVar8[3] = 0;
        piVar8[0xc] = 0;
        piVar8[0xd] = 0;
        piVar8[0xe] = 0;
        piVar8[0xf] = 0;
        piVar8[8] = 0;
        piVar8[9] = 0;
        piVar8[10] = 0;
        piVar8[0xb] = 0;
        piVar8[4] = 0;
        piVar8[5] = 0;
        piVar8[6] = 0;
        piVar8[7] = 0;
        *(char *)((long)piVar8 + 6) = '\x01';
        iVar6 = _IOObjectRetain(iVar5);
        if (iVar6 == 0) {
          piVar8[4] = iVar5;
          local_88 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          piStack_80 = piVar8;
          dVar14 = (double)_CFAbsoluteTimeGetCurrent();
          lVar9 = _CFRunLoopTimerCreate(dVar14 + 315360000.0,local_60,0,0,FUN_10000cf33,&local_88);
          *(long *)(piVar8 + 10) = lVar9;
          if (lVar9 == 0) {
            if (2 < DAT_100021030) {
              FUN_1000008d2(3,0,&cf_CFRunLoopTimerCreatefailed);
            }
          }
          else {
            local_38 = piVar8;
            uVar10 = _CFRunLoopGetCurrent();
            _CFRunLoopAddTimer(uVar10,*(undefined8 *)(piVar8 + 10),local_50);
            uVar10 = _CFUUIDGetConstantUUIDWithBytes
                               (0,0x9d,199,0xb7,0x80,0x9e,0xc0,0x11,0xd4,0xa5,0x4f,0,10,0x27,5,0x28,
                                0x61);
            uVar11 = _CFUUIDGetConstantUUIDWithBytes
                               (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,0xe4,0xc6
                                ,0x42,0x6f);
            iVar6 = _IOCreatePlugInInterfaceForService(iVar5,uVar10,uVar11,&local_40,&local_48);
            plVar3 = local_40;
            if (iVar6 == 0) {
              local_58 = *(code **)(*local_40 + 8);
              uVar10 = _CFUUIDGetConstantUUIDWithBytes
                                 (0,0x15,0x2f,0xc4,0x96,0x48,0x91,0x11,0xd5,0x9d,0x52,0,10,0x27,0x80
                                  ,0x1e,0x86);
              auVar15 = _CFUUIDGetUUIDBytes(uVar10);
              piVar4 = local_38;
              piVar1 = local_38 + 6;
              iVar6 = (*local_58)(plVar3,auVar15._0_8_,auVar15._8_8_,piVar1);
              if (iVar6 == 0) {
                _IODestroyPlugInInterface(local_40);
                local_40 = (long *)0x0;
                iVar6 = (**(code **)(**(long **)(piVar8 + 6) + 0x20))();
                if (iVar6 == 0) {
                  uVar10 = _CFRunLoopGetCurrent();
                  _CFRunLoopAddSource(uVar10,*(undefined8 *)(piVar8 + 8),local_50);
                  uVar10 = FUN_1000094c2();
                  piVar2 = piVar4 + 3;
                  iVar6 = _IOServiceAddInterestNotification
                                    (uVar10,iVar5,"IOGeneralInterest",FUN_10000cf6e,piVar8,piVar2);
                  if (iVar6 == 0) {
                    if (6 < DAT_100021030) {
                      FUN_1000008d2(7,0,&cf__sIOServiceAddInterestNotificationcreated0x_x,
                                    "AddNewDevice",*piVar2);
                    }
                    local_38 = piVar4 + 0xc;
                    iVar6 = (**(code **)(**(long **)(piVar8 + 6) + 0xa0))();
                    if (iVar6 == 0) {
                      iVar6 = (**(code **)(**(long **)(piVar8 + 6) + 0xb0))();
                      if (iVar6 == 0) {
                        if ((char)*piVar8 == '\x01') {
                          iVar7 = (**(code **)(**(long **)piVar1 + 0xe8))();
                          if (iVar7 != 0) {
                            if (2 < DAT_100021030) {
                              iVar6 = *local_38;
                              pcVar12 = (char *)FUN_100000d8c(iVar7);
                              uVar10 = 3;
                              pcVar13 = &cf_USBDeviceOpen___xfailed__s;
                              goto LAB_10000cb89;
                            }
                            goto LAB_10000cc99;
                          }
                          FUN_10000930a(*local_38);
                          iVar6 = (**(code **)(**(long **)piVar1 + 0xb8))(*(long **)piVar1,0);
                          if (((iVar6 != 0) ||
                              (iVar6 = (**(code **)(**(long **)(piVar8 + 6) + 0xb8))
                                                 (*(long **)(piVar8 + 6),(char)*piVar8), iVar6 != 0)
                              ) && (2 < DAT_100021030)) {
                            iVar6 = piVar8[0xc];
                            iVar7 = *piVar8;
                            uVar10 = FUN_100000d8c(0);
                            FUN_1000008d2(3,0,&cf_SetConfiguration___xto_dfailed__s,iVar6,
                                          (char)iVar7,uVar10);
                          }
                          iVar6 = (**(code **)(**(long **)piVar1 + 0x48))();
                          if ((iVar6 != 0) && (2 < DAT_100021030)) {
                            iVar7 = *local_38;
                            uVar10 = FUN_100000d8c(iVar6);
                            FUN_1000008d2(3,0,&cf_USBDeviceClose___xfailed__s,iVar7,uVar10);
                          }
                        }
                        iVar6 = FUN_10000cfcf(piVar8);
                        if (DAT_100021030 < 3 || iVar6 == 0) {
                          if (iVar6 == 0) goto LAB_10000cc6f;
                        }
                        else {
                          FUN_100011083(local_38);
                        }
                      }
                      else {
                        FUN_100010fef(local_38);
                      }
                    }
                    else {
                      FUN_100011029(iVar6);
                    }
                  }
                  else if (2 < DAT_100021030) {
                    FUN_1000008d2(3,0,&cf_IOServiceAddInterestNotificationfailed_0x_x,iVar6);
                  }
                }
                else {
                  FUN_100011056(iVar6);
                }
                goto LAB_10000cf17;
              }
              if (2 < DAT_100021030) {
                FUN_1000008d2(3,0,&cf_Ignoreddevice_QueryInterfacefailed_0x_x,iVar6);
              }
            }
            else if (2 < DAT_100021030) {
              uVar10 = FUN_100000d8c(iVar6);
              FUN_1000008d2(3,0,&cf_Ignoreddevice_IOCreatePlugInInterfaceForServicefailed__s,uVar10)
              ;
            }
          }
          _free(piVar8);
        }
        else {
LAB_10000cf17:
          FUN_1000110b1(piVar8);
        }
LAB_10000cc6f:
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,0,&cf__s__dIOObjectRelease_0x_x_,"FoundNewDevices",0x292,iVar5);
        }
      }
LAB_10000cc99:
      _IOObjectRelease(iVar5);
      iVar5 = _IOIteratorNext(local_44);
    } while (iVar5 != 0);
  }
  return;
}

