// rea decompile_all
// name: __AMRecoveryModeDeviceFinalize
// address: 0xf2a78
// body: available
// range: 0xf2a78-0xf2b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRecoveryModeDeviceFinalize(long param_1)

{
  _AMRLog(7,&cf__s__p,"_AMRecoveryModeDeviceFinalize",param_1);
  if (*(long *)(param_1 + 0x30) != 0) {
    __AMRUSBInterfaceClose();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    __AMRUSBDeviceClose();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0x54) == '\x01') {
    __AMRestoreDestroyDeviceInfo(param_1 + 0x58);
  }
  if (*(long *)(param_1 + 200) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  return;
}

