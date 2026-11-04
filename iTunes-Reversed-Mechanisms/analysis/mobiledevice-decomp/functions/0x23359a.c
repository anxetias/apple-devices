// rea decompile_all
// name: UARPTLVPersonalizationFTABPayloadBackDeploy::setTLVs:
// address: 0x23359a
// body: available
// range: 0x23359a-0x233709 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x233704 to 0x60ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void UARPTLVPersonalizationFTABPayloadBackDeploy::setTLVs_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar5 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  uVar5 = _objc_retainAutorelease(uVar5);
  puVar1 = PTR__objc_msgSend_00441098;
  lVar6 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"bytes");
  lVar7 = (*(code *)puVar1)(uVar5,"length");
  lVar2 = _tlvs;
  if (lVar7 != 0) {
    uVar11 = 0;
    do {
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"length");
      if (uVar8 < uVar11 + 4) break;
      uVar3 = _uarpNtohl(*(undefined4 *)(lVar6 + uVar11));
      uVar10 = uVar11 + 8;
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"length");
      if (uVar8 < uVar10) break;
      uVar4 = _uarpNtohl(*(undefined4 *)(lVar6 + uVar11 + 4));
      uVar11 = uVar4 + uVar10;
      uVar8 = (*(code *)PTR__objc_msgSend_00441098)(uVar5,"length");
      if (uVar8 < uVar11) break;
      uVar9 = (*(code *)PTR__objc_msgSend_00441098)
                        (&objc::class_t::UARPMetaDataTLVBackDeploy,"tlvFromType:length:value:",uVar3
                         ,uVar4,uVar10 + lVar6);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
      puVar1 = PTR__objc_msgSend_00441098;
      if (lVar7 == 0) break;
      (*(code *)PTR__objc_msgSend_00441098)(*(undefined8 *)(param_1 + lVar2),"addObject:",lVar7);
      (*(code *)PTR__objc_release_004410a0)(lVar7);
      uVar8 = (*(code *)puVar1)(uVar5,"length");
    } while (uVar11 < uVar8);
  }
  (*(code *)PTR__objc_release_004410a0)(uVar5);
  return;
}

