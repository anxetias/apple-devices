// rea decompile_all
// name: PersonalizedImage::initWithDevice:remoteDevice:bundleURL:imageVariant:options:
// address: 0x122eaf
// body: available
// range: 0x122eaf-0x123251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x38 bytes */

ID PersonalizedImage::initWithDevice_remoteDevice_bundleURL_imageVariant_options_
             (ID param_1,SEL param_2,_AMDevice *param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  objc_super local_40;
  
  if (param_4 == 0 || param_3 == (_AMDevice *)0x0) {
    if (param_6 != 0 && (param_3 != (_AMDevice *)0x0 || param_4 != 0)) {
      local_40.super_class = &objc::class_t::PersonalizedImage;
      local_40.receiver = param_1;
      IVar4 = _objc_msgSendSuper2(&local_40,"init");
      if (IVar4 != 0) {
        if (param_3 == (_AMDevice *)0x0) {
          uVar5 = (*(code *)PTR__objc_retain_004410a8)(param_4);
          lVar6 = 0x10;
        }
        else {
          uVar5 = _AMDeviceCreateCopy(param_3);
          lVar6 = 8;
        }
        *(undefined8 *)(IVar4 + lVar6) = uVar5;
        puVar1 = PTR__objc_msgSend_00441098;
        uVar5 = (*(code *)PTR__objc_msgSend_00441098)(param_5,"copy");
        *(undefined8 *)(IVar4 + 0x18) = uVar5;
        uVar5 = (*(code *)puVar1)(param_6,"copy");
        *(undefined8 *)(IVar4 + 0x38) = uVar5;
        *(undefined4 *)(IVar4 + 0xb0) = 0x30;
        *(undefined1 *)(IVar4 + 0xb4) = 1;
        uVar5 = _objc_alloc(&_OBJC_CLASS___NSURL);
        uVar5 = (*(code *)puVar1)(uVar5,"initWithString:",&cf_https___gs_apple_com_443);
        *(undefined8 *)(IVar4 + 0xb8) = uVar5;
        uVar5 = _CFRetain(&cf_Personalized);
        *(undefined8 *)(IVar4 + 200) = uVar5;
        if (param_7 != 0) {
          lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (param_7,"objectForKeyedSubscript:",&cf_UseCredentials);
          if (lVar6 != 0) {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
            cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
            if (cVar2 != '\0') {
              uVar3 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"boolValue");
              *(undefined1 *)(IVar4 + 0xb4) = uVar3;
            }
          }
          lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (param_7,"objectForKeyedSubscript:",&cf_SigningServerURL);
          if (lVar6 != 0) {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSURL,"class");
            cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
            if (cVar2 != '\0') {
              (*(code *)PTR__objc_release_004410a0)(*(undefined8 *)(IVar4 + 0xb8));
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"copy");
              *(undefined8 *)(IVar4 + 0xb8) = uVar5;
            }
          }
          lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (param_7,"objectForKeyedSubscript:",&cf_MountedBundlePath);
          if (lVar6 != 0) {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSURL,"class");
            cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
            if (cVar2 != '\0') {
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"copy");
              *(undefined8 *)(IVar4 + 0xc0) = uVar5;
            }
          }
          lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (param_7,"objectForKeyedSubscript:",&cf_UseCryptexFlow);
          if (lVar6 != 0) {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
            cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
            if (cVar2 != '\0') {
              uVar5 = _CFRetain(&cf_Cryptex);
              *(undefined8 *)(IVar4 + 200) = uVar5;
            }
          }
          lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (param_7,"objectForKeyedSubscript:",&cf_SSOUsername);
          if (lVar6 != 0) {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"class");
            cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
            if (cVar2 != '\0') {
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"copy");
              *(undefined8 *)(IVar4 + 0xd0) = uVar5;
            }
          }
          lVar6 = (*(code *)PTR__objc_msgSend_00441098)
                            (param_7,"objectForKeyedSubscript:",&cf_SSOData);
          if (lVar6 != 0) {
            uVar5 = (*(code *)puVar1)(&_OBJC_CLASS___NSData,"class");
            cVar2 = (*(code *)puVar1)(lVar6,"isKindOfClass:",uVar5);
            if (cVar2 != '\0') {
              uVar5 = (*(code *)PTR__objc_msgSend_00441098)(lVar6,"copy");
              *(undefined8 *)(IVar4 + 0xd8) = uVar5;
            }
          }
        }
        if (param_5 != 0) {
          return IVar4;
        }
        if (*(long *)(IVar4 + 0xc0) != 0) {
          return IVar4;
        }
      }
      param_1 = 0;
    }
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    param_1 = 0;
    __os_log_internal(0,_md_log_log,0x10,"Invalid inputs");
  }
  return param_1;
}

