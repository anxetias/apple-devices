// rea decompile_all
// name: _parseKeyValueIntoDeviceInfo
// address: 0xdfb31
// body: available
// range: 0xdfb31-0xdfe00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdfcd7 to 0xdfa16 _parseNumTokenValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xdfd39 to 0xdfab0 _parseStringTokenValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xdfd5a to 0xdfa63 _parseNum64TokenValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong _parseKeyValueIntoDeviceInfo(char *param_1,char *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 auVar8 [16];
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = _strcmp("CPID",param_1);
  if (iVar3 != 0) {
    iVar3 = _strcmp("BDID",param_1);
    if (iVar3 == 0) {
      param_3 = param_3 + 4;
    }
    else {
      iVar3 = _strcmp("SCEP",param_1);
      if (iVar3 != 0) {
        iVar3 = _strcmp("SRNM",param_1);
        if (iVar3 == 0) {
          param_3 = param_3 + 0x18;
        }
        else {
          iVar3 = _strcmp("IBFL",param_1);
          if (iVar3 == 0) {
            iVar3 = _parseNumTokenValue(param_2,param_3 + 0x10);
            if (iVar3 != 0) {
              return 0xffffffff;
            }
            *(undefined1 *)(param_3 + 0x5f) = 1;
            uVar1 = *(undefined4 *)(param_3 + 0x10);
            uVar11 = (undefined1)((uint)uVar1 >> 0x18);
            uVar10 = (undefined1)((uint)uVar1 >> 0x10);
            uVar9 = (undefined1)((uint)uVar1 >> 8);
            auVar8._4_4_ = (int)(CONCAT35(CONCAT21(CONCAT11(uVar11,uVar11),uVar10),
                                          CONCAT14(uVar10,uVar1)) >> 0x20);
            auVar8[3] = uVar9;
            auVar8[2] = uVar9;
            auVar8[0] = (undefined1)uVar1;
            auVar8[1] = auVar8[0];
            auVar8._8_8_ = 0;
            auVar8 = pshuflw(auVar8,auVar8,0);
            *(uint *)(param_3 + 0x5b) = auVar8._0_4_ & (uint)DAT_0032c520;
            return 0;
          }
          iVar3 = _strcmp("IMEI",param_1);
          if (iVar3 != 0) {
            iVar3 = _strcmp("IBEC",param_1);
            if (iVar3 != 0) {
              iVar3 = _strcmp("ECID",param_1);
              if (iVar3 == 0) {
                uVar7 = _parseNum64TokenValue(param_2,param_3 + 0x48);
                return uVar7;
              }
              iVar3 = _strcmp("CPFM",param_1);
              if (iVar3 == 0) {
                local_30 = 0;
                uVar4 = _parseNumTokenValue(param_2,&local_30);
                uVar7 = (ulong)uVar4;
                *(byte *)(param_3 + 0x58) = (byte)local_30 >> 1 & 1;
                *(byte *)(param_3 + 0x59) = (byte)local_30 & 1;
                *(byte *)(param_3 + 0x5a) = (byte)local_30 >> 2 & 1;
              }
              else {
                iVar3 = _strcmp("SDOM",param_1);
                if (iVar3 == 0) {
                  param_3 = param_3 + 0x54;
                  goto LAB_000dfcc5;
                }
                iVar3 = _strcmp("SIKA",param_1);
                if (iVar3 == 0) {
                  if (*(long *)(param_3 + 0x60) != 0) {
                    _CFRelease();
                  }
                  local_2c = 0;
                  uVar4 = _parseNumTokenValue(param_2,&local_2c);
                  lVar6 = _CFNumberCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,3,
                                          &local_2c);
                  *(long *)(param_3 + 0x60) = lVar6;
                  uVar7 = 0x12;
                  if (lVar6 != 0) {
                    uVar7 = (ulong)uVar4;
                  }
                }
                else {
                  iVar3 = _strcmp("epochs",param_1);
                  uVar7 = 0;
                  if (iVar3 == 0) {
                    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
                    sVar5 = _strlen(param_2);
                    lVar6 = _AMSupportCopyDataFromAsciiEncodedHex(uVar2,param_2,sVar5);
                    *(long *)(param_3 + 0x40) = lVar6;
                    if ((lVar6 != 0) && (lVar6 = _CFDataGetLength(lVar6), lVar6 != 8)) {
                      _CFRelease(*(undefined8 *)(param_3 + 0x40));
                      *(undefined8 *)(param_3 + 0x40) = 0;
                      uVar7 = 0xffffffff;
                    }
                  }
                }
              }
                    /* WARNING: Read-only address (ram,0x0032c520) is written */
              return uVar7;
            }
            param_3 = param_3 + 0xc;
            goto LAB_000dfcc5;
          }
          param_3 = param_3 + 0x28;
        }
        uVar7 = _parseStringTokenValue(param_2,param_3);
        return uVar7;
      }
      param_3 = param_3 + 8;
    }
  }
LAB_000dfcc5:
  uVar7 = _parseNumTokenValue(param_2,param_3);
  return uVar7;
}

