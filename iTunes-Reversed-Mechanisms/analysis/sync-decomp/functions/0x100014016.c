// rea decompile_all
// name: MailAccountState::initWithAccountName:type:username:hostname:controller:
// address: 0x100014016
// body: available
// range: 0x100014016-0x100014109 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID MailAccountState::initWithAccountName_type_username_hostname_controller_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID local_50;
  class_t *local_48;
  ID local_40;
  ID local_38;
  
  local_48 = &objc::class_t::MailAccountState;
  local_50 = param_1;
  IVar2 = NSObject::init((ID)&local_50,"init");
  puVar1 = PTR__objc_msgSend_100020210;
  if (IVar2 != 0) {
    local_40 = param_3;
    local_38 = param_6;
    uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"copy");
    *(undefined8 *)(IVar2 + 0x10) = uVar3;
    uVar3 = (*(code *)puVar1)(param_5,"copy");
    *(undefined8 *)(IVar2 + 0x18) = uVar3;
    uVar3 = (*(code *)puVar1)(local_38,"copy");
    *(undefined8 *)(IVar2 + 0x20) = uVar3;
    uVar3 = (*(code *)puVar1)(local_40,"copy");
    *(undefined8 *)(IVar2 + 0x28) = uVar3;
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSString);
    IVar4 = NSString::initWithFormat_
                      (IVar4,"initWithFormat:",&cf_____________,*(undefined8 *)(IVar2 + 0x28),
                       *(undefined8 *)(IVar2 + 0x10),*(undefined8 *)(IVar2 + 0x18),
                       *(undefined8 *)(IVar2 + 0x20));
    *(ID *)(IVar2 + 0x30) = IVar4;
    uVar3 = (*(code *)PTR__objc_retain_100020220)(param_7);
    *(undefined8 *)(IVar2 + 0x38) = uVar3;
    *(undefined1 *)(IVar2 + 8) = 0;
  }
  return IVar2;
}

