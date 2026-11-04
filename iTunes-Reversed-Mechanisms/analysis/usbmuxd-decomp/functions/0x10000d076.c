// rea decompile_all
// name: FUN_10000d076
// address: 0x10000d076
// body: available
// range: 0x10000d076-0x10000d6b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000d0b3 to 0x10000d6b1 FUN_10000d6b1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000d076(char *param_1,int param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  cfstringStruct *pcVar14;
  byte bVar15;
  bool bVar16;
  double dVar17;
  long local_58;
  uint local_4c;
  uint local_48;
  int local_44;
  ulong local_40;
  uint local_38;
  char local_32;
  byte local_31;
  
  iVar2 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar2 + -1;
  if (iVar2 + -1 == 0 && *(int *)(param_1 + 0x38) != 0) {
    FUN_10000d6b1(param_1);
    return;
  }
  param_3 = param_3 & 0xffffffff;
  if (param_3 < 4 && param_2 == 0) {
    ___bzero(param_1 + param_3 + 1,4 - param_3);
LAB_10000d146:
    uVar11 = 0;
  }
  else {
    if (param_2 != -0x1fffbfb1) goto LAB_10000d146;
    uVar11 = 0;
    lVar7 = _IORegistryEntryCreateCFProperty
                      (*(undefined4 *)(param_1 + 0x10),&cf_PreferredConfiguration,
                       *(undefined8 *)PTR__kCFAllocatorDefault_10001c010,0);
    if (lVar7 != 0) {
      lVar5 = _CFNumberGetTypeID();
      lVar6 = _CFGetTypeID(lVar7);
      uVar11 = (uint)(lVar5 == lVar6);
      if (lVar5 == lVar6) {
        _CFNumberGetValue(lVar7,1,param_1 + 1);
      }
      _CFRelease(lVar7);
    }
  }
  if (6 < DAT_100021030) {
    FUN_1000008d2(7,0,&
                      cf__s_iOSdevice___xpreferred_config__d_device_preferred_config__d_default_preferred_config__d_result_0x_x
                  ,"MuxDeviceRequestCallback",*(undefined4 *)(param_1 + 0x30),param_1[1],param_1[2],
                  param_1[3],param_2);
  }
  param_1[5] = '\x01';
  uVar13 = CONCAT31((int3)((uint)param_2 >> 8),param_1[1]);
  bVar15 = param_1[2];
  if ((bVar15 == 0) || (bVar9 = param_1[3], bVar9 == 0)) {
    if (DAT_100021030 < 7) goto LAB_10000d46e;
    pcVar14 = &cf__s_iOStooold_switchingtoNCMmodenotsupported;
  }
  else if (DAT_1000212a9 == '\0') {
    if (DAT_100021030 < 7) goto LAB_10000d46e;
    pcVar14 = &cf__s_Hosttooold_switchingtoNCMmodenotsupported;
  }
  else {
    if (DAT_1000212a8 == '\0') {
      cVar10 = param_1[4];
      if (param_1[1] != bVar9 && param_1[7] == '\0') {
        local_38 = CONCAT31(local_38._1_3_,bVar9);
        local_44 = 0;
        local_32 = param_1[4];
        iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0xe0))();
        if ((iVar2 == 0) && (local_44 != 0)) {
          local_31 = bVar15;
          iVar2 = _IOIteratorNext();
          if (iVar2 == 0) {
            _IOObjectRelease(local_44);
            bVar15 = local_31;
          }
          else {
            uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_10001c010;
            bVar16 = false;
            local_4c = uVar11;
            local_48 = uVar13;
            do {
              local_40 = 0;
              _IORegistryEntryCreateCFProperties(iVar2,&local_40,uVar8,0);
              if (local_40 != 0) {
                lVar7 = _CFDictionaryGetValue(local_40,&cf_bInterfaceNumber);
                local_58 = 0;
                if (lVar7 != 0) {
                  _CFNumberGetValue(lVar7,4,&local_58);
                  bVar16 = (bool)(bVar16 | local_58 == 3);
                }
                _CFRelease(local_40);
                local_40 = 0;
              }
              _IOObjectRelease(iVar2);
              iVar2 = _IOIteratorNext(local_44);
            } while (iVar2 != 0);
            _IOObjectRelease(local_44);
            bVar15 = local_31;
            uVar11 = local_4c;
            uVar13 = local_48;
            if ((bVar16) && (param_1[8] != '\0')) {
              param_1[7] = (char)local_48;
            }
          }
        }
        bVar9 = (byte)local_38;
        cVar10 = local_32;
        if (6 < DAT_100021030) {
          FUN_1000008d2(7,0,&cf__s_iOSdevice___xncmConfigNum__d,"getPreferredConfiguration",
                        *(undefined4 *)(param_1 + 0x30),param_1[7]);
          bVar9 = (byte)local_38;
          cVar10 = local_32;
        }
      }
      bVar12 = (byte)uVar13;
      if (param_1[9] == param_1[2]) {
        if (bVar15 == bVar9 && bVar12 == bVar9) goto LAB_10000d45b;
        if ((bVar12 != bVar15) || (cVar10 == '\0' || bVar12 == bVar9)) {
          uVar3 = uVar13 & 0xff;
          uVar13 = (uint)bVar15;
          if (bVar12 != param_1[7]) {
            uVar13 = uVar3;
          }
          if (bVar15 == bVar9) {
            uVar13 = uVar3;
          }
          goto LAB_10000d46e;
        }
        if (param_1[6] != '\x01') goto LAB_10000d46e;
      }
      else {
        if (cVar10 == '\0') {
          if (param_1[0xb] != '\0') {
            local_38 = CONCAT31(local_38._1_3_,bVar9);
            local_40 = local_40 & 0xffffffff00000000;
            iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0xe0))();
            if ((iVar2 == 0) && ((int)local_40 != 0)) {
              iVar2 = _IOIteratorNext();
              if (iVar2 != 0) {
                do {
                  _IOObjectRelease(iVar2);
                  iVar2 = _IOIteratorNext(local_40 & 0xffffffff);
                } while (iVar2 != 0);
                _IOObjectRelease(local_40 & 0xffffffff);
                if (param_1[6] != '\x01') goto LAB_10000d46e;
                cVar10 = '\0';
                goto LAB_10000d469;
              }
              _IOObjectRelease(local_40 & 0xffffffff);
            }
            bVar9 = (byte)local_38;
          }
        }
        else if ((param_1[6] == '\x01') && ((bVar12 == bVar15 || (bVar12 == param_1[7]))))
        goto LAB_10000d469;
        if (bVar15 != bVar9 || bVar12 != bVar9) goto LAB_10000d46e;
LAB_10000d45b:
        if (param_1[6] != '\x01') goto LAB_10000d46e;
        cVar10 = '\x03';
      }
LAB_10000d469:
      FUN_10000d803(param_1,cVar10);
      goto LAB_10000d46e;
    }
    if (DAT_100021030 < 7) goto LAB_10000d46e;
    pcVar14 = &cf__s_SwitchingtoNCMconfigisdisallowedbyhostdefaultwrites;
  }
  FUN_1000008d2(7,0,pcVar14,"getPreferredConfiguration");
LAB_10000d46e:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 1);
  if ((param_1[5] == '\x01') && ((char)uVar13 != *param_1)) {
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__s_iOSdevice___xpreferred_configuration__d___current_configuration__d__,
                    "MuxDeviceRequestCallback",*(undefined4 *)(param_1 + 0x30),uVar13 & 0xff,
                    *param_1);
    }
    iVar2 = 10;
    local_38 = uVar13 & 0xff;
    do {
      iVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0xe8))();
      if (iVar4 == 0) {
        FUN_10000930a(*(undefined4 *)(param_1 + 0x30));
        uVar3 = local_38;
        iVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))
                          (*(long **)(param_1 + 0x18),local_38);
        if (iVar2 == 0) {
          if (6 < DAT_100021030) {
            FUN_1000008d2(7,0,&cf__s_iOSdevice___xSetConfigurationtopreferred_configuration__d__,
                          "MuxDeviceRequestCallback",*(undefined4 *)(param_1 + 0x30),uVar3);
          }
          *param_1 = (char)uVar13;
        }
        else if (2 < DAT_100021030) {
          uVar1 = *(undefined4 *)(param_1 + 0x30);
          uVar8 = FUN_100000d8c(iVar2);
          FUN_1000008d2(3,0,&cf_SetConfiguration___xfailed__s,uVar1,uVar8);
        }
        iVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x48))();
        if ((iVar4 == 0) || (DAT_100021030 < 3)) goto LAB_10000d616;
        pcVar14 = &cf_USBDeviceClose___xfailed__s;
        goto LAB_10000d559;
      }
      if (iVar4 != -0x1ffffd3b) break;
      if (2 < DAT_100021030) {
        uVar1 = *(undefined4 *)(param_1 + 0x30);
        local_48 = uVar13;
        uVar8 = FUN_100000d8c(0xe00002c5);
        uVar13 = local_48;
        FUN_1000008d2(3,0,&cf_USBDeviceOpen___xfailed__s_retrying___retriesleft__u_,uVar1,uVar8,
                      iVar2);
      }
      _usleep(150000);
      bVar16 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar16);
    if (2 < DAT_100021030) {
      pcVar14 = &cf_USBDeviceOpen___xfailed__s;
LAB_10000d559:
      uVar1 = *(undefined4 *)(param_1 + 0x30);
      uVar8 = FUN_100000d8c(iVar4);
      FUN_1000008d2(3,0,pcVar14,uVar1,uVar8);
    }
  }
LAB_10000d616:
  if ((char)uVar11 == '\0') {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    dVar17 = (double)_CFAbsoluteTimeGetCurrent();
    _CFRunLoopTimerSetNextFireDate(dVar17 + 5.0,uVar8);
  }
  return;
}

