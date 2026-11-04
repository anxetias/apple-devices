// rea decompile_all
// name: __DERDecodeTag
// address: 0x1b7d57
// body: available
// range: 0x1b7d57-0x1b7e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b7e54 to 0x2a35c4 __DERDecodeTag.cold.1 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
__DERDecodeTag(byte *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5,int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 == (byte *)0x0) {
    __DERDecodeTag_cold_5();
LAB_001b7e45:
    __DERDecodeTag_cold_4();
LAB_001b7e4a:
    __DERDecodeTag_cold_3();
  }
  else {
    if (param_3 == (uint *)0x0) goto LAB_001b7e45;
    if (param_4 == (uint *)0x0) goto LAB_001b7e4a;
    if (param_5 != (uint *)0x0) {
      if (param_6 != (int *)0x0) {
        uVar4 = 3;
        if (param_2 != 0) {
          bVar2 = *param_1;
          *param_3 = (uint)(bVar2 >> 6);
          if ((~bVar2 & 0x1f) == 0) {
            *param_5 = (uint)(*param_1 >> 5 & 1);
            uVar6 = 0;
            lVar5 = 1;
            uVar7 = 0;
            bVar2 = 0;
            do {
              if (param_2 == (int)lVar5) {
                return 3;
              }
              pbVar1 = param_1 + lVar5;
              uVar6 = *pbVar1 & 0x7f | uVar6 << 7;
              if (((bool)(bVar2 | uVar6 != 0)) && (uVar7 = uVar7 + 7, 0x20 < uVar7)) {
                return 6;
              }
              lVar5 = lVar5 + 1;
              bVar2 = bVar2 | uVar6 != 0;
            } while ((char)*pbVar1 < '\0');
            *param_4 = uVar6;
            iVar3 = param_2 - (int)lVar5;
          }
          else {
            *param_4 = *param_1 & 0x1f;
            *param_5 = *param_1 >> 5 & 1;
            iVar3 = param_2 + -1;
          }
          *param_6 = param_2 - iVar3;
          uVar4 = 0;
        }
        return uVar4;
      }
      goto LAB_001b7e54;
    }
  }
  __DERDecodeTag_cold_2();
LAB_001b7e54:
                    /* WARNING: Subroutine does not return */
  __DERDecodeTag_cold_1();
}

