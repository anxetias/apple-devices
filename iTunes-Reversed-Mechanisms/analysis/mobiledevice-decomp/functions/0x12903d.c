// rea decompile_all
// name: _mount_callback
// address: 0x12903d
// body: available
// range: 0x12903d-0x129224 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x129208 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _mount_callback(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  puVar1 = PTR__objc_msgSend_00441098;
  if (param_1 == 0) {
    _mount_callback_previousPercentComplete = 0;
    return;
  }
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"objectForKeyedSubscript:",&cf_Status);
  uVar4 = (*(code *)puVar1)(param_1,"objectForKeyedSubscript:",&cf_NumBytes);
  uVar5 = (*(code *)puVar1)(param_1,"objectForKeyedSubscript:",&cf_TotalBytes);
  uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
  cVar2 = (*(code *)puVar1)(uVar4,"isKindOfClass:",uVar6);
  if (cVar2 != '\0') {
    uVar6 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,"class");
    cVar2 = (*(code *)puVar1)(uVar5,"isKindOfClass:",uVar6);
    if (cVar2 != '\0') {
      fVar11 = (float)(*(code *)puVar1)(uVar4);
      fVar12 = (float)(*(code *)puVar1)(uVar5,"floatValue");
      lVar7 = (*(code *)puVar1)((fVar11 / fVar12) * 100.0,&_OBJC_CLASS___NSNumber,"numberWithFloat:"
                               );
      goto LAB_0012913e;
    }
  }
  lVar7 = 0;
LAB_0012913e:
  lVar8 = (*(code *)puVar1)(_mount_callback_previousPercentComplete,"integerValue");
  lVar9 = (*(code *)puVar1)(lVar7,"integerValue");
  if (lVar8 != lVar9) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar6 = _md_log_log;
    if (lVar7 == 0) {
      lVar7 = 0;
      __os_log_internal(0,_md_log_log,1,"%@",uVar3);
    }
    else {
      uVar10 = (*(code *)PTR__objc_msgSend_00441098)(lVar7,"integerValue");
      __os_log_internal(0,uVar6,1,"%@: %ld (%@/%@)",uVar3,uVar10,uVar4,uVar5);
    }
  }
  _mount_callback_previousPercentComplete = lVar7;
  _CFRelease(param_1);
  return;
}

