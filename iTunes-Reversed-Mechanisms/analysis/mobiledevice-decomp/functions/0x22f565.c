// rea decompile_all
// name: UARPSuperBinaryBackDeploy::logInternal:arguments:
// address: 0x22f565
// body: available
// range: 0x22f565-0x22f693 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void UARPSuperBinaryBackDeploy::logInternal_arguments_
               (ID param_1,SEL param_2,ID param_3,__va_list_tag *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined8 local_38;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableString);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(uVar4,"initWithFormat:arguments:",uVar3,param_4);
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  (*(code *)puVar1)(uVar4,"appendString:",&cf_newline_s_);
  lVar5 = _objc_loadWeakRetained(param_1 + 8);
  (*(code *)puVar2)(lVar5);
  if (lVar5 != 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 == 0) {
      uVar3 = _objc_loadWeakRetained(param_1 + 8);
      (*(code *)PTR__objc_msgSend_00441098)(uVar3,"superbinary:logString:",param_1,uVar4);
    }
    else {
      local_60 = PTR___NSConcreteStackBlock_004412a8;
      local_58 = 0xc2000000;
      local_50 = ___51__UARPSuperBinaryBackDeploy_logInternal_arguments___block_invoke;
      local_48 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
      local_40 = param_1;
      local_38 = (*(code *)PTR__objc_retain_004410a8)(uVar4);
      _dispatch_async(lVar5,&local_60);
      uVar3 = local_38;
    }
    (*(code *)PTR__objc_release_004410a0)(uVar3);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  return;
}

