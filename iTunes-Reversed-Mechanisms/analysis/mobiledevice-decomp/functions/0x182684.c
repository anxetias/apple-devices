// rea decompile_all
// name: _uarpPlatformCleanupAssetsForRemoteEndpoint
// address: 0x182684
// body: available
// range: 0x182684-0x182776 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _uarpPlatformCleanupAssetsForRemoteEndpoint(long param_1,long param_2,char param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x244) != '\x01') {
    lVar1 = *(long *)(param_1 + 0x238);
    *(undefined8 *)(param_1 + 0x238) = 0;
    while (lVar1 != 0) {
      lVar2 = *(long *)(lVar1 + 0x2c8);
      *(undefined8 *)(lVar1 + 0x2c8) = 0;
      if (((*(long *)(lVar1 + 0x2b8) == param_2) || (param_2 == 0)) ||
         (*(long *)(lVar1 + 0x2b8) == 0)) {
        if (param_3 == '\x01') {
          if ((*(byte *)(lVar1 + 0x2e) & 1) == 0) {
            *(undefined1 *)(lVar1 + 0x48) = 1;
          }
          else {
            *(undefined8 *)(lVar1 + 0x2b8) = 0;
            _UARPLayer2AssetOrphaned(param_1,lVar1);
          }
        }
        if (*(char *)(lVar1 + 0x48) != '\x01') goto LAB_00182749;
        _UARPLayer2AssetReleased2(param_1,param_2,lVar1);
        *(undefined8 *)(lVar1 + 0x2c0) = 0;
        _uarpPlatformAssetCleanup(param_1,lVar1);
        lVar1 = lVar2;
      }
      else {
LAB_00182749:
        *(undefined8 *)(lVar1 + 0x2c8) = *(undefined8 *)(param_1 + 0x238);
        *(long *)(param_1 + 0x238) = lVar1;
        lVar1 = lVar2;
      }
    }
  }
  return;
}

