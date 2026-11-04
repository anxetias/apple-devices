// rea decompile_all
// name: __AMRUSBInterfaceWritePipe
// address: 0xe9f46
// body: available
// range: 0xe9f46-0xea02a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
__AMRUSBInterfaceWritePipe
          (undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_48 = &local_50;
  local_50 = 0;
  local_40 = 0x2020000000;
  local_38 = 0;
  uVar2 = _objc_alloc(&_OBJC_CLASS___NSData);
  uVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (uVar2,"initWithBytesNoCopy:length:freeWhenDone:",param_3,param_4,0);
  (*(code *)PTR__objc_msgSend_00441098)
            (param_1,"writePipe:data:length:withReply:",param_2,uVar2,param_4);
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  uVar1 = *(undefined4 *)(local_48 + 3);
  __Block_object_dispose(&local_50,8);
  return uVar1;
}

