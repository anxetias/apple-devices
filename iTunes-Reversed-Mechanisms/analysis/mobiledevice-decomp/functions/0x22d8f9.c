// rea decompile_all
// name: UARPSuperBinaryBackDeploy::generateTatsuMeasurements:relativeURL:
// address: 0x22d8f9
// body: available
// range: 0x22d8f9-0x22da75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char UARPSuperBinaryBackDeploy::generateTatsuMeasurements_relativeURL_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  uVar3 = (*(code *)PTR__objc_retain_004410a8)(param_4);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar4 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSMutableDictionary,"new");
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  cVar2 = (*(code *)puVar1)(param_1,"expandTLVs");
  if (cVar2 == '\x01') {
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"processTLVsForPersonalization");
  }
  ppuVar6 = &PTR_s_generateTatsuMeasurementsPerPayl_0048e0d0;
  if (*(char *)(param_1 + 0x78) == '\x01') {
    ppuVar6 = &PTR_s_generateTatsuMeasurements__0048e0c8;
  }
  (*(code *)puVar1)(param_1,*ppuVar6,param_3);
  uVar5 = (*(code *)puVar1)(uVar3,"lastPathComponent");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar4 = (*(code *)puVar1)(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____plist,uVar5);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(uVar3,"URLByDeletingLastPathComponent");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_004410a0)(uVar3);
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                    (&_OBJC_CLASS___NSURL,"fileURLWithPath:isDirectory:relativeToURL:",uVar4,0,uVar5
                    );
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  cVar2 = (*(code *)PTR__objc_msgSend_00441098)
                    (*(undefined8 *)(param_1 + 0x58),"writeToURL:error:",uVar3,0);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar4);
  return cVar2;
}

