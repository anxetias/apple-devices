// rea decompile_all
// name: __DLOperationProgressContextUpdate
// address: 0x3e0b
// body: available
// range: 0x3e0b-0x3ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __DLOperationProgressContextUpdate(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double local_18;
  
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    uVar1 = param_1[5];
    uVar4 = param_2 + param_1[4];
    if (uVar1 <= (ulong)(param_2 + param_1[4])) {
      uVar4 = uVar1;
    }
    auVar5._8_4_ = (int)(uVar4 >> 0x20);
    auVar5._0_8_ = uVar4;
    auVar5._12_4_ = 0x45300000;
    auVar6._8_4_ = (int)(uVar1 >> 0x20);
    auVar6._0_8_ = uVar1;
    auVar6._12_4_ = 0x45300000;
    param_1[4] = uVar4;
    local_18 = ((double)param_1[3] - (double)param_1[2]) *
               ((((double)CONCAT44(0x43300000,(int)uVar4) - 4503599627370496.0) +
                (auVar5._8_8_ - 1.9342813113834067e+25)) /
               (((double)CONCAT44(0x43300000,(int)uVar1) - 4503599627370496.0) +
               (auVar6._8_8_ - 1.9342813113834067e+25))) + (double)param_1[2];
    if (*(long *)(*param_1 + 0xa0) != 0) {
      _CFRelease();
      *(undefined8 *)(*param_1 + 0xa0) = 0;
    }
    uVar3 = _CFNumberCreate(0,0xd,&local_18);
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 0xa0) = uVar3;
    (**(code **)(*(long *)(lVar2 + 0x28) + 0x50))(lVar2,uVar3);
  }
  return;
}

