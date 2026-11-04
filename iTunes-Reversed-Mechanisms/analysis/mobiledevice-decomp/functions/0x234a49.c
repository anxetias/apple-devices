// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::expandTLVs
// address: 0x234a49
// body: available
// range: 0x234a49-0x234bb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char UARPSuperBinaryPayloadBackDeploy::expandTLVs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar1 = PTR__objc_msgSend_00441098;
  lVar4 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x90),"bytes");
  lVar5 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x90),"length");
  if (lVar5 != 0) {
    uVar9 = 0;
    do {
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x90),"length");
      if (uVar6 < uVar9 + 4) break;
      uVar2 = _uarpNtohl(*(undefined4 *)(lVar4 + uVar9));
      uVar8 = uVar9 + 8;
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x90),"length");
      if (uVar6 < uVar8) break;
      uVar3 = _uarpNtohl(*(undefined4 *)(lVar4 + uVar9 + 4));
      uVar9 = uVar3 + uVar8;
      uVar6 = (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 0x90),"length");
      if (uVar6 < uVar9) break;
      uVar7 = (*(code *)PTR__objc_msgSend_00441098)
                        (&objc::class_t::UARPMetaDataTLVBackDeploy,"tlvFromType:length:value:",uVar2
                         ,uVar3,uVar8 + lVar4);
      lVar5 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar5 == 0) break;
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + 8),"addObject:",lVar5);
      (*(code *)PTR__objc_release_004410a0)(lVar5);
      uVar6 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x90),"length");
    } while (uVar9 < uVar6);
  }
  (*(code *)PTR__objc_msgSend_00441098)(param_1,"processTLVsForPersonalization");
  return '\x01';
}

