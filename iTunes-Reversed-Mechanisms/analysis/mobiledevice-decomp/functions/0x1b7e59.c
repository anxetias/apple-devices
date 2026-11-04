// rea decompile_all
// name: __DERDecodeLength
// address: 0x1b7e59
// body: available
// range: 0x1b7e59-0x1b7f06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b7f02 to 0x2a3669 __DERDecodeLength.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __DERDecodeLength(byte *param_1,int param_2,uint *param_3,int *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_1 == (byte *)0x0) {
    __DERDecodeLength_cold_3();
  }
  else if (param_3 != (uint *)0x0) {
    if (param_4 != (int *)0x0) {
      uVar2 = 4;
      if (param_2 != 0) {
        bVar1 = *param_1;
        uVar6 = (uint)bVar1;
        uVar4 = param_2 - 1;
        if ((char)bVar1 < '\0') {
          uVar5 = uVar6 & 0x7f;
          bVar8 = uVar4 < uVar5;
          uVar4 = uVar4 - uVar5;
          if (bVar8) {
            return 4;
          }
          if ((bVar1 & 0x7f) == 0) {
            uVar6 = 0;
          }
          else {
            lVar3 = 0;
            uVar7 = 0;
            uVar6 = 0;
            bVar1 = 0;
            do {
              uVar6 = (uint)param_1[lVar3 + 1] | uVar6 << 8;
              if (((bool)(uVar6 != 0 | bVar1)) && (uVar7 = uVar7 + 8, 0x20 < uVar7)) {
                return 6;
              }
              lVar3 = lVar3 + 1;
              bVar1 = uVar6 != 0 | bVar1;
            } while (uVar5 != (uint)lVar3);
          }
        }
        *param_3 = uVar6;
        *param_4 = param_2 - uVar4;
        uVar2 = 0;
      }
      return uVar2;
    }
    goto LAB_001b7f02;
  }
  __DERDecodeLength_cold_2();
LAB_001b7f02:
                    /* WARNING: Subroutine does not return */
  __DERDecodeLength_cold_1();
}

