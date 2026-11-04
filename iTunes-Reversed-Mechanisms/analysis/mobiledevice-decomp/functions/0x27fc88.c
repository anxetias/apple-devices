// rea decompile_all
// name: _AMAuthInstallBasebandICE3StitchWorld
// address: 0x27fc88
// body: available
// range: 0x27fc88-0x27ffc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallBasebandICE3StitchWorld
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  local_58 = 0;
  local_50 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_68 = 0;
  iVar1 = 1;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    uVar2 = _CFGetAllocator(param_1);
    lVar3 = _FlsParserCreate(uVar2);
    iVar1 = 2;
    if (lVar3 != 0) {
      iVar1 = _FlsParserReadFromData(lVar3,param_2);
      if (((iVar1 == 0) && (iVar1 = _FlsParserCopyRamPsi(lVar3,&local_58), iVar1 == 0)) &&
         ((*(long *)(*(long *)(param_1 + 0x30) + 0x18) == 0 ||
          ((iVar1 = _FlsParserCopyFlashPsi(lVar3,&local_50,0), iVar1 == 0 &&
           (iVar1 = _FlsParserCopyEbl(lVar3,&local_60), iVar1 == 0)))))) {
        lVar4 = _CFDictionaryGetValue(param_3,&cf_BasebandFirmware);
        if (lVar4 == 0) {
          iVar1 = 0;
          _AMAuthInstallLog(3,"AMAuthInstallBasebandICE3StitchWorld",
                            "server response doesn\'t contain personalization data");
        }
        else {
          lVar5 = _CFDictionaryGetValue(lVar4,&cf_RamPSI_Blob);
          lVar4 = _CFDictionaryGetValue(lVar4,&cf_FlashPSI_Blob);
          lVar6 = _CFDictionaryGetValue(param_3,&cf_BBTicket);
          if (lVar5 != 0 && local_58 != 0) {
            iVar1 = _AMAuthInstallBasebandCreatePersonalizedPsiData
                              (param_1,local_58,lVar5,&local_48);
            if (iVar1 != 0) goto LAB_0027fd19;
            _AMAuthInstallDebugWriteObject(param_1,local_58,&cf_rampsi_original,1);
            _AMAuthInstallDebugWriteObject(param_1,lVar5,&cf_rampsi_stitch,1);
            _AMAuthInstallDebugWriteObject(param_1,local_48,&cf_rampsi_personalized,1);
          }
          if (lVar4 != 0 && local_50 != 0) {
            iVar1 = _AMAuthInstallBasebandCreatePersonalizedPsiData
                              (param_1,local_50,lVar4,&local_40);
            if (iVar1 != 0) goto LAB_0027fd19;
            _AMAuthInstallDebugWriteObject(param_1,local_50,&cf_flashpsi_original,1);
            _AMAuthInstallDebugWriteObject(param_1,lVar4,&cf_flashpsi_stitch,1);
            _AMAuthInstallDebugWriteObject(param_1,local_40,&cf_flashpsi_personalized,1);
          }
          if (lVar6 != 0 && local_60 != 0) {
            iVar1 = _AMAuthInstallBasebandCreatePersonalizedTicketPlusEblData
                              (param_1,local_60,lVar6,&local_38);
            if (iVar1 != 0) goto LAB_0027fd19;
            _AMAuthInstallDebugWriteObject(param_1,local_38,&cf_ticket_plus_ebl,1);
          }
          if (local_48 != 0) {
            _FlsParserReplaceRamPsi(lVar3);
          }
          if (local_40 != 0) {
            _FlsParserReplaceFlashPsi(lVar3);
          }
          if (local_38 != 0) {
            _FlsParserReplaceEbl(lVar3);
          }
          _FlsParserCopyAsData(lVar3,&local_68);
          iVar1 = 2;
          if (local_68 != 0) {
            uVar2 = _CFRetain();
            *param_4 = uVar2;
            iVar1 = 0;
          }
        }
      }
      goto LAB_0027fd19;
    }
  }
  lVar3 = 0;
LAB_0027fd19:
  _SafeRelease(lVar3);
  _SafeRelease(local_58);
  _SafeRelease(local_50);
  _SafeRelease(local_60);
  _SafeRelease(local_48);
  _SafeRelease(local_40);
  _SafeRelease(local_38);
  _SafeRelease(local_68);
  return iVar1;
}

