// rea decompile_all
// name: AMBootedOSDeviceProxy::CopyLockdownValue
// address: 0x10a4ec
// body: available
// range: 0x10a4ec-0x10a554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMBootedOSDeviceProxy::CopyLockdownValue(__CFString const*, bool) */

long AMBootedOSDeviceProxy::CopyLockdownValue(__CFString *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  bool in_DL;
  undefined7 in_register_00000031;
  int *in_R8;
  
  lVar1 = _AMDeviceProxyCopyLockdownValueWithError
                    (*(_AMDevice **)(param_1 + 0x20),(__CFString *)0x0,
                     (__CFString *)CONCAT71(in_register_00000031,param_2),in_DL,in_R8);
  if (lVar1 == 0) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    AMDeviceProxy::Log((int)param_1,(__CFString *)((long)&MACH_HEADER.magic + 3),
                       &cf_Failedtoextract__from_s__08x__s_,
                       (__CFString *)CONCAT71(in_register_00000031,param_2),uVar2,0,"kAMDSuccess");
  }
  return lVar1;
}

