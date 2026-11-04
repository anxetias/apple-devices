// rea decompile_all
// name: __AMAuthInstallSsoCreateServiceTicketWithAppId
// address: 0x29d65d
// body: available
// range: 0x29d65d-0x29d7b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __AMAuthInstallSsoCreateServiceTicketWithAppId
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 *param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_48;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  iVar3 = __AMAuthInstallSsoCreateServiceTicketAndDAWToken
                    (param_1,param_3,param_4,0,&local_40,&local_38,0,param_6);
  lVar2 = local_38;
  lVar1 = local_40;
  if (((iVar3 == 0) && (iVar3 = 0xe, local_40 != 0)) && (local_38 != 0)) {
    if (param_5 == (undefined8 *)0x0) {
      iVar3 = 0;
    }
    else {
      uVar4 = _CFStringGetLength(local_40);
      lVar5 = _CFStringGetMaximumSizeForEncoding(uVar4,0x8000100);
      lVar6 = _CFDataGetLength(lVar2);
      uVar7 = _CFDataCreateMutable(param_2,lVar5 + lVar6 + 1);
      local_48 = 0;
      _CFDataSetLength(uVar7,lVar5);
      uVar8 = _CFDataGetMutableBytePtr(uVar7);
      iVar3 = 0;
      _CFStringGetBytes(lVar1,0,uVar4,0x8000100,0,0,uVar8,lVar5,&local_48);
      _CFDataSetLength(uVar7,local_48 + 1);
      uVar4 = _CFDataGetBytePtr(lVar2);
      uVar8 = _CFDataGetLength(lVar2);
      _CFDataAppendBytes(uVar7,uVar4,uVar8);
      *param_5 = uVar7;
    }
  }
  _SafeRelease(local_38);
  _SafeRelease(local_40);
  return iVar3;
}

