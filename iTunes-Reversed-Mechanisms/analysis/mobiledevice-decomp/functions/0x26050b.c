// rea decompile_all
// name: _verifyUSBCPortControllerNonceHash
// address: 0x26050b
// body: available
// range: 0x26050b-0x26059e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x26058b to 0x260413 _ace3_check_adfu_log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _verifyUSBCPortControllerNonceHash
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  ulong uVar2;
  
  __log = param_3;
  __context = param_4;
  _ace3_check_adfu_log("Checking LUN=%u\n");
  if (__lun_in_adfu_populated == '\0') {
    uVar2 = _verifyUSBCPortControllerNonceHash_cold_1(param_2 & 0xff);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  else if (__num_updatable_aces < (byte)(param_2 & 0xffffffff)) {
    return;
  }
  if (*(char *)((long)&logContext + (param_2 & 0xff) + 7) != '\0') {
    _ace3_check_adfu_log("Flipping nonce for LUN=%u\n",param_2 & 0xffffffff);
    pbVar1 = (byte *)_CFDataGetMutableBytePtr(param_1);
    if (pbVar1 == (byte *)0x0) {
      _ace3_check_adfu_log("Could not get nonceHash!\n");
      return;
    }
    *pbVar1 = *pbVar1 ^ 1;
  }
  return;
}

