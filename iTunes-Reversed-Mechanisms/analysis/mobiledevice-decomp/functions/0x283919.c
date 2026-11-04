// rea decompile_all
// name: _AMAuthInstallBasebandVinylLocalHandleRequest
// address: 0x283919
// body: available
// range: 0x283919-0x283e1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandVinylLocalHandleRequest
              (long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined8 uStack_80;
  long local_70;
  long local_68;
  long local_60;
  undefined8 *local_58;
  long local_50;
  uint local_44;
  long local_40;
  ushort local_32;
  
  iVar4 = 1;
  if (param_1 == 0) {
    return 1;
  }
  local_40 = param_1;
  lVar5 = _CFDictionaryGetValue(param_2,&cf__EUICCTicket);
  if (lVar5 != 0) {
    lVar6 = _CFGetTypeID(lVar5);
    lVar7 = _CFBooleanGetTypeID();
    if (lVar6 != lVar7) {
      _AMAuthInstallLog(3,"AMAuthInstallBasebandVinylLocalHandleRequest",
                        "euicc Request is present but not boolean?");
      return 99;
    }
    cVar2 = _CFBooleanGetValue(lVar5);
    if (cVar2 != '\0') {
      iVar3 = _AMAuthInstallBasebandVinylLocalRegisterKeys(local_40);
      if (iVar3 != 0) {
        return iVar3;
      }
      local_32 = 0xffff;
      lVar5 = _CFDictionaryGetValue(param_2,&cf_EUICCTicketVersion);
      if (lVar5 == 0) {
LAB_00283d17:
        pcVar14 = "ticketVersion missing or mistyped";
      }
      else {
        lVar6 = _CFNumberGetTypeID();
        lVar7 = _CFGetTypeID(lVar5);
        if (lVar6 != lVar7) goto LAB_00283d17;
        cVar2 = _CFNumberGetValue(lVar5,2,&local_32);
        if (cVar2 == '\0') {
          _AMAuthInstallLog(3,"AMAuthInstallBasebandVinylLocalHandleRequest",
                            "couldn\'t get ticketVersion value %@",lVar5);
          return 1;
        }
        if (1 < local_32) {
          _AMAuthInstallLog(3,"AMAuthInstallBasebandVinylLocalHandleRequest",
                            "don\'t understand ticketVersion %d");
          return 1;
        }
        lVar5 = _CFDictionaryGetValue(param_2,&cf_EUICCCertIdentifier);
        local_44 = 0;
        if (lVar5 != 0) {
          lVar6 = _CFDataGetTypeID();
          lVar7 = _CFGetTypeID(lVar5);
          if ((lVar6 == lVar7) && (uVar8 = _CFDataGetLength(lVar5), 3 < uVar8)) {
            _CFDataGetBytes(lVar5,0,4,&local_44);
            local_44 = local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 |
                       local_44 << 0x18;
            local_50 = _AMAuthInstallBasebandVinylLocalResolveKeyIdentifier();
            if (local_50 == 0) {
              return 0;
            }
            local_70 = 0;
            local_68 = 0;
            lVar5 = _CFDictionaryGetValue(param_2,&cf_BasebandFirmware);
            if (lVar5 == 0) {
LAB_00283d29:
              pcVar14 = "Missing or wrong-typed baseband measurement dict";
LAB_00283d87:
              _AMAuthInstallLog(3,"HandleRequestV0",pcVar14);
              iVar4 = 1;
LAB_00283d98:
              lVar6 = 0;
            }
            else {
              lVar6 = _CFDictionaryGetTypeID();
              lVar7 = _CFGetTypeID(lVar5);
              if (lVar6 != lVar7) goto LAB_00283d29;
              lVar6 = _CFDictionaryGetValue(lVar5,&cf_EUICCSignedProfileMain);
              if (lVar6 == 0) {
LAB_00283d39:
                pcVar14 = "Missing or wrong-typed baseband mainProfile";
                goto LAB_00283d87;
              }
              lVar7 = _CFDataGetTypeID();
              lVar9 = _CFGetTypeID(lVar6);
              if (lVar7 != lVar9) goto LAB_00283d39;
              lVar5 = _CFDictionaryGetValue(lVar5,&cf_EUICCSignedProfileGold);
              if (lVar5 == 0) {
LAB_00283d49:
                pcVar14 = "Missing or wrong-typed baseband goldProfile";
                goto LAB_00283d87;
              }
              lVar7 = _CFDataGetTypeID();
              lVar9 = _CFGetTypeID(lVar5);
              if (lVar7 != lVar9) goto LAB_00283d49;
              local_60 = lVar5;
              lVar5 = _CFDictionaryGetValue(param_2,&cf_EUICCCSN);
              if (lVar5 == 0) {
LAB_00283d59:
                pcVar14 = "Missing or wrong-typed baseband csn";
                goto LAB_00283d87;
              }
              lVar7 = _CFDataGetTypeID();
              lVar9 = _CFGetTypeID(lVar5);
              if (lVar7 != lVar9) goto LAB_00283d59;
              local_58 = param_3;
              lVar7 = _CFDictionaryGetValue(param_2,&cf_EUICCMainNonce);
              if (lVar7 == 0) {
LAB_00283d69:
                pcVar14 = "Missing or wrong-typed baseband mainNonce";
                goto LAB_00283d87;
              }
              lVar9 = _CFDataGetTypeID();
              lVar10 = _CFGetTypeID(lVar7);
              if (lVar9 != lVar10) goto LAB_00283d69;
              lVar9 = _CFDictionaryGetValue(param_2,&cf_EUICCGoldNonce);
              if (lVar9 == 0) {
LAB_00283d79:
                pcVar14 = "Missing or wrong-typed baseband goldNonce";
                goto LAB_00283d87;
              }
              lVar10 = _CFDataGetTypeID();
              lVar11 = _CFGetTypeID(lVar9);
              if (lVar10 != lVar11) goto LAB_00283d79;
              iVar4 = _CreateTicket(local_40,lVar7,lVar5,lVar6,local_50,&local_70);
              lVar6 = local_70;
              _AMAuthInstallLog(3,"HandleRequestV0","CreateTicket %d %@",iVar4,local_70);
              if (iVar4 == 0) {
                iVar4 = 0xe;
                if (lVar6 != 0) {
                  iVar4 = _CreateTicket(local_40,lVar9,lVar5,local_60,local_50,&local_68);
                  lVar5 = local_68;
                  uVar12 = 0;
                  if (iVar4 == 0) {
                    if (local_68 == 0) {
                      lVar5 = 0;
                      iVar4 = 0xe;
                    }
                    else {
                      uVar12 = _CFGetAllocator(local_40);
                      puVar1 = local_58;
                      uVar12 = _CFDictionaryCreateMutableCopy(uVar12,0,*local_58);
                      _CFDictionarySetValue(uVar12,&cf_EuiccMainTicket,lVar6);
                      _CFDictionarySetValue(uVar12,&cf_EuiccGoldTicket,lVar5);
                      _SafeRelease(*puVar1);
                      uVar13 = _CFRetain(uVar12);
                      *puVar1 = uVar13;
                      iVar4 = 0;
                    }
                  }
                  goto LAB_00283cc0;
                }
                goto LAB_00283d98;
              }
            }
            lVar5 = 0;
            uVar12 = 0;
LAB_00283cc0:
            _SafeRelease(uVar12);
            _SafeRelease(lVar6);
            _SafeRelease(lVar5);
            return iVar4;
          }
        }
        pcVar14 = "Missing or wrong-typed or insufficient length baseband certIdentifier";
      }
      uStack_80 = 3;
      goto LAB_00283ced;
    }
  }
  pcVar14 = "Nothing to see here move along ...";
  iVar4 = 0;
  uStack_80 = 6;
LAB_00283ced:
  _AMAuthInstallLog(uStack_80,"AMAuthInstallBasebandVinylLocalHandleRequest",pcVar14);
  return iVar4;
}

