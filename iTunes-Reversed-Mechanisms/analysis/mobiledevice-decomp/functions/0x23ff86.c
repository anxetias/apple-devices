// rea decompile_all
// name: UARPAssetVersionBackDeploy::compare:
// address: 0x23ff86
// body: available
// range: 0x23ff86-0x2400f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

long_long UARPAssetVersionBackDeploy::compare_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long_long lVar5;
  
  uVar2 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar1 = PTR__objc_msgSend_00441098;
  uVar3 = (*(code *)PTR__objc_msgSend_00441098)(param_1,"majorVersion");
  uVar4 = (*(code *)puVar1)(uVar2,"majorVersion");
  if (uVar4 <= uVar3) {
    uVar3 = (*(code *)puVar1)(param_1,"majorVersion");
    uVar4 = (*(code *)puVar1)(uVar2,"majorVersion");
    lVar5 = 1;
    if (uVar4 < uVar3) goto LAB_0023fff4;
    uVar3 = (*(code *)puVar1)(param_1,"minorVersion");
    uVar4 = (*(code *)puVar1)(uVar2,"minorVersion");
    if (uVar4 <= uVar3) {
      uVar3 = (*(code *)puVar1)(param_1,"minorVersion");
      uVar4 = (*(code *)puVar1)(uVar2,"minorVersion");
      if (uVar4 < uVar3) goto LAB_0023fff4;
      uVar3 = (*(code *)puVar1)(param_1,"releaseVersion");
      uVar4 = (*(code *)puVar1)(uVar2,"releaseVersion");
      if (uVar4 <= uVar3) {
        uVar3 = (*(code *)puVar1)(param_1,"releaseVersion");
        uVar4 = (*(code *)puVar1)(uVar2,"releaseVersion");
        if (uVar3 <= uVar4) {
          uVar3 = (*(code *)puVar1)(param_1,"buildVersion");
          uVar4 = (*(code *)puVar1)(uVar2,"buildVersion");
          lVar5 = 0xffffffffffffffff;
          if (uVar4 <= uVar3) {
            uVar3 = (*(code *)puVar1)(param_1,"buildVersion");
            uVar4 = (*(code *)puVar1)(uVar2,"buildVersion");
            lVar5 = (long_long)(uVar4 < uVar3);
          }
        }
        goto LAB_0023fff4;
      }
    }
  }
  lVar5 = 0xffffffffffffffff;
LAB_0023fff4:
  (*(code *)PTR__objc_release_004410a0)(uVar2);
  return lVar5;
}

