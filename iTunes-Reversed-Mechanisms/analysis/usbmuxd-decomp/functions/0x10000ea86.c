// rea decompile_all
// name: FUN_10000ea86
// address: 0x10000ea86
// body: available
// range: 0x10000ea86-0x10000f0f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000ec0e to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000ec48 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000ee88 to 0x100008fdb FUN_100008fdb (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000ea86(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  cfstringStruct *pcVar13;
  ulong uVar14;
  uint local_38;
  int iStack_34;
  
  if (param_3 == 2) {
    if (DAT_100021030 < 3) {
      return;
    }
    pcVar13 = &cf__sReceived_kUSBMuxBonjourNotificationStopped_action_;
  }
  else {
    if (param_3 != 1) {
      if (param_3 != 0) {
        if (DAT_100021030 < 3) {
          return;
        }
        FUN_1000008d2(3,0,&cf__sReceivedunknownaction_d,"networkDeviceCallback");
        return;
      }
      lVar5 = _CFDictionaryGetValue(param_4,&cf_FullEscapedServiceName);
      if (lVar5 == 0) {
        if (2 < DAT_100021030) {
          lVar8 = 0;
          FUN_1000008d2(3,0,&cf__sSurprisingly_thereisnofullservicename_,"networkDeviceCallback");
          goto LAB_10000ef4f;
        }
      }
      else {
        lVar6 = FUN_100008f5b(lVar5);
        if (lVar6 == 0) {
          pvVar7 = _calloc(1,0x1e8);
          if (pvVar7 != (void *)0x0) {
            *(undefined4 *)((long)pvVar7 + 0x18) = 2;
            uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
            lVar8 = _CFStringCreateCopy(uVar2,lVar5);
            *(long *)((long)pvVar7 + 0x138) = lVar8;
            if (lVar8 == 0) {
              if (2 < DAT_100021030) {
                pcVar13 = &cf__sCouldnotcopyfullservicename_;
                goto LAB_10000ef00;
              }
LAB_10000ef44:
              lVar8 = 0;
            }
            else {
              lVar8 = _CFDictionaryGetValue(param_4,&cf_UniqueDeviceID);
              if (lVar8 == 0) {
LAB_10000eed8:
                if (DAT_100021030 < 3) goto LAB_10000ef44;
                pcVar13 = &cf__sSurprisingly_thereisnoUDID_;
LAB_10000ef00:
                lVar8 = 0;
              }
              else {
                lVar6 = _CFGetTypeID(lVar8);
                lVar9 = _CFStringGetTypeID();
                if (lVar6 != lVar9) goto LAB_10000eed8;
                cVar3 = _CFStringGetCString(lVar8,(long)pvVar7 + 0x30,0x100,0x8000100);
                if (cVar3 == '\0') {
                  if (DAT_100021030 < 3) goto LAB_10000ef44;
                  pcVar13 = &cf__sCouldnotextractUDID_;
                  goto LAB_10000ef00;
                }
                lVar6 = _CFDictionaryGetValue(param_4,&cf_SockaddrStorage);
                if (lVar6 == 0) {
LAB_10000ef1a:
                  if (DAT_100021030 < 3) goto LAB_10000ef44;
                  pcVar13 = &cf__sSurprisingly_thereisnosockaddr_;
                  goto LAB_10000ef00;
                }
                lVar8 = _CFGetTypeID(lVar6);
                lVar9 = _CFDataGetTypeID();
                if (lVar8 != lVar9) goto LAB_10000ef1a;
                lVar8 = FUN_10000e196(lVar6);
                lVar6 = _CFDataCreateCopy(uVar2,lVar6);
                *(long *)((long)pvVar7 + 0x140) = lVar6;
                if (lVar6 != 0) {
                  lVar6 = _CFDictionaryGetValue(param_4,&cf_InterfaceIndex);
                  if (lVar6 == 0) {
LAB_10000ef6b:
                    if (2 < DAT_100021030) {
                      pcVar13 = &cf__sSurprisingly_thereisnointerfacenumber_;
                      goto LAB_10000ef0a;
                    }
                  }
                  else {
                    lVar9 = _CFGetTypeID(lVar6);
                    lVar10 = _CFNumberGetTypeID();
                    if (lVar9 != lVar10) goto LAB_10000ef6b;
                    cVar3 = _CFNumberGetValue(lVar6,10,&local_38);
                    if (cVar3 == '\0') {
                      if (2 < DAT_100021030) {
                        pcVar13 = &cf__sCouldnotgetinterfacenumber_;
                        goto LAB_10000ef0a;
                      }
                    }
                    else {
                      uVar14 = CONCAT44(iStack_34,local_38);
                      if (iStack_34 == 0) {
                        *(uint *)((long)pvVar7 + 0x148) = local_38;
                        cVar3 = FUN_100012cd5(uVar14);
                        if (cVar3 != '\0') {
                          if (DAT_1000212ac == '\0') {
                            if (2 < DAT_100021030) {
                              uVar14 = (ulong)local_38;
                              pcVar13 = &cf__sIgnoringNCMinterfaceforinterfaceindex_d_;
                              goto LAB_10000edfc;
                            }
                            goto LAB_10000ef47;
                          }
                          if (2 < DAT_100021030) {
                            FUN_1000008d2(3,0,&
                                              cf__s_Override_BonjouroverNCM_NotignoringNCMinterfaceforinterfaceindex_d_
                                          ,"networkDeviceCallback",local_38);
                          }
                        }
                        uVar4 = FUN_100000d27();
                        *(undefined4 *)((long)pvVar7 + 0x188) = uVar4;
                        lVar6 = _CFStringCreateWithFormat(uVar2,0,&cf__u___,uVar4,lVar8);
                        *(long *)((long)pvVar7 + 0x28) = lVar6;
                        if (lVar6 != 0) {
                          *(long *)((long)pvVar7 + 0x1d8) = (long)pvVar7 + 0x1d0;
                          *(undefined4 *)((long)pvVar7 + 0x1ac) = 4;
                          if (2 < DAT_100021030) {
                            pcVar13 = &cf__sAttachingDeviceID_lu_________;
                            if (cVar3 != '\0') {
                              pcVar13 = &cf__s_Override_BonjouroverNCM_AttachingDeviceID_lu_________
                              ;
                            }
                            FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",pcVar13,
                                          "networkDeviceCallback",
                                          *(undefined4 *)((long)pvVar7 + 0x188),lVar5,lVar6);
                          }
                          FUN_100008f9b(pvVar7);
                          FUN_100002274(pvVar7);
                          goto LAB_10000ef4f;
                        }
                        if (2 < DAT_100021030) {
                          pcVar13 = &cf__sCouldnotcreatedeviceIDstring;
                          goto LAB_10000ef0a;
                        }
                      }
                      else if (2 < DAT_100021030) {
                        pcVar13 = &cf__sinterfaceIdx_disoutoftheallowablerange_;
LAB_10000edfc:
                        FUN_1000008d2(3,0,pcVar13,"networkDeviceCallback",uVar14);
                      }
                    }
                  }
                  goto LAB_10000ef47;
                }
                if (DAT_100021030 < 3) goto LAB_10000ef47;
                pcVar13 = &cf__sCouldnotcreatenetworkaddressdata;
              }
LAB_10000ef0a:
              FUN_1000008d2(3,0,pcVar13,"networkDeviceCallback");
            }
LAB_10000ef47:
            FUN_100008fdb(pvVar7);
            goto LAB_10000ef4f;
          }
          if (2 < DAT_100021030) {
            piVar11 = ___error();
            iVar1 = *piVar11;
            piVar11 = ___error();
            pcVar12 = _strerror(*piVar11);
            lVar8 = 0;
            FUN_1000008d2(3,0,&cf__sSkippingdevicebecauseweareoutofmemory__d__s,
                          "networkDeviceCallback",iVar1,pcVar12);
            goto LAB_10000ef4f;
          }
        }
        else if (2 < DAT_100021030) {
          lVar8 = 0;
          FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",
                        &
                        cf__smuxeddevicewithfullServiceName____alreadyattachedas___Ignoringbonjouraddevent_
                        ,"networkDeviceCallback",lVar5,*(undefined8 *)(lVar6 + 0x28));
          goto LAB_10000ef4f;
        }
      }
      lVar8 = 0;
LAB_10000ef4f:
      if (lVar8 != 0) {
        _CFRelease(lVar8);
      }
      return;
    }
    lVar5 = _CFDictionaryGetValue(param_4,&cf_FullEscapedServiceName);
    if (lVar5 != 0) {
      lVar8 = _CFGetTypeID(lVar5);
      lVar6 = _CFStringGetTypeID();
      if (lVar8 == lVar6) {
        lVar8 = FUN_100008f5b(lVar5);
        if (lVar8 != 0) {
          if (*(char *)(lVar8 + 0x130) != '\x01') {
            if (2 < DAT_100021030) {
              FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",&cf__sDetachingDeviceID_lu_________,
                            "networkDeviceCallback",*(undefined4 *)(lVar8 + 0x188),lVar5,
                            *(undefined8 *)(lVar8 + 0x28));
            }
            FUN_10000f83d(lVar8);
            FUN_100008fdb(lVar8);
            return;
          }
          if (DAT_100021030 < 3) {
            return;
          }
          FUN_1000008d2(3,"com.apple.usbmuxd.Bonjour",
                        &cf__sIgnoringbonjourdetachbecausedevice__lu_supportsSleepyTime_________,
                        "networkDeviceCallback",*(undefined4 *)(lVar8 + 0x188),lVar5,
                        *(undefined8 *)(lVar8 + 0x28));
          return;
        }
        if (DAT_100021030 < 3) {
          return;
        }
        pcVar12 = "com.apple.usbmuxd.Bonjour";
        pcVar13 = &cf__sInterfacealreadytorndown_;
        goto LAB_10000ec38;
      }
    }
    if (DAT_100021030 < 3) {
      return;
    }
    pcVar13 = &cf__sSurprisingly_thereisnofullservicename;
  }
  pcVar12 = (char *)0x0;
LAB_10000ec38:
  FUN_1000008d2(3,pcVar12,pcVar13,"networkDeviceCallback");
  return;
}

