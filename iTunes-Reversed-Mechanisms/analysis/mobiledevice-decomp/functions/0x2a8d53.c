// rea decompile_all
// name: _check_some_ace3_in_bad_state
// address: 0x2a8d53
// body: available
// range: 0x2a8d53-0x2a92c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _check_some_ace3_in_bad_state(byte *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  uint uVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  byte *local_58;
  ulong local_50;
  long *local_48;
  int local_40;
  int local_3c;
  uint local_38;
  undefined1 local_31;
  
  iVar5 = 0;
  _ace3_check_adfu_log("Running Ace3 mode check\n");
  local_3c = 0;
  ___lun_in_adfu_lookup = 0;
  __lun_in_adfu_populated = 0;
  __num_updatable_aces = 0;
  uVar7 = _CFArrayCreateMutable(0,2,PTR__kCFTypeArrayCallBacks_004411a8);
  _CFArrayAppendValue(uVar7,&cf_usbc_sn201202x_spmi);
  _CFArrayAppendValue(uVar7,&cf_usbc_sn201202x_iic);
  lVar8 = _CFDictionaryCreateMutable
                    (0,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  _CFDictionaryAddValue(lVar8,&cf_IONameMatch,uVar7);
  _CFRelease(uVar7);
  if (lVar8 == 0) {
    uVar7 = 0;
    _ace3_check_adfu_log("could not create EDT property dict\n");
    iVar5 = 0;
  }
  else {
    uVar14 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
    iVar4 = _IOServiceGetMatchingServices(uVar14,lVar8,&local_3c);
    if (iVar4 == 0) {
      iVar5 = _IOIteratorNext(local_3c);
      if (__num_updatable_aces < 8 && iVar5 != 0) {
        local_78 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        uVar7 = 0;
        do {
          local_48 = (long *)((ulong)local_48 & 0xffffffff00000000);
          iVar4 = _get_u32_from_edt_prop(iVar5,&cf_usbc_update_protocol,&local_48);
          if (iVar4 == 0) {
            uVar12 = (int)local_48 - 1;
            pcVar11 = "Unexpected usbc-update-protocol value\n";
            if (uVar12 < 2) {
              pcVar11 = "Found updatable Ace based on usbc-update-protocol value\n";
            }
            _ace3_check_adfu_log(pcVar11);
            if (uVar12 < 2) {
              local_38 = 0xffffffff;
              iVar4 = _get_u32_from_edt_prop(iVar5,&cf_rid,&local_38);
              uVar10 = local_78;
              if ((iVar4 != 0) || (0xff < local_38)) {
                _ace3_check_adfu_log("Couldn\'t find RID for service!\n");
                goto LAB_002a9273;
              }
              local_50 = (ulong)__num_updatable_aces;
              __num_updatable_aces = __num_updatable_aces + 1;
              local_31 = (undefined1)local_38;
              local_58 = param_1;
              uVar9 = _IOServiceMatching("AppleHPMARM");
              local_70 = _CFNumberCreate(uVar10,1,&local_31);
              cVar2 = _CFDictionaryContainsKey(uVar9,&cf_IOPropertyMatch);
              local_60 = uVar9;
              if (cVar2 == '\0') {
                uVar10 = _CFDictionaryCreateMutable
                                   (uVar10,1,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                    PTR__kCFTypeDictionaryValueCallBacks_004411b8);
              }
              else {
                uVar9 = _CFDictionaryGetValue(uVar9,&cf_IOPropertyMatch);
                uVar10 = _CFDictionaryCreateMutableCopy(uVar10,2,uVar9);
              }
              uVar9 = local_70;
              _CFDictionaryAddValue(uVar10,&cf_RID,local_70);
              _CFDictionaryAddValue(local_60,&cf_IOPropertyMatch,uVar10);
              _CFRelease(uVar10);
              _CFRelease(uVar9);
              local_48 = (long *)0x0;
              local_40 = 0;
              iVar4 = _IOServiceGetMatchingServices(uVar14,local_60,&local_40);
              pcVar11 = "Error finding IOKit service\n";
              if ((iVar4 == 0) && (pcVar11 = "Found no matching services\n", local_40 != 0)) {
                iVar4 = _IOIteratorNext(local_40);
                if (iVar4 == 0) {
                  iVar4 = -0x1ffffd40;
                  plVar13 = (long *)0x0;
                }
                else {
                  local_60 = CONCAT44(local_60._4_4_,uVar14);
                  do {
                    uVar10 = _CFUUIDGetConstantUUIDWithBytes
                                       (0,0x12,0xa1,0xdc,0xcf,0xcf,0x7a,0x47,0x75,0xbe,0xe5,0x9c,
                                        0x43,0x19,0xf4,0xcd,0x2b);
                    uVar9 = _CFUUIDGetConstantUUIDWithBytes
                                      (0,0xc2,0x44,0xe8,0x58,0x10,0x9c,0x11,0xd4,0x91,0xd4,0,0x50,
                                       0xe4,0xc6,0x42,0x6f);
                    iVar6 = _IOCreatePlugInInterfaceForService
                                      (iVar4,uVar10,uVar9,&local_68,local_7c);
                    if (iVar6 == 0) {
                      plVar13 = (long *)CONCAT44(uStack_64,local_68);
                      pcVar1 = *(code **)(*plVar13 + 8);
                      uVar10 = _CFUUIDGetConstantUUIDWithBytes
                                         (0,0xc1,0x3a,0xcd,0xd9,0x20,0x9e,0x4b,1,0xb7,0xbe,0xe0,0x5c
                                          ,0xd8,0x83,199,0xb1);
                      auVar15 = _CFUUIDGetUUIDBytes(uVar10);
                      iVar6 = (*pcVar1)(plVar13,auVar15._0_8_,auVar15._8_8_,&local_48);
                      if (iVar6 != 0) {
                        _ace3_check_adfu_log("QueryInterface failed\n");
                      }
                      (**(code **)(*(long *)CONCAT44(uStack_64,local_68) + 0x18))();
                    }
                    _IOObjectRelease(iVar4);
                    iVar4 = _IOIteratorNext();
                  } while (iVar4 != 0);
                  iVar4 = 0;
                  if (local_48 == (long *)0x0) {
                    iVar4 = -0x1ffffd40;
                  }
                  plVar13 = local_48;
                  uVar14 = (undefined4)local_60;
                }
                if (local_40 != 0) {
                  _IOObjectRelease();
                }
                if (iVar4 != 0) goto LAB_002a8ff6;
                local_48 = (long *)0x0;
                iVar6 = (**(code **)(*plVar13 + 0x28))(plVar13,0,3,&local_68,4,0,&local_48);
                iVar4 = local_68;
                if ((iVar6 != 0) || (local_48 < &MACH_HEADER.cputype)) {
                  _ace3_check_adfu_log("get_mode failed\n");
                  (**(code **)(*plVar13 + 0x18))(plVar13);
                  pcVar11 = "check_in_adfu failed, rid=0x%X\n";
                  goto LAB_002a9000;
                }
                (**(code **)(*plVar13 + 0x18))(plVar13);
                if (iVar4 == 0x55464441) {
                  uVar3 = 1;
                  uVar7 = 1;
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                _ace3_check_adfu_log(pcVar11);
LAB_002a8ff6:
                pcVar11 = "getAHPMLibInterfaceForRID failed for rid=0x%X\n";
LAB_002a9000:
                _ace3_check_adfu_log(pcVar11,local_38);
                uVar3 = 1;
              }
              (&__lun_in_adfu_lookup)[local_50] = uVar3;
              param_1 = local_58;
            }
          }
          else {
            _ace3_check_adfu_log("Error when reading usbc-update-protocol\n");
          }
          _IOObjectRelease(iVar5);
          iVar5 = _IOIteratorNext(local_3c);
        } while (iVar5 != 0 && __num_updatable_aces < 8);
      }
      else {
        uVar7 = 0;
      }
      *param_1 = __num_updatable_aces;
      __lun_in_adfu_populated = 1;
    }
    else {
      uVar7 = 0;
    }
  }
LAB_002a9273:
  if (local_3c != 0) {
    _IOObjectRelease();
  }
  if (iVar5 != 0) {
    _IOObjectRelease(iVar5);
  }
  return uVar7;
}

