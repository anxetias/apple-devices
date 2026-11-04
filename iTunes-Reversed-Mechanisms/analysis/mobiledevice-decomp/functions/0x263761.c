// rea decompile_all
// name: _ccec_make_pub_from_priv_ws
// address: 0x263761
// body: available
// range: 0x263761-0x263896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccec_make_pub_from_priv_ws
          (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *param_6 = param_2;
  lVar3 = *param_2;
  uVar6 = (**(code **)(param_1 + 0x18))(param_1,lVar3 * 3);
  iVar5 = _ccec_validate_scalar(param_2,param_4);
  if (iVar5 == 0) {
    if (param_5 == 0) {
      uStack_60 = _ccec_projectify_ws(param_1,param_2,uVar6,param_2 + *param_2 * 3 + 4,param_3);
    }
    else {
      uStack_60 = _ccec_validate_point_and_projectify_ws(param_1,param_2,uVar6,param_5,param_3);
    }
    if ((int)uStack_60 == 0) {
      puVar1 = param_6 + 2;
      iVar5 = _ccec_mult_blinded_ws(param_1,param_2,puVar1,param_4,uVar6,param_3);
      if (iVar5 == 0) {
        cVar4 = _ccec_is_point_projective_ws(param_1,param_2,puVar1);
        if (cVar4 == '\0') {
          uStack_60 = 0xffffffffffffffed;
        }
        else {
          iVar5 = _ccec_affinify_ws(param_1,param_2,puVar1,puVar1);
          if (iVar5 == 0) {
            _ccn_seti(lVar3,puVar1 + *(long *)*param_6 * 2,1);
            uStack_60 = 0;
          }
          else {
            uStack_60 = 0xffffffffffffffef;
          }
        }
      }
      else {
        uStack_60 = 0xfffffffffffffff0;
      }
    }
  }
  else {
    uStack_60 = 0xffffffffffffffea;
  }
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return uStack_60;
}

