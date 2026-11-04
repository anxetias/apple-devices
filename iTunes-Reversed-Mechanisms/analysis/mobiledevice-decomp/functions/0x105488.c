// rea decompile_all
// name: __AMDeviceProxyCreatePortDFUProxy
// address: 0x105488
// body: available
// range: 0x105488-0x10551c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * __AMDeviceProxyCreatePortDFUProxy(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = operator_new(0x28);
    *puVar1 = &PTR__AMDeviceProxy_004476f0;
    puVar1[1] = 0;
    puVar1[2] = 0x100000001;
    puVar1[3] = 0;
    uVar2 = _CFDictionaryCreateMutable
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                       PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                       PTR__kCFTypeDictionaryValueCallBacks_004411b8);
    puVar1[3] = uVar2;
    *puVar1 = &PTR__AMDeviceProxyCF_00448000;
    puVar1[4] = 0;
    uVar2 = _CFRetain(param_1);
    puVar1[4] = uVar2;
    *puVar1 = &PTR__AMPortDFUDeviceProxy_00447ec8;
  }
  return puVar1;
}

