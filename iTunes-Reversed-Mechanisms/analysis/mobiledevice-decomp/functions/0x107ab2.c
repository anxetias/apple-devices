// rea decompile_all
// name: AMDeviceProxyCF<__AMRestoreModeDevice*>::AMDeviceProxyCF
// address: 0x107ab2
// body: available
// range: 0x107ab2-0x107b2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* AMDeviceProxyCF<__AMRestoreModeDevice*>::AMDeviceProxyCF(__AMRestoreModeDevice*) */

void __thiscall
AMDeviceProxyCF<__AMRestoreModeDevice*>::AMDeviceProxyCF
          (AMDeviceProxyCF<__AMRestoreModeDevice*> *this,__AMRestoreModeDevice *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__AMDeviceProxy_004476f0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0x100000001;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = _CFDictionaryCreateMutable
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
                     PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                     PTR__kCFTypeDictionaryValueCallBacks_004411b8);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR__AMDeviceProxyCF_00448480;
  *(undefined8 *)(this + 0x20) = 0;
  uVar1 = _CFRetain(param_1);
  *(undefined8 *)(this + 0x20) = uVar1;
  return;
}

