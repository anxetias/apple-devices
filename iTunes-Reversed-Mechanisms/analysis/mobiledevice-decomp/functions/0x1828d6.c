// rea decompile_all
// name: _uarpPlatformPrepareAsset
// address: 0x1828d6
// body: available
// range: 0x1828d6-0x1829dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_uarpPlatformPrepareAsset
          (long param_1,long param_2,long param_3,undefined4 *param_4,undefined8 param_5,
          char param_6)

{
  undefined8 uVar1;
  int iVar2;
  long local_40;
  undefined4 *local_38;
  
  uVar1 = 0x1e;
  if (param_3 != 0 && (param_2 != 0 && param_1 != 0)) {
    local_38 = param_4;
    uVar1 = _UARPLayer2RequestBuffer(param_1,&local_40,0x2d8);
    if ((int)uVar1 == 0) {
      if (local_40 == 0) {
        uVar1 = 0xb;
      }
      else {
        *(long *)(local_40 + 0x2c0) = param_3;
        *(long *)(local_40 + 0x2b8) = param_2;
        uVar1 = _uarpPlatformEndpointAssetSetCallbacks(param_1,local_40,param_5);
        if ((int)uVar1 == 0) {
          if (param_6 == '\x01') {
            *(undefined4 *)(local_40 + 0x130) = 1;
            iVar2 = *(int *)(param_1 + 0x240);
            if (*(int *)(param_1 + 0x240) == 0xfffe) {
              iVar2 = 1;
            }
            *(int *)(param_1 + 0x240) = iVar2 + 1;
          }
          else {
            *(undefined4 *)(local_40 + 0x130) = 0;
            iVar2 = 0;
          }
          *(short *)(local_40 + 0x2c) = (short)iVar2;
          *(undefined8 *)(local_40 + 0x2c8) = *(undefined8 *)(param_1 + 0x238);
          *(long *)(param_1 + 0x238) = local_40;
          if (local_38 == (undefined4 *)0x0) {
            *(undefined2 *)(local_40 + 0x2e) = 1;
          }
          else {
            *(undefined2 *)(local_40 + 0x2e) = 2;
            *(undefined4 *)(local_40 + 0x30) = *local_38;
          }
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

