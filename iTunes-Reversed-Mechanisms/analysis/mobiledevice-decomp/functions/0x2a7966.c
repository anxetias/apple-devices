// rea decompile_all
// name: _Img4DecodeVerifyChainIM4C
// address: 0x2a7966
// body: available
// range: 0x2a7966-0x2a7af4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2a7af0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _Img4DecodeVerifyChainIM4C
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
              undefined8 *param_9,undefined8 param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 local_200 [264];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar1 = ___bzero(local_200,0x1c8);
  auVar4._0_4_ = -(uint)((int)((ulong)param_3 >> 0x20) == 0 && (int)param_3 == 0);
  auVar4._4_4_ = -(uint)((int)param_5 == 0 && (int)((ulong)param_5 >> 0x20) == 0);
  auVar4._8_4_ = -(uint)((int)((ulong)param_6 >> 0x20) == 0 && (int)param_6 == 0);
  auVar4._12_4_ = -(uint)((int)param_7 == 0 && (int)((ulong)param_7 >> 0x20) == 0);
  iVar2 = movmskps(uVar1,auVar4);
  iVar3 = 6;
  if ((iVar2 == 0) && (param_8 != 0)) {
    if ((param_9 != (undefined8 *)0x0) && (param_4 != 0)) {
      iVar2 = _Img4DecodeInitManifestCommon(param_3,param_4,1,local_200,0x494d3443);
      iVar3 = -1;
      if (iVar2 == 0) {
        iVar2 = (*(code *)*param_9)(local_f8,local_f0,local_88,*(undefined8 *)param_9[4],param_9);
        if (iVar2 == 0) {
          iVar2 = (*(code *)param_9[2])
                            (param_1,param_2,local_e8,local_e0,local_88,*(undefined8 *)param_9[4],
                             param_9,param_10);
          if (iVar2 == 0) {
            iVar3 = _DERImg4DecodeCertificatePropertiesAndPubKey
                              (local_f8,local_f0,param_7,param_8,param_5,param_6);
            iVar3 = -(uint)(iVar3 != 0);
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

