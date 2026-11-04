// rea decompile_all
// name: _uarpPlatformAssetResponseData
// address: 0x180819
// body: available
// range: 0x180819-0x1809c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1809c1 to 0x180772 _uarpPlatformAssetRequestData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _uarpPlatformAssetResponseData
                (undefined8 param_1,long param_2,ushort param_3,void *param_4,int param_5,
                uint param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar5 = 0x1d;
  if (*(char *)(param_2 + 0x188) != '\0') {
    if (param_3 == 0) {
      if (((*(int *)(param_2 + 0x194) == param_5) &&
          (param_7 <= *(uint *)(param_2 + 0x198) && *(uint *)(param_2 + 0x198) == param_6)) &&
         (*(uint *)(param_2 + 0x18c) + param_7 <= *(uint *)(param_2 + 0x150))) {
        lVar1 = param_2 + 0x138;
        *(undefined1 *)(param_2 + 0x188) = 0;
        *(uint *)(param_2 + 0x19c) = param_7;
        _memcpy((void *)((ulong)*(uint *)(param_2 + 0x18c) + *(long *)(param_2 + 0x148)),param_4,
                (ulong)param_7);
        iVar6 = *(int *)(param_2 + 0x18c) + *(int *)(param_2 + 0x19c);
        iVar2 = *(int *)(param_2 + 0x13c);
        *(int *)(param_2 + 0x18c) = iVar6;
        iVar7 = iVar6 + *(int *)(param_2 + 0x140);
        if (iVar7 != iVar2 && iVar6 != *(int *)(param_2 + 0x150)) {
LAB_00180985:
          if (iVar7 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x001809a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar5 = (**(code **)(param_2 + 0x180))(param_1,param_2,lVar1);
            return uVar5;
          }
          uVar5 = _uarpPlatformAssetRequestData(param_1,param_2,lVar1);
          return uVar5;
        }
        uVar3 = (**(code **)(param_2 + 0x178))(param_1,param_2,lVar1);
        uVar5 = (ulong)uVar3;
        if (uVar3 == 0) {
          uVar3 = *(uint *)(param_2 + 400);
          uVar5 = 0x41;
          uVar4 = *(uint *)(param_2 + 0x18c) - uVar3;
          if (uVar3 <= *(uint *)(param_2 + 0x18c)) {
            if (uVar4 != 0) {
              _memcpy(*(void **)(param_2 + 0x148),
                      (void *)((ulong)uVar3 + (long)*(void **)(param_2 + 0x148)),(ulong)uVar4);
              uVar3 = *(uint *)(param_2 + 400);
            }
            *(uint *)(param_2 + 0x18c) = uVar4;
            *(int *)(param_2 + 0x140) = *(int *)(param_2 + 0x140) + uVar3;
            *(undefined4 *)(param_2 + 400) = 0;
            goto LAB_00180985;
          }
        }
      }
    }
    else {
      uVar5 = (ulong)param_3;
      _uarpPlatformAssetProcessingCompleteInternal
                (param_1,*(undefined8 *)(param_2 + 0x2b8),param_2,4,0,0);
    }
  }
  return uVar5;
}

