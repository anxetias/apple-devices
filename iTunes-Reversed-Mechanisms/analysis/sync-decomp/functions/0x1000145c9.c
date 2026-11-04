// rea decompile_all
// name: MailSyncKeychainManager::passwordForServiceName:accountName:
// address: 0x1000145c9
// body: available
// range: 0x1000145c9-0x100014712 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID MailSyncKeychainManager::passwordForServiceName_accountName_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  ID IVar7;
  long local_40;
  uint local_34;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (DAT_100028ea8 != '\0') {
    return 0;
  }
  pcVar3 = (char *)(*(code *)PTR__objc_msgSend_100020210)(param_4,"UTF8String");
  pcVar4 = (char *)(*(code *)puVar1)(param_3,"UTF8String");
  if (pcVar4 != (char *)0x0 && pcVar3 != (char *)0x0) {
    sVar5 = _strlen(pcVar3);
    sVar6 = _strlen(pcVar4);
    if ((sVar5 | sVar6) >> 0x20 == 0) {
      local_34 = 0;
      local_40 = 0;
      iVar2 = _SecKeychainFindGenericPassword
                        (0,sVar6 & 0xffffffff,pcVar4,sVar5 & 0xffffffff,pcVar3,&local_34,&local_40,0
                        );
      if ((iVar2 == 0) && (local_34 != 0)) {
        IVar7 = _objc_alloc(&_OBJC_CLASS___NSString);
        IVar7 = NSString::initWithBytes_length_encoding_
                          (IVar7,"initWithBytes:length:encoding:",local_40,(ulong)local_34,4);
      }
      else {
        IVar7 = 0;
        if ((iVar2 != -0x62d4) && (iVar2 != 0)) {
          if (iVar2 == -0x80) {
            DAT_100028ea8 = '\x01';
            IVar7 = 0;
          }
          else {
            IVar7 = 0;
            _NSLog(&cf_Findingthepasswordfor_____fromtheKeychainreturned__d,param_4,param_3,iVar2);
          }
        }
      }
      if (local_40 != 0) {
        _SecKeychainItemFreeContent(0);
      }
      goto LAB_1000146c2;
    }
  }
  IVar7 = 0;
LAB_1000146c2:
  IVar7 = _objc_autorelease(IVar7);
  return IVar7;
}

