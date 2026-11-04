// rea decompile_all
// name: UARPSuperBinaryPayloadBackDeploy::queryTatsuSigningServer:ssoOnly:error:
// address: 0x2353d9
// body: available
// range: 0x2353d9-0x2354a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

char UARPSuperBinaryPayloadBackDeploy::queryTatsuSigningServer_ssoOnly_error_
               (ID param_1,SEL param_2,ID param_3,char param_4,ID *param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  if (lVar2 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (&_OBJC_CLASS___NSURL,"URLWithString:",&cf_https___gs_apple_com_443);
    lVar2 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  if (param_4 == '\x01') {
    uVar3 = _UARPPersonalizationTSSRequestWithSigningServerSSO();
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  else {
    uVar3 = _UARPPersonalizationTSSRequestWithSigningServer(*(undefined8 *)(param_1 + 0x28),lVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_00441098)
                      (lVar4,"objectForKeyedSubscript:",*(undefined8 *)(param_1 + 0x30));
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    (*(code *)PTR__objc_release_004410a0)(uVar3);
  }
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(lVar4);
  (*(code *)puVar1)(lVar2);
  return lVar4 != 0;
}

