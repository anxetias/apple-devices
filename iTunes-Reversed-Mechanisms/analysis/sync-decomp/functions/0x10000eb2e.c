// rea decompile_all
// name: FUN_10000eb2e
// address: 0x10000eb2e
// body: available
// range: 0x10000eb2e-0x10000ee5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_10000eb2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ID self;
  long lVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ID IVar8;
  cfstringStruct *pcVar9;
  code *pcVar10;
  
  pcVar10 = (code *)PTR__objc_msgSend_100020210;
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_1,"count");
  self = NSMutableDictionary::dictionaryWithCapacity_
                   ((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithCapacity:",uVar3);
  uVar3 = (*pcVar10)(param_1,"keyEnumerator");
  lVar4 = (*pcVar10)(uVar3,"nextObject");
  while (lVar4 != 0) {
    lVar5 = (*pcVar10)(param_2,"objectForKey:",lVar4);
    if (lVar5 != 0) {
      pcVar6 = (cfstringStruct *)(*pcVar10)(param_1,"objectForKey:",lVar4);
      lVar7 = (*pcVar10)(param_3,"objectForKey:",lVar4);
      pcVar9 = pcVar6;
      if (lVar7 != 0) {
        iVar2 = (*pcVar10)(lVar7,"intValue");
        pcVar10 = (code *)PTR__objc_msgSend_100020210;
        if (iVar2 == 3) {
          cVar1 = _DLShouldLog(5);
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                    ,"_copyRecordWithNewKeys",5,&cf_Translatingboolstringfor_____,lVar4,pcVar6);
          }
          cVar1 = (*(code *)PTR__objc_msgSend_100020210)(pcVar6,"respondsToSelector:","intValue");
          pcVar10 = (code *)PTR__objc_msgSend_100020210;
          if (cVar1 == '\x01') {
            iVar2 = (*(code *)PTR__objc_msgSend_100020210)(pcVar6,"intValue");
            pcVar9 = &cf_YES;
            if (iVar2 == 0) {
              pcVar9 = &cf_NO;
            }
          }
          else {
            cVar1 = _DLShouldLog(3);
            pcVar10 = (code *)PTR__objc_msgSend_100020210;
            pcVar9 = &cf_NO;
            if (cVar1 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                      ,"_copyRecordWithNewKeys",3,
                      &cf_ValuetobetranslatedtoBoolStringdoesn_trespondtointValuemessage______,lVar4
                      ,pcVar6);
              pcVar9 = &cf_NO;
            }
          }
        }
        else if (iVar2 == 2) {
          pcVar9 = (cfstringStruct *)
                   NSString::stringWithFormat_
                             ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___,pcVar6);
        }
        else if (iVar2 == 0) {
          IVar8 = NSString::class((ID)&_OBJC_CLASS___NSString,"class");
          cVar1 = (*pcVar10)(pcVar6,"isKindOfClass:",IVar8);
          if (cVar1 != '\0') {
            cVar1 = (*pcVar10)(pcVar6,"isEqualToString:",&cf_YES);
            pcVar9 = (cfstringStruct *)
                     NSNumber::numberWithBool_
                               ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",
                                (ulong)(uint)(int)cVar1);
          }
        }
        else {
          cVar1 = _DLShouldLog(3);
          pcVar10 = (code *)PTR__objc_msgSend_100020210;
          if (cVar1 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
                    ,"_copyRecordWithNewKeys",3,&cf_Unknowntranslationtype__intableforkey__,lVar7,
                    lVar4);
            pcVar10 = (code *)PTR__objc_msgSend_100020210;
          }
        }
      }
      NSMutableDictionary::setObject_forKey_(self,"setObject:forKey:",pcVar9,lVar5);
    }
    lVar4 = (*pcVar10)(uVar3,"nextObject");
  }
  return self;
}

