// rea decompile_all
// name: -[NSDictionary(InstallCoordinationAdditions)_IX_writeToURL:format:options:error:]
// address: 0x424d7
// body: available
// range: 0x424d7-0x425db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __NSDictionary_InstallCoordinationAdditions__IX_writeToURL_format_options_error__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_40 = param_6;
  local_38 = param_5;
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  local_58 = 0;
  bVar7 = false;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSPropertyListSerialization,
                     "dataWithPropertyList:format:options:error:",param_1,param_4,0,&local_58);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(local_58);
  local_48 = uVar4;
  if (lVar6 == 0) {
    bVar8 = true;
  }
  else {
    local_50 = uVar5;
    cVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (lVar6,"writeToURL:options:error:",uVar4,local_38,&local_50);
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(local_50);
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    bVar8 = cVar3 == '\0';
    bVar7 = !bVar8;
    uVar5 = uVar4;
  }
  puVar2 = local_40;
  if ((local_40 != (undefined8 *)0x0) && (bVar8)) {
    uVar4 = _objc_retainAutorelease(uVar5);
    *puVar2 = uVar4;
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(local_48);
  return bVar7;
}

