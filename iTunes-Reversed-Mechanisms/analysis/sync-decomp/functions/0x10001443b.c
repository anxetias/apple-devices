// rea decompile_all
// name: MailSyncKeychainManager::passwordForHost:username:port:protocol:
// address: 0x10001443b
// body: available
// range: 0x10001443b-0x1000145c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x2c bytes */

ID MailSyncKeychainManager::passwordForHost_username_port_protocol_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_short param_5,ID param_6)

{
  undefined *puVar1;
  unsigned_int uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  ID IVar8;
  undefined6 in_register_00000082;
  long local_40;
  undefined4 local_38;
  uint local_34;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (DAT_100028ea8 != '\0') {
    return 0;
  }
  local_38 = (undefined4)CONCAT62(in_register_00000082,param_5);
  pcVar4 = (char *)(*(code *)PTR__objc_msgSend_100020210)(param_3,"UTF8String");
  pcVar5 = (char *)(*(code *)puVar1)(param_4,"UTF8String");
  uVar2 = _protocolForAccountType_(param_1,"_protocolForAccountType:",param_6);
  if (pcVar5 == (char *)0x0 || pcVar4 == (char *)0x0) {
    IVar8 = 0;
  }
  else {
    sVar6 = _strlen(pcVar4);
    sVar7 = _strlen(pcVar5);
    IVar8 = 0;
    if ((sVar6 | sVar7) >> 0x20 == 0) {
      local_34 = 0;
      local_40 = 0;
      iVar3 = _SecKeychainFindInternetPassword
                        (0,sVar6 & 0xffffffff,pcVar4,0,0,sVar7 & 0xffffffff,pcVar5,0,0,
                         (undefined2)local_38,uVar2,0x746c6664,&local_34,&local_40,0);
      if ((iVar3 == 0) && (local_34 != 0)) {
        IVar8 = _objc_alloc(&_OBJC_CLASS___NSString);
        IVar8 = NSString::initWithBytes_length_encoding_
                          (IVar8,"initWithBytes:length:encoding:",local_40,(ulong)local_34,4);
      }
      else {
        IVar8 = 0;
        if ((iVar3 != -0x62d4) && (iVar3 != 0)) {
          if (iVar3 == -0x80) {
            DAT_100028ea8 = '\x01';
            IVar8 = 0;
          }
          else {
            IVar8 = 0;
            _NSLog(&cf_Findingthepasswordfor_____fromtheKeychainreturned__d,param_4,param_3,iVar3);
          }
        }
      }
      if (local_40 != 0) {
        _SecKeychainItemFreeContent(0);
      }
    }
  }
  IVar8 = _objc_autorelease(IVar8);
  return IVar8;
}

