// rea decompile_all
// name: _uarpPlatformAssetPayloadPullData
// address: 0x18114f
// body: available
// range: 0x18114f-0x1812ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1812d0 to 0x180772 _uarpPlatformAssetRequestData (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpPlatformAssetPayloadPullData(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0 || param_1 == 0) {
    return 0x1e;
  }
  if (*(int *)(param_2 + 0x1c4) == -1) {
    return 0x2c;
  }
  if (*(uint *)(param_2 + 500) < *(uint *)(param_2 + 0x1fc)) {
    return 0x2b;
  }
  if (*(uint *)(param_2 + 0x1fc) + *(int *)(param_2 + 0x1f0) <= *(uint *)(param_2 + 8)) {
    if (*(char *)(param_2 + 0x188) == '\x01') {
      return 0x10;
    }
    _uarpZero(param_2 + 0x138,0x88);
    *(int *)(param_2 + 0x138) = *(int *)(param_2 + 0x1f0) + *(int *)(param_2 + 0x1fc);
    *(int *)(param_2 + 0x13c) = *(int *)(param_2 + 500) - *(int *)(param_2 + 0x1fc);
    *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)(param_2 + 0x280);
    *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0x288);
    *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_2 + 0x288);
    *(code **)(param_2 + 0x178) = _uarpPlatformAssetPayloadDataRequestWindowFilled;
    *(code **)(param_2 + 0x180) = _uarpPlatformAssetPayloadDataRequestCompleted;
    *(undefined4 *)(param_2 + 0x1a0) = *(undefined4 *)(param_2 + 0x208);
    _UARPLayer2HashInfo(param_1,*(undefined4 *)(param_2 + 0x208),param_2 + 0x1a4,
                        (int *)(param_2 + 0x1b0));
    if (*(int *)(param_2 + 0x1a4) != 0) {
      uVar1 = _UARPLayer2RequestBuffer(param_1,(long *)(param_2 + 0x1a8));
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(long *)(param_2 + 0x1a8) == 0) {
        return 0xb;
      }
    }
    if (*(int *)(param_2 + 0x1b0) != 0) {
      uVar1 = _UARPLayer2RequestBuffer(param_1,(long *)(param_2 + 0x1b8));
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      if (*(long *)(param_2 + 0x1b8) == 0) {
        return 0xb;
      }
    }
    _UARPLayer2HashInit(param_1,*(undefined4 *)(param_2 + 0x1a0),*(undefined8 *)(param_2 + 0x1a8));
    uVar1 = _uarpPlatformAssetRequestData(param_1,param_2,param_2 + 0x138);
    return uVar1;
  }
  return 0x2b;
}

