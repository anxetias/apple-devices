// rea decompile_all
// name: _AMRestoreIPv6AddressForLocationID
// address: 0xeac75
// body: available
// range: 0xeac75-0xeb232 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xeb22e to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMRestoreIPv6AddressForLocationID(undefined4 param_1,undefined4 *param_2,short *param_3)

{
  undefined4 uVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  cfstringStruct *pcVar12;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  uint uStack_470;
  int local_460;
  uint local_45c;
  ulong local_458;
  int local_450;
  undefined4 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_478 = 0;
  uStack_474 = 0;
  uStack_470 = 0;
  local_488 = 0x1e1c;
  uStack_484 = 0;
  uStack_480 = 0;
  uStack_47c = 0;
  iVar4 = ___isPlatformVersionAtLeast(1,10,0xd,2);
  if (iVar4 == 0) {
    uVar7 = 0;
    goto LAB_000eb16e;
  }
  cVar3 = __shouldMatchIOUSBHostFamily();
  if (cVar3 == '\0') {
    local_448 = local_448 & 0xffffffff00000000;
    iVar4 = __getLocationIDServiceMatching(param_1,"AppleUSBHostPort");
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      _IORegistryEntryGetChildEntry(iVar4,"IOService",&local_448);
      _IOObjectRelease(iVar4);
      iVar4 = (int)local_448;
    }
  }
  else {
    iVar4 = __getLocationIDServiceMatching(param_1,"IOUSBHostDevice");
  }
  if (iVar4 == 0) {
    uVar7 = 0;
    _AMRLog(6,&cf_IPv6_locationID___x_noUSBdevicefound,param_1);
    goto LAB_000eb16e;
  }
  _IOServiceWaitQuiet(iVar4,0);
  local_458 = local_458 & 0xffffffff00000000;
  local_448 = 0;
  local_460 = iVar4;
  iVar4 = _IORegistryEntryGetRegistryEntryID(iVar4);
  if (iVar4 == 0) {
    uVar7 = _IOServiceMatching("AppleUSBNCMData");
    uVar8 = _IORegistryEntryIDMatching(local_448);
    _CFDictionarySetValue(uVar7,&cf_IOParentMatch,uVar8);
    uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
    local_44c = param_1;
    uVar9 = _CFRetain(uVar7);
    param_1 = local_44c;
    _IOServiceGetMatchingServices(uVar1,uVar9,&local_458);
    _CFRelease(uVar8);
    _CFRelease(uVar7);
    iVar4 = (int)local_458;
    if ((int)local_458 == 0) goto LAB_000ead7d;
    iVar5 = _IOIteratorNext(local_458 & 0xffffffff);
    if (iVar5 != 0) {
      local_450 = iVar4;
      do {
        local_458 = 0;
        _IOServiceWaitQuiet(iVar5,0);
        _IORegistryEntryGetRegistryEntryID(iVar5,&local_458);
        local_45c = 0;
        lVar10 = _IORegistryEntryCreateCFProperty(iVar5,&cf_NetworkInterfaceFlags,0,0);
        if (lVar10 == 0) {
          _AMRLog(4,&cf_NCMinterfacehasnoflags);
        }
        else {
          _CFNumberGetValue(lVar10,3,&local_45c);
          _CFRelease(lVar10);
        }
        local_448 = local_448 & 0xffff000000000000;
        lVar10 = _IORegistryEntryCreateCFProperty(iVar5,&cf_IOMACAddress,0,0);
        if (lVar10 == 0) {
          _AMRLog(4,&cf_NCMinterfacehasnoMACaddress);
LAB_000eb0f6:
          _AMRLog(4,&cf_IPv6_locationID___x_NCM__llx_cannotfindremoteaddress,param_1);
        }
        else {
          uVar11 = _CFDataGetLength(lVar10);
          if (5 < uVar11) {
            _CFDataGetBytes(lVar10,0,6,&local_448);
          }
          _CFRelease(lVar10);
          iVar4 = local_450;
          if ((uVar11 < 6) || ((local_45c & 0x20000000) == 0)) goto LAB_000eb0f6;
          uVar11 = (local_448 >> 0x20 & 0xff) << 0x30 |
                   (local_448 >> 0x18 & 0xff) << 0x28 |
                   (local_448 >> 0x10 & 0xff) << 0x10 |
                   local_448 & 0xff ^ 2 | (local_448 >> 8 & 0xff) << 8 |
                   (ulong)(byte)~local_448._5_1_ << 0x38 | 0xfeff000000;
          uStack_480 = 0x80fe;
          uStack_47c = 0;
          uStack_478 = (undefined4)uVar11;
          uStack_474 = (undefined4)(uVar11 >> 0x20);
          local_448 = 0;
          uStack_440 = 0;
          local_438 = 0;
          uVar11 = 0;
          do {
            if (uVar11 != 0) {
              _usleep(100000);
            }
            uVar6 = 0;
            lVar10 = _IORegistryEntrySearchCFProperty(iVar5,"IOService",&cf_BSDName,0,1);
            if (lVar10 != 0) {
              cVar3 = _CFStringGetCString(lVar10,&local_448,0x11);
              if (cVar3 == '\0') {
                uVar6 = 0;
              }
              else {
                uVar6 = _if_nametoindex((char *)&local_448);
              }
              _CFRelease(lVar10);
            }
          } while ((uVar11 < 99) && (uVar11 = uVar11 + 1, uVar6 == 0));
          if (uVar6 == 0) {
            pcVar12 = &cf_IPv6_locationID___x_NCM__llx_cannotfindlocalinterfaceindex;
          }
          else {
            uStack_470 = uVar6;
            lVar10 = _IORegistryEntrySearchCFProperty(iVar5,"IOService",&cf_idProduct,0,3);
            if (lVar10 != 0) {
              local_448 = local_448 & 0xffffffffffff0000;
              cVar3 = _CFNumberGetValue(lVar10,2,&local_448);
              sVar2 = (short)local_448;
              _CFRelease(lVar10);
              if (cVar3 != '\0' && sVar2 != 0) {
                ___bzero(&local_448,0x401);
                _ramrod_socket_sockaddr_to_string(&local_448,0x401,&local_488,"<unknown>");
                _AMRLog(6,&cf_IPv6_locationID___x_NCM__llx_foundremoteaddress_s,local_44c,local_458,
                        &local_448);
                iVar4 = local_450;
                if (param_2 != (undefined4 *)0x0) {
                  *(ulong *)(param_2 + 3) = CONCAT44(uStack_478,uStack_47c);
                  *(ulong *)(param_2 + 5) = CONCAT44(uStack_470,uStack_474);
                  *param_2 = local_488;
                  param_2[1] = uStack_484;
                  param_2[2] = uStack_480;
                  param_2[3] = uStack_47c;
                }
                if (param_3 != (short *)0x0) {
                  *param_3 = sVar2;
                }
                _IOObjectRelease(iVar5);
                uVar7 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
                goto LAB_000eb15b;
              }
            }
            pcVar12 = &cf_IPv6_locationID___x_NCM__llx_cannotfindUSBidentifiers;
          }
          param_1 = local_44c;
          _AMRLog(4,pcVar12,local_44c);
          iVar4 = local_450;
        }
        _IOObjectRelease(iVar5);
        iVar5 = _IOIteratorNext(iVar4);
      } while (iVar5 != 0);
    }
    uVar7 = 0;
LAB_000eb15b:
    _IOObjectRelease(iVar4);
  }
  else {
LAB_000ead7d:
    uVar7 = 0;
    _AMRLog(6,&cf_IPv6_locationID___x_noNCMinterfacesfound,param_1);
  }
  _IOObjectRelease(local_460);
LAB_000eb16e:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

