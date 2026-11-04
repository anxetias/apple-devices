// rea decompile_all
// name: RPStreamHost::initWithHost:port:cb:userContext:queue:
// address: 0x192024
// body: available
// range: 0x192024-0x192151 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID RPStreamHost::initWithHost_port_cb_userContext_queue_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 *param_5,void *param_6,
             ID param_7)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  objc_super local_48;
  ID local_38;
  
  local_48.super_class = &objc::class_t::RPStreamHost;
  local_48.receiver = param_1;
  local_38 = param_3;
  IVar2 = _objc_msgSendSuper2(&local_48,"init");
  puVar1 = PTR__objc_msgSend_00441098;
  (*(code *)PTR__objc_msgSend_00441098)(IVar2,"setCb:",param_5);
  (*(code *)puVar1)(IVar2,"setCbUserContext:",param_6);
  uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  uVar3 = (*(code *)puVar1)(&_OBJC_CLASS___NSURLSession,
                            "sessionWithConfiguration:delegate:delegateQueue:",uVar3,IVar2,param_7);
  (*(code *)puVar1)(IVar2,"setSession:",uVar3);
  uVar3 = (*(code *)puVar1)(IVar2,"session");
  uVar4 = (*(code *)puVar1)(param_4,"integerValue");
  uVar3 = (*(code *)puVar1)(uVar3,"streamTaskWithHostName:port:",local_38,uVar4);
  (*(code *)puVar1)(IVar2,"setTask:",uVar3);
  uVar3 = (*(code *)puVar1)(IVar2,"task");
  (*(code *)puVar1)(uVar3,"resume");
  uVar3 = (*(code *)puVar1)(IVar2,"task");
  (*(code *)puVar1)(uVar3,"captureStreams");
  return IVar2;
}

