// rea decompile_all
// name: FUN_10000624f
// address: 0x10000624f
// body: available
// range: 0x10000624f-0x100006efd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000624f(undefined8 *param_1)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  long *plVar17;
  bool bVar18;
  double dVar19;
  undefined4 local_5c;
  long local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  short local_42;
  cfstringStruct *local_40;
  ulong local_38;
  
  puVar1 = *(uint **)(param_1[0x11] + 0x20);
  _CFSocketEnableCallBacks(param_1[4],1);
  if (puVar1[1] != 1) {
    _time((time_t *)&local_50);
    if (((DAT_100022ba0 == 0) ||
        (dVar19 = _difftime(CONCAT44(uStack_4c,local_50),DAT_100022ba0), 1.0 < dVar19)) &&
       (DAT_100022ba0 = CONCAT44(uStack_4c,local_50), 2 < DAT_100021030)) {
      uVar15 = FUN_10000302f(param_1);
      FUN_1000008d2(3,0,&cf__sClient_susingoldversion_d_current__d,"HandleUSBMuxCommand",uVar15,
                    puVar1[1],1);
    }
    iVar5 = FUN_100005497(param_1,6);
    if (iVar5 != 0) {
      return;
    }
    FUN_100003084(param_1);
    return;
  }
  iVar5 = 1;
  if (puVar1[2] != 8) goto LAB_100006525;
  uVar15 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
  lVar7 = _CFDataCreateWithBytesNoCopy
                    (uVar15,*(long *)(param_1[0x11] + 0x20) + 0x10,(ulong)*puVar1 - 0x10,
                     *(undefined8 *)PTR__kCFAllocatorNull_10001c020);
  if (lVar7 == 0) {
    iVar5 = 8;
    if (2 < DAT_100021030) {
      uVar15 = FUN_10000302f(param_1);
      FUN_1000008d2(3,0,&cf__sCFDataCreateWithBytesNoCopyfailed_unabletoparsemessagefromclient_s,
                    "HandleUSBMuxCommand",uVar15);
    }
    goto LAB_100006525;
  }
  lVar8 = _CFPropertyListCreateWithData(uVar15,lVar7,0,0,0);
  _CFRelease(lVar7);
  if (lVar8 == 0) {
LAB_100006469:
    if (2 < DAT_100021030) {
      uVar15 = FUN_10000302f(param_1);
      FUN_1000008d2(3,0,&cf__sCFPropertyListCreateFromXMLDatafailed_unabletoparsemessagefromclient_s
                    ,"HandleUSBMuxCommand",uVar15);
    }
    iVar5 = 5;
    if (lVar8 == 0) goto LAB_100006525;
  }
  else {
    lVar7 = _CFGetTypeID(lVar8);
    lVar9 = _CFDictionaryGetTypeID();
    if (lVar7 != lVar9) goto LAB_100006469;
    local_5c = 0;
    local_42 = 0;
    lVar7 = _CFDictionaryGetValue(lVar8,PTR_cf_MessageType_100021110);
    if (lVar7 == 0) {
LAB_1000064e4:
      iVar5 = 5;
      if (2 < DAT_100021030) {
        uVar15 = FUN_10000302f(param_1);
        pcVar11 = &cf__sdictionaryfrom_sismissingmessagetype;
LAB_100006505:
        uVar13 = 3;
LAB_100006511:
        iVar5 = 5;
        FUN_1000008d2(uVar13,0,pcVar11,"HandleUSBMuxDictionary",uVar15);
      }
    }
    else {
      lVar9 = _CFGetTypeID(lVar7);
      lVar10 = _CFStringGetTypeID();
      if (lVar9 != lVar10) goto LAB_1000064e4;
      if ((*(int *)(param_1 + 2) == 0) &&
         (lVar9 = _CFDictionaryGetValue(lVar8,PTR_cf_kLibUSBMuxVersion_100021180), lVar9 != 0)) {
        local_38 = _CFGetTypeID(lVar9);
        uVar12 = _CFNumberGetTypeID();
        if (local_38 == uVar12) {
          _CFNumberGetValue(lVar9,9,param_1 + 2);
        }
      }
      pcVar11 = (cfstringStruct *)_CFDictionaryGetValue(lVar8,PTR_cf_ProgName_1000211b8);
      local_38 = _CFDictionaryGetValue(lVar8,PTR_cf_BundleID_1000211c8);
      local_58 = _CFDictionaryGetValue(lVar8,PTR_cf_ClientVersionString_100021188);
      if (pcVar11 == (cfstringStruct *)0x0) {
        local_40 = &cf_unknown;
      }
      else {
        cVar3 = _CFEqual(pcVar11,&cf_usbmuxd);
        local_40 = &cf_MobileDevice;
        if (cVar3 == '\0') {
          local_40 = pcVar11;
        }
      }
      if (param_1[7] == 0) {
        param_1[7] = local_40;
        _CFRetain();
      }
      if (*(int *)(param_1 + 9) == 0) {
        uVar4 = FUN_100000f31(lVar8,PTR_cf_ProcessID_1000211c0,0);
        *(undefined4 *)(param_1 + 9) = uVar4;
      }
      if ((param_1[8] == 0) && (local_38 != 0)) {
        param_1[8] = local_38;
        _CFRetain();
      }
      if (param_1[6] == 0) {
        if (*(int *)(param_1 + 9) == 0) {
          uVar13 = _CFStringCreateWithFormat
                             (uVar15,0,&cf__d___,*(undefined4 *)((long)param_1 + 0x14),local_40);
        }
        else {
          uVar13 = _CFStringCreateWithFormat
                             (uVar15,0,&cf__d_____d_,*(undefined4 *)((long)param_1 + 0x14),local_40)
          ;
        }
        param_1[6] = uVar13;
      }
      if (5 < DAT_100021030) {
        uVar13 = FUN_10000302f(param_1);
        FUN_1000008d2(6,0,&cf_clientrequest__srequesting__,uVar13,lVar7);
      }
      if ((local_58 != 0) &&
         (cVar3 = _CFEqual(local_58,PTR_cf_usbmuxd_543_0_0_700_1_100021270), cVar3 == '\0')) {
        _time((time_t *)&local_50);
        if ((0 < DAT_100021100) ||
           (dVar19 = _difftime(CONCAT44(uStack_4c,local_50),DAT_100022bb0), 3600.0 < dVar19)) {
          DAT_100022bb0 = CONCAT44(uStack_4c,local_50);
          if (4 < DAT_100021030) {
            uVar13 = FUN_10000302f(param_1);
            local_58 = FUN_100000dea(local_58);
            uVar14 = FUN_100000dea(PTR_cf_usbmuxd_543_0_0_700_1_100021270);
            FUN_1000008d2(5,0,&cf_client_susinglibrary_s_running_s,uVar13,local_58,uVar14);
            if ((1 < DAT_100022ba8) && (4 < DAT_100021030)) {
              FUN_1000008d2(5,0,&cf__ocurred_dtimes_);
            }
          }
          DAT_100022ba8 = 0;
          if (0 < DAT_100021100) {
            DAT_100021100 = DAT_100021100 + -1;
            DAT_100022ba8 = 0;
          }
        }
        else {
          DAT_100022ba8 = DAT_100022ba8 + 1;
        }
      }
      lVar9 = _CFStringCompare(lVar7,PTR_cf_Connect_100021118,0);
      if (lVar9 != 0) {
        lVar9 = _CFStringCompare(lVar7,PTR_cf_Listen_100021120,0);
        if (lVar9 == 0) {
          cVar3 = FUN_100000fb1(local_40);
          if (((cVar3 != '\0') ||
              ((local_38 != 0 && (cVar3 = FUN_100000fb1(local_38), cVar3 != '\0')))) &&
             (*(undefined1 *)(param_1 + 10) = 1, 4 < DAT_100021030)) {
            uVar15 = FUN_10000302f(param_1);
            FUN_1000008d2(5,0,&
                              cf__sClient_sBLACKLISTED_Clientwillnotreceivedeviceattachnotifications_
                          ,"HandleUSBMuxDictionary",uVar15);
          }
          lVar7 = _CFDictionaryGetValue(lVar8,PTR_cf_ConnType_1000211e0);
          local_50 = 0;
          uVar4 = 0;
          if (lVar7 != 0) {
            lVar9 = _CFGetTypeID(lVar7);
            lVar10 = _CFNumberGetTypeID();
            uVar4 = 0;
            if (lVar9 == lVar10) {
              cVar3 = _CFNumberGetValue(lVar7,9,&local_50);
              uVar4 = 0;
              if (cVar3 != '\0') {
                uVar4 = local_50;
              }
            }
          }
          *(undefined4 *)(param_1 + 3) = uVar4;
          iVar5 = FUN_100005497(param_1,0);
          bVar2 = DAT_100021290;
          if (iVar5 == 0) {
            *param_1 = DAT_1000212b0;
            DAT_1000212b0 = param_1;
            *(undefined4 *)((long)param_1 + 0x54) = 4;
            if (DAT_1000212ab == '\x01') {
              if (5 < DAT_100021030) {
                uVar15 = FUN_10000302f(param_1);
                FUN_1000008d2(6,0,&cf_Disableindirectnetworknotificationsfor_sbasedonpreference,
                              uVar15);
              }
              *(undefined4 *)(param_1 + 3) = 1;
            }
            else if (((*(uint *)(param_1 + 3) & 0xfffffffd) == 0) &&
                    (iVar5 = DAT_1000212b8 + 1, bVar18 = DAT_1000212b8 == 0, DAT_1000212b8 = iVar5,
                    bVar18)) {
              if (6 < DAT_100021030) {
                FUN_1000008d2(7,0,&cf_firstnetworklistener);
              }
              FUN_10000e9e8();
            }
            if (5 < DAT_100021030) {
              uVar15 = FUN_10000302f(param_1);
              FUN_1000008d2(6,0,&cf_clientlistening__s,uVar15);
            }
            if (DAT_1000212c0 != (long *)0x0) {
              iVar5 = (bVar2 ^ 1) * 2 + 5;
              local_38 = CONCAT44(local_38._4_4_,iVar5);
              plVar17 = DAT_1000212c0;
              do {
                if (*(char *)(param_1 + 10) != '\0') break;
                if ((*(int *)(param_1 + 2) < 3) && ((int)plVar17[3] == 2)) {
                  if (iVar5 <= DAT_100021030) {
                    FUN_1000008d2(iVar5,0,&cf_listener__ignored_wronglibraryversion,param_1[6]);
                  }
                }
                else if ((*(uint *)((long)plVar17 + 0x1ac) & 0xfffffffe) == 2) {
                  if (iVar5 <= DAT_100021030) {
                    FUN_1000008d2(iVar5,0,&cf_notify__ofdevice_u___x,param_1[6],(int)plVar17[0x31],
                                  *(undefined4 *)((long)plVar17 + 0x18c));
                  }
                  if (6 < DAT_100021030) {
                    uVar15 = FUN_10000302f(param_1);
                    uVar13 = FUN_100008d22(plVar17);
                    FUN_1000008d2(7,0,&cf__sNotifyingclient_sofattcheddevice_s,
                                  "ClientSendAttachNotification",uVar15,uVar13);
                  }
                  lVar7 = FUN_1000023f4(plVar17);
                  if (lVar7 != 0) {
                    iVar6 = FUN_100002e00(param_1,0,lVar7);
                    _CFRelease(lVar7);
                    iVar5 = (int)local_38;
                    if (iVar6 == 0) goto LAB_100006e3b;
                  }
                  if (2 < DAT_100021030) {
                    uVar15 = FUN_10000302f(param_1);
                    uVar13 = FUN_100008d22(plVar17);
                    FUN_1000008d2(3,0,&
                                      cf__sClientSendAttachNotificationfailedforclient_s_interface_s
                                  ,"ClientStartListening",uVar15,uVar13);
                  }
                  goto LAB_100006ed7;
                }
LAB_100006e3b:
                plVar17 = (long *)*plVar17;
              } while (plVar17 != (long *)0x0);
            }
          }
          goto LAB_100006ef1;
        }
        lVar9 = _CFStringCompare(lVar7,PTR_cf_Logs_100021148,0);
        if (lVar9 == 0) {
          iVar5 = FUN_100005497(param_1,0);
          if (iVar5 == 0) {
            uVar4 = *(undefined4 *)((long)param_1 + 0x4c);
            *(undefined4 *)((long)param_1 + 0x4c) = 0xffffffff;
            _asl_add_log_file(DAT_100021298,uVar4);
            if (5 < DAT_100021030) {
              uVar15 = FUN_10000302f(param_1);
              FUN_1000008d2(6,0,&cf_loggingstarted_closingclient_s,uVar15);
            }
LAB_100006ed7:
            FUN_100003084(param_1);
          }
          goto LAB_100006ef1;
        }
        lVar9 = _CFStringCompare(lVar7,PTR_cf_ListDevices_100021150,0);
        bVar2 = DAT_100021290;
        if (lVar9 == 0) {
          lVar7 = *(long *)(param_1[0x11] + 0x20);
          if (5 < DAT_100021030) {
            FUN_1000008d2(6,0,&cf__sClient__requestingdevicelist,"ClientDeviceArrayResult",
                          param_1[6]);
          }
          pcVar11 = (cfstringStruct *)
                    _CFArrayCreateMutable(uVar15,0,PTR__kCFTypeArrayCallBacks_10001c050);
          if (pcVar11 == (cfstringStruct *)0x0) {
            iVar5 = -1;
            goto LAB_10000651d;
          }
          local_58 = lVar7;
          local_40 = pcVar11;
          if (DAT_1000212c0 != (long *)0x0) {
            local_38 = CONCAT44(local_38._4_4_,(bVar2 ^ 1) * 2 + 5);
            plVar17 = DAT_1000212c0;
            do {
              if ((*(uint *)((long)plVar17 + 0x1ac) & 0xfffffffe) == 2) {
                if ((int)local_38 <= DAT_100021030) {
                  FUN_1000008d2(local_38 & 0xffffffff,0,&cf_notify__ofdevice_u___x,param_1[6],
                                (int)plVar17[0x31],*(undefined4 *)((long)plVar17 + 0x18c));
                }
                lVar7 = FUN_1000023f4(plVar17);
                if (lVar7 == 0) goto LAB_100006e64;
                _CFArrayAppendValue(local_40);
                _CFRelease(lVar7);
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          pcVar16 = (cfstringStruct *)
                    _CFDictionaryCreateMutable
                              (uVar15,0,PTR__kCFTypeDictionaryKeyCallBacks_10001c058,
                               PTR__kCFTypeDictionaryValueCallBacks_10001c060);
          pcVar11 = local_40;
          if (pcVar16 == (cfstringStruct *)0x0) {
LAB_100006e64:
            iVar5 = -1;
            pcVar16 = local_40;
          }
          else {
            _CFDictionaryAddValue(pcVar16,PTR_cf_DeviceList_1000211d0,local_40);
            iVar5 = FUN_100002e00(param_1,*(undefined4 *)(local_58 + 0xc),pcVar16);
            iVar5 = -(uint)(iVar5 != 0);
            _CFRelease(pcVar11);
          }
          _CFRelease(pcVar16);
        }
        else {
          lVar9 = _CFStringCompare(lVar7,PTR_cf_ListListeners_100021158,0);
          if (lVar9 != 0) {
            lVar9 = _CFStringCompare(lVar7,PTR_cf_ReadBUID_100021160,0);
            if (lVar9 == 0) {
              FUN_1000075df(param_1);
              goto LAB_100006ef1;
            }
            lVar9 = _CFStringCompare(lVar7,PTR_cf_ReadPairRecord_100021168,0);
            if (lVar9 == 0) {
              FUN_1000076bf(param_1,lVar8);
              goto LAB_100006ef1;
            }
            lVar9 = _CFStringCompare(lVar7,PTR_cf_SavePairRecord_100021170,0);
            if (lVar9 == 0) {
              FUN_100007875(param_1,lVar8);
            }
            else {
              lVar7 = _CFStringCompare(lVar7,PTR_cf_DeletePairRecord_100021178,0);
              iVar5 = 1;
              if (lVar7 != 0) goto LAB_10000651d;
              FUN_100007a83(param_1,lVar8);
            }
            FUN_10000e680();
LAB_100006ef1:
            _CFRelease(lVar8);
            return;
          }
          iVar5 = FUN_10000735e(param_1);
        }
LAB_100006e73:
        _CFRelease(lVar8);
        if (iVar5 == 0) {
          return;
        }
        goto LAB_100006525;
      }
      cVar3 = FUN_100000fb1(local_40);
      if ((cVar3 != '\0') || ((local_38 != 0 && (cVar3 = FUN_100000fb1(local_38), cVar3 != '\0'))))
      {
        iVar5 = 5;
        if (DAT_100021030 < 5) goto LAB_10000651d;
        uVar15 = FUN_10000302f(param_1);
        pcVar11 = &cf__sClient_sBLACKLISTED_clientconnectrequestdenied;
        uVar13 = 5;
        goto LAB_100006511;
      }
      cVar3 = FUN_100006efe(lVar8,PTR_cf_DeviceID_1000211a0,&local_5c);
      if (cVar3 != '\0') {
        lVar7 = _CFDictionaryGetValue(lVar8,PTR_cf_PortNumber_1000211b0);
        if (lVar7 != 0) {
          lVar9 = _CFGetTypeID(lVar7);
          lVar10 = _CFNumberGetTypeID();
          if ((lVar9 == lVar10) && (cVar3 = _CFNumberGetValue(lVar7,2,&local_42), cVar3 != '\0')) {
            iVar5 = FUN_100006f62(param_1,local_5c,(int)local_42);
            goto LAB_100006e73;
          }
        }
        iVar5 = 5;
        if (DAT_100021030 < 3) goto LAB_10000651d;
        uVar15 = FUN_10000302f(param_1);
        pcVar11 = &cf__sdictionaryfromclient_sismissingportnumber;
        goto LAB_100006505;
      }
      iVar5 = 5;
      if (2 < DAT_100021030) {
        uVar15 = FUN_10000302f(param_1);
        pcVar11 = &cf__sdictionaryfrom_sismissingdeviceid;
        goto LAB_100006505;
      }
    }
  }
LAB_10000651d:
  _CFRelease(lVar8);
LAB_100006525:
  FUN_100005497(param_1,iVar5);
  return;
}

