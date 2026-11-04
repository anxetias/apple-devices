// rea decompile_all
// name: _UARPSuperBinarySetupHeader
// address: 0x179bac
// body: available
// range: 0x179bac-0x179cbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _UARPSuperBinarySetupHeader
              (undefined8 param_1,undefined8 param_2,uint param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 local_84;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58 [10];
  
  lVar3 = _uarpPlatformAssetFindByAssetContextAndList(param_1,param_2,1);
  iVar1 = 0x1e;
  if (1 < param_3 && lVar3 != 0) {
    _uarpZero(&local_84,0x2c);
    local_84 = 0x2c00000002;
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    local_60 = 0x2c;
    local_5c = param_5 * 0x28;
    local_7c = param_5 * 0x28 + 0x2c;
    local_68 = local_7c;
    iVar1 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar3,&local_84,0x2c,0);
    if ((iVar1 == 0) && (iVar1 = 0, param_5 != 0)) {
      iVar1 = 0x2c;
      do {
        _uarpZero(local_58,0x28);
        local_58[0] = 0x28;
        iVar2 = _uarpPlatformEndpointAssetSetBytesAtOffset(param_1,0,lVar3,local_58,0x28,iVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar1 = iVar1 + 0x28;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
      iVar1 = 0;
    }
  }
  return iVar1;
}

